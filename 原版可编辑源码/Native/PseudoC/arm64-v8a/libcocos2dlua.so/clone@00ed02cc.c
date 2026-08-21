
/* covariant return thunk to cocos2d::EaseQuadraticActionInOut::clone() const */

long __thiscall cocos2d::EaseQuadraticActionInOut::clone(EaseQuadraticActionInOut *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed024c with catch @ 00ed02e4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed0274 with catch @ 00ed02e4
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed029c with catch @ 00ed02e4
                        */
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed01ec with catch @ 00ed02e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed0218 with catch @ 00ed02e8
                        */
    lVar3 = create(pAVar2);
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

