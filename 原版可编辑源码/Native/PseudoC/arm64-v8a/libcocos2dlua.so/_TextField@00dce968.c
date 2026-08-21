
/* cocos2d::ui::TextField::~TextField() */

void __thiscall cocos2d::ui::TextField::~TextField(TextField *this)

{
  TextField *pTVar1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 00dcde4c with catch @ 00dce968 */
                    /* catch() { ... } // from try @ 00dcddc4 with catch @ 00dce97c */
                    /* catch() { ... } // from try @ 00dce414 with catch @ 00dce980 */
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined ***)this = &PTR__TextField_016e1640;
  *(undefined ***)(this + 0x318) = &PTR__TextField_016e1ce0;
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  if (((byte)this[0x558] & 1) != 0) {
    operator_delete(*(void **)(this + 0x568));
  }
  pTVar1 = *(TextField **)(this + 0x540);
  if (this + 0x520 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TextField *)0x0) goto LAB_00dce9d8;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dce9d8:
  Widget::~Widget((Widget *)this);
                    /* catch() { ... } // from try @ 00dce2b0 with catch @ 00dce9e0 */
  operator_delete(this);
  return;
}

