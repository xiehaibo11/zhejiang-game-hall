
/* cocos2d::PUSineForceAffector::preUpdateAffector(float) */

void __thiscall
cocos2d::PUSineForceAffector::preUpdateAffector(PUSineForceAffector *this,float param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(this + 200) + *(float *)(this + 0xd4) * param_1;
  *(float *)(this + 200) = fVar6;
  fVar5 = sinf(fVar6);
                    /* catch() { ... } // from try @ 00e2d948 with catch @ 00e2da00 */
  *(ulong *)(this + 0xb8) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xac) >> 0x20) * param_1 * fVar5,
                (float)*(undefined8 *)(this + 0xac) * param_1 * fVar5);
  *(float *)(this + 0xc0) = fVar5 * *(float *)(this + 0xb4) * param_1;
                    /* catch() { ... } // from try @ 00e2d970 with catch @ 00e2da14 */
  if (6.2831855 < fVar6) {
    fVar5 = *(float *)(this + 0xcc);
    fVar6 = *(float *)(this + 0xd0);
    *(undefined4 *)(this + 200) = 0;
    if (fVar5 != fVar6) {
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
      *(float *)(this + 0xd4) =
           fVar5 + (fVar6 - fVar5) * (float)(uVar4 ^ uVar4 >> 0x12) * 2.3283064e-10;
    }
  }
  return;
}

