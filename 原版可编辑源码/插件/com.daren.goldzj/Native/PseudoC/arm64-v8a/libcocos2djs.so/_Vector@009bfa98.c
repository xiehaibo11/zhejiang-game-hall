
/* cocos2d::Vector<cocos2d::renderer::Technique*>::~Vector() */

void __thiscall
cocos2d::Vector<cocos2d::renderer::Technique*>::~Vector(Vector<cocos2d::renderer::Technique*> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != *(undefined8 **)(this + 8)) {
    do {
                    /* catch() { ... } // from try @ 009bf8d8 with catch @ 009bfab8 */
      Ref::release((Ref *)*puVar1);
                    /* catch() { ... } // from try @ 009bf8cc with catch @ 009bfabc */
                    /* catch() { ... } // from try @ 009bf8ac with catch @ 009bfac0 */
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 8));
    puVar1 = *(undefined8 **)this;
  }
                    /* catch() { ... } // from try @ 009bf8e4 with catch @ 009bfad0 */
  *(undefined8 **)(this + 8) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}

