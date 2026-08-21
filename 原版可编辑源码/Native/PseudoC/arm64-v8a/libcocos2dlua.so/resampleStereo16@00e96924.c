
/* cocos2d::experimental::AudioResamplerCubic::resampleStereo16(int*, unsigned long,
   cocos2d::experimental::AudioBufferProvider*) */

ulong __thiscall
cocos2d::experimental::AudioResamplerCubic::resampleStereo16
          (AudioResamplerCubic *this,int *param_1,ulong param_2,AudioBufferProvider *param_3)

{
  AudioResamplerCubic *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  
  sVar9 = *(short *)(this + 0x28);
  lVar18 = *(long *)(this + 0x30);
  sVar10 = *(short *)(this + 0x2a);
  pAVar1 = this + 0x18;
  iVar2 = *(int *)(this + 0x38);
  uVar17 = *(uint *)(this + 0x3c);
  uVar19 = (ulong)*(int *)(this + 0xc);
  uVar13 = 0;
  if (uVar19 != 0) {
    uVar13 = ((uVar19 + (long)*(int *)(this + 0x10) * param_2) - 1) / uVar19;
  }
  if (*(long *)(this + 0x20) == 0) {
    *(ulong *)(this + 0x20) = uVar13;
    (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,*(undefined8 *)(this + 0x48));
    if (*(long *)(this + 0x18) == 0) {
      return 0;
    }
  }
  if (param_2 << 1 == 0) {
    uVar19 = 0;
  }
  else {
    lVar15 = *(long *)(this + 0x18);
    uVar19 = 0;
    do {
      uVar12 = uVar17 >> 0x10;
      param_1[uVar19] =
           param_1[uVar19] +
           (*(int *)(this + 100) +
           ((int)((*(int *)(this + 0x5c) +
                  ((int)((*(int *)(this + 0x58) + ((int)(*(int *)(this + 0x54) * uVar12) >> 0xe)) *
                        uVar12) >> 0xe)) * uVar12) >> 0xe)) * (int)sVar9;
      uVar16 = uVar19 * 4 | 4;
      uVar19 = uVar19 + 2;
      uVar20 = uVar17 + iVar2 >> 0x1e;
      uVar17 = uVar17 + iVar2 & 0x3fffffff;
      *(int *)((long)param_1 + uVar16) =
           *(int *)((long)param_1 + uVar16) +
           (*(int *)(this + 0x80) +
           ((int)((*(int *)(this + 0x78) +
                  ((int)((*(int *)(this + 0x74) + ((int)(*(int *)(this + 0x70) * uVar12) >> 0xe)) *
                        uVar12) >> 0xe)) * uVar12) >> 0xe)) * (int)sVar10;
      if (uVar20 != 0) {
        do {
          lVar18 = lVar18 + 1;
          if (lVar18 == *(long *)(this + 0x20)) {
            (**(code **)(*(long *)param_3 + 0x18))(param_3,pAVar1);
            *(ulong *)(this + 0x20) = uVar13;
            uVar14 = AudioResampler::calculateOutputPTS((AudioResampler *)this,(int)(uVar19 >> 1));
            (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,uVar14);
            lVar15 = *(long *)(this + 0x18);
            if (lVar15 == 0) {
              lVar18 = 0;
              goto LAB_00e96b78;
            }
            lVar18 = 0;
          }
          iVar3 = *(int *)(this + 100);
          iVar5 = *(int *)(this + 0x68);
          iVar7 = *(int *)(this + 0x6c);
          sVar11 = *(short *)(lVar15 + lVar18 * 4);
          *(int *)(this + 100) = iVar5;
          *(int *)(this + 0x68) = iVar7;
          *(int *)(this + 0x6c) = (int)sVar11;
          *(int *)(this + 0x5c) = iVar7 - iVar3 >> 1;
          *(int *)(this + 0x60) = iVar3;
          iVar4 = *(int *)(this + 0x80);
          iVar6 = *(int *)(this + 0x84);
          iVar8 = *(int *)(this + 0x88);
          *(int *)(this + 0x54) = (sVar11 - iVar3) + (iVar5 - iVar7) * 3 >> 1;
          *(int *)(this + 0x58) = (iVar3 + iVar7 * 2) - (iVar5 * 5 + (int)sVar11 >> 1);
          sVar11 = *(short *)(lVar15 + (lVar18 << 2 | 2U));
          *(int *)(this + 0x84) = iVar8;
          *(int *)(this + 0x88) = (int)sVar11;
          uVar20 = uVar20 - 1;
          *(int *)(this + 0x7c) = iVar4;
          *(int *)(this + 0x80) = iVar6;
          *(int *)(this + 0x70) = (sVar11 - iVar4) + (iVar6 - iVar8) * 3 >> 1;
          *(int *)(this + 0x74) = (iVar4 + iVar8 * 2) - (iVar6 * 5 + (int)sVar11 >> 1);
          *(int *)(this + 0x78) = iVar8 - iVar4 >> 1;
        } while (uVar20 != 0);
      }
    } while (uVar19 < param_2 << 1);
  }
LAB_00e96b78:
  *(long *)(this + 0x30) = lVar18;
  *(uint *)(this + 0x3c) = uVar17;
  return uVar19 >> 1;
}

