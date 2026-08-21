
/* fairygui::GLabel::~GLabel() */

void __thiscall fairygui::GLabel::~GLabel(GLabel *this)

{
  GComponent::~GComponent((GComponent *)this);
  operator_delete(this);
  return;
}

