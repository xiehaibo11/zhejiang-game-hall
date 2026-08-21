
/* fairygui::GRoot::hideWindowImmediately(fairygui::Window*) */

void __thiscall fairygui::GRoot::hideWindowImmediately(GRoot *this,Window *param_1)

{
  if (*(GComponent **)(param_1 + 0xa0) == (GComponent *)this) {
    GComponent::removeChild(*(GComponent **)(param_1 + 0xa0),(GObject *)param_1);
  }
  adjustModalLayer(this);
  return;
}

