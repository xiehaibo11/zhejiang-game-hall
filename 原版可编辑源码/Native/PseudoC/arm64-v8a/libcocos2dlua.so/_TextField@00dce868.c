
/* cocos2d::ui::TextField::~TextField() */

void __thiscall cocos2d::ui::TextField::~TextField(TextField *this)

{
  TextField *pTVar1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 00dce3c4 with catch @ 00dce868 */
                    /* catch() { ... } // from try @ 00dce36c with catch @ 00dce878 */
  *(undefined8 *)(this + 0x508) = 0;
                    /* catch() { ... } // from try @ 00dce260 with catch @ 00dce888 */
  *(undefined ***)this = &PTR__TextField_016e1640;
  *(undefined ***)(this + 0x318) = &PTR__TextField_016e1ce0;
                    /* catch() { ... } // from try @ 00dce208 with catch @ 00dce898 */
  *(undefined8 *)(this + 0x518) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  if (((byte)this[0x558] & 1) != 0) {
                    /* catch() { ... } // from try @ 00dce0fc with catch @ 00dce8a8 */
    operator_delete(*(void **)(this + 0x568));
  }
  pTVar1 = *(TextField **)(this + 0x540);
                    /* catch() { ... } // from try @ 00dce0a4 with catch @ 00dce8b8 */
  if (this + 0x520 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TextField *)0x0) goto LAB_00dce8d8;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dcdf98 with catch @ 00dce8c8 */
  }
  (*pcVar2)();
LAB_00dce8d8:
                    /* catch() { ... } // from try @ 00dcdf40 with catch @ 00dce8d8 */
  Widget::~Widget((Widget *)this);
  return;
}

