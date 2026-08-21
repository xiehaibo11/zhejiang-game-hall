
/* fairygui::GScrollBar::setScrollPane(fairygui::ScrollPane*, bool) */

void __thiscall
fairygui::GScrollBar::setScrollPane(GScrollBar *this,ScrollPane *param_1,bool param_2)

{
  *(ScrollPane **)(this + 0x2a8) = param_1;
  this[0x2b0] = (GScrollBar)param_2;
  return;
}

