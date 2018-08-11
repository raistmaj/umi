#ifndef UMIMODEL_UMIMODEL_TYPE_H
#define UMIMODEL_UMIMODEL_TYPE_H

#include <string>

namespace umi::model {

  /**
   * Defines a type in the model.
   * */
  class type {
  public:
    const std::string &name() const;

    type &name(const std::string &name_);

    const std::string &basic_type() const;

    type &basic_type(const std::string &basic_type_);

  private:
    std::string basic_type_;
    std::string name_;
  };
}

#endif //UMIMODEL_UMIMODEL_TYPE_H
