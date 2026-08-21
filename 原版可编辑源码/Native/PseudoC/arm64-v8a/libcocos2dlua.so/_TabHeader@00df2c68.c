
/* cocos2d::ui::TabHeader::~TabHeader() */

void __thiscall cocos2d::ui::TabHeader::~TabHeader(TabHeader *this)

{
  TabHeader *pTVar1;
  code *pcVar2;
  
  *(undefined8 *)(this + 0x5c0) = 0;
  pTVar1 = *(TabHeader **)(this + 0x600);
  *(undefined ***)this = &PTR__TabHeader_016e6c50;
  *(undefined ***)(this + 0x318) = &PTR__TabHeader_016e7328;
  *(undefined8 *)(this + 0x5d0) = 0;
  *(undefined8 *)(this + 0x600) = 0;
  if (this + 0x5e0 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
LAB_00df2cc4:
    (*pcVar2)();
  }
  else if (pTVar1 != (TabHeader *)0x0) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
    goto LAB_00df2cc4;
  }
  pTVar1 = *(TabHeader **)(this + 0x600);
  if (this + 0x5e0 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TabHeader *)0x0) goto LAB_00df2cf0;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00df2cf0:
  AbstractCheckButton::~AbstractCheckButton((AbstractCheckButton *)this);
  operator_delete(this);
  return;
}

