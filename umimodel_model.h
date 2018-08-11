#ifndef UMIMODEL_UMIMODEL_MODEL_H
#define UMIMODEL_UMIMODEL_MODEL_H

#include <vector>
#include "umimodel_operation.h"
#include "umimodel_type.h"

namespace umi::model {

  /**
   * Defines a basic model.
   * */
  class model {
  public:

    model(const model &model_) = default;

    model(model &&model_) = default;

    model(
      const std::vector<umi::model::operation> &operations_,
      const std::vector<umi::model::type> &types_);

    model &operator=(const model &model_) = default;

    model &operator=(model &&model_) = default;

    const std::vector<umi::model::operation> &operations() const;

    model &operations(const std::vector<umi::model::operation> &operations_);

    const std::vector<umi::model::type> &types() const;

    model &types(const std::vector<umi::model::type> &types_);

  private:
    std::vector<umi::model::operation> operations_;
    std::vector<umi::model::type> types_;
    // exceptions
  };
}

#endif //UMIMODEL_UMIMODEL_MODEL_H
