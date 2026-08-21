
/* cocos2d::PUGeometryRotator::initParticleForEmission(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUGeometryRotator::initParticleForEmission(PUGeometryRotator *this,PUParticle3D *param_1)

{
  PUGeometryRotator PVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (this[0xdc] == (PUGeometryRotator)0x0) {
    iVar2 = rand();
    *(float *)(param_1 + 0x14) = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
    iVar2 = rand();
    *(float *)(param_1 + 0x18) = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
    iVar2 = rand();
    *(float *)(param_1 + 0x1c) = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
    iVar2 = rand();
    *(float *)(param_1 + 0x20) = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
    Quaternion::normalize((Quaternion *)(param_1 + 0x14));
    iVar2 = rand();
    *(float *)(param_1 + 0xd0) = (float)iVar2 * 4.656613e-10;
    iVar2 = rand();
    *(float *)(param_1 + 0xd4) = (float)iVar2 * 4.656613e-10;
    iVar2 = rand();
    *(float *)(param_1 + 0xd8) = (float)iVar2 * 4.656613e-10;
    Vec3::normalize((Vec3 *)(param_1 + 0xd0));
    PVar1 = this[0xb0];
  }
  else {
    PVar1 = this[0xb0];
  }
  if (PVar1 != (PUGeometryRotator)0x0) {
    uVar3 = PUDynamicAttributeHelper::calculate
                      ((PUDynamicAttributeHelper *)(this + 0xdd),
                       *(PUDynamicAttribute **)(this + 0xb8),*(float *)(param_1 + 0x134),0.0);
    *(undefined4 *)(param_1 + 0x100) = uVar3;
  }
  return;
}

