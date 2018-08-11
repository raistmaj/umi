#ifndef UMIMODEL_UMIMODEL_RESPONSE_H
#define UMIMODEL_UMIMODEL_RESPONSE_H

#include <string>

namespace umi::model {
  class response {
  public:
    const std::string &name() const;

    response &name(const std::string &name_);
  private:
    std::string name_;
  };
}

#endif //UMIMODEL_UMIMODEL_RESPONSE_H
