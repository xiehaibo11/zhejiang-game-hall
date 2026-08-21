
/* covariant return thunk to cocos2d::EaseQuadraticActionOut::clone() const */

long __thiscall cocos2d::EaseQuadraticActionOut::clone(EaseQuadraticActionOut *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed01f4 with catch @ 00ed0184
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed0224 with catch @ 00ed0184
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed0254 with catch @ 00ed0184
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed027c with catch @ 00ed0184
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed02a8 with catch @ 00ed0184
                        */
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2);
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

