
/* cocos2d::PUEmitter::initParticleDirection(cocos2d::PUParticle3D*) */

void cocos2d::PUEmitter::initParticleDirection(PUParticle3D *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long in_x1;
  float fVar3;
  float fVar4;
  float in_s2;
  
  fVar3 = (float)PUDynamicAttributeHelper::calculate
                           ((PUDynamicAttributeHelper *)(param_1 + 0x194),
                            *(PUDynamicAttribute **)(param_1 + 0xf8),
                            *(float *)(*(long *)(param_1 + 0x28) + 0x440),0.0);
  fVar4 = 0.017453292;
  fVar3 = fVar3 * 0.017453292;
  iVar2 = PUDynamicAttribute::getType(*(PUDynamicAttribute **)(param_1 + 0xf8));
  if (iVar2 == 0) {
    iVar2 = rand();
    fVar4 = 4.656613e-10;
    fVar3 = fVar3 * (float)iVar2 * 4.656613e-10;
  }
  if (fVar3 == 0.0) {
    uVar1 = *(undefined4 *)(param_1 + 0xb0);
    *(undefined8 *)(in_x1 + 0xac) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined4 *)(in_x1 + 0xb4) = uVar1;
    fVar3 = *(float *)(in_x1 + 0xac);
    fVar4 = *(float *)(in_x1 + 0xb0);
    in_s2 = *(float *)(in_x1 + 0xb4);
  }
  else {
    fVar3 = (float)PUUtil::randomDeviant((Vec3 *)(param_1 + 0xa8),fVar3,(Vec3 *)(param_1 + 0x184));
    *(float *)(in_x1 + 0xac) = fVar3;
    *(float *)(in_x1 + 0xb0) = fVar4;
    *(float *)(in_x1 + 0xb4) = in_s2;
  }
  *(undefined8 *)(in_x1 + 0xb8) = *(undefined8 *)(in_x1 + 0xac);
  *(undefined4 *)(in_x1 + 0xc0) = *(undefined4 *)(in_x1 + 0xb4);
  *(float *)(in_x1 + 0xc4) = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + in_s2 * in_s2);
  return;
}

