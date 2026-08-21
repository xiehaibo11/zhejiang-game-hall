
/* non-virtual thunk to cocos2d::ui::TextField::~TextField() */

void __thiscall cocos2d::ui::TextField::~TextField(TextField *this)

{
  TextField *pTVar1;
  code *pcVar2;
  Widget *this_00;
  
  this_00 = (Widget *)(this + -0x318);
  *(undefined ***)this_00 = &PTR__TextField_016e1640;
  *(undefined ***)this = &PTR__TextField_016e1ce0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  if (((byte)this[0x240] & 1) != 0) {
    operator_delete(*(void **)(this + 0x250));
  }
  pTVar1 = *(TextField **)(this + 0x228);
                    /* catch() { ... } // from try @ 00dce14c with catch @ 00dcea40 */
  if (this + 0x208 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TextField *)0x0) goto LAB_00dcea60;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dcea60:
  Widget::~Widget(this_00);
  operator_delete(this_00);
  return;
}

