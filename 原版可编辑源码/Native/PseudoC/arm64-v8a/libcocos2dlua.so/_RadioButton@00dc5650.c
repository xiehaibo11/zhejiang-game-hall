
/* non-virtual thunk to cocos2d::ui::RadioButton::~RadioButton() */

void __thiscall cocos2d::ui::RadioButton::~RadioButton(RadioButton *this)

{
  RadioButton *pRVar1;
  code *pcVar2;
  AbstractCheckButton *this_00;
  
                    /* try { // try from 00dc5654 to 00ec5663 has its CatchHandler @ 00dc5b28 */
  this_00 = (AbstractCheckButton *)(this + -0x318);
  *(undefined ***)this_00 = &PTR__RadioButton_016dd648;
  pRVar1 = *(RadioButton **)(this + 0x2c8);
  *(undefined ***)this = &PTR__RadioButton_016ddd20;
  *(undefined8 *)(this + 0x2c8) = 0;
  if (this + 0x2a8 == pRVar1) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
LAB_00dc56ac:
    (*pcVar2)();
  }
  else if (pRVar1 != (RadioButton *)0x0) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
    goto LAB_00dc56ac;
  }
  pRVar1 = *(RadioButton **)(this + 0x2c8);
  *(undefined8 *)(this + 0x2d8) = 0;
  if (this + 0x2a8 == pRVar1) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
  }
  else {
    if (pRVar1 == (RadioButton *)0x0) goto LAB_00dc56dc;
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dc56dc:
  AbstractCheckButton::~AbstractCheckButton(this_00);
  operator_delete(this_00);
  return;
}

