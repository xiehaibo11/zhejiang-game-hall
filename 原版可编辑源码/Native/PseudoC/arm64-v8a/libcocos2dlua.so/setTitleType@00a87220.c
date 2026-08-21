
/* fairygui::GProgressBar::setTitleType(fairygui::ProgressTitleType) */

void __thiscall fairygui::GProgressBar::setTitleType(GProgressBar *this,int param_2)

{
  if (*(int *)(this + 0x298) == param_2) {
    return;
  }
  *(int *)(this + 0x298) = param_2;
  update(this,*(double *)(this + 0x290));
  return;
}

