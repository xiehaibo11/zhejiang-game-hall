
/* cocos2d::Quaternion::createFromAxisAngle(cocos2d::Vec3 const&, float, cocos2d::Quaternion*) */

void cocos2d::Quaternion::createFromAxisAngle(Vec3 *param_1,float param_2,Quaternion *param_3)

{
  long lVar1;
  float fVar2;
  Vec3 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = sinf(param_2 * 0.5);
  Vec3::Vec3(local_48,param_1);
  Vec3::normalize(local_48);
  *(ulong *)param_3 = CONCAT44(local_48._4_4_ * fVar2,local_48._0_4_ * fVar2);
  *(float *)(param_3 + 8) = fVar2 * local_40;
  fVar2 = cosf(param_2 * 0.5);
  *(float *)(param_3 + 0xc) = fVar2;
  Vec3::~Vec3(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

