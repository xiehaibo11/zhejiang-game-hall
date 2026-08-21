
undefined8 FUN_010fe468(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined2 *puVar17;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  uint local_70;
  long local_68;
  
  lVar14 = *(long *)(param_1 + 0x270);
  uVar2 = *(uint *)(param_1 + 0x228);
  if ((*(int *)(param_1 + 0x174) != 0) && (*(int *)(lVar14 + 0x40) == 0)) {
    lVar7 = *(long *)(param_1 + 0x268);
    iVar3 = *(int *)(lVar14 + 0x20);
    iVar10 = iVar3 + 7;
    if (-1 < iVar3) {
      iVar10 = iVar3;
    }
    *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + (iVar10 >> 3);
    *(undefined4 *)(lVar14 + 0x20) = 0;
    uVar6 = (**(code **)(lVar7 + 0x10))(param_1);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (0 < *(int *)(param_1 + 0x1c0)) {
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar14 + 0x2c + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(lVar14 + 0x28) = 0;
    *(undefined4 *)(lVar14 + 0x40) = *(undefined4 *)(param_1 + 0x174);
    if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(lVar14 + 0x3c) = 0;
      iVar10 = *(int *)(lVar14 + 0x3c);
      goto joined_r0x010fe4ac;
    }
  }
  iVar10 = *(int *)(lVar14 + 0x3c);
joined_r0x010fe4ac:
  if (iVar10 == 0) {
    local_68 = param_1;
    puVar11 = *(undefined8 **)(param_1 + 0x28);
    local_88 = *puVar11;
    uStack_80 = puVar11[1];
    lVar7 = *(long *)(lVar14 + 0x18);
    uVar5 = *(uint *)(lVar14 + 0x20);
    uVar9 = (ulong)uVar5;
    local_90 = *(undefined4 *)(lVar14 + 0x38);
    local_a0 = *(undefined8 *)(lVar14 + 0x28);
    uStack_98 = *(undefined8 *)(lVar14 + 0x30);
    if (0 < *(int *)(param_1 + 0x1f0)) {
      lVar15 = 0;
      do {
        lVar16 = (long)*(int *)(param_1 + 500 + lVar15 * 4);
        puVar17 = *(undefined2 **)(param_2 + lVar15 * 8);
        lVar13 = *(long *)(lVar14 + (long)*(int *)(*(long *)(param_1 + lVar16 * 8 + 0x1c8) + 0x14) *
                                    8 + 0x48);
        if ((int)uVar9 < 8) {
          uVar6 = FUN_011001c4(&local_88,lVar7,uVar9,0);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          uVar9 = (ulong)local_70;
          lVar7 = local_78;
          if (7 < (int)local_70) goto LAB_010fe53c;
          uVar6 = 1;
LAB_010fe570:
          uVar5 = FUN_01100318(&local_88,lVar7,uVar9,lVar13,uVar6);
          if ((int)uVar5 < 0) {
            return 0;
          }
          uVar9 = (ulong)local_70;
          lVar7 = local_78;
          if (uVar5 == 0) goto LAB_010fe564;
LAB_010fe590:
          uVar8 = (uint)uVar9;
          if (((int)(uint)uVar9 < (int)uVar5) &&
             (uVar6 = FUN_011001c4(&local_88,lVar7,uVar9,uVar5), lVar7 = local_78, uVar8 = local_70,
             (int)uVar6 == 0)) {
            return uVar6;
          }
          uVar9 = (ulong)(uVar8 - uVar5);
          uVar8 = *(uint *)(&DAT_01479120 + (long)(int)uVar5 * 4) & (uint)(lVar7 >> (uVar9 & 0x3f));
          uVar1 = 0;
          if ((int)uVar8 <= *(int *)(&DAT_0147911c + (long)(int)uVar5 * 4)) {
            uVar1 = *(uint *)(&DAT_01479120 + (long)(int)uVar5 * 4);
          }
          iVar10 = uVar8 - uVar1;
        }
        else {
LAB_010fe53c:
          uVar12 = lVar7 >> ((ulong)((int)uVar9 - 8) & 0x3f);
          iVar10 = *(int *)(lVar13 + (uVar12 & 0xff) * 4 + 0x120);
          if (iVar10 == 0) {
            uVar6 = 9;
            goto LAB_010fe570;
          }
          bVar4 = *(byte *)(lVar13 + (uVar12 & 0xff) + 0x520);
          uVar5 = (uint)bVar4;
          uVar9 = (ulong)(uint)((int)uVar9 - iVar10);
          if (bVar4 != 0) goto LAB_010fe590;
LAB_010fe564:
          iVar10 = 0;
        }
        uVar5 = (uint)uVar9;
        lVar16 = lVar16 * 4;
        lVar15 = lVar15 + 1;
        iVar10 = *(int *)((long)&local_a0 + lVar16 + 4) + iVar10;
        *(int *)((long)&local_a0 + lVar16 + 4) = iVar10;
        *puVar17 = (short)(iVar10 << (ulong)(uVar2 & 0x1f));
      } while (lVar15 < *(int *)(param_1 + 0x1f0));
      puVar11 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar11 = local_88;
    puVar11[1] = uStack_80;
    *(long *)(lVar14 + 0x18) = lVar7;
    *(uint *)(lVar14 + 0x20) = uVar5;
    *(undefined4 *)(lVar14 + 0x38) = local_90;
    *(undefined8 *)(lVar14 + 0x30) = uStack_98;
    *(undefined8 *)(lVar14 + 0x28) = local_a0;
  }
  *(int *)(lVar14 + 0x40) = *(int *)(lVar14 + 0x40) + -1;
  return 1;
}

