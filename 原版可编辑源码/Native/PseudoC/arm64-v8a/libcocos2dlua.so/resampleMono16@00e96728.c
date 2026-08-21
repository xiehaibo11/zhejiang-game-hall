
/* cocos2d::experimental::AudioResamplerCubic::resampleMono16(int*, unsigned long,
   cocos2d::experimental::AudioBufferProvider*) */

ulong __thiscall
cocos2d::experimental::AudioResamplerCubic::resampleMono16
          (AudioResamplerCubic *this,int *param_1,ulong param_2,AudioBufferProvider *param_3)

{
  AudioResamplerCubic *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  
  iVar3 = *(int *)(this + 0x38);
  uVar14 = *(uint *)(this + 0x3c);
  uVar12 = (ulong)*(int *)(this + 0xc);
  sVar6 = *(short *)(this + 0x28);
  sVar7 = *(short *)(this + 0x2a);
  lVar16 = *(long *)(this + 0x30);
  uVar9 = 0;
  if (uVar12 != 0) {
    uVar9 = ((uVar12 + (long)*(int *)(this + 0x10) * param_2) - 1) / uVar12;
  }
  pAVar1 = this + 0x18;
  if (*(long *)(this + 0x20) == 0) {
    *(ulong *)(this + 0x20) = uVar9;
    (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,*(undefined8 *)(this + 0x48));
    if (*(long *)(this + 0x18) == 0) {
      return 0;
    }
  }
  uVar12 = 0;
  if (param_2 << 1 != 0) {
    lVar11 = *(long *)(this + 0x18);
    uVar13 = uVar12;
    do {
      uVar15 = uVar14 >> 0x10;
      iVar2 = *(int *)(this + 100) +
              ((int)((*(int *)(this + 0x5c) +
                     ((int)((*(int *)(this + 0x58) + ((int)(*(int *)(this + 0x54) * uVar15) >> 0xe))
                           * uVar15) >> 0xe)) * uVar15) >> 0xe);
      uVar12 = uVar13 + 2;
      uVar15 = uVar14 + iVar3 >> 0x1e;
      uVar14 = uVar14 + iVar3 & 0x3fffffff;
      *(ulong *)(param_1 + uVar13) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + uVar13) >> 0x20) + iVar2 * sVar7,
                    (int)*(undefined8 *)(param_1 + uVar13) + iVar2 * sVar6);
      if (uVar15 != 0) {
        do {
          lVar16 = lVar16 + 1;
          if (lVar16 == *(long *)(this + 0x20)) {
            (**(code **)(*(long *)param_3 + 0x18))(param_3,pAVar1);
            *(ulong *)(this + 0x20) = uVar9;
            uVar10 = AudioResampler::calculateOutputPTS((AudioResampler *)this,(int)(uVar12 >> 1));
            (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,uVar10);
            lVar11 = *(long *)(this + 0x18);
            if (lVar11 == 0) {
              lVar16 = 0;
              goto LAB_00e968f0;
            }
            lVar16 = 0;
          }
          iVar2 = *(int *)(this + 100);
          iVar4 = *(int *)(this + 0x68);
          iVar5 = *(int *)(this + 0x6c);
          sVar8 = *(short *)(lVar11 + lVar16 * 2);
          uVar15 = uVar15 - 1;
          *(int *)(this + 100) = iVar4;
          *(int *)(this + 0x68) = iVar5;
          *(int *)(this + 0x6c) = (int)sVar8;
          *(int *)(this + 0x5c) = iVar5 - iVar2 >> 1;
          *(int *)(this + 0x60) = iVar2;
          *(int *)(this + 0x54) = (sVar8 - iVar2) + (iVar4 - iVar5) * 3 >> 1;
          *(int *)(this + 0x58) = (iVar2 + iVar5 * 2) - (iVar4 * 5 + (int)sVar8 >> 1);
        } while (uVar15 != 0);
      }
      uVar13 = uVar12;
    } while (uVar12 < param_2 << 1);
  }
LAB_00e968f0:
  *(long *)(this + 0x30) = lVar16;
  *(uint *)(this + 0x3c) = uVar14;
  return uVar12;
}

