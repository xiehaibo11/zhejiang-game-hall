
/* cocos2d::PUEmitter::setParticleDirection(cocos2d::Vec3 const&) */

void cocos2d::PUEmitter::setParticleDirection(Vec3 *param_1)

{
  undefined8 *in_x1;
  undefined8 uVar1;
  Vec3 *this;
  undefined4 uVar2;
  undefined4 in_s1;
  undefined4 in_s2;
  
  uVar2 = *(undefined4 *)(in_x1 + 1);
  this = param_1 + 0xa8;
  *(undefined8 *)this = *in_x1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  uVar1 = *in_x1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(in_x1 + 1);
  *(undefined8 *)(param_1 + 0xb4) = uVar1;
  Vec3::normalize(this);
  uVar2 = PUUtil::perpendicular(this);
  *(undefined4 *)(param_1 + 0x184) = uVar2;
  *(undefined4 *)(param_1 + 0x188) = in_s1;
  *(undefined4 *)(param_1 + 0x18c) = in_s2;
  Vec3::normalize(param_1 + 0x184);
  return;
}

