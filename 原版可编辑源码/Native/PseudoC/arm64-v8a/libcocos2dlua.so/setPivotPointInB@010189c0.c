
/* cocos2d::Physics3DPointToPointConstraint::setPivotPointInB(cocos2d::Vec3 const&) */

void cocos2d::Physics3DPointToPointConstraint::setPivotPointInB(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  uVar2 = convertVec3TobtVector3(in_x1);
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(lVar1 + 0x154) = uVar2;
  *(undefined4 *)(lVar1 + 0x158) = in_s1;
  *(undefined4 *)(lVar1 + 0x15c) = in_s2;
  *(undefined4 *)(lVar1 + 0x160) = in_s3;
  return;
}

