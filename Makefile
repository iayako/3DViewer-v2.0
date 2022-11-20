CXX = g++
STD = -std=c++17
CFLAG = -Wall -Werror -Wextra
GTEST_LIBS := -lgtest

all: install run

install: compile
	@mkdir 3DViewer
	@cp 3DViewer_v2 3DViewer/3DViewer_v2
	@rm 3DViewer_v2

compile: clean build
	cd build ; qmake 3DViewer_v2.pro; make
	cp ./build/3DViewer_v2.app/Contents/MacOS/3DViewer_v2 .

build:
	mkdir build
	cp -R Sources/ ./build/

run:
	./3DViewer/3DViewer_v2

uninstall:
	rm -rf 3DViewer build

dvi:
	makeinfo --html foo.texi
	open foo/index.html

dist: clean
	mkdir 3Dviewer_v2
	cp -R Sources Objects foo.texi Makefile 3Dviewer_v2/
	tar -cvzf 3Dviewer_v2.tar.gz 3Dviewer_v2/
	rm -rf 3Dviewer_v2/

tests: clean
	$(CXX) $(STD) $(CFLAG) -o tests.out -I Sources/model/. test/test.cpp Sources/model/model.cpp -lgcov $(GTEST_LIBS) --coverage
	@./tests.out

gcov_report: tests
	@lcov --directory . -t "viewer_tests" -o gcovreport.info -c  --no-external
	@lcov -q --remove gcovreport.info "`pwd`/tests/*" -o gcovreport.info --rc lcov_function_coverage=0
	@genhtml -o $@ gcovreport.info
	@echo opening report `pwd`/gcov_report/index.html
	@open ./gcov_report/index.html

clean:
	@rm -rf build 3DViewer *.gcda *.gcno gcov_report/ tests.out.dSYM/
	@rm -rf tests.out app/.qmake.stash app/3DViewer_v2.pro.user
	@rm -rf .clang-format
	@rm -rf *.info *.gz 3DViewer_v2 foo/

style:
	cp ../materials/linters/.clang-format .
	cd Sources ; clang-format -n controller/*.h controller/*.cpp model/*.h model/*.cpp view/*.h view/*.cpp main.cpp

valgrind: tests
	valgrind --tool=memcheck --leak-check=full --track-origins=yes ./tests.out

leaks: tests
	leaks -atExit -- ./tests.out

cppcheck:
	cd Sources ; cppcheck --suppress=missingIncludeSystem --suppress=unknownMacro --std=c++17 --language=c++ controller/*.h controller/*.cpp model/*.h model/*.cpp view/*.h