
/* cocos2d::AudioResamplerOrder1::resampleMono16(int*, unsigned long, cocos2d::AudioBufferProvider*)
    */

ulong __thiscall
cocos2d::AudioResamplerOrder1::resampleMono16
          (AudioResamplerOrder1 *this,int *param_1,ulong param_2,AudioBufferProvider *param_3)

{
  AudioResamplerOrder1 *pAVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  short *psVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar17 = *(ulong *)(this + 0x30);
  uVar15 = *(uint *)(this + 0x3c);
  uVar16 = param_2 * 2;
  if (uVar16 == 0) {
    uVar14 = 0;
LAB_00a9cf00:
    *(ulong *)(this + 0x30) = uVar17;
    *(uint *)(this + 0x3c) = uVar15;
    return uVar14;
  }
  sVar5 = *(short *)(this + 0x28);
  uVar10 = (ulong)*(int *)(this + 0xc);
  sVar6 = *(short *)(this + 0x2a);
  iVar4 = *(int *)(this + 0x38);
  uVar14 = 0;
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar8 = ((uVar10 + (long)*(int *)(this + 0x10) * param_2) - 1) / uVar10;
  }
  pAVar1 = this + 0x18;
LAB_00a9cd5c:
  uVar10 = *(ulong *)(this + 0x20);
  if (uVar10 == 0) {
    do {
      lVar9 = 0x7fffffffffffffff;
      *(ulong *)(this + 0x20) = uVar8;
      if (*(long *)(this + 0x48) != 0x7fffffffffffffff) {
        uVar10 = 0;
        if ((long)*(int *)(this + 0xc) != 0) {
          uVar10 = (ulong)(*(long *)(this + 0x40) * ((long)(uVar14 << 0x1f) >> 0x20)) /
                   (ulong)(long)*(int *)(this + 0xc);
        }
        lVar9 = uVar10 + *(long *)(this + 0x48);
      }
      (**(code **)(*(long *)param_3 + 0x10))(param_3,pAVar1,lVar9);
      if (*(long *)pAVar1 == 0) {
        *(ulong *)(this + 0x30) = uVar17;
        *(uint *)(this + 0x3c) = uVar15;
        goto LAB_00a9cf00;
      }
      uVar10 = *(ulong *)(this + 0x20);
      uVar7 = uVar17 - uVar10;
      if (uVar17 < uVar10) break;
      *(int *)(this + 0x54) = (int)*(short *)(*(long *)pAVar1 + uVar10 * 2 + -2);
      (**(code **)(*(long *)param_3 + 0x18))(param_3,pAVar1);
      uVar10 = *(ulong *)(this + 0x20);
      uVar17 = uVar7;
    } while (uVar10 == 0);
  }
  psVar11 = *(short **)pAVar1;
  piVar12 = param_1 + uVar14;
  do {
    if (uVar17 != 0) {
      if (uVar16 <= uVar14) goto LAB_00a9ceb0;
      lVar9 = 0;
      goto LAB_00a9ce5c;
    }
    uVar14 = uVar14 + 2;
    iVar13 = *(int *)(this + 0x54) +
             ((int)(((int)*psVar11 - *(int *)(this + 0x54)) * (uVar15 >> 0xf)) >> 0xf);
    uVar15 = uVar15 + iVar4;
    uVar17 = (ulong)(uVar15 >> 0x1e);
    *(ulong *)piVar12 =
         CONCAT44((int)((ulong)*(undefined8 *)piVar12 >> 0x20) + iVar13 * sVar6,
                  (int)*(undefined8 *)piVar12 + iVar13 * sVar5);
    uVar15 = uVar15 & 0x3fffffff;
    piVar12 = piVar12 + 2;
  } while (uVar16 - uVar14 != 0);
  uVar7 = uVar17 - uVar10;
  uVar14 = uVar16;
  goto joined_r0x00a9ceb4;
  while( true ) {
    uVar2 = uVar15 + iVar4;
    psVar3 = psVar11 + uVar17;
    uVar17 = uVar17 + (uVar2 >> 0x1e);
    uVar14 = uVar14 + 2;
    iVar13 = (int)psVar3[-1];
    iVar13 = iVar13 + ((int)((*psVar3 - iVar13) * (uVar15 >> 0xf)) >> 0xf);
    uVar15 = uVar2 & 0x3fffffff;
    *(ulong *)((long)piVar12 + lVar9) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)piVar12 + lVar9) >> 0x20) + iVar13 * sVar6,
                  (int)*(undefined8 *)((long)piVar12 + lVar9) + iVar13 * sVar5);
    lVar9 = lVar9 + 8;
    if (uVar16 <= uVar14) break;
LAB_00a9ce5c:
    if (uVar10 <= uVar17) break;
  }
LAB_00a9ceb0:
  uVar7 = uVar17 - uVar10;
joined_r0x00a9ceb4:
  if (uVar10 <= uVar17) {
    *(int *)(this + 0x54) = (int)*(short *)(*(long *)(this + 0x18) + uVar10 * 2 + -2);
    (**(code **)(*(long *)param_3 + 0x18))(param_3,pAVar1);
    uVar17 = uVar7;
  }
  if (uVar16 <= uVar14) goto LAB_00a9cf00;
  goto LAB_00a9cd5c;
}

