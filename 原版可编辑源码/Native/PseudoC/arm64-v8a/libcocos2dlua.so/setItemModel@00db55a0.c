
/* cocos2d::ui::ListView::setItemModel(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::ListView::setItemModel(ListView *this,Widget *param_1)

{
  if (param_1 != (Widget *)0x0) {
    if (*(Ref **)(this + 0x8b0) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x8b0));
      *(undefined8 *)(this + 0x8b0) = 0;
    }
    *(Widget **)(this + 0x8b0) = param_1;
    Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

