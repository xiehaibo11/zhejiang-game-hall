
/* dtPathCorridor::optimizePathTopology(dtNavMeshQuery*, dtQueryFilter const*) */

void __thiscall
dtPathCorridor::optimizePathTopology
          (dtPathCorridor *this,dtNavMeshQuery *param_1,dtQueryFilter *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint local_cc;
  uint local_c8 [2];
  undefined8 auStack_c0 [15];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x20) < 3) {
    uVar9 = 0;
    goto LAB_01193dc8;
  }
  local_cc = 0;
  dtNavMeshQuery::initSlicedFindPath
            (param_1,**(uint **)(this + 0x18),(*(uint **)(this + 0x18))[*(int *)(this + 0x20) + -1],
             (float *)this,(float *)(this + 0xc),param_2,0);
  dtNavMeshQuery::updateSlicedFindPath(param_1,0x20,(int *)0x0);
  uVar8 = dtNavMeshQuery::finalizeSlicedFindPathPartial
                    (param_1,*(uint **)(this + 0x18),*(int *)(this + 0x20),local_c8,(int *)&local_cc
                     ,0x20);
  uVar9 = 0;
  if (((uVar8 >> 0x1e & 1) == 0) || ((int)local_cc < 1)) goto LAB_01193dc8;
  iVar11 = *(int *)(this + 0x20);
  puVar19 = *(uint **)(this + 0x18);
  uVar8 = 0xffffffff;
  iVar16 = -1;
  lVar10 = (long)iVar11;
  do {
    lVar2 = lVar10 + -1;
    if (lVar10 < 1) break;
    bVar6 = false;
    lVar10 = (long)(int)local_cc;
    iVar15 = iVar16;
    uVar5 = local_cc;
    do {
      uVar5 = uVar5 - 1;
      lVar7 = lVar10 + -1;
      lVar10 = lVar10 + -1;
      iVar16 = (int)lVar2;
      uVar1 = uVar5;
      if (puVar19[lVar2] != local_c8[lVar7]) {
        iVar16 = iVar15;
        uVar1 = uVar8;
      }
      uVar8 = uVar1;
      bVar6 = (bool)(bVar6 | puVar19[lVar2] == local_c8[lVar7]);
      iVar15 = iVar16;
    } while (0 < lVar10);
    lVar10 = lVar2;
  } while (!bVar6);
  if ((0 < (int)uVar8) && (iVar16 != -1)) {
    uVar5 = iVar11 - iVar16 & (iVar11 - iVar16 >> 0x1f ^ 0xffffffffU);
    uVar1 = *(int *)(this + 0x24) - uVar8;
    if ((int)(uVar5 + uVar8) <= *(int *)(this + 0x24)) {
      uVar1 = uVar5;
    }
    if (uVar1 != 0) {
      memmove(puVar19 + (int)uVar8,puVar19 + iVar16,
              -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
    }
    uVar12 = (ulong)uVar8;
    if ((uVar8 < 8) || ((puVar19 < local_c8 + uVar12 && (local_c8 < puVar19 + uVar12)))) {
      uVar13 = 0;
LAB_01193d98:
      lVar10 = uVar12 - uVar13;
      puVar14 = local_c8 + uVar13;
      puVar19 = puVar19 + uVar13;
      do {
        lVar10 = lVar10 + -1;
        *puVar19 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar19 = puVar19 + 1;
      } while (lVar10 != 0);
    }
    else {
      uVar13 = uVar12 & 0xfffffff8;
      puVar17 = auStack_c0 + 1;
      puVar14 = puVar19 + 4;
      uVar18 = uVar13;
      do {
        puVar4 = puVar17 + -1;
        uVar9 = puVar17[-2];
        uVar21 = puVar17[1];
        uVar20 = *puVar17;
        puVar17 = puVar17 + 4;
        uVar18 = uVar18 - 8;
        *(undefined8 *)(puVar14 + -2) = *puVar4;
        *(undefined8 *)(puVar14 + -4) = uVar9;
        *(undefined8 *)(puVar14 + 2) = uVar21;
        *(undefined8 *)puVar14 = uVar20;
        puVar14 = puVar14 + 8;
      } while (uVar18 != 0);
      if (uVar13 != uVar12) goto LAB_01193d98;
    }
    iVar11 = uVar1 + uVar8;
  }
  uVar9 = 1;
  *(int *)(this + 0x20) = iVar11;
LAB_01193dc8:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

