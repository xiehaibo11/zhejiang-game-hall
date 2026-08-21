
/* WARNING: Type propagation algorithm not settling */
/* dtPathCorridor::optimizePathVisibility(float const*, float, dtNavMeshQuery*, dtQueryFilter
   const*) */

void __thiscall
dtPathCorridor::optimizePathVisibility
          (dtPathCorridor *this,float *param_1,float param_2,dtNavMeshQuery *param_3,
          dtQueryFilter *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_e8;
  float local_e4;
  float afStack_e0 [2];
  uint uStack_d8;
  uint local_d4 [2];
  undefined8 auStack_cc [15];
  float local_54;
  float fStack_50;
  float local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_54 = *param_1;
  fStack_50 = param_1[1];
  local_4c = param_1[2];
  fVar26 = local_54 - *(float *)this;
  fVar25 = local_4c - *(float *)(this + 8);
  fVar27 = SQRT(fVar26 * fVar26 + fVar25 * fVar25);
  if (fVar27 < 0.01) goto LAB_01193bb0;
  fVar27 = fVar27 + 0.01;
  if (param_2 <= fVar27) {
    fVar27 = param_2;
  }
  fVar27 = param_2 / fVar27;
  local_54 = *(float *)this + fVar26 * fVar27;
  fStack_50 = *(float *)(this + 4) + fVar27 * (fStack_50 - *(float *)(this + 4));
  local_4c = *(float *)(this + 8) + fVar25 * fVar27;
  local_e8 = 0;
  dtNavMeshQuery::raycast
            (param_3,**(uint **)(this + 0x18),(float *)this,&local_54,param_4,&local_e4,afStack_e0,
             local_d4,(int *)&local_e8,0x20);
  if (((int)local_e8 < 2) || (local_e4 <= 0.99)) goto LAB_01193bb0;
  iVar10 = *(int *)(this + 0x20);
  uVar21 = *(ulong *)(this + 0x18);
  uVar20 = 0xffffffff;
  iVar17 = -1;
  lVar9 = (long)iVar10;
  do {
    lVar3 = lVar9 + -1;
    if (lVar9 < 1) break;
    bVar7 = false;
    lVar9 = (long)(int)local_e8;
    iVar16 = iVar17;
    uVar6 = local_e8;
    do {
      uVar6 = uVar6 - 1;
      puVar1 = &uStack_d8 + lVar9;
      lVar9 = lVar9 + -1;
      bVar8 = *(uint *)(uVar21 + lVar3 * 4) == *puVar1;
      iVar17 = (int)lVar3;
      uVar2 = uVar6;
      if (!bVar8) {
        iVar17 = iVar16;
        uVar2 = uVar20;
      }
      uVar20 = uVar2;
      bVar7 = (bool)(bVar7 | bVar8);
      iVar16 = iVar17;
    } while (0 < lVar9);
    lVar9 = lVar3;
  } while (!bVar7);
  if ((0 < (int)uVar20) && (iVar17 != -1)) {
    uVar6 = iVar10 - iVar17 & (iVar10 - iVar17 >> 0x1f ^ 0xffffffffU);
    uVar2 = *(int *)(this + 0x24) - uVar20;
    if ((int)(uVar6 + uVar20) <= *(int *)(this + 0x24)) {
      uVar2 = uVar6;
    }
    if (uVar2 != 0) {
      memmove((void *)(uVar21 + (long)(int)uVar20 * 4),(void *)(uVar21 + (long)iVar17 * 4),
              -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
    }
    uVar11 = (ulong)uVar20;
    if ((uVar20 < 8) ||
       ((uVar21 < (long)local_d4 + uVar11 * 4 && (local_d4 < (undefined8 *)(uVar21 + uVar11 * 4)))))
    {
      uVar12 = 0;
LAB_01193b84:
      lVar9 = uVar11 - uVar12;
      puVar13 = (undefined4 *)((long)local_d4 + uVar12 * 4);
      puVar14 = (undefined4 *)(uVar21 + uVar12 * 4);
      do {
        lVar9 = lVar9 + -1;
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (lVar9 != 0);
    }
    else {
      uVar12 = uVar11 & 0xfffffff8;
      puVar15 = (undefined8 *)((long)local_d4 + 0x10);
      puVar18 = (undefined8 *)(uVar21 + 0x10);
      uVar19 = uVar12;
      do {
        puVar5 = puVar15 + 0xffffffffffffffff;
        uVar22 = puVar15[0xfffffffffffffffe];
        uVar24 = puVar15[1];
        uVar23 = *puVar15;
        puVar15 = puVar15 + 4;
        uVar19 = uVar19 - 8;
        puVar18[0xffffffffffffffff] = *puVar5;
        puVar18[0xfffffffffffffffe] = uVar22;
        puVar18[1] = uVar24;
        *puVar18 = uVar23;
        puVar18 = puVar18 + 4;
      } while (uVar19 != 0);
      if (uVar12 != uVar11) goto LAB_01193b84;
    }
    iVar10 = uVar2 + uVar20;
  }
  *(int *)(this + 0x20) = iVar10;
LAB_01193bb0:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

