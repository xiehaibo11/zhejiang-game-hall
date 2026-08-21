
/* cocos2d::Plane::initPlane(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::Plane::initPlane(Plane *this,Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)*(undefined8 *)param_2;
  fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  local_48 = CONCAT44(fVar4 - (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      fVar2 - (float)*(undefined8 *)param_1);
  local_40 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_58 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar4,
                      (float)*(undefined8 *)param_3 - fVar2);
  local_50 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  Vec3::cross((Vec3 *)&local_48,(Vec3 *)&local_58,(Vec3 *)this);
  Vec3::normalize((Vec3 *)this);
  uVar3 = Vec3::dot((Vec3 *)this,param_1);
  *(undefined4 *)(this + 0xc) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

