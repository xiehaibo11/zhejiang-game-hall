
/* cocos2d::Vector<cocos2d::network::HttpResponse*>::~Vector() */

void __thiscall
cocos2d::Vector<cocos2d::network::HttpResponse*>::~Vector
          (Vector<cocos2d::network::HttpResponse*> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
                    /* catch() { ... } // from try @ 009ab2d0 with catch @ 009ab610 */
  if (puVar1 != *(undefined8 **)(this + 8)) {
    do {
                    /* catch() { ... } // from try @ 009ab2bc with catch @ 009ab618 */
                    /* catch() { ... } // from try @ 009ab294 with catch @ 009ab61c */
      Ref::release((Ref *)*puVar1);
                    /* catch() { ... } // from try @ 009ab278 with catch @ 009ab624 */
      puVar1 = puVar1 + 1;
                    /* catch() { ... } // from try @ 009ab29c with catch @ 009ab628 */
    } while (puVar1 != *(undefined8 **)(this + 8));
    puVar1 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar1;
                    /* catch() { ... } // from try @ 009ab26c with catch @ 009ab640
                       catch() { ... } // from try @ 009ab588 with catch @ 009ab640 */
    operator_delete(puVar1);
    return;
  }
  return;
}

