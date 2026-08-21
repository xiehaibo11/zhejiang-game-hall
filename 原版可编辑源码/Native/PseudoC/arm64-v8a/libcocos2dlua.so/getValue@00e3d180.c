
/* cocos2d::PUDynamicAttributeRandom::getValue(float) */

float cocos2d::PUDynamicAttributeRandom::getValue(float param_1)

{
  long in_x0;
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(in_x0 + 0x2c);
  fVar6 = *(float *)(in_x0 + 0x30);
  lVar1 = RandomHelper::getEngine();
  lVar2 = *(long *)(lVar1 + 0x1380);
  uVar3 = (lVar2 + 1U) % 0x270;
  uVar4 = *(ulong *)(lVar1 + uVar3 * 8);
  *(ulong *)(lVar1 + lVar2 * 8) =
       (uVar4 & 1) * 0x9908b0df ^ *(ulong *)(lVar1 + ((lVar2 + 0x18dU) % 0x270) * 8) ^
       (uVar4 & 0x7ffffffe | *(ulong *)(lVar1 + lVar2 * 8) & 0xffffffff80000000) >> 1;
  uVar4 = *(ulong *)(lVar1 + *(long *)(lVar1 + 0x1380) * 8);
  *(ulong *)(lVar1 + 0x1380) = uVar3;
  uVar4 = uVar4 >> 0xb & 0xffffffff ^ uVar4;
  uVar4 = ((uint)uVar4 & 0x13a58ad) << 7 ^ uVar4;
  uVar4 = (ulong)(uint)((int)uVar4 << 0xf) & 0xefc60000 ^ uVar4;
  return fVar5 + (fVar6 - fVar5) * (float)(uVar4 ^ uVar4 >> 0x12) * 2.3283064e-10;
}

