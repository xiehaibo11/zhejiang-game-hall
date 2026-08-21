
void FUN_00a9b284(long param_1)

{
  Transition *this;
  
  this = *(Transition **)(param_1 + 8);
  *(int *)(this + 100) = *(int *)(this + 100) + -1;
  fairygui::Transition::checkAllComplete(this);
  return;
}

