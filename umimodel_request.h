#ifndef UMIMODEL_UMIMODEL_REQUEST_H
#define UMIMODEL_UMIMODEL_REQUEST_H

#include <string>

namespace umi::model {
  class request {
  public:
    const std::string &name() const;

    request &name(const std::string &name_);

  private:
    std::string name_;
  };
}

#endif //UMIMODEL_UMIMODEL_REQUEST_H
