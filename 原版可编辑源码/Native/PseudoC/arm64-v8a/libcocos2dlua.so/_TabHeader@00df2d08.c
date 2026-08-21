
/* non-virtual thunk to cocos2d::ui::TabHeader::~TabHeader() */

void __thiscall cocos2d::ui::TabHeader::~TabHeader(TabHeader *this)

{
  TabHeader *pTVar1;
  code *pcVar2;
  AbstractCheckButton *this_00;
  
  this_00 = (AbstractCheckButton *)(this + -0x318);
  *(undefined ***)this_00 = &PTR__TabHeader_016e6c50;
  *(undefined ***)this = &PTR__TabHeader_016e7328;
  pTVar1 = *(TabHeader **)(this + 0x2e8);
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  if (this + 0x2c8 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
LAB_00df2d68:
    (*pcVar2)();
  }
  else if (pTVar1 != (TabHeader *)0x0) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
    goto LAB_00df2d68;
  }
  pTVar1 = *(TabHeader **)(this + 0x2e8);
  if (this + 0x2c8 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TabHeader *)0x0) goto LAB_00df2d94;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00df2d94:
  AbstractCheckButton::~AbstractCheckButton(this_00);
  operator_delete(this_00);
  return;
}

