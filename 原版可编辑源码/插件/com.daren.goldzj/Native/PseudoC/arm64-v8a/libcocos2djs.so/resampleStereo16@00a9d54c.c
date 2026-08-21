
/* cocos2d::AudioResamplerCubic::resampleStereo16(int*, unsigned long,
   cocos2d::AudioBufferProvider*) */

ulong __thiscall
cocos2d::AudioResamplerCubic::resampleStereo16
          (AudioResamplerCubic *this,int *param_1,ulong param_2,AudioBufferProvider *param_3)

{
  AudioResamplerCubic *pAVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  
  sVar10 = *(short *)(this + 0x28);
  lVar19 = *(long *)(this + 0x30);
  sVar11 = *(short *)(this + 0x2a);
  pAVar1 = this + 0x18;
  iVar3 = *(int *)(this + 0x38);
  uVar18 = *(uint *)(this + 0x3c);
  uVar20 = (ulong)*(int *)(this + 0xc);
  uVar14 = 0;
  if (uVar20 != 0) {
    uVar14 = ((uVar20 + (long)*(int *)(this + 0x10) * param_2) - 1) / uVar20;
  }
  if (*(long *)(this + 0x20) == 0) {
    *(ulong *)(this + 0x20) = uVar14;
    (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,*(undefined8 *)(this + 0x48));
    if (*(long *)(this + 0x18) == 0) {
      return 0;
    }
  }
  if (param_2 << 1 == 0) {
    uVar20 = 0;
  }
  else {
    lVar16 = *(long *)(this + 0x18);
    uVar17 = 0;
    do {
      uVar13 = uVar18 >> 0x10;
      uVar20 = uVar17 + 2;
      param_1[uVar17] =
           param_1[uVar17] +
           (*(int *)(this + 100) +
           ((int)((*(int *)(this + 0x5c) +
                  ((int)((*(int *)(this + 0x58) + ((int)(*(int *)(this + 0x54) * uVar13) >> 0xe)) *
                        uVar13) >> 0xe)) * uVar13) >> 0xe)) * (int)sVar10;
      uVar17 = uVar17 * 4 | 4;
      uVar2 = uVar18 + iVar3;
      uVar18 = uVar2 & 0x3fffffff;
      uVar2 = uVar2 >> 0x1e;
      *(int *)((long)param_1 + uVar17) =
           *(int *)((long)param_1 + uVar17) +
           (*(int *)(this + 0x80) +
           ((int)((*(int *)(this + 0x78) +
                  ((int)((*(int *)(this + 0x74) + ((int)(*(int *)(this + 0x70) * uVar13) >> 0xe)) *
                        uVar13) >> 0xe)) * uVar13) >> 0xe)) * (int)sVar11;
      if (uVar2 != 0) {
        iVar21 = -uVar2;
        do {
          lVar19 = lVar19 + 1;
          if (lVar19 == *(long *)(this + 0x20)) {
            (**(code **)(*(long *)param_3 + 0x18))(param_3,pAVar1);
            *(ulong *)(this + 0x20) = uVar14;
            uVar15 = AudioResampler::calculateOutputPTS((AudioResampler *)this,(int)(uVar20 >> 1));
            (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,uVar15);
            lVar16 = *(long *)(this + 0x18);
            if (lVar16 == 0) {
              lVar19 = 0;
              goto LAB_00a9d798;
            }
            lVar19 = 0;
          }
          iVar4 = *(int *)(this + 100);
          iVar6 = *(int *)(this + 0x68);
          iVar8 = *(int *)(this + 0x6c);
          sVar12 = *(short *)(lVar16 + lVar19 * 4);
          *(int *)(this + 100) = iVar6;
          *(int *)(this + 0x68) = iVar8;
          *(int *)(this + 0x6c) = (int)sVar12;
          *(int *)(this + 0x5c) = iVar8 - iVar4 >> 1;
          *(int *)(this + 0x60) = iVar4;
          iVar5 = *(int *)(this + 0x80);
          iVar7 = *(int *)(this + 0x84);
          iVar9 = *(int *)(this + 0x88);
          *(int *)(this + 0x54) = (sVar12 - iVar4) + (iVar6 - iVar8) * 3 >> 1;
          *(int *)(this + 0x58) = (iVar4 + iVar8 * 2) - (iVar6 * 5 + (int)sVar12 >> 1);
          sVar12 = *(short *)(lVar16 + (lVar19 << 2 | 2U));
          *(int *)(this + 0x84) = iVar9;
          *(int *)(this + 0x88) = (int)sVar12;
          iVar21 = iVar21 + 1;
          *(int *)(this + 0x7c) = iVar5;
          *(int *)(this + 0x80) = iVar7;
          *(int *)(this + 0x70) = (sVar12 - iVar5) + (iVar7 - iVar9) * 3 >> 1;
          *(int *)(this + 0x74) = (iVar5 + iVar9 * 2) - (iVar7 * 5 + (int)sVar12 >> 1);
          *(int *)(this + 0x78) = iVar9 - iVar5 >> 1;
        } while (iVar21 != 0);
      }
      uVar17 = uVar20;
    } while (uVar20 < param_2 << 1);
  }
LAB_00a9d798:
  *(long *)(this + 0x30) = lVar19;
  *(uint *)(this + 0x3c) = uVar18;
  return uVar20 >> 1;
}

