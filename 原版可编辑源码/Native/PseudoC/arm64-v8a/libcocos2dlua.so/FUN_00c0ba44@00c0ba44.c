
void FUN_00c0ba44(long *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ulong *puVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  int local_7c;
  ulong local_38;
  undefined8 local_30;
  uint local_28;
  int local_24;
  int local_20;
  int local_18;
  undefined4 uStack_14;
  uint local_10;
  int local_c;
  int local_8;
  
  lVar16 = *param_1;
  lVar14 = param_1[0xe];
  uVar11 = *(uint *)(lVar16 + 0x34);
  uVar7 = FUN_00c07f70(lVar16,uVar11 << 8 | 0x34);
  *param_2 = uVar11;
  param_2[2] = 0xc;
  param_2[3] = 0xffffffff;
  param_2[4] = 0xffffffff;
  FUN_00c07f38(lVar16,1);
  *(int *)(lVar16 + 0x34) = *(int *)(lVar16 + 0x34) + 1;
  FUN_00c07cfc(param_1,0x7b);
  iVar8 = *(int *)((long)param_1 + 0x34);
  if (iVar8 == 0x7d) {
    local_7c = 0;
    uVar12 = 1;
    bVar3 = false;
    FUN_00c086ac(param_1,0x7d,0x7b,(int)lVar14);
    uVar17 = 0;
    bVar4 = false;
  }
  else {
    local_7c = 0;
    uVar12 = 1;
    bVar4 = false;
    bVar3 = false;
    uVar17 = 0;
    do {
      if (iVar8 == 0x5b) {
        FUN_00c079c0(param_1);
        FUN_00c0ad38(param_1,&local_30,0);
        if (local_24 == local_20) {
          FUN_00c08060(*param_1,&local_30);
        }
        else {
          FUN_00c08cac();
        }
        if (*(int *)((long)param_1 + 0x34) != 0x5d) {
                    /* WARNING: Subroutine does not return */
          FUN_00c07c88(param_1,0x5d);
        }
        FUN_00c079c0();
        if (local_28 < 5) {
          if (local_28 != 4) goto LAB_00c0bda4;
LAB_00c0bf2c:
          if ((int)((long)local_30 >> 0x2f) == -0xe) {
            bVar5 = (int)local_30 == 0;
          }
          else {
            bVar5 = (local_30 & 0x7fffffffffffffff) == 0;
          }
          if (!bVar5) goto LAB_00c0bda4;
          bVar3 = true;
        }
        else {
          FUN_00c08d98(lVar16,param_2 + 1,param_2 + 2,&local_30);
          if (local_28 == 4) goto LAB_00c0bf2c;
LAB_00c0bda4:
          local_7c = local_7c + 1;
        }
        bVar5 = false;
        FUN_00c07cfc(param_1,0x3d);
      }
      else if (((iVar8 == 0x10a) || (iVar8 == 0x11f)) &&
              (iVar8 = FUN_00c07a1c(param_1), iVar8 == 0x3d)) {
        local_30 = local_30 & 0xffffffff00000000;
        local_7c = local_7c + 1;
        local_28 = 3;
        bVar5 = false;
        local_24 = -1;
        local_20 = -1;
        local_30 = FUN_00c07cb4(param_1);
        FUN_00c07cfc(param_1,0x3d);
      }
      else {
        bVar3 = true;
        local_24 = -1;
        bVar5 = true;
        local_20 = -1;
        local_28 = 4;
        local_30 = CONCAT44(0xfff90000,uVar12);
        uVar12 = uVar12 + 1;
      }
      FUN_00c0ad38(param_1,&local_18,0);
      if (local_28 - 1 < 4) {
        if (local_28 != 3) {
          if (4 < local_10) goto LAB_00c0bc0c;
          if (local_c == local_8) {
            if (uVar17 == 0) goto LAB_00c0bf60;
            if (2 < local_28) goto LAB_00c0bca0;
            goto LAB_00c0bdc4;
          }
          goto LAB_00c0bb4c;
        }
        if (uVar17 == 0) {
LAB_00c0bf60:
          uVar1 = uVar12;
          if (!bVar3) {
            uVar1 = 0;
          }
          iVar8 = 0;
          if (local_7c != 0) {
            if (local_7c == 1) {
              iVar8 = 1;
            }
            else {
              iVar8 = ((uint)LZCOUNT(local_7c + -1) ^ 0x1f) + 1;
            }
          }
          uVar17 = FUN_00c1b840(*(undefined8 *)(lVar16 + 0x10),uVar1,iVar8);
          iVar8 = FUN_00c07b10(lVar16,uVar17,0xfffffff4);
          *(uint *)(*(long *)(lVar16 + 0x48) + (ulong)uVar7 * 8) =
               uVar11 << 8 | 0x35 | iVar8 << 0x10;
          if (local_28 < 3) {
LAB_00c0bdc4:
            local_38 = ~((ulong)local_28 << 0x2f);
          }
          else {
            if (local_28 == 3) goto LAB_00c0bcfc;
LAB_00c0bca0:
            local_38 = local_30;
          }
          puVar9 = (ulong *)FUN_00c1bdd4(*(undefined8 *)(lVar16 + 0x10),uVar17,&local_38);
          bVar2 = *(byte *)(uVar17 + 8);
        }
        else {
LAB_00c0bcfc:
          local_38 = local_30 | 0xfffd800000000000;
          puVar9 = (ulong *)FUN_00c1bdd4(*(undefined8 *)(lVar16 + 0x10),uVar17,&local_38);
          bVar2 = *(byte *)(uVar17 + 8);
        }
        if ((bVar2 >> 2 & 1) != 0) {
          lVar13 = *(long *)(*(long *)(lVar16 + 0x10) + 0x10);
          *(byte *)(uVar17 + 8) = bVar2 & 0xfb;
          *(undefined8 *)(uVar17 + 0x18) = *(undefined8 *)(lVar13 + 0x50);
          *(ulong *)(lVar13 + 0x50) = uVar17;
        }
        if ((4 < local_10) || (local_c != local_8)) {
          bVar5 = false;
          *puVar9 = uVar17 | 0xfffa000000000000;
          bVar4 = true;
          goto LAB_00c0bc0c;
        }
        if (local_10 < 3) {
          bVar5 = false;
          *puVar9 = ~((ulong)local_10 << 0x2f);
        }
        else if (local_10 == 3) {
          bVar5 = false;
          *puVar9 = CONCAT44(uStack_14,local_18) | 0xfffd800000000000;
        }
        else {
          bVar5 = false;
          *puVar9 = CONCAT44(uStack_14,local_18);
        }
      }
      else {
LAB_00c0bc0c:
        if (local_10 != 0xd) {
LAB_00c0bb4c:
          bVar5 = false;
          FUN_00c08cac(lVar16,&local_18);
        }
        if (local_28 < 5) {
          FUN_00c08d98(lVar16,param_2 + 1,param_2 + 2,&local_30);
        }
        FUN_00c08e38(lVar16,param_2,&local_18);
      }
      iVar8 = *(int *)((long)param_1 + 0x34);
      *(uint *)(lVar16 + 0x34) = uVar11 + 1;
      if ((iVar8 != 0x2c) && (iVar8 != 0x3b)) break;
      FUN_00c079c0(param_1);
      iVar8 = *(int *)((long)param_1 + 0x34);
    } while (iVar8 != 0x7d);
    FUN_00c086ac(param_1,0x7d,0x7b,(int)lVar14);
    if (bVar5) {
      local_18 = uVar12 - 1;
      uVar1 = *(int *)(lVar16 + 0x28) - 1;
      local_c = -1;
      local_8 = -1;
      local_10 = 4;
      puVar15 = (uint *)(*(long *)(lVar16 + 0x48) + (ulong)uVar1 * 8);
      uStack_14 = 0x43300000;
      if (0x100 < uVar12) {
        *(uint *)(lVar16 + 0x28) = uVar1;
        puVar15 = puVar15 + -2;
      }
      iVar8 = FUN_00c07b70(lVar16,&local_18);
      *(undefined1 *)((long)puVar15 + -5) = 0;
      *puVar15 = (uVar11 + 1) * 0x100 | 0x3f | iVar8 << 0x10;
    }
  }
  if (*(int *)(lVar16 + 0x28) - 1U == uVar7) {
    *param_2 = uVar7;
    *(int *)(lVar16 + 0x34) = *(int *)(lVar16 + 0x34) + -1;
    param_2[2] = 0xb;
  }
  else {
    param_2[2] = 0xc;
  }
  if (uVar17 == 0) {
    uVar10 = 0;
    if ((bVar3) && (uVar10 = 3, 2 < uVar12)) {
      if (0x7ff < uVar12) {
        uVar12 = 0x7ff;
      }
      uVar10 = (ushort)uVar12;
    }
    uVar6 = 0;
    if (local_7c != 0) {
      if (local_7c == 1) {
        uVar6 = 0x800;
      }
      else {
        uVar6 = (ushort)((((uint)LZCOUNT(local_7c + -1) ^ 0x1f) + 1 & 0x1f) << 0xb);
      }
    }
    *(ushort *)(*(long *)(lVar16 + 0x48) + (ulong)uVar7 * 8 + 2) = uVar6 | uVar10;
    return;
  }
  if ((bVar3) && (*(uint *)(uVar17 + 0x30) < uVar12)) {
    FUN_00c1c76c(*(undefined8 *)(lVar16 + 0x10),uVar17,uVar12 - 1);
  }
  if (bVar4) {
    lVar14 = *(long *)(uVar17 + 0x28);
    uVar11 = 0;
    uVar7 = *(uint *)(uVar17 + 0x34);
    do {
      while (uVar17 = (ulong)uVar11,
            (int)((long)*(undefined8 *)(lVar14 + uVar17 * 0x18) >> 0x2f) == -0xc) {
        uVar11 = uVar11 + 1;
        *(undefined8 *)(lVar14 + uVar17 * 0x18) = 0xffffffffffffffff;
        if (uVar7 < uVar11) goto LAB_00c0becc;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 <= uVar7);
  }
LAB_00c0becc:
  lVar14 = *(long *)(*(long *)(lVar16 + 0x10) + 0x10);
  if (*(ulong *)(lVar14 + 0x28) <= *(ulong *)(lVar14 + 0x20)) {
    FUN_00c19f80();
  }
  return;
}

