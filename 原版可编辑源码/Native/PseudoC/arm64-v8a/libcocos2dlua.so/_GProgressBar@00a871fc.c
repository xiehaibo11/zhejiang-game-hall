
/* fairygui::GProgressBar::~GProgressBar() */

void __thiscall fairygui::GProgressBar::~GProgressBar(GProgressBar *this)

{
  GComponent::~GComponent((GComponent *)this);
  operator_delete(this);
  return;
}

