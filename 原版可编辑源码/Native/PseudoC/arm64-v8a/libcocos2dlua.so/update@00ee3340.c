
/* cocos2d::TintTo::update(float) */

void __thiscall cocos2d::TintTo::update(TintTo *this,float param_1)

{
  long lVar1;
  long *plVar2;
  Color3B aCStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00ee3354 to 00fe335b has its CatchHandler @ 00ee33e8 */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ee335c to 00fe3403 has its CatchHandler @ 00ee3324 */
  plVar2 = *(long **)(this + 0x38);
  if (plVar2 != (long *)0x0) {
    Color3B::Color3B(aCStack_30,
                     (uchar)(int)((float)(int)((uint)(byte)this[0x56] - (uint)(byte)this[0x59]) *
                                  param_1 + (float)(uint)(byte)this[0x59]),
                     (uchar)(int)((float)(int)((uint)(byte)this[0x57] - (uint)(byte)this[0x5a]) *
                                  param_1 + (float)(uint)(byte)this[0x5a]),
                     (uchar)(int)((float)(int)((uint)(byte)this[0x58] - (uint)(byte)this[0x5b]) *
                                  param_1 + (float)(uint)(byte)this[0x5b]));
    (**(code **)(*plVar2 + 0x4c0))(plVar2,aCStack_30);
  }
                    /* catch() { ... } // from try @ 00ee3354 with catch @ 00ee33e8 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

