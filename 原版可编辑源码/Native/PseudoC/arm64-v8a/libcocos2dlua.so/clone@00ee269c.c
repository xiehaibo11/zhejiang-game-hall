
/* covariant return thunk to cocos2d::Blink::clone() const */

long __thiscall cocos2d::Blink::clone(Blink *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create(*(float *)(this + 0x24),*(int *)(this + 0x30));
                    /* catch() { ... } // from try @ 00ee26dc with catch @ 00ee26b0 */
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

