
/* fairygui::GController::~GController() */

void __thiscall fairygui::GController::~GController(GController *this)

{
  ~GController(this);
  operator_delete(this);
  return;
}

