#include "umimodel_type.h"

const std::string &umi::model::type::name() const {
  return name_;
}

umi::model::type &umi::model::type::name(const std::string &name_) {
  this->name_ = name_;
  return *this;
}

const std::string &umi::model::type::basic_type() const {
  return basic_type_;
}

umi::model::type &umi::model::type::basic_type(const std::string &basic_type_) {
  this->basic_type_ = basic_type_;
  return *this;
}
