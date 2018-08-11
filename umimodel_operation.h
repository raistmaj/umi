#ifndef UMIMODEL_UMIMODEL_OPERATION_H
#define UMIMODEL_UMIMODEL_OPERATION_H


#include <string>
#include <vector>

namespace umi::model {
  class operation {
  public:
    const std::string &request() const;

    operation &request(const std::string &request_);

    const std::string &response() const;

    operation &response(const std::string &response_);

    const std::vector<std::string> &exceptions() const;

    operation &exceptions(const std::vector<std::string> &exceptions_);
  private:
    std::string request_;
    std::string response_;
    std::vector<std::string> exceptions_;
  };
}

#endif //UMIMODEL_UMIMODEL_OPERATION_H
