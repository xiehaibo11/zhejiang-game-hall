
undefined8 FUN_010ffd3c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  uint local_70;
  long local_68;
  
  lVar13 = *(long *)(param_1 + 0x270);
  if ((*(int *)(param_1 + 0x174) != 0) && (*(int *)(lVar13 + 0x40) == 0)) {
    lVar6 = *(long *)(param_1 + 0x268);
    iVar15 = *(int *)(lVar13 + 0x20);
    iVar3 = iVar15 + 7;
    if (-1 < iVar15) {
      iVar3 = iVar15;
    }
    *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + (iVar3 >> 3);
    *(undefined4 *)(lVar13 + 0x20) = 0;
    uVar5 = (**(code **)(lVar6 + 0x10))(param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (0 < *(int *)(param_1 + 0x1c0)) {
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar13 + 0x2c + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(lVar13 + 0x28) = 0;
    *(undefined4 *)(lVar13 + 0x40) = *(undefined4 *)(param_1 + 0x174);
    if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(lVar13 + 0x3c) = 0;
      iVar3 = *(int *)(lVar13 + 0x3c);
      goto joined_r0x010ffe28;
    }
  }
  iVar3 = *(int *)(lVar13 + 0x3c);
joined_r0x010ffe28:
  if (iVar3 == 0) {
    local_68 = param_1;
    puVar10 = *(undefined8 **)(param_1 + 0x28);
    local_88 = *puVar10;
    uStack_80 = puVar10[1];
    lVar6 = *(long *)(lVar13 + 0x18);
    uVar7 = *(uint *)(lVar13 + 0x20);
    uVar8 = (ulong)uVar7;
    local_90 = *(undefined4 *)(lVar13 + 0x38);
    local_a0 = *(undefined8 *)(lVar13 + 0x28);
    uStack_98 = *(undefined8 *)(lVar13 + 0x30);
    if (0 < *(int *)(param_1 + 0x1f0)) {
      lVar14 = 0;
      do {
        puVar16 = *(undefined2 **)(param_2 + lVar14 * 8);
        lVar12 = *(long *)(lVar13 + lVar14 * 8 + 0xb0);
        if ((int)uVar8 < 8) {
          uVar5 = FUN_011001c4(&local_88,lVar6,uVar8,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          uVar8 = (ulong)local_70;
          lVar6 = local_78;
          if (7 < (int)local_70) goto LAB_010ffea4;
          uVar5 = 1;
LAB_010ffed0:
          uVar4 = FUN_01100318(&local_88,lVar6,uVar8,lVar12,uVar5);
          lVar6 = local_78;
          uVar7 = local_70;
          if ((int)uVar4 < 0) {
            return 0;
          }
        }
        else {
LAB_010ffea4:
          uVar11 = lVar6 >> ((ulong)((int)uVar8 - 8) & 0x3f);
          iVar3 = *(int *)(lVar12 + (uVar11 & 0xff) * 4 + 0x120);
          if (iVar3 == 0) {
            uVar5 = 9;
            goto LAB_010ffed0;
          }
          uVar4 = (uint)*(byte *)(lVar12 + (uVar11 & 0xff) + 0x520);
          uVar7 = (int)uVar8 - iVar3;
        }
        uVar8 = (ulong)uVar7;
        iVar3 = *(int *)(lVar13 + lVar14 * 4 + 0x150);
        lVar12 = *(long *)(lVar13 + lVar14 * 8 + 0x100);
        if (iVar3 == 0) {
          if (uVar4 != 0) {
            if (((int)uVar7 < (int)uVar4) &&
               (uVar5 = FUN_011001c4(&local_88,lVar6,uVar8,uVar4), lVar6 = local_78,
               uVar7 = local_70, (int)uVar5 == 0)) {
              return uVar5;
            }
            uVar8 = (ulong)(uVar7 - uVar4);
          }
          iVar15 = 1;
          if ((int)uVar8 < 8) goto LAB_011000c8;
          goto LAB_011000f0;
        }
        if (uVar4 == 0) {
          iVar9 = 0;
        }
        else {
          if (((int)uVar7 < (int)uVar4) &&
             (uVar5 = FUN_011001c4(&local_88,lVar6,uVar8,uVar4), lVar6 = local_78, uVar7 = local_70,
             (int)uVar5 == 0)) {
            return uVar5;
          }
          uVar8 = (ulong)(uVar7 - uVar4);
          uVar7 = *(uint *)(&DAT_01479120 + (long)(int)uVar4 * 4) & (uint)(lVar6 >> (uVar8 & 0x3f));
          uVar2 = 0;
          if ((int)uVar7 <= *(int *)(&DAT_0147911c + (long)(int)uVar4 * 4)) {
            uVar2 = *(uint *)(&DAT_01479120 + (long)(int)uVar4 * 4);
          }
          iVar9 = uVar7 - uVar2;
        }
        iVar15 = 1;
        lVar1 = (long)*(int *)(param_1 + lVar14 * 4 + 500) * 4;
        iVar9 = *(int *)((long)&local_a0 + lVar1 + 4) + iVar9;
        *(int *)((long)&local_a0 + lVar1 + 4) = iVar9;
        *puVar16 = (short)iVar9;
        if (iVar3 < 2) {
LAB_011000c0:
          do {
            if ((int)uVar8 < 8) {
LAB_011000c8:
              uVar5 = FUN_011001c4(&local_88,lVar6,uVar8,0);
              if ((int)uVar5 == 0) {
                return uVar5;
              }
              uVar8 = (ulong)local_70;
              lVar6 = local_78;
              if (7 < (int)local_70) goto LAB_011000f0;
              uVar5 = 1;
LAB_0110011c:
              uVar4 = FUN_01100318(&local_88,lVar6,uVar8,lVar12,uVar5);
              lVar6 = local_78;
              uVar7 = local_70;
              if ((int)uVar4 < 0) {
                return 0;
              }
            }
            else {
LAB_011000f0:
              uVar11 = lVar6 >> ((ulong)((int)uVar8 - 8) & 0x3f);
              iVar3 = *(int *)(lVar12 + (uVar11 & 0xff) * 4 + 0x120);
              if (iVar3 == 0) {
                uVar5 = 9;
                goto LAB_0110011c;
              }
              uVar4 = (uint)*(byte *)(lVar12 + (uVar11 & 0xff) + 0x520);
              uVar7 = (int)uVar8 - iVar3;
            }
            uVar8 = (ulong)uVar7;
            uVar2 = uVar4 & 0xf;
            if (uVar2 == 0) {
              if ((int)uVar4 >> 4 != 0xf) break;
            }
            else {
              if (((int)uVar7 < (int)uVar2) &&
                 (uVar5 = FUN_011001c4(&local_88,lVar6,uVar8,uVar2), lVar6 = local_78,
                 uVar7 = local_70, (int)uVar5 == 0)) {
                return uVar5;
              }
              uVar8 = (ulong)(uVar7 - uVar2);
            }
            iVar15 = iVar15 + ((int)uVar4 >> 4) + 1;
          } while (iVar15 < 0x40);
        }
        else {
          do {
            if ((int)uVar8 < 8) {
              uVar5 = FUN_011001c4(&local_88,lVar6,uVar8,0);
              if ((int)uVar5 == 0) {
                return uVar5;
              }
              uVar8 = (ulong)local_70;
              lVar6 = local_78;
              if (7 < (int)local_70) goto LAB_010fffe8;
              uVar5 = 1;
LAB_01100014:
              uVar4 = FUN_01100318(&local_88,lVar6,uVar8,lVar12,uVar5);
              lVar6 = local_78;
              uVar7 = local_70;
              if ((int)uVar4 < 0) {
                return 0;
              }
            }
            else {
LAB_010fffe8:
              uVar11 = lVar6 >> ((ulong)((int)uVar8 - 8) & 0x3f);
              iVar9 = *(int *)(lVar12 + (uVar11 & 0xff) * 4 + 0x120);
              if (iVar9 == 0) {
                uVar5 = 9;
                goto LAB_01100014;
              }
              uVar4 = (uint)*(byte *)(lVar12 + (uVar11 & 0xff) + 0x520);
              uVar7 = (int)uVar8 - iVar9;
            }
            uVar8 = (ulong)uVar7;
            uVar2 = uVar4 & 0xf;
            if (uVar2 == 0) {
              if ((int)uVar4 >> 4 != 0xf) goto LAB_01100180;
              iVar9 = iVar15 + 0xf;
            }
            else {
              if (((int)uVar7 < (int)uVar2) &&
                 (uVar5 = FUN_011001c4(&local_88,lVar6,uVar8,uVar2), lVar6 = local_78,
                 uVar7 = local_70, (int)uVar5 == 0)) {
                return uVar5;
              }
              uVar8 = (ulong)(uVar7 - uVar2);
              iVar9 = ((int)uVar4 >> 4) + iVar15;
              uVar7 = *(uint *)(&DAT_01479120 + (ulong)uVar2 * 4) & (uint)(lVar6 >> (uVar8 & 0x3f));
              uVar4 = 0;
              if ((int)uVar7 <= *(int *)(&DAT_0147911c + (long)(int)uVar2 * 4)) {
                uVar4 = *(uint *)(&DAT_01479120 + (ulong)uVar2 * 4);
              }
              puVar16[*(int *)(jpeg_natural_order + (long)iVar9 * 4)] = (short)uVar7 - (short)uVar4;
            }
            iVar15 = iVar9 + 1;
          } while (iVar15 < iVar3);
          if (iVar9 < 0x3f) goto LAB_011000c0;
        }
LAB_01100180:
        uVar7 = (uint)uVar8;
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(param_1 + 0x1f0));
      puVar10 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar10 = local_88;
    puVar10[1] = uStack_80;
    *(long *)(lVar13 + 0x18) = lVar6;
    *(uint *)(lVar13 + 0x20) = uVar7;
    *(undefined4 *)(lVar13 + 0x38) = local_90;
    *(undefined8 *)(lVar13 + 0x30) = uStack_98;
    *(undefined8 *)(lVar13 + 0x28) = local_a0;
  }
  *(int *)(lVar13 + 0x40) = *(int *)(lVar13 + 0x40) + -1;
  return 1;
}

