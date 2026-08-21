
/* cocos2d::PULineEmitter::notifyRescaled(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PULineEmitter::notifyRescaled(PULineEmitter *this,Vec3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  PUEmitter::notifyRescaled((PUEmitter *)this,param_1);
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar3 = fVar1 * *(float *)(this + 0x1fc);
  fVar5 = fVar2 * *(float *)(this + 0x200);
  fVar6 = fVar4 * *(float *)(this + 0x204);
  *(float *)(this + 0x22c) = fVar3;
  *(float *)(this + 0x230) = fVar5;
  *(float *)(this + 0x234) = fVar6;
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar4 * fVar4);
  *(float *)(this + 0x238) = fVar1 * *(float *)(this + 0x214);
  *(float *)(this + 0x23c) = fVar1 * *(float *)(this + 0x218);
  *(float *)(this + 0x240) = fVar1 * (*(float *)(this + 0x21c) - *(float *)(this + 0x218));
  *(float *)(this + 0x244) = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
  return;
}

