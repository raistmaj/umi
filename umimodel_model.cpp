#include "umimodel_model.h"


umi::model::model::model(
  const std::vector<umi::model::operation> &operations_,
  const std::vector<umi::model::type> &types_)
  : operations_(operations_),
    types_(types_) {
}

const std::vector<umi::model::operation> &umi::model::model::operations() const {
  return operations_;
}

umi::model::model &umi::model::model::operations(const std::vector<umi::model::operation> &operations_) {
  this->operations_ = operations_;
  return *this;
}

const std::vector<umi::model::type> &umi::model::model::types() const {
  return types_;
}

umi::model::model &umi::model::model::types(const std::vector<umi::model::type> &types_) {
  this->types_ = types_;
  return *this;
}

