
/* cocos2d::EaseQuinticActionOut::update(float) */

void __thiscall cocos2d::EaseQuinticActionOut::update(EaseQuinticActionOut *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::quintEaseOut(param_1);
                    /* catch() { ... } // from try @ 00ed0b88 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0bf4 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0c60 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0ccc with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0d38 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0da4 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0e10 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0e7c with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0ee8 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0f54 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed0fc0 with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed102c with catch @ 00ed09fc
                       catch() { ... } // from try @ 00ed1098 with catch @ 00ed09fc */
                    /* WARNING: Could not recover jumptable at 0x00ed0a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

