cmake_minimum_required(VERSION 3.12)
project(umimodel)

set(CMAKE_CXX_STANDARD 17)

add_library(umimodel SHARED umimodel.h umimodel_type.h umimodel_model.h umimodel_operation.h umimodel_request.h umimodel_response.h umimodel_parser.h umimodel_builder.h umimodel_model.cpp umimodel_operation.cpp umimodel_response.cpp umimodel_request.cpp umimodel_type.cpp umimodel_parser.cpp)