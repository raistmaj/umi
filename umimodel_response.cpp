#include "umimodel_response.h"

const std::string &umi::model::response::name() const {
  return name_;
}

umi::model::response &umi::model::response::name(const std::string &name_) {
  this->name_ = name_;
  return *this;
}
