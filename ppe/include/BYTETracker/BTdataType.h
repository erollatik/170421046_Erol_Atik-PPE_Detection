#pragma once

#pragma once


//#include <cstddef>
//#include <vector>
//
//#include <Eigen/Core>
//#include <Eigen/Dense>
//typedef struct DetectBox {
//    DetectBox(float x1 = 0, float y1 = 0, float x2 = 0, float y2 = 0,
//        float confidence = 0, float classID = -1, float trackID = -1) {
//        this->x1 = x1;
//        this->y1 = y1;
//        this->x2 = x2;
//        this->y2 = y2;
//        this->confidence = confidence;
//        this->classID = classID;
//        this->trackID = trackID;
//    }
//    float x1, y1, x2, y2;
//    float confidence;
//    float classID;
//    float trackID;
//} DetectBox;
//
//const int k_feature_dim = 512;//feature dim
//
//const std::string  k_feature_model_path = "./feature.onnx";
//const std::string  k_detect_model_path = "./yolov5s.onnx";
//
//
//typedef Eigen::Matrix<float, 1, 4, Eigen::RowMajor> DETECTBOX;
//typedef Eigen::Matrix<float, -1, 4, Eigen::RowMajor> DETECTBOXSS;
//typedef Eigen::Matrix<float, 1, k_feature_dim, Eigen::RowMajor> FEATURE;
//typedef Eigen::Matrix<float, Eigen::Dynamic, k_feature_dim, Eigen::RowMajor> FEATURESS;
////typedef std::vector<FEATURE> FEATURESS;
//
////Kalmanfilter
////typedef Eigen::Matrix<float, 8, 8, Eigen::RowMajor> KAL_FILTER;
//typedef Eigen::Matrix<float, 1, 8, Eigen::RowMajor> KAL_MEAN;
//typedef Eigen::Matrix<float, 8, 8, Eigen::RowMajor> KAL_COVA;
//typedef Eigen::Matrix<float, 1, 4, Eigen::RowMajor> KAL_HMEAN;
//typedef Eigen::Matrix<float, 4, 4, Eigen::RowMajor> KAL_HCOVA;
//using KAL_DATA = std::pair<KAL_MEAN, KAL_COVA>;
//using KAL_HDATA = std::pair<KAL_HMEAN, KAL_HCOVA>;
//
////main
//using RESULT_DATA = std::pair<int, DETECTBOX>;
//
////tracker:
//using TRACKER_DATA = std::pair<int, FEATURESS>;
//using MATCH_DATA = std::pair<int, int>;
//typedef struct t {
//    std::vector<MATCH_DATA> matches;
//    std::vector<int> unmatched_tracks;
//    std::vector<int> unmatched_detections;
//}TRACHER_MATCHD;
//
////linear_assignment:
//typedef Eigen::Matrix<float, -1, -1, Eigen::RowMajor> DYNAMICM;
//
//
//
