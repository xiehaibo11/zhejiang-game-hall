
/* cocos2d::LayerRadialGradient::setStartColor(cocos2d::Color4B const&) */

void __thiscall
cocos2d::LayerRadialGradient::setStartColor(LayerRadialGradient *this,Color4B *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)param_1;
  uVar2 = NEON_ushl(CONCAT44(uVar1,uVar1),0xfffffff0fffffff8,4);
  uVar3 = NEON_ucvtf(uVar2 & 0xff000000ff,4);
  *(uint *)(this + 0x31d) = uVar1;
  *(float *)(this + 0x324) = (float)(uVar1 & 0xff) / 255.0;
  *(ulong *)(this + 0x328) = CONCAT44((float)((ulong)uVar3 >> 0x20) / 255.0,(float)uVar3 / 255.0);
  *(float *)(this + 0x330) = (float)(uVar1 >> 0x18) / 255.0;
  return;
}

