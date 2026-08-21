
/* cocos2d::Director::convertToGL(cocos2d::Vec2 const&) */

float __thiscall cocos2d::Director::convertToGL(Director *this,Vec2 *param_1)

{
  long lVar1;
  Size *pSVar2;
  float local_100 [3];
  float local_f4;
  Vec4 aVStack_f0 [16];
  float local_e0;
  float fStack_dc;
  Mat4 aMStack_d8 [64];
  Mat4 aMStack_98 [56];
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4(aMStack_98);
  FUN_00f99d34(aMStack_98);
  Mat4::getInversed();
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x108) + 200))();
  Size::Size((Size *)&local_e0,pSVar2);
                    /* try { // try from 00f99c3c to 01099c4b has its CatchHandler @ 00f99cd0 */
                    /* try { // try from 00f99c58 to 01099c5f has its CatchHandler @ 00f99ccc */
                    /* try { // try from 00f99c60 to 01099ce3 has its CatchHandler @ 00f99bb8 */
  Vec4::Vec4(aVStack_f0,(*(float *)param_1 + *(float *)param_1) / local_e0 + -1.0,
             1.0 - (*(float *)(param_1 + 4) + *(float *)(param_1 + 4)) / fStack_dc,
             local_60 / fStack_5c,1.0);
  Vec4::Vec4((Vec4 *)local_100);
  Mat4::transformVector(aMStack_d8,aVStack_f0,(Vec4 *)local_100);
  Vec4::~Vec4((Vec4 *)local_100);
  Vec4::~Vec4(aVStack_f0);
  Mat4::~Mat4(aMStack_d8);
  Mat4::~Mat4(aMStack_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f99c58 with catch @ 00f99ccc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f99c3c with catch @ 00f99cd0
                        */
    return local_100[0] * (1.0 / local_f4);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

