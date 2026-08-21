
/* cocos2d::Frustum::createPlane(cocos2d::Camera const*) */

void __thiscall cocos2d::Frustum::createPlane(Frustum *this,Camera *param_1)

{
  long lVar1;
  float *pfVar2;
  Vec3 local_58 [8];
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pfVar2 = (float *)Camera::getViewProjectionMatrix(param_1);
  Vec3::Vec3(local_58,pfVar2[3] + *pfVar2,pfVar2[7] + pfVar2[4],pfVar2[0xb] + pfVar2[8]);
  local_48 = CONCAT44(-local_58._4_4_,-local_58._0_4_);
  local_40 = -local_50;
  Plane::initPlane((Plane *)this,(Vec3 *)&local_48,pfVar2[0xf] + pfVar2[0xc]);
  Vec3::Vec3(local_58,pfVar2[3] - *pfVar2,pfVar2[7] - pfVar2[4],pfVar2[0xb] - pfVar2[8]);
  local_48 = CONCAT44(-local_58._4_4_,-local_58._0_4_);
  local_40 = -local_50;
  Plane::initPlane((Plane *)(this + 0x10),(Vec3 *)&local_48,pfVar2[0xf] - pfVar2[0xc]);
  Vec3::Vec3(local_58,pfVar2[3] + pfVar2[1],pfVar2[7] + pfVar2[5],pfVar2[0xb] + pfVar2[9]);
  local_48 = CONCAT44(-local_58._4_4_,-local_58._0_4_);
  local_40 = -local_50;
  Plane::initPlane((Plane *)(this + 0x20),(Vec3 *)&local_48,pfVar2[0xf] + pfVar2[0xd]);
  Vec3::Vec3(local_58,pfVar2[3] - pfVar2[1],pfVar2[7] - pfVar2[5],pfVar2[0xb] - pfVar2[9]);
  local_48 = CONCAT44(-local_58._4_4_,-local_58._0_4_);
  local_40 = -local_50;
  Plane::initPlane((Plane *)(this + 0x30),(Vec3 *)&local_48,pfVar2[0xf] - pfVar2[0xd]);
  Vec3::Vec3(local_58,pfVar2[3] + pfVar2[2],pfVar2[7] + pfVar2[6],pfVar2[0xb] + pfVar2[10]);
  local_48 = CONCAT44(-local_58._4_4_,-local_58._0_4_);
  local_40 = -local_50;
  Plane::initPlane((Plane *)(this + 0x40),(Vec3 *)&local_48,pfVar2[0xf] + pfVar2[0xe]);
  Vec3::Vec3(local_58,pfVar2[3] - pfVar2[2],pfVar2[7] - pfVar2[6],pfVar2[0xb] - pfVar2[10]);
  local_48 = CONCAT44(-local_58._4_4_,-local_58._0_4_);
  local_40 = -local_50;
  Plane::initPlane((Plane *)(this + 0x50),(Vec3 *)&local_48,pfVar2[0xf] - pfVar2[0xe]);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

