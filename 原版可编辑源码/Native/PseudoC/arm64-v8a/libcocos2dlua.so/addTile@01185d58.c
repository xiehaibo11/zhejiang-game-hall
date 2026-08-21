
/* dtNavMesh::addTile(unsigned char*, int, int, unsigned int, unsigned int*) */

void __thiscall
dtNavMesh::addTile(dtNavMesh *this,uchar *param_1,int param_2,int param_3,uint param_4,uint *param_5
                  )

{
  uchar *puVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  uchar *puVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  dtMeshTile *pdVar22;
  dtMeshTile *pdVar23;
  dtNavMesh *pdVar24;
  dtMeshTile *pdVar25;
  long *plVar26;
  long local_170 [32];
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  if (*(int *)param_1 != 0x444e4156) {
    uVar10 = 0x80000001;
    goto LAB_011862e8;
  }
  uVar10 = 0x80000004;
  if (*(int *)(param_1 + 4) != 7) {
    uVar10 = 0x80000002;
    goto LAB_011862e8;
  }
  lVar12 = *(long *)(this + 0x40);
  uVar15 = *(uint *)(this + 0x38) &
           *(int *)(param_1 + 8) * -0x72594cbd + *(int *)(param_1 + 0xc) * -0x27e9c7bf;
  lVar19 = *(long *)(lVar12 + (long)(int)uVar15 * 8);
  if (lVar19 != 0) {
    lVar21 = *(long *)(lVar19 + 8);
    if (lVar21 != 0) goto LAB_01185e00;
    do {
      do {
        lVar19 = *(long *)(lVar19 + 0x60);
        if (lVar19 == 0) goto LAB_01185e3c;
        lVar21 = *(long *)(lVar19 + 8);
      } while (lVar21 == 0);
LAB_01185e00:
    } while (((*(int *)(lVar21 + 8) != *(int *)(param_1 + 8)) ||
             (*(int *)(lVar21 + 0xc) != *(int *)(param_1 + 0xc))) ||
            (*(int *)(lVar21 + 0x10) != *(int *)(param_1 + 0x10)));
    uVar10 = 0x80000000;
    goto LAB_011862e8;
  }
LAB_01185e3c:
  if (param_4 == 0) {
    pdVar25 = *(dtMeshTile **)(this + 0x48);
    if (pdVar25 == (dtMeshTile *)0x0) goto LAB_011862e8;
    pdVar23 = pdVar25 + 0x60;
    *(undefined8 *)(this + 0x48) = *(undefined8 *)pdVar23;
    *(undefined8 *)pdVar23 = 0;
  }
  else {
    uVar4 = *(uint *)(this + 0x5c);
    uVar5 = *(uint *)(this + 0x60);
    uVar3 = param_4 >> (ulong)(uVar5 & 0x1f) & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    if (*(int *)(this + 0x30) <= (int)uVar3) goto LAB_011862e8;
    pdVar25 = (dtMeshTile *)(*(long *)(this + 0x50) + (long)(int)uVar3 * 0x68);
    pdVar23 = (dtMeshTile *)0x0;
    pdVar24 = this + 0x48;
    do {
      pdVar22 = pdVar23;
      pdVar23 = *(dtMeshTile **)pdVar24;
      if (pdVar23 == pdVar25) break;
      pdVar24 = (dtNavMesh *)(pdVar23 + 0x60);
    } while (pdVar23 != (dtMeshTile *)0x0);
    if (pdVar23 != pdVar25) goto LAB_011862e8;
    pdVar23 = (dtMeshTile *)(*(long *)(this + 0x50) + (long)(int)uVar3 * 0x68 + 0x60);
    pdVar24 = this + 0x48;
    if (pdVar22 != (dtMeshTile *)0x0) {
      pdVar24 = (dtNavMesh *)(pdVar22 + 0x60);
    }
    *(undefined8 *)pdVar24 = *(undefined8 *)pdVar23;
    *(uint *)pdVar25 =
         param_4 >> (ulong)(uVar5 + uVar4 & 0x1f) &
         (-1 << (ulong)(*(uint *)(this + 0x58) & 0x1f) ^ 0xffffffffU);
  }
  lVar19 = (long)(int)uVar15 * 8;
  puVar13 = param_1 + 100;
  *(undefined8 *)pdVar23 = *(undefined8 *)(lVar12 + lVar19);
  *(dtMeshTile **)(lVar12 + lVar19) = pdVar25;
  iVar18 = *(int *)(param_1 + 0x18);
  iVar11 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x24);
  iVar14 = *(int *)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x2c);
  iVar8 = *(int *)(param_1 + 0x30);
  lVar12 = (long)(*(int *)(param_1 + 0x1c) * 0xc);
  *(uchar **)(pdVar25 + 0x10) = puVar13 + lVar12;
  *(uchar **)(pdVar25 + 0x18) = puVar13;
  lVar19 = (long)(iVar18 << 5);
  puVar13 = puVar13 + lVar12 + lVar19;
  puVar1 = puVar13 + iVar11 * 0xc;
  *(uchar **)(pdVar25 + 0x20) = puVar13;
  *(uchar **)(pdVar25 + 0x28) = puVar1;
  puVar1 = puVar1 + iVar6 * 0xc;
  puVar2 = puVar1 + iVar14 * 0xc;
  *(uchar **)(pdVar25 + 0x30) = puVar1;
  *(uchar **)(pdVar25 + 0x38) = puVar2;
  *(uchar **)(pdVar25 + 0x40) = puVar2 + (iVar7 << 2);
  *(uchar **)(pdVar25 + 0x48) = puVar2 + (iVar7 << 2) + (iVar8 << 4);
  if (iVar8 << 4 == 0) {
    *(undefined8 *)(pdVar25 + 0x40) = 0;
  }
  uVar15 = iVar11 - 1;
  *(undefined4 *)(pdVar25 + 4) = 0;
  puVar13 = puVar13 + (long)(int)uVar15 * 0xc + 4;
  puVar13[0] = 0xff;
  puVar13[1] = 0xff;
  puVar13[2] = 0xff;
  puVar13[3] = 0xff;
  if (0 < (int)uVar15) {
    uVar16 = (ulong)uVar15;
    if (uVar15 == 1) {
      uVar17 = 0;
    }
    else {
      uVar20 = 0;
      uVar17 = uVar16 & 0xfffffffe;
      puVar13 = param_1 + lVar19 + lVar12 + 0x74;
      do {
        iVar18 = (int)uVar20;
        uVar20 = uVar20 + 2;
        *(int *)(puVar13 + -0xc) = iVar18 + 1;
        *(int *)puVar13 = (int)uVar20;
        puVar13 = puVar13 + 0x18;
      } while (uVar17 != uVar20);
      if (uVar17 == uVar16) goto LAB_0118600c;
    }
    puVar13 = param_1 + lVar19 + uVar17 * 0xc + lVar12 + 0x68;
    do {
      uVar17 = uVar17 + 1;
      *(int *)puVar13 = (int)uVar17;
      puVar13 = puVar13 + 0xc;
    } while (uVar16 != uVar17);
  }
LAB_0118600c:
  *(uchar **)(pdVar25 + 8) = param_1;
  *(uchar **)(pdVar25 + 0x50) = param_1;
  *(int *)(pdVar25 + 0x58) = param_2;
  *(int *)(pdVar25 + 0x5c) = param_3;
  connectIntLinks(this,pdVar25);
  baseOffMeshLinks(this,pdVar25);
  iVar18 = *(int *)(param_1 + 8);
  iVar11 = *(int *)(param_1 + 0xc);
  lVar12 = *(long *)(*(long *)(this + 0x40) +
                    (long)(int)(iVar18 * -0x72594cbd + iVar11 * -0x27e9c7bf & *(uint *)(this + 0x38)
                               ) * 8);
  if (lVar12 != 0) {
    uVar15 = 0;
    lVar19 = *(long *)(lVar12 + 8);
    while( true ) {
      if (((lVar19 == 0) || (*(int *)(lVar19 + 8) != iVar18)) ||
         ((0x1f < (int)uVar15 || (*(int *)(lVar19 + 0xc) != iVar11)))) {
        lVar12 = *(long *)(lVar12 + 0x60);
      }
      else {
        local_170[(int)uVar15] = lVar12;
        lVar12 = *(long *)(lVar12 + 0x60);
        uVar15 = uVar15 + 1;
      }
      if (lVar12 == 0) break;
      lVar19 = *(long *)(lVar12 + 8);
    }
    if (0 < (int)uVar15) {
      uVar16 = (ulong)uVar15;
      plVar26 = local_170;
      do {
        pdVar23 = (dtMeshTile *)*plVar26;
        if (pdVar23 != pdVar25) {
          connectExtLinks(this,pdVar25,pdVar23,-1);
          connectExtLinks(this,pdVar23,pdVar25,-1);
        }
        connectExtOffMeshLinks(this,pdVar25,pdVar23,-1);
        connectExtOffMeshLinks(this,pdVar23,pdVar25,-1);
        uVar16 = uVar16 - 1;
        plVar26 = plVar26 + 1;
      } while (uVar16 != 0);
    }
  }
  iVar18 = 0;
  do {
    iVar11 = *(int *)(param_1 + 8);
    iVar14 = *(int *)(param_1 + 0xc);
    switch(iVar18) {
    case 0:
      iVar11 = iVar11 + 1;
      break;
    case 1:
      iVar11 = iVar11 + 1;
    case 2:
      iVar14 = iVar14 + 1;
      break;
    case 3:
      iVar11 = iVar11 + -1;
      iVar14 = iVar14 + 1;
      break;
    case 4:
      iVar11 = iVar11 + -1;
      break;
    case 5:
      iVar11 = iVar11 + -1;
    case 6:
switchD_01186174_caseD_6:
      iVar14 = iVar14 + -1;
      break;
    case 7:
      iVar11 = iVar11 + 1;
      goto switchD_01186174_caseD_6;
    }
    lVar12 = *(long *)(*(long *)(this + 0x40) +
                      (long)(int)(iVar11 * -0x72594cbd + iVar14 * -0x27e9c7bf &
                                 *(uint *)(this + 0x38)) * 8);
    if (lVar12 != 0) {
      uVar15 = 0;
      lVar19 = *(long *)(lVar12 + 8);
      while( true ) {
        if (((lVar19 == 0) || (*(int *)(lVar19 + 8) != iVar11)) ||
           ((0x1f < (int)uVar15 || (*(int *)(lVar19 + 0xc) != iVar14)))) {
          lVar12 = *(long *)(lVar12 + 0x60);
        }
        else {
          local_170[(int)uVar15] = lVar12;
          lVar12 = *(long *)(lVar12 + 0x60);
          uVar15 = uVar15 + 1;
        }
        if (lVar12 == 0) break;
        lVar19 = *(long *)(lVar12 + 8);
      }
      if (0 < (int)uVar15) {
        uVar16 = (ulong)uVar15;
        uVar15 = iVar18 + 4U & 7;
        plVar26 = local_170;
        do {
          pdVar23 = (dtMeshTile *)*plVar26;
          connectExtLinks(this,pdVar25,pdVar23,iVar18);
          connectExtLinks(this,pdVar23,pdVar25,uVar15);
          connectExtOffMeshLinks(this,pdVar25,pdVar23,iVar18);
          connectExtOffMeshLinks(this,pdVar23,pdVar25,uVar15);
          uVar16 = uVar16 - 1;
          plVar26 = plVar26 + 1;
        } while (uVar16 != 0);
      }
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 != 8);
  if (param_5 != (uint *)0x0) {
    *param_5 = *(int *)pdVar25 << (ulong)(*(int *)(this + 0x5c) + *(uint *)(this + 0x60) & 0x1f) |
               (int)((ulong)((long)pdVar25 - *(long *)(this + 0x50)) >> 3) * -0x3b13b13b <<
               (ulong)(*(uint *)(this + 0x60) & 0x1f);
  }
  uVar10 = 0x40000000;
LAB_011862e8:
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

