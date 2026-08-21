
/* cocos2d::Director::convertToUI(cocos2d::Vec2 const&) */

void __thiscall cocos2d::Director::convertToUI(Director *this,Vec2 *param_1)

{
  long lVar1;
  Size *pSVar2;
  Size local_c0 [8];
  Vec4 aVStack_b8 [16];
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  Mat4 aMStack_98 [64];
  long local_58;
  
                    /* try { // try from 00f99ec4 to 01099ec7 has its CatchHandler @ 00f99edc */
                    /* try { // try from 00f99ec8 to 01099eef has its CatchHandler @ 00f99e7c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f99ec4 with catch @ 00f99edc */
  Mat4::Mat4(aMStack_98);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a05c with catch @ 00f99ef0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f9a1f0 with catch @ 00f99ef0
                        */
  FUN_00f99d34(aMStack_98);
  Vec4::Vec4((Vec4 *)&local_a8);
  Vec4::Vec4(aVStack_b8,*(float *)param_1,*(float *)(param_1 + 4),0.0,1.0);
  Mat4::transformVector(aMStack_98,aVStack_b8,(Vec4 *)&local_a8);
  local_a0 = local_a0 / fStack_9c;
  local_a8 = CONCAT44((float)((ulong)local_a8 >> 0x20) / fStack_9c,(float)local_a8 / fStack_9c);
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x108) + 200))();
  Size::Size(local_c0,pSVar2);
  Vec4::~Vec4(aVStack_b8);
  Vec4::~Vec4((Vec4 *)&local_a8);
  Mat4::~Mat4(aMStack_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00f99fb0 to 01099fb7 has its CatchHandler @ 00f9a0ac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

