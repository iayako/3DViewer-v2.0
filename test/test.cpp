#include <gtest/gtest.h>

#include "model.h"

const double kEpsilon_ = 1e-5;

void CheckVectors(std::vector<std::vector<float>> res, std::vector<std::vector<float>> etalon) {
  for (size_t i = 0; i < res.size(); ++i) {
    for (size_t j = 0; j < res[i].size(); ++j) {
      ASSERT_NEAR(res[i][j], etalon[i][j], kEpsilon_);
    }
  }
}

TEST(ParsingTests, mass_size) {
  s21::MFacade test;
  test.ReadFile("./test/cube.obj");
  EXPECT_EQ(test.GetVert().size(), 8);
  EXPECT_EQ(test.GetPoly().size(), 12);
}

TEST(TranformationTests, moving) {
  s21::MFacade test;
  test.ReadFile("./test/cube.obj");
  test.MoveXYZ(0, 17);
  test.MoveXYZ(1, 17);
  test.MoveXYZ(2, 17);
  test.TransferObject();
  std::vector<std::vector<float>> res = test.GetVert();
  std::vector<std::vector<float>> etalon{ {17, 17, 17}, {17, 17, 18}, {17, 18, 17}, {17, 18, 18},
        {18, 17, 17}, {18, 17, 18}, {18, 18, 17}, {18, 18, 18} };
  ASSERT_EQ(res, etalon);
}

TEST(transformation_tests, rotation) {
  s21::MFacade test;
  test.ReadFile("./test/cube.obj");
  test.RotateXYZ(0, 120);
  test.RotateXYZ(1, 120);
  test.RotateXYZ(2, 120);
  test.TransferObject();
  std::vector<std::vector<float>> res = test.GetVert();
  res.shrink_to_fit();
  std::vector<std::vector<float>> etalon{
    {0,          0,        0},         {0.966506, -0.0580127, 0.25},
        {-0.0580127, 0.899519, 0.433013},  {0.908494, 0.841506,   0.683013},
        {0.25,       0.433013, -0.866025}, {1.21651,  0.375,      -0.616025},
        {0.191987,   1.33253,  -0.433013}, {1.15849,  1.27452,    -0.183013}};
  CheckVectors(res, etalon);
}

TEST(transformation_tests, scale) {
  s21::MFacade test;
  test.ReadFile("./test/cube.obj");
  test.ScaleXYZ(0.5);
  test.TransferObject();
  std::vector<std::vector<float>> res = test.GetVert();
  std::vector<std::vector<float>> etalon{ {0, 0,   0},   {0,   0,   0.5}, {0,   0.5,
                             0}, {0,   0.5, 0.5}, {0.5, 0,   0},   {0.5,
                             0, 0.5}, {0.5, 0.5, 0},   {0.5, 0.5, 0.5} };
  ASSERT_EQ(res, etalon);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
