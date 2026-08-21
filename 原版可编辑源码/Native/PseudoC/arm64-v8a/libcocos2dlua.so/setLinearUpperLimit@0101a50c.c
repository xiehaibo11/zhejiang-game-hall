
/* cocos2d::Physics3D6DofConstraint::setLinearUpperLimit(cocos2d::Vec3 const&) */

void cocos2d::Physics3D6DofConstraint::setLinearUpperLimit(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  uVar2 = convertVec3TobtVector3(in_x1);
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(lVar1 + 0x2d0) = uVar2;
  *(undefined4 *)(lVar1 + 0x2d4) = in_s1;
  *(undefined4 *)(lVar1 + 0x2d8) = in_s2;
  *(undefined4 *)(lVar1 + 0x2dc) = in_s3;
  return;
}

