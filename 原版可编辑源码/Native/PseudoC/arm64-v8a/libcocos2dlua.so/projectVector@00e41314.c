
/* cocos2d::PUPlane::projectVector(cocos2d::Vec3 const&) const */

undefined4 __thiscall cocos2d::PUPlane::projectVector(PUPlane *this,Vec3 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_a8 [4];
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4((Mat4 *)&local_98);
  fVar3 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar2 = (float)*(undefined8 *)this;
  fStack_94 = -0.0 - fVar2 * fVar3;
  local_88 = CONCAT44(1.0 - fVar3 * fVar3,fStack_94);
  local_98 = 1.0 - fVar2 * fVar2;
  fVar4 = *(float *)(this + 8);
  local_90 = -(fVar2 * fVar4);
  local_80 = -(fVar3 * fVar4);
  local_78 = CONCAT44(local_80,local_90);
  local_70 = 1.0 - fVar4 * fVar4;
  Vec3::Vec3((Vec3 *)local_a8);
  Mat4::transformVector((Mat4 *)&local_98,param_1,(Vec3 *)local_a8);
  Mat4::~Mat4((Mat4 *)&local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00e413d8 to 00f41547 has its CatchHandler @ 00e413d8
                       catch() { ... } // from try @ 00e413d8 with catch @ 00e413d8
                       catch() { ... } // from try @ 00e41550 with catch @ 00e413d8 */
    return local_a8[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

