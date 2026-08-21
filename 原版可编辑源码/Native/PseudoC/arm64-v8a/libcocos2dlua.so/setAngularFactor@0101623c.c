
/* cocos2d::Physics3DRigidBody::setAngularFactor(cocos2d::Vec3 const&) */

void cocos2d::Physics3DRigidBody::setAngularFactor(Vec3 *param_1)

{
  Vec3 *in_x1;
  long lVar1;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  lVar1 = *(long *)(param_1 + 0x78);
  uVar2 = convertVec3TobtVector3(in_x1);
  *(undefined4 *)(lVar1 + 0x250) = uVar2;
  *(undefined4 *)(lVar1 + 0x254) = in_s1;
  *(undefined4 *)(lVar1 + 600) = in_s2;
  *(int *)(lVar1 + 0x120) = *(int *)(lVar1 + 0x120) + 1;
  *(undefined4 *)(lVar1 + 0x25c) = in_s3;
  return;
}

