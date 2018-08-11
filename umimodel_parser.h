#ifndef UMIMODEL_UMIMODEL_PARSER_H
#define UMIMODEL_UMIMODEL_PARSER_H


#include <string>
#include "umimodel_model.h"

namespace umi::model {
  class parser {
  public:
    parser();

    virtual ~parser();

    umi::model::model parse_from_location(const std::string &folder);
  };
}

#endif //UMIMODEL_UMIMODEL_PARSER_H
