
long FUN_00c1fafc(long param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  ushort uVar10;
  size_t __n;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  char *pcVar20;
  undefined1 *puVar21;
  void *pvVar22;
  ulong uVar23;
  undefined2 uVar24;
  undefined8 uVar25;
  long lVar26;
  long *plVar27;
  uint *puVar28;
  uint *puVar29;
  byte *pbVar30;
  byte *pbVar31;
  uint uVar32;
  uint *puVar33;
  long local_48;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined1 auStack_8 [8];
  
  puVar21 = *(undefined1 **)(param_1 + 0x20);
  *(undefined1 **)(param_1 + 0x20) = puVar21 + 1;
  uVar4 = *puVar21;
  *(undefined1 **)(param_1 + 0x20) = puVar21 + 2;
  uVar7 = puVar21[1];
  *(undefined1 **)(param_1 + 0x20) = puVar21 + 3;
  uVar8 = puVar21[2];
  plVar27 = (long *)(param_1 + 0x20);
  *plVar27 = (long)(puVar21 + 4);
  bVar9 = puVar21[3];
  uVar11 = FUN_00c1b56c(plVar27);
  iVar12 = FUN_00c1b56c(plVar27);
  uVar13 = FUN_00c1b56c(plVar27);
  uVar15 = uVar13 + 1;
  if ((*(uint *)(param_1 + 0xac) >> 1 & 1) == 0) {
    local_20 = FUN_00c1b56c(plVar27);
    if (local_20 == 0) {
      local_1c = 0;
      local_18 = 0;
    }
    else {
      local_18 = FUN_00c1b56c(plVar27);
      local_1c = FUN_00c1b56c(plVar27);
    }
  }
  else {
    local_1c = 0;
    local_18 = 0;
    local_20 = 0;
  }
  uVar32 = (uVar15 + uVar11 * 2) * 4 + 0x6f & 0xfffffff8;
  uVar16 = uVar32 + iVar12 * 8;
  uVar2 = uVar16 + (bVar9 + 1 & 0xfffffffe) * 2;
  lVar17 = FUN_00c1a314(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(lVar17 + 0xb) = uVar8;
  pvVar3 = (void *)(lVar17 + (ulong)uVar16);
  *(undefined1 *)(lVar17 + 0x3d) = uVar4;
  puVar33 = (uint *)(lVar17 + (ulong)uVar32);
  *(undefined1 *)(lVar17 + 9) = 7;
  *(undefined1 *)(lVar17 + 10) = uVar7;
  *(byte *)(lVar17 + 0x3c) = bVar9;
  uVar25 = *(undefined8 *)(param_1 + 0x78);
  *(uint *)(lVar17 + 0x38) = local_20 + uVar2;
  *(undefined8 *)(lVar17 + 0x40) = uVar25;
  *(uint *)(lVar17 + 0xc) = uVar15;
  *(uint **)(lVar17 + 0x20) = puVar33;
  *(void **)(lVar17 + 0x28) = pvVar3;
  *(undefined4 *)(lVar17 + 0x30) = 0;
  *(int *)(lVar17 + 0x34) = iVar12;
  *(undefined2 *)(lVar17 + 0x3e) = 0;
  *(undefined4 *)(lVar17 + (ulong)uVar32 + (ulong)(uVar11 + 1) * -8) = 0;
  __n = ((ulong)uVar13 & 0x3fffffff) * 4;
  pvVar22 = *(void **)(param_1 + 0x20);
  uVar16 = 0x5c;
  if ((*(byte *)(lVar17 + 0x3d) & 2) == 0) {
    uVar16 = 0x59;
  }
  *(uint *)(lVar17 + 0x68) = uVar16 | (uint)*(byte *)(lVar17 + 0xb) << 8;
  *(void **)(param_1 + 0x20) = (void *)((long)pvVar22 + __n);
  memcpy((uint *)(lVar17 + 0x6c),pvVar22,__n);
  if (((*(uint *)(param_1 + 0xac) & 1) != 0) && (1 < uVar15)) {
    puVar28 = (uint *)(lVar17 + 0x6c);
    do {
      uVar15 = (*puVar28 & 0xff00ff00) >> 8 | (*puVar28 & 0xff00ff) << 8;
      puVar29 = puVar28 + 1;
      *puVar28 = uVar15 >> 0x10 | uVar15 << 0x10;
      puVar28 = puVar29;
    } while (puVar29 != (uint *)(lVar17 + ((ulong)(uVar13 - 1) + 0x1c) * 4));
  }
  if (bVar9 != 0) {
    pvVar22 = *(void **)(param_1 + 0x20);
    *(void **)(param_1 + 0x20) = (void *)((long)pvVar22 + (ulong)bVar9 * 2);
    memcpy(pvVar3,pvVar22,(ulong)bVar9 * 2);
    lVar26 = 0;
    if ((*(uint *)(param_1 + 0xac) & 1) != 0) {
      do {
        uVar10 = *(ushort *)((long)pvVar3 + lVar26 * 2);
        *(ushort *)((long)pvVar3 + lVar26 * 2) = uVar10 >> 8 | uVar10 << 8;
        lVar26 = lVar26 + 1;
      } while ((uint)lVar26 < (uint)bVar9);
    }
    puVar33 = *(uint **)(lVar17 + 0x20);
  }
  if (uVar11 != 0) {
    lVar26 = 0;
    do {
      while (uVar15 = FUN_00c1b56c(plVar27), 4 < uVar15) {
        lVar18 = *(long *)(param_1 + 0x20);
        *(ulong *)(param_1 + 0x20) = lVar18 + (ulong)(uVar15 - 5);
        uVar25 = FUN_00bfba1c(*(undefined8 *)(param_1 + 8),lVar18,(ulong)(uVar15 - 5));
        *(undefined8 *)(puVar33 + (ulong)uVar11 * -2 + lVar26 * 2) = uVar25;
LAB_00c1fd1c:
        lVar26 = lVar26 + 1;
        if (uVar11 <= (uint)lVar26) goto LAB_00c1fd84;
      }
      if (uVar15 == 1) {
        uVar15 = FUN_00c1b56c(plVar27);
        uVar16 = FUN_00c1b56c(plVar27);
        if (uVar16 == 0) {
          local_48 = FUN_00c1b840(*(undefined8 *)(param_1 + 8),uVar15,0);
          if (uVar15 == 0) {
            *(long *)(puVar33 + (ulong)uVar11 * -2 + lVar26 * 2) = local_48;
            goto LAB_00c1fd1c;
          }
LAB_00c1ff6c:
          uVar32 = 0;
          lVar18 = *(long *)(local_48 + 0x10);
          do {
            uVar32 = uVar32 + 1;
            FUN_00c1f7e8(param_1,lVar18);
            lVar18 = lVar18 + 8;
          } while (uVar32 < uVar15);
          if (uVar16 != 0) goto LAB_00c1ff9c;
        }
        else {
          if (uVar16 == 1) {
            iVar1 = 1;
          }
          else {
            iVar1 = ((uint)LZCOUNT(uVar16 - 1) ^ 0x1f) + 1;
          }
          local_48 = FUN_00c1b840(*(undefined8 *)(param_1 + 8),uVar15,iVar1);
          if (uVar15 != 0) goto LAB_00c1ff6c;
LAB_00c1ff9c:
          uVar15 = 0;
          do {
            uVar15 = uVar15 + 1;
            FUN_00c1f7e8(param_1,auStack_8);
            uVar25 = FUN_00c1bdd4(*(undefined8 *)(param_1 + 8),local_48,auStack_8);
            FUN_00c1f7e8(param_1,uVar25);
          } while (uVar15 < uVar16);
        }
        *(long *)(puVar33 + (ulong)uVar11 * -2 + lVar26 * 2) = local_48;
        goto LAB_00c1fd1c;
      }
      lVar18 = *(long *)(param_1 + 8);
      if (uVar15 != 0) {
        if (uVar15 == 4) {
          lVar18 = FUN_00c1a314(lVar18,0x20);
          *(undefined1 *)(lVar18 + 9) = 10;
          *(undefined2 *)(lVar18 + 10) = 0x10;
          *(long *)(puVar33 + (ulong)uVar11 * -2 + lVar26 * 2) = lVar18;
          uVar14 = FUN_00c1b56c(plVar27);
          *(undefined4 *)(lVar18 + 0x10) = uVar14;
          uVar14 = FUN_00c1b56c(plVar27);
          *(undefined4 *)(lVar18 + 0x14) = uVar14;
          uVar14 = FUN_00c1b56c(plVar27);
          *(undefined4 *)(lVar18 + 0x18) = uVar14;
          uVar14 = FUN_00c1b56c(plVar27);
          *(undefined4 *)(lVar18 + 0x1c) = uVar14;
        }
        else {
          uVar24 = 0xc;
          if (uVar15 == 2) {
            uVar24 = 0xb;
          }
          lVar18 = FUN_00c1a314(lVar18,0x18);
          *(undefined1 *)(lVar18 + 9) = 10;
          *(undefined2 *)(lVar18 + 10) = uVar24;
          *(long *)(puVar33 + (ulong)uVar11 * -2 + lVar26 * 2) = lVar18;
          uVar14 = FUN_00c1b56c(plVar27);
          *(undefined4 *)(lVar18 + 0x10) = uVar14;
          uVar14 = FUN_00c1b56c(plVar27);
          *(undefined4 *)(lVar18 + 0x14) = uVar14;
        }
        goto LAB_00c1fd1c;
      }
      uVar23 = *(ulong *)(lVar18 + 0x28);
      if (uVar23 <= (ulong)((long)*(int *)(param_1 + 0x74) + *(long *)(lVar18 + 0x38))) {
                    /* WARNING: Subroutine does not return */
        FUN_00c1f8a8(lVar18,*(undefined8 *)(param_1 + 0x80),0xb64);
      }
      *(ulong *)(lVar18 + 0x28) = uVar23 - 8;
      *(ulong *)(puVar33 + (ulong)uVar11 * -2 + lVar26 * 2) =
           *(ulong *)(uVar23 - 8) & 0x7fffffffffff;
      lVar26 = lVar26 + 1;
    } while ((uint)lVar26 < uVar11);
LAB_00c1fd84:
    puVar33 = *(uint **)(lVar17 + 0x20);
  }
  *(uint *)(lVar17 + 0x30) = uVar11;
  if (iVar12 != 0) {
    puVar28 = puVar33;
    do {
      while( true ) {
        pbVar30 = *(byte **)(param_1 + 0x20) + 1;
        bVar9 = **(byte **)(param_1 + 0x20);
        uVar15 = (uint)(bVar9 >> 1);
        if (0x3f < uVar15) {
          uVar15 = uVar15 & 0x3f;
          uVar11 = 0xffffffff;
          pbVar31 = pbVar30;
          do {
            pbVar30 = pbVar31 + 1;
            bVar6 = *pbVar31;
            uVar11 = uVar11 + 7;
            uVar15 = uVar15 | (bVar6 & 0x7f) << (ulong)(uVar11 & 0x1f);
            pbVar31 = pbVar30;
          } while ((char)bVar6 < '\0');
        }
        *(byte **)(param_1 + 0x20) = pbVar30;
        *puVar28 = uVar15;
        if ((bVar9 & 1) == 0) break;
        puVar29 = puVar28 + 2;
        uVar15 = FUN_00c1b56c(plVar27);
        puVar28[1] = uVar15;
        puVar28 = puVar29;
        if (puVar29 == puVar33 + (ulong)(iVar12 - 1) * 2 + 2) goto LAB_00c1fdfc;
      }
      puVar28[1] = 0xfff90000;
      puVar28 = puVar28 + 2;
    } while (puVar28 != puVar33 + (ulong)(iVar12 - 1) * 2 + 2);
  }
LAB_00c1fdfc:
  *(undefined4 *)(lVar17 + 0x48) = local_18;
  *(int *)(lVar17 + 0x4c) = local_1c;
  if (local_20 == 0) {
    *(undefined8 *)(lVar17 + 0x50) = 0;
    *(undefined8 *)(lVar17 + 0x58) = 0;
    *(undefined8 *)(lVar17 + 0x60) = 0;
  }
  else {
    uVar15 = 0;
    if ((0xff < local_1c) && (uVar15 = 2, local_1c < 0x10000)) {
      uVar15 = 1;
    }
    pvVar22 = *(void **)(param_1 + 0x20);
    pvVar3 = (void *)(lVar17 + (ulong)uVar2);
    *(void **)(lVar17 + 0x50) = pvVar3;
    *(ulong *)(lVar17 + 0x58) = lVar17 + (ulong)(uVar13 << (ulong)uVar15) + (ulong)uVar2;
    *(ulong *)(param_1 + 0x20) = (long)pvVar22 + (ulong)local_20;
    memcpy(pvVar3,pvVar22,(ulong)local_20);
    if (((*(uint *)(param_1 + 0xac) & 1) != 0) && (0xff < *(int *)(lVar17 + 0x4c))) {
      iVar12 = *(int *)(lVar17 + 0xc);
      if (*(int *)(lVar17 + 0x4c) < 0x10000) {
        if (iVar12 != 1) {
          lVar26 = 0;
          do {
            uVar10 = *(ushort *)((long)pvVar3 + lVar26 * 2);
            *(ushort *)((long)pvVar3 + lVar26 * 2) = uVar10 >> 8 | uVar10 << 8;
            lVar26 = lVar26 + 1;
          } while ((uint)lVar26 < iVar12 - 1U);
        }
      }
      else {
        lVar26 = 0;
        if (iVar12 != 1) {
          do {
            uVar15 = *(uint *)((long)pvVar3 + lVar26 * 4);
            uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
            *(uint *)((long)pvVar3 + lVar26 * 4) = uVar15 >> 0x10 | uVar15 << 0x10;
            lVar26 = lVar26 + 1;
          } while ((uint)lVar26 < iVar12 - 1U);
        }
      }
    }
    uVar15 = (uint)*(byte *)(lVar17 + 0x3c);
    pcVar19 = *(char **)(lVar17 + 0x58);
    pcVar20 = pcVar19;
    if (*(byte *)(lVar17 + 0x3c) != 0) {
      do {
        do {
          pcVar19 = pcVar20 + 1;
          cVar5 = *pcVar20;
          pcVar20 = pcVar19;
        } while (cVar5 != '\0');
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    *(char **)(lVar17 + 0x60) = pcVar19;
  }
  return lVar17;
}

