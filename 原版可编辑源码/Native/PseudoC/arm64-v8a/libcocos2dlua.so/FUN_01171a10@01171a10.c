
void FUN_01171a10(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 ,undefined8 param_7,code *param_8,undefined8 param_9)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  
  fVar26 = 1.0 / *(float *)(param_6 + 0x24);
  fVar22 = fVar26 * param_1;
  fVar24 = fVar26 * param_2;
  if (fVar26 * param_3 <= fVar22) {
    fVar27 = (float)(int)fVar22;
    lVar11 = -1;
    fVar23 = fVar22;
  }
  else {
    lVar11 = 1;
    fVar23 = (float)(int)(fVar22 + 1.0);
    fVar27 = fVar22;
  }
  if (fVar26 * param_4 <= fVar24) {
    fVar29 = (float)(int)fVar24;
    lVar12 = -1;
    fVar25 = fVar24;
  }
  else {
    lVar12 = 1;
    fVar25 = (float)(int)(fVar24 + 1.0);
    fVar29 = fVar24;
  }
  fVar19 = ABS(fVar26 * (param_3 - param_1));
  fVar21 = ABS(fVar26 * (param_4 - param_2));
  fVar26 = 1.0 / fVar19;
  if (fVar19 == 0.0) {
    fVar26 = INFINITY;
  }
  fVar19 = 1.0 / fVar21;
  if (fVar21 == 0.0) {
    fVar19 = INFINITY;
  }
  if (param_5 <= 0.0) {
LAB_01171cb8:
    *(int *)(param_6 + 0x50) = *(int *)(param_6 + 0x50) + 1;
    return;
  }
  lVar10 = *(long *)(param_6 + 0x28);
  uVar17 = (ulong)*(int *)(param_6 + 0x20);
  uVar18 = (ulong)((int)fVar22 - (uint)(fVar22 < 0.0 && fVar22 != (float)(int)fVar22));
  fVar22 = (fVar25 - fVar29) * fVar19;
  if (fVar25 - fVar29 == 0.0) {
    fVar22 = fVar19;
  }
  lVar7 = (long)(int)((int)fVar24 - (uint)(fVar24 < 0.0 && fVar24 != (float)(int)fVar24));
  fVar24 = (fVar23 - fVar27) * fVar26;
  if (fVar23 - fVar27 == 0.0) {
    fVar24 = fVar26;
  }
LAB_01171b84:
  uVar18 = (ulong)(int)uVar18;
  do {
    uVar8 = uVar18 * 0x61c88639 ^ lVar7 * 0x9e3779cd;
    uVar2 = 0;
    if (uVar17 != 0) {
      uVar2 = uVar8 / uVar17;
    }
    plVar1 = (long *)(lVar10 + (uVar8 - uVar2 * uVar17) * 8);
    puVar15 = (undefined8 *)*plVar1;
    uVar28 = 0x3f800000;
    if (puVar15 != (undefined8 *)0x0) {
LAB_01171bc8:
      iVar6 = *(int *)(param_6 + 0x50);
      do {
        plVar13 = (long *)*puVar15;
        if (*(int *)((long)plVar13 + 0xc) != iVar6) {
          if (*plVar13 == 0) goto LAB_01171c08;
          uVar20 = (*param_8)(param_7,*plVar13,param_9);
          iVar6 = *(int *)(param_6 + 0x50);
          uVar28 = NEON_fminnm(uVar28,uVar20);
          *(int *)((long)plVar13 + 0xc) = iVar6;
        }
        puVar15 = (undefined8 *)puVar15[1];
        if (puVar15 == (undefined8 *)0x0) break;
      } while( true );
    }
LAB_01171c70:
    param_5 = (float)NEON_fminnm(param_5,uVar28);
    if (fVar22 < fVar24) goto LAB_01171c94;
    bVar3 = param_5 <= fVar24;
    fVar24 = fVar24 + fVar26;
    uVar18 = uVar18 + lVar11;
    if (bVar3) goto LAB_01171cb8;
  } while( true );
LAB_01171c08:
  plVar13 = (long *)*plVar1;
  plVar16 = plVar1;
  if ((long *)*plVar1 == (long *)0x0) goto LAB_01171c70;
  do {
    while( true ) {
      plVar5 = (long *)*plVar13;
      plVar9 = plVar13 + 1;
      plVar14 = (long *)*plVar9;
      if (*plVar5 != 0) break;
      *plVar16 = (long)plVar14;
      plVar13[1] = *(long *)(param_6 + 0x38);
      *(long **)(param_6 + 0x38) = plVar13;
      uVar4 = *(undefined8 *)(param_6 + 0x40);
      iVar6 = (int)plVar5[1] + -1;
      *(int *)(plVar5 + 1) = iVar6;
      if (iVar6 == 0) {
        cpArrayPush(uVar4);
      }
      plVar13 = plVar14;
      if (plVar14 == (long *)0x0) goto LAB_01171c68;
    }
    plVar13 = plVar14;
    plVar16 = plVar9;
  } while (plVar14 != (long *)0x0);
LAB_01171c68:
  puVar15 = (undefined8 *)*plVar1;
  if (puVar15 == (undefined8 *)0x0) goto LAB_01171c70;
  goto LAB_01171bc8;
LAB_01171c94:
  bVar3 = param_5 <= fVar22;
  fVar22 = fVar22 + fVar19;
  lVar7 = lVar7 + lVar12;
  if (bVar3) goto LAB_01171cb8;
  goto LAB_01171b84;
}

