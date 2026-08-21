
/* cocos2d::PUTextureAnimator::determineNextTextureCoords(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUTextureAnimator::determineNextTextureCoords
          (PUTextureAnimator *this,PUParticle3D *param_1)

{
  int iVar1;
  ushort uVar2;
  float fVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  
                    /* catch() { ... } // from try @ 00e2ea90 with catch @ 00e2eb4c */
  iVar1 = *(int *)(this + 0xb8);
  if (iVar1 == 2) {
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(this + 0xbc));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(this + 0xbe));
    lVar4 = RandomHelper::getEngine();
    lVar6 = *(long *)(lVar4 + 0x1380);
    uVar7 = (lVar6 + 1U) % 0x270;
    uVar8 = *(ulong *)(lVar4 + uVar7 * 8);
    *(ulong *)(lVar4 + lVar6 * 8) =
         (uVar8 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar6 + 0x18dU) % 0x270) * 8) ^
         (uVar8 & 0x7ffffffe | *(ulong *)(lVar4 + lVar6 * 8) & 0xffffffff80000000) >> 1;
    uVar8 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
    *(ulong *)(lVar4 + 0x1380) = uVar7;
    uVar8 = uVar8 >> 0xb & 0xffffffff ^ uVar8;
    uVar8 = ((uint)uVar8 & 0x13a58ad) << 7 ^ uVar8;
    uVar8 = (ulong)(uint)((int)uVar8 << 0xf) & 0xefc60000 ^ uVar8;
    sVar5 = (short)(int)(((fVar3 + 0.999) - fVar9) * (float)(uVar8 ^ uVar8 >> 0x12) * 2.3283064e-10
                        + fVar9);
  }
  else {
    if (iVar1 == 1) {
      uVar2 = *(ushort *)(param_1 + 0x144);
      if (param_1[0x146] == (PUParticle3D)0x0) {
        if (uVar2 <= *(ushort *)(this + 0xbc)) {
          *(ushort *)(param_1 + 0x144) = uVar2 + 1;
          param_1[0x146] = (PUParticle3D)0x1;
          return;
        }
        sVar5 = uVar2 - 1;
        goto LAB_00e2ecb4;
      }
      if (*(ushort *)(this + 0xbe) <= uVar2) {
        *(ushort *)(param_1 + 0x144) = uVar2 - 1;
        param_1[0x146] = (PUParticle3D)0x0;
        return;
      }
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      uVar2 = *(ushort *)(param_1 + 0x144);
      if (*(ushort *)(this + 0xbe) <= uVar2) {
        sVar5 = *(short *)(this + 0xbc);
        goto LAB_00e2ecb4;
      }
    }
    sVar5 = uVar2 + 1;
  }
LAB_00e2ecb4:
  *(short *)(param_1 + 0x144) = sVar5;
  return;
}

