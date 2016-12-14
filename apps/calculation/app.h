#ifndef CALCULATION_APP_H
#define CALCULATION_APP_H

#include "edit_expression_controller.h"
#include "local_context.h"
#include "history_controller.h"
#include "../expression_text_field_delegate.h"
#include <escher.h>

namespace Calculation {

class App : public ::App, public ExpressionTextFieldDelegate {
public:
  App(Container * container, Context * context);
  Context * localContext() override;
private:
  LocalContext m_localContext;
  CalculationStore m_calculationStore;
  HistoryController m_historyController;
  EditExpressionController m_editExpressionController;
};

}

#endif
