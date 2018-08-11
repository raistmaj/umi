#include "umimodel_request.h"

const std::string &umi::model::request::name() const {
  return this->name_;
}

umi::model::request &umi::model::request::name(const std::string &name_) {
  this->name_ = name_;
  return *this;
}