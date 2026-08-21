
/* non-virtual thunk to cocos2d::ui::CheckBox::~CheckBox() */

void __thiscall cocos2d::ui::CheckBox::~CheckBox(CheckBox *this)

{
  CheckBox *pCVar1;
  code *pcVar2;
  AbstractCheckButton *this_00;
  
  this_00 = (AbstractCheckButton *)(this + -0x318);
  *(undefined ***)this_00 = &PTR__CheckBox_016dcf30;
  pCVar1 = *(CheckBox **)(this + 0x2e8);
  *(undefined ***)this = &PTR__CheckBox_016dd608;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  if (this + 0x2c8 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (CheckBox *)0x0) goto LAB_00dc49e8;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dc49e8:
  AbstractCheckButton::~AbstractCheckButton(this_00);
  operator_delete(this_00);
  return;
}

