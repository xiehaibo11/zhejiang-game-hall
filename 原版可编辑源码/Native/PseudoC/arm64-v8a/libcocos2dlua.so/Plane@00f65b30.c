
/* cocos2d::Plane::Plane(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3 const&) */

void __thiscall cocos2d::Plane::Plane(Plane *this,Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)this);
  fVar2 = (float)*(undefined8 *)param_2;
  fVar4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  local_58 = CONCAT44(fVar4 - (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      fVar2 - (float)*(undefined8 *)param_1);
  local_50 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_68 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar4,
                      (float)*(undefined8 *)param_3 - fVar2);
  local_60 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  Vec3::cross((Vec3 *)&local_58,(Vec3 *)&local_68,(Vec3 *)this);
  Vec3::normalize((Vec3 *)this);
  uVar3 = Vec3::dot((Vec3 *)this,param_1);
  *(undefined4 *)(this + 0xc) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

