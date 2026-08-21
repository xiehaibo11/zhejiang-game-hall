
/* cocos2d::LayerColor::updateColor() */

void __thiscall cocos2d::LayerColor::updateColor(LayerColor *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)NEON_ucvtf((uint)(byte)this[0x21a]);
  fVar2 = (float)NEON_ucvtf((uint)(byte)this[0x21b]);
  fVar3 = (float)NEON_ucvtf((uint)(byte)this[0x21c]);
  fVar4 = (float)NEON_ucvtf((uint)(byte)this[0x218]);
  fVar1 = fVar1 / 255.0;
  fVar2 = fVar2 / 255.0;
  fVar3 = fVar3 / 255.0;
  fVar4 = fVar4 / 255.0;
  *(float *)(this + 0x350) = fVar1;
  *(float *)(this + 0x354) = fVar2;
  *(float *)(this + 0x358) = fVar3;
  *(float *)(this + 0x35c) = fVar4;
  *(float *)(this + 0x360) = fVar1;
  *(float *)(this + 0x364) = fVar2;
  *(float *)(this + 0x368) = fVar3;
  *(float *)(this + 0x36c) = fVar4;
  *(float *)(this + 0x370) = fVar1;
  *(float *)(this + 0x374) = fVar2;
  *(float *)(this + 0x378) = fVar3;
  *(float *)(this + 0x37c) = fVar4;
  *(float *)(this + 0x380) = fVar1;
  *(float *)(this + 900) = fVar2;
  *(float *)(this + 0x388) = fVar3;
  *(float *)(this + 0x38c) = fVar4;
  return;
}

