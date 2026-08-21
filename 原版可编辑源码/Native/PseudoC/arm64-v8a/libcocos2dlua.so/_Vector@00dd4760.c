
/* cocos2d::Vector<cocos2d::ui::RichElement*>::~Vector() */

void __thiscall
cocos2d::Vector<cocos2d::ui::RichElement*>::~Vector(Vector<cocos2d::ui::RichElement*> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 00dd30c0 with catch @ 00dd4764 */
                    /* catch() { ... } // from try @ 00dd30a8 with catch @ 00dd4768 */
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
                    /* catch() { ... } // from try @ 00dd32e4 with catch @ 00dd4778 */
  if (puVar2 != puVar1) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

