
/* cocos2d::AudioResamplerCubic::resampleMono16(int*, unsigned long, cocos2d::AudioBufferProvider*)
    */

ulong __thiscall
cocos2d::AudioResamplerCubic::resampleMono16
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
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  
                    /* catch() { ... } // from try @ 00a9d3f0 with catch @ 00a9d360 */
  iVar2 = *(int *)(this + 0x38);
  uVar15 = *(uint *)(this + 0x3c);
  uVar13 = (ulong)*(int *)(this + 0xc);
  sVar6 = *(short *)(this + 0x28);
  sVar7 = *(short *)(this + 0x2a);
  lVar17 = *(long *)(this + 0x30);
  uVar10 = 0;
  if (uVar13 != 0) {
    uVar10 = ((uVar13 + (long)*(int *)(this + 0x10) * param_2) - 1) / uVar13;
  }
  pAVar1 = this + 0x18;
  if (*(long *)(this + 0x20) == 0) {
    *(ulong *)(this + 0x20) = uVar10;
    (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,*(undefined8 *)(this + 0x48));
    if (*(long *)(this + 0x18) == 0) {
      return 0;
    }
  }
  uVar13 = 0;
  if (param_2 << 1 != 0) {
                    /* try { // try from 00a9d3ec to 00b9d3ef has its CatchHandler @ 00a9d404 */
    lVar12 = *(long *)(this + 0x18);
                    /* try { // try from 00a9d3f0 to 00b9d5cb has its CatchHandler @ 00a9d360 */
    uVar14 = uVar13;
    do {
      uVar9 = uVar15 >> 0x10;
                    /* catch() { ... } // from try @ 00a9d3ec with catch @ 00a9d404 */
      iVar16 = *(int *)(this + 100) +
               ((int)((*(int *)(this + 0x5c) +
                      ((int)((*(int *)(this + 0x58) + ((int)(*(int *)(this + 0x54) * uVar9) >> 0xe))
                            * uVar9) >> 0xe)) * uVar9) >> 0xe);
      uVar13 = uVar14 + 2;
      uVar9 = uVar15 + iVar2 >> 0x1e;
      uVar15 = uVar15 + iVar2 & 0x3fffffff;
      *(ulong *)(param_1 + uVar14) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + uVar14) >> 0x20) + iVar16 * sVar7,
                    (int)*(undefined8 *)(param_1 + uVar14) + iVar16 * sVar6);
      if (uVar9 != 0) {
        iVar16 = -uVar9;
        do {
          lVar17 = lVar17 + 1;
          if (lVar17 == *(long *)(this + 0x20)) {
            (**(code **)(*(long *)param_3 + 0x18))(param_3,pAVar1);
            *(ulong *)(this + 0x20) = uVar10;
            uVar11 = AudioResampler::calculateOutputPTS((AudioResampler *)this,(int)(uVar13 >> 1));
            (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,uVar11);
            lVar12 = *(long *)(this + 0x18);
            if (lVar12 == 0) {
              lVar17 = 0;
              goto LAB_00a9d518;
            }
            lVar17 = 0;
          }
          iVar3 = *(int *)(this + 100);
          iVar4 = *(int *)(this + 0x68);
          iVar5 = *(int *)(this + 0x6c);
          sVar8 = *(short *)(lVar12 + lVar17 * 2);
          iVar16 = iVar16 + 1;
          *(int *)(this + 100) = iVar4;
          *(int *)(this + 0x68) = iVar5;
          *(int *)(this + 0x6c) = (int)sVar8;
          *(int *)(this + 0x5c) = iVar5 - iVar3 >> 1;
          *(int *)(this + 0x60) = iVar3;
          *(int *)(this + 0x54) = (sVar8 - iVar3) + (iVar4 - iVar5) * 3 >> 1;
          *(int *)(this + 0x58) = (iVar3 + iVar5 * 2) - (iVar4 * 5 + (int)sVar8 >> 1);
        } while (iVar16 != 0);
      }
      uVar14 = uVar13;
    } while (uVar13 < param_2 << 1);
  }
LAB_00a9d518:
  *(long *)(this + 0x30) = lVar17;
  *(uint *)(this + 0x3c) = uVar15;
  return uVar13;
}

