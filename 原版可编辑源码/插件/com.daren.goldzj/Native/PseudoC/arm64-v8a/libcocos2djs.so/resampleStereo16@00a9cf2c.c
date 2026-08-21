
/* cocos2d::AudioResamplerOrder1::resampleStereo16(int*, unsigned long,
   cocos2d::AudioBufferProvider*) */

ulong __thiscall
cocos2d::AudioResamplerOrder1::resampleStereo16
          (AudioResamplerOrder1 *this,int *param_1,ulong param_2,AudioBufferProvider *param_3)

{
  AudioResamplerOrder1 *pAVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar14 = *(ulong *)(this + 0x30);
  uVar15 = *(uint *)(this + 0x3c);
  uVar17 = param_2 * 2;
  if (uVar17 == 0) {
    uVar16 = 0;
LAB_00a9d19c:
    *(ulong *)(this + 0x30) = uVar14;
    *(uint *)(this + 0x3c) = uVar15;
                    /* try { // try from 00a9d1ac to 00b9d1bb has its CatchHandler @ 00a9d1fc */
                    /* try { // try from 00a9d1bc to 00b9d217 has its CatchHandler @ 00a9d16c */
    return uVar16 >> 1;
  }
  sVar5 = *(short *)(this + 0x28);
  uVar11 = (ulong)*(int *)(this + 0xc);
  sVar6 = *(short *)(this + 0x2a);
  iVar4 = *(int *)(this + 0x38);
  uVar16 = 0;
  pAVar1 = this + 0x18;
  uVar9 = 0;
  if (uVar11 != 0) {
    uVar9 = ((uVar11 + (long)*(int *)(this + 0x10) * param_2) - 1) / uVar11;
  }
LAB_00a9cfa8:
  uVar11 = *(ulong *)(this + 0x20);
  if (uVar11 == 0) {
    do {
      lVar10 = 0x7fffffffffffffff;
      *(ulong *)(this + 0x20) = uVar9;
      if (*(long *)(this + 0x48) != 0x7fffffffffffffff) {
        uVar11 = 0;
        if ((long)*(int *)(this + 0xc) != 0) {
          uVar11 = (ulong)(*(long *)(this + 0x40) * ((long)(uVar16 << 0x1f) >> 0x20)) /
                   (ulong)(long)*(int *)(this + 0xc);
        }
        lVar10 = uVar11 + *(long *)(this + 0x48);
      }
      (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,lVar10);
      if (*(long *)pAVar1 == 0) goto LAB_00a9d19c;
      uVar11 = *(ulong *)(this + 0x20);
      uVar8 = uVar14 - uVar11;
      if (uVar14 < uVar11) break;
      lVar10 = *(long *)pAVar1 + uVar11 * 4;
      *(ulong *)(this + 0x54) = CONCAT44((int)*(short *)(lVar10 + -2),(int)*(short *)(lVar10 + -4));
      (**(code **)(*(long *)param_3 + 0x18))(param_3,pAVar1);
      uVar11 = *(ulong *)(this + 0x20);
      uVar14 = uVar8;
    } while (uVar11 == 0);
  }
  piVar13 = param_1 + uVar16;
  psVar12 = *(short **)pAVar1;
  do {
    if (uVar14 != 0) {
      if (uVar16 < uVar17) goto LAB_00a9d0e0;
      goto LAB_00a9d148;
    }
    uVar7 = uVar15 >> 0xf;
    piVar2 = param_1 + uVar16;
    uVar16 = uVar16 + 2;
    piVar13 = piVar13 + 2;
    *piVar2 = *piVar2 + (*(int *)(this + 0x54) +
                        ((int)(((int)*psVar12 - *(int *)(this + 0x54)) * uVar7) >> 0xf)) *
                        (int)sVar5;
    uVar15 = uVar15 + iVar4;
    uVar14 = (ulong)(uVar15 >> 0x1e);
    uVar15 = uVar15 & 0x3fffffff;
    piVar2[1] = piVar2[1] +
                (*(int *)(this + 0x58) +
                ((int)(((int)psVar12[1] - *(int *)(this + 0x58)) * uVar7) >> 0xf)) * (int)sVar6;
  } while (uVar17 - uVar16 != 0);
  uVar8 = uVar14 - uVar11;
  uVar16 = uVar17;
  goto joined_r0x00a9d14c;
  while( true ) {
    psVar3 = psVar12 + uVar14 * 2;
                    /* try { // try from 00a9d114 to 00b9d123 has its CatchHandler @ 00a9d150 */
    uVar7 = uVar15 + iVar4;
                    /* try { // try from 00a9d124 to 00b9d16b has its CatchHandler @ 00a9d0e4 */
    uVar16 = uVar16 + 2;
    uVar14 = uVar14 + (uVar7 >> 0x1e);
    *(ulong *)piVar13 =
         CONCAT44((int)((ulong)*(undefined8 *)piVar13 >> 0x20) +
                  ((int)psVar3[-1] +
                  ((int)(((int)psVar3[1] - (int)psVar3[-1]) * (uVar15 >> 0xf)) >> 0xf)) * (int)sVar6
                  ,(int)*(undefined8 *)piVar13 +
                   ((int)psVar3[-2] +
                   ((int)(((int)*psVar3 - (int)psVar3[-2]) * (uVar15 >> 0xf)) >> 0xf)) * (int)sVar5)
    ;
    uVar15 = uVar7 & 0x3fffffff;
    piVar13 = piVar13 + 2;
    if (uVar17 <= uVar16) break;
LAB_00a9d0e0:
                    /* catch() { ... } // from try @ 00a9d124 with catch @ 00a9d0e4 */
    if (uVar11 <= uVar14) break;
  }
LAB_00a9d148:
  uVar8 = uVar14 - uVar11;
joined_r0x00a9d14c:
  if (uVar11 <= uVar14) {
                    /* catch() { ... } // from try @ 00a9d114 with catch @ 00a9d150 */
    lVar10 = *(long *)(this + 0x18) + uVar11 * 4;
                    /* catch() { ... } // from try @ 00a9d1bc with catch @ 00a9d16c */
    *(ulong *)(this + 0x54) = CONCAT44((int)*(short *)(lVar10 + -2),(int)*(short *)(lVar10 + -4));
    (**(code **)(*(long *)param_3 + 0x18))(param_3,pAVar1);
    uVar14 = uVar8;
  }
  if (uVar17 <= uVar16) goto LAB_00a9d19c;
  goto LAB_00a9cfa8;
}

