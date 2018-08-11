#include "umimodel_parser.h"

umi::model::parser::parser() {}

umi::model::parser::~parser() {}

umi::model::model umi::model::parser::parse_from_location(const std::string &folder) {

  std::vector<umi::model::operation> operations;
  std::vector<umi::model::type> types;

  return umi::model::model {operations, types};
}