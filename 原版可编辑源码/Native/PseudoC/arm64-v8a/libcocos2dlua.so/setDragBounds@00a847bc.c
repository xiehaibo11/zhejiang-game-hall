
/* fairygui::GObject::setDragBounds(cocos2d::Rect const&) */

void __thiscall fairygui::GObject::setDragBounds(GObject *this,Rect *param_1)

{
  Rect *this_00;
  
  this_00 = *(Rect **)(this + 0x1b0);
  if (this_00 == (Rect *)0x0) {
    this_00 = operator_new(0x10);
    cocos2d::Rect::Rect(this_00);
    *(Rect **)(this + 0x1b0) = this_00;
  }
  cocos2d::Rect::operator=(this_00,(Rect *)param_1);
  return;
}

