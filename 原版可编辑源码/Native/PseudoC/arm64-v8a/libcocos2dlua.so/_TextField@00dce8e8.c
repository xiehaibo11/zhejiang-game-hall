
/* non-virtual thunk to cocos2d::ui::TextField::~TextField() */

void __thiscall cocos2d::ui::TextField::~TextField(TextField *this)

{
  TextField *pTVar1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 00dcde34 with catch @ 00dce8e8 */
                    /* catch() { ... } // from try @ 00dcdddc with catch @ 00dce8f8 */
                    /* catch() { ... } // from try @ 00dce3dc with catch @ 00dce908 */
  *(undefined ***)(this + -0x318) = &PTR__TextField_016e1640;
  *(undefined ***)this = &PTR__TextField_016e1ce0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
                    /* catch() { ... } // from try @ 00dce354 with catch @ 00dce91c */
  *(undefined8 *)(this + 0x1f0) = 0;
                    /* catch() { ... } // from try @ 00dce278 with catch @ 00dce920 */
  if (((byte)this[0x240] & 1) != 0) {
    operator_delete(*(void **)(this + 0x250));
  }
  pTVar1 = *(TextField **)(this + 0x228);
                    /* catch() { ... } // from try @ 00dce1f0 with catch @ 00dce934 */
                    /* catch() { ... } // from try @ 00dce114 with catch @ 00dce938 */
  if (this + 0x208 == pTVar1) {
                    /* catch() { ... } // from try @ 00dce08c with catch @ 00dce94c */
                    /* catch() { ... } // from try @ 00dcdfb0 with catch @ 00dce950 */
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TextField *)0x0) goto LAB_00dce958;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dce958:
                    /* catch() { ... } // from try @ 00dcdf28 with catch @ 00dce964 */
  Widget::~Widget((Widget *)(this + -0x318));
  return;
}

