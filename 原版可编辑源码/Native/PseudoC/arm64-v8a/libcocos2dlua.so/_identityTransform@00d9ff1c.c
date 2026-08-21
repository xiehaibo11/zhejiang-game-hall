
/* dragonBones::CCSlot::_identityTransform() */

void __thiscall dragonBones::CCSlot::_identityTransform(CCSlot *this)

{
  int iVar1;
  
  if (((DAT_01787ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01787ea0), iVar1 != 0)) {
    cocos2d::Mat4::Mat4((Mat4 *)&DAT_01787e60);
    __cxa_atexit(cocos2d::Mat4::~Mat4,&DAT_01787e60,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01787ea0);
                    /* try { // try from 00d9ffc8 to 00e9ffe3 has its CatchHandler @ 00da05fc */
  }
                    /* try { // try from 00d9ff44 to 00e9ff53 has its CatchHandler @ 00da05e0 */
  DAT_01787e60 = 0x3f800000;
  DAT_01787e70 = 0xbf80000080000000;
  DAT_01787e90 = 0;
                    /* WARNING: Could not recover jumptable at 0x00d9ff70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 400) + 0x408))();
  return;
}

