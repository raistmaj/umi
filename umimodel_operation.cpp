#include "umimodel_operation.h"


const std::string &umi::model::operation::request() const {
  return request_;
}

umi::model::operation &umi::model::operation::request(const std::string &request_) {
  this->request_ = request_;
  return *this;
}

const std::string &umi::model::operation::response() const {
  return response_;
}

umi::model::operation &umi::model::operation::response(const std::string &response_) {
  this->response_ = response_;
  return *this;
}

const std::vector<std::string> &umi::model::operation::exceptions() const {
  return exceptions_;
}

umi::model::operation &umi::model::operation::exceptions(const std::vector<std::string> &exceptions_) {
  this->exceptions_ = exceptions_;
  return *this;
}