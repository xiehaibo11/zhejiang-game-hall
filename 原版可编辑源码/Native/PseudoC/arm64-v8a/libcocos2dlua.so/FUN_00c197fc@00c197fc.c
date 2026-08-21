
undefined8 FUN_00c197fc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  
  plVar13 = *(long **)(param_1 + 0x10);
  switch(*(undefined1 *)((long)plVar13 + 0x31)) {
  case 0:
    lVar9 = plVar13[0x19];
    plVar13[9] = 0;
    plVar13[10] = 0;
    plVar13[0xb] = 0;
    if ((*(byte *)(lVar9 + 8) & 3) != 0) {
      FUN_00c18e3c(plVar13);
      lVar9 = plVar13[0x19];
    }
    if ((*(byte *)(*(long *)(lVar9 + 0x48) + 8) & 3) != 0) {
      FUN_00c18e3c(plVar13);
    }
    if ((0xfffffff6 < (int)(plVar13[0x1a] >> 0x2f) + 4U) &&
       ((*(byte *)((plVar13[0x1a] & 0x7fffffffffffU) + 8) & 3) != 0)) {
      FUN_00c18e3c(plVar13);
    }
    FUN_00c18f20(plVar13);
    *(undefined1 *)((long)plVar13 + 0x31) = 1;
    return 0;
  case 1:
    if (plVar13[9] != 0) {
      uVar14 = FUN_00c18f7c(plVar13);
      return uVar14;
    }
    uVar14 = 0;
    *(undefined1 *)((long)plVar13 + 0x31) = 2;
    break;
  case 2:
    if (plVar13[0x2c] != 0) {
      return 0x800000000000;
    }
    for (plVar6 = (long *)plVar13[0x23]; plVar6 != plVar13 + 0x20; plVar6 = (long *)plVar6[3]) {
      if ((((*(byte *)(plVar6 + 1) & 7) == 0) &&
          (0xfffffff6 < (int)((long)*(ulong *)plVar6[4] >> 0x2f) + 4U)) &&
         ((*(byte *)((*(ulong *)plVar6[4] & 0x7fffffffffff) + 8) & 3) != 0)) {
        FUN_00c18e3c(plVar13);
      }
    }
    while (plVar13[9] != 0) {
      FUN_00c18f7c(plVar13);
    }
    plVar13[9] = plVar13[0xb];
    plVar13[0xb] = 0;
    if ((*(byte *)(param_1 + 8) & 3) != 0) {
      FUN_00c18e3c(plVar13,param_1);
    }
    FUN_00c18f20(plVar13);
    lVar9 = plVar13[9];
    while (lVar9 != 0) {
      FUN_00c18f7c(plVar13);
      lVar9 = plVar13[9];
    }
    lVar9 = plVar13[10];
    plVar13[9] = lVar9;
    plVar13[10] = 0;
    while (lVar9 != 0) {
      FUN_00c18f7c(plVar13);
      lVar9 = plVar13[9];
    }
    lVar9 = FUN_00c1971c(plVar13,0);
    plVar16 = (long *)plVar13[0xc];
    plVar6 = plVar16;
    if (plVar16 != (long *)0x0) {
      do {
        plVar6 = (long *)*plVar6;
        *(byte *)(plVar6 + 1) = *(byte *)(plVar13 + 6) & 3 | *(byte *)(plVar6 + 1) & 0xf8;
        FUN_00c18e3c(plVar13,plVar6);
      } while (plVar16 != plVar6);
    }
    lVar15 = 0;
    lVar7 = plVar13[9];
    while (lVar7 != 0) {
      lVar7 = FUN_00c18f7c(plVar13);
      lVar15 = lVar15 + lVar7;
      lVar7 = plVar13[9];
    }
    for (lVar7 = plVar13[0xb]; lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x18)) {
      if (((*(byte *)(lVar7 + 8) >> 4 & 1) != 0) && (*(int *)(lVar7 + 0x30) != 0)) {
        lVar8 = 0;
        lVar12 = ((ulong)(*(int *)(lVar7 + 0x30) - 1) + 1) * 8;
        do {
          while( true ) {
            puVar2 = (undefined8 *)(lVar8 + *(long *)(lVar7 + 0x10));
            uVar10 = *(ulong *)(lVar8 + *(long *)(lVar7 + 0x10));
            iVar5 = (int)((long)uVar10 >> 0x2f);
            if (0xfffffff6 < iVar5 + 4U) break;
LAB_00c19bd4:
            lVar8 = lVar8 + 8;
            if (lVar8 == lVar12) goto LAB_00c19c24;
          }
          uVar10 = uVar10 & 0x7fffffffffff;
          if (iVar5 == -5) {
            *(byte *)(uVar10 + 8) = *(byte *)(uVar10 + 8) & 0xfc;
            goto LAB_00c19bd4;
          }
          if ((*(byte *)(uVar10 + 8) & 3) == 0) {
            if ((iVar5 != -0xd) || ((*(byte *)(uVar10 + 8) >> 3 & 1) == 0)) goto LAB_00c19bd4;
            *puVar2 = 0xffffffffffffffff;
          }
          else {
            *puVar2 = 0xffffffffffffffff;
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != lVar12);
      }
LAB_00c19c24:
      uVar3 = *(uint *)(lVar7 + 0x34);
      if (uVar3 != 0) {
        lVar8 = *(long *)(lVar7 + 0x28);
        uVar10 = 0;
        do {
          lVar12 = uVar10 * 0x18;
          if (*(long *)(lVar8 + lVar12) != -1) {
            uVar11 = *(ulong *)(lVar8 + lVar12 + 8);
            iVar5 = (int)((long)uVar11 >> 0x2f);
            if (iVar5 + 4U < 0xfffffff7) {
LAB_00c19c7c:
              iVar5 = (int)((long)*(ulong *)(lVar8 + lVar12) >> 0x2f);
              if (0xfffffff6 < iVar5 + 4U) {
                uVar11 = *(ulong *)(lVar8 + lVar12) & 0x7fffffffffff;
                if (iVar5 == -5) {
                  *(byte *)(uVar11 + 8) = *(byte *)(uVar11 + 8) & 0xfc;
                }
                else if (((*(byte *)(uVar11 + 8) & 3) != 0) ||
                        ((iVar5 == -0xd && ((*(byte *)(uVar11 + 8) >> 3 & 1) != 0))))
                goto LAB_00c19d0c;
              }
            }
            else {
              uVar11 = uVar11 & 0x7fffffffffff;
              if (iVar5 == -5) {
                *(byte *)(uVar11 + 8) = *(byte *)(uVar11 + 8) & 0xfc;
                goto LAB_00c19c7c;
              }
              if ((*(byte *)(uVar11 + 8) & 3) == 0) goto LAB_00c19c7c;
LAB_00c19d0c:
              *(undefined8 *)(lVar8 + lVar12) = 0xffffffffffffffff;
            }
          }
          uVar1 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar1;
        } while (uVar1 <= uVar3);
      }
    }
    FUN_00c1a548(param_1,plVar13 + 0x11);
    *(undefined4 *)((long)plVar13 + 0x34) = 0;
    bVar4 = *(byte *)(plVar13 + 6);
    plVar13[8] = (long)(plVar13 + 7);
    *(byte *)(plVar13 + 6) = bVar4 ^ 3;
    *(byte *)(plVar13 + 0x16) = bVar4 ^ 3;
    plVar13[0xe] = (plVar13[4] - lVar9) - lVar15;
    *(undefined1 *)((long)plVar13 + 0x31) = 3;
    uVar14 = 0;
    break;
  case 3:
    uVar3 = *(uint *)((long)plVar13 + 0x34);
    *(uint *)((long)plVar13 + 0x34) = uVar3 + 1;
    lVar9 = plVar13[4];
    FUN_00c18d50(plVar13,*plVar13 + (ulong)uVar3 * 8,0xffffffff);
    if (*(uint *)(plVar13 + 1) < *(uint *)((long)plVar13 + 0x34)) {
      *(undefined1 *)((long)plVar13 + 0x31) = 4;
    }
    plVar13[0xe] = (plVar13[4] + plVar13[0xe]) - lVar9;
    return 10;
  case 4:
    lVar15 = plVar13[4];
    uVar14 = 400;
    plVar6 = (long *)FUN_00c18d50(plVar13,plVar13[8],0x28);
    lVar9 = *plVar6;
    plVar13[8] = (long)plVar6;
    plVar13[0xe] = (plVar13[4] + plVar13[0xe]) - lVar15;
    if (lVar9 == 0) {
      uVar3 = *(uint *)(plVar13 + 1);
      if ((*(uint *)((long)plVar13 + 0xc) <= uVar3 >> 2) && (0x1ff < uVar3)) {
        FUN_00bfb938(param_1,uVar3 >> 1);
      }
      if (plVar13[0xc] == 0) {
        *(undefined1 *)((long)plVar13 + 0x31) = 0;
        uVar14 = 400;
        plVar13[0xd] = 0;
      }
      else {
        uVar14 = 400;
        *(undefined1 *)((long)plVar13 + 0x31) = 5;
        *(undefined1 *)((long)plVar13 + 0x32) = 1;
      }
    }
    break;
  case 5:
    if (plVar13[0xc] == 0) {
      if (*(char *)((long)plVar13 + 0x32) == '\0') {
        FUN_00c1c760(param_1,*(undefined8 *)(plVar13[0x2d] + 0x20));
      }
      *(undefined1 *)((long)plVar13 + 0x31) = 0;
      uVar14 = 0;
      plVar13[0xd] = 0;
    }
    else {
      uVar14 = 0x800000000000;
      if (plVar13[0x2c] == 0) {
        uVar14 = 100;
        FUN_00c19538(param_1);
        if (100 < (ulong)plVar13[0xe]) {
          plVar13[0xe] = plVar13[0xe] - 100;
        }
      }
    }
    break;
  default:
    uVar14 = 0;
  }
  return uVar14;
}

