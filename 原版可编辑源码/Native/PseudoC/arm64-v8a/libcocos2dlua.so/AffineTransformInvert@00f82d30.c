
/* cocos2d::AffineTransformInvert(cocos2d::AffineTransform const&) */

void __thiscall cocos2d::AffineTransformInvert(cocos2d *this,AffineTransform *param_1)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(this + 8);
  fVar2 = *(float *)(this + 0xc);
  fVar3 = *(float *)this;
  fVar4 = *(float *)(this + 4);
  fVar5 = *(float *)(this + 0x10);
  fVar6 = *(float *)(this + 0x14);
  fVar7 = 1.0 / (fVar3 * fVar2 - fVar4 * fVar1);
  *in_x8 = fVar2 * fVar7;
  in_x8[1] = fVar4 * -fVar7;
  in_x8[2] = fVar1 * -fVar7;
  in_x8[3] = fVar3 * fVar7;
  in_x8[4] = fVar7 * (fVar1 * fVar6 - fVar2 * fVar5);
  in_x8[5] = fVar7 * (fVar4 * fVar5 - fVar3 * fVar6);
  return;
}

