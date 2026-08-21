
/* fairygui::GSlider::~GSlider() */

void __thiscall fairygui::GSlider::~GSlider(GSlider *this)

{
  GComponent::~GComponent((GComponent *)this);
  operator_delete(this);
  return;
}

