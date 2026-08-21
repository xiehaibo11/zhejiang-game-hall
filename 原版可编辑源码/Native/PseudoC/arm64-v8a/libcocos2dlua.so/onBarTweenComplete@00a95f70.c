
/* fairygui::ScrollPane::onBarTweenComplete(fairygui::GTweener*) */

void __thiscall fairygui::ScrollPane::onBarTweenComplete(ScrollPane *this,GTweener *param_1)

{
  GObject *this_00;
  
  this_00 = *(GObject **)(param_1 + 0x88);
  GObject::setAlpha(this_00,1.0);
  GObject::setVisible(this_00,false);
  return;
}

