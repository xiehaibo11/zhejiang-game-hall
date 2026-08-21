
/* fairygui::GComboBox::handleControllerChanged(fairygui::GController*) */

void __thiscall fairygui::GComboBox::handleControllerChanged(GComboBox *this,GController *param_1)

{
  GComponent::handleControllerChanged((GComponent *)this,param_1);
  if (*(GController **)(this + 0x2a8) != param_1) {
    return;
  }
  setSelectedIndex(this,*(int *)(param_1 + 0x70));
  return;
}

