
/* cocos2d::Physics3DPointToPointConstraint::setPivotPointInA(cocos2d::Vec3 const&) */

void cocos2d::Physics3DPointToPointConstraint::setPivotPointInA(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  uVar2 = convertVec3TobtVector3(in_x1);
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(lVar1 + 0x144) = uVar2;
  *(undefined4 *)(lVar1 + 0x148) = in_s1;
  *(undefined4 *)(lVar1 + 0x14c) = in_s2;
  *(undefined4 *)(lVar1 + 0x150) = in_s3;
  return;
}

