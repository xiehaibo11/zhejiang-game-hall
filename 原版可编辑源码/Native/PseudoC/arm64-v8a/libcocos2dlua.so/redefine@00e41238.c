
/* cocos2d::PUPlane::redefine(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUPlane::redefine(PUPlane *this,Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)*(undefined8 *)param_1;
  fVar3 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_48 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) - fVar3,
                      (float)*(undefined8 *)param_2 - fVar2);
  local_40 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_58 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar3,
                      (float)*(undefined8 *)param_3 - fVar2);
  local_50 = *(float *)(param_3 + 8) - *(float *)(param_1 + 8);
  Vec3::cross((Vec3 *)&local_48,(Vec3 *)&local_58,(Vec3 *)this);
  Vec3::normalize((Vec3 *)this);
  fVar2 = (float)Vec3::dot((Vec3 *)this,param_1);
  *(float *)(this + 0xc) = -fVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

