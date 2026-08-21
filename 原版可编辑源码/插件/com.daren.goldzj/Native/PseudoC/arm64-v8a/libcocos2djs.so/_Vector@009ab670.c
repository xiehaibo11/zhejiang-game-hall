
/* cocos2d::Vector<cocos2d::network::HttpRequest*>::~Vector() */

void __thiscall
cocos2d::Vector<cocos2d::network::HttpRequest*>::~Vector
          (Vector<cocos2d::network::HttpRequest*> *this)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 009ab220 with catch @ 009ab678 */
                    /* catch() { ... } // from try @ 009ab214 with catch @ 009ab67c */
  puVar1 = *(undefined8 **)this;
                    /* catch() { ... } // from try @ 009ab1f4 with catch @ 009ab680 */
  if (puVar1 != *(undefined8 **)(this + 8)) {
    do {
                    /* catch() { ... } // from try @ 009ab22c with catch @ 009ab690
                       catch() { ... } // from try @ 009ab364 with catch @ 009ab690 */
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 8));
    puVar1 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}

