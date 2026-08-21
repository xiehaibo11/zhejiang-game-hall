
/* non-virtual thunk to cocos2d::ui::TabHeader::~TabHeader() */

void __thiscall cocos2d::ui::TabHeader::~TabHeader(TabHeader *this)

{
  TabHeader *pTVar1;
  code *pcVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df2afc with catch @ 00df2be4
                        */
  *(undefined ***)(this + -0x318) = &PTR__TabHeader_016e6c50;
  *(undefined ***)this = &PTR__TabHeader_016e7328;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df2a9c with catch @ 00df2bfc
                        */
  pTVar1 = *(TabHeader **)(this + 0x2e8);
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df293c with catch @ 00df2c10
                        */
  if (this + 0x2c8 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
LAB_00df2c2c:
    (*pcVar2)();
  }
  else if (pTVar1 != (TabHeader *)0x0) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
    goto LAB_00df2c2c;
  }
  pTVar1 = *(TabHeader **)(this + 0x2e8);
  if (this + 0x2c8 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TabHeader *)0x0) goto LAB_00df2c58;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00df2c58:
  AbstractCheckButton::~AbstractCheckButton((AbstractCheckButton *)(this + -0x318));
  return;
}

