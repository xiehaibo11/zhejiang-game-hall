
/* dragonBones::CCSlot::_updateColor() */

void __thiscall dragonBones::CCSlot::_updateColor(CCSlot *this)

{
  int iVar1;
  
                    /* try { // try from 00da00f8 to 00ea0113 has its CatchHandler @ 00da060c */
                    /* try { // try from 00da0118 to 00ea0127 has its CatchHandler @ 00da0608 */
  (**(code **)(**(long **)(this + 400) + 0x490))
            (*(long **)(this + 400),(int)(*(float *)(this + 0xa4) * 255.0));
  if (((DAT_01787eb0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01787eb0), iVar1 != 0)) {
    cocos2d::Color3B::Color3B((Color3B *)&DAT_01787ea8);
    __cxa_guard_release(&DAT_01787eb0);
  }
  DAT_01787ea8 = (undefined1)(int)(*(float *)(this + 0xa8) * 255.0);
  DAT_01787ea9 = (undefined1)(int)(*(float *)(this + 0xac) * 255.0);
  DAT_01787eaa = (undefined1)(int)(*(float *)(this + 0xb0) * 255.0);
                    /* WARNING: Could not recover jumptable at 0x00da0184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 400) + 0x4c0))();
  return;
}

