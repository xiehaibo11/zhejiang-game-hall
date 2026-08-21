
/* cocos2d::PUCircleEmitter::initParticleDirection(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUCircleEmitter::initParticleDirection(PUCircleEmitter *this,PUParticle3D *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  Vec3 aVStack_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  float local_8c;
  undefined8 local_88;
  undefined4 local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x1a5] == (PUCircleEmitter)0x0) {
    PUEmitter::initParticleDirection((PUParticle3D *)this);
  }
  else {
    local_8c = 0.0;
    PUEmitter::generateAngle((PUEmitter *)this,&local_8c);
    if (local_8c == 0.0) {
      Mat4::Mat4(aMStack_78);
      Mat4::createRotation((Quaternion *)(this + 0x218),aMStack_78);
      Vec3::Vec3((Vec3 *)&local_98,*(float *)(this + 0x20c),0.0,*(float *)(this + 0x210));
      Vec3::Vec3((Vec3 *)&local_88);
      Mat4::transformVector(aMStack_78,(Vec3 *)&local_98,(Vec3 *)&local_88);
                    /* try { // try from 00e34f90 to 00f34f97 has its CatchHandler @ 00e35078 */
                    /* try { // try from 00e34f98 to 00f350a7 has its CatchHandler @ 00e34d80 */
      *(undefined8 *)(param_1 + 0xac) = local_88;
      *(undefined4 *)(param_1 + 0xb4) = local_80;
    }
    else {
      Mat4::Mat4(aMStack_78);
      Mat4::createRotation((Quaternion *)(this + 0x218),aMStack_78);
      fVar4 = *(float *)(this + 0x210);
      uVar3 = 0;
      Vec3::Vec3(aVStack_a8,*(float *)(this + 0x20c),0.0,fVar4);
      Vec3::Vec3((Vec3 *)&local_88);
      Mat4::transformVector(aMStack_78,aVStack_a8,(Vec3 *)&local_88);
      local_98 = local_88;
      local_90 = local_80;
      uVar2 = PUUtil::randomDeviant((Vec3 *)&local_98,local_8c,(Vec3 *)(this + 0x184));
      *(undefined4 *)(param_1 + 0xac) = uVar2;
      *(undefined4 *)(param_1 + 0xb0) = uVar3;
      *(float *)(param_1 + 0xb4) = fVar4;
                    /* try { // try from 00e34f30 to 00f34f37 has its CatchHandler @ 00e35090 */
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xac);
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb4);
    }
    Mat4::~Mat4(aMStack_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

