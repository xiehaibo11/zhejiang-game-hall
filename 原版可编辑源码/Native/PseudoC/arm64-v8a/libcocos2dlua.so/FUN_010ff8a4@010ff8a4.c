
undefined8 FUN_010ff8a4(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined2 *puVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  uint local_70;
  long local_68;
  
  lVar16 = *(long *)(param_1 + 0x270);
                    /* catch() { ... } // from try @ 010ff840 with catch @ 010ff8d8 */
  if ((*(int *)(param_1 + 0x174) != 0) && (*(int *)(lVar16 + 0x40) == 0)) {
    lVar8 = *(long *)(param_1 + 0x268);
    iVar4 = *(int *)(lVar16 + 0x20);
    iVar3 = iVar4 + 7;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + (iVar3 >> 3);
    *(undefined4 *)(lVar16 + 0x20) = 0;
    uVar7 = (**(code **)(lVar8 + 0x10))(param_1);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (0 < *(int *)(param_1 + 0x1c0)) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar16 + 0x2c + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x1c0));
    }
    *(undefined4 *)(lVar16 + 0x28) = 0;
    *(undefined4 *)(lVar16 + 0x40) = *(undefined4 *)(param_1 + 0x174);
                    /* catch() { ... } // from try @ 010ff9c8 with catch @ 010ff984 */
    if (*(int *)(param_1 + 0x23c) == 0) {
      *(undefined4 *)(lVar16 + 0x3c) = 0;
      iVar3 = *(int *)(lVar16 + 0x3c);
      goto joined_r0x010ff990;
    }
  }
  iVar3 = *(int *)(lVar16 + 0x3c);
joined_r0x010ff990:
  if (iVar3 == 0) {
    lVar12 = *(long *)(param_1 + 0x230);
    iVar3 = *(int *)(param_1 + 0x238);
    local_68 = param_1;
    puVar13 = *(undefined8 **)(param_1 + 0x28);
    local_88 = *puVar13;
    uStack_80 = puVar13[1];
    lVar8 = *(long *)(lVar16 + 0x18);
    uVar9 = *(uint *)(lVar16 + 0x20);
    uVar10 = (ulong)uVar9;
    local_90 = *(undefined4 *)(lVar16 + 0x38);
                    /* try { // try from 010ff9c0 to 011ff9c7 has its CatchHandler @ 010ffa58 */
    local_a0 = *(undefined8 *)(lVar16 + 0x28);
    uStack_98 = *(undefined8 *)(lVar16 + 0x30);
                    /* try { // try from 010ff9c8 to 011ffa73 has its CatchHandler @ 010ff984 */
    if (0 < *(int *)(param_1 + 0x1f0)) {
      lVar17 = 0;
      do {
        puVar18 = *(undefined2 **)(param_2 + lVar17 * 8);
        lVar15 = *(long *)(lVar16 + lVar17 * 8 + 0xb0);
        if ((int)uVar10 < 8) {
          uVar7 = FUN_011001c4(&local_88,lVar8,uVar10,0);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          uVar10 = (ulong)local_70;
          lVar8 = local_78;
          if (7 < (int)local_70) goto LAB_010ffa1c;
          uVar7 = 1;
LAB_010ffa48:
          uVar6 = FUN_01100318(&local_88,lVar8,uVar10,lVar15,uVar7);
                    /* catch() { ... } // from try @ 010ff9c0 with catch @ 010ffa58 */
          lVar8 = local_78;
          uVar9 = local_70;
          if ((int)uVar6 < 0) {
            return 0;
          }
        }
        else {
LAB_010ffa1c:
          uVar14 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
          iVar4 = *(int *)(lVar15 + (uVar14 & 0xff) * 4 + 0x120);
          if (iVar4 == 0) {
            uVar7 = 9;
            goto LAB_010ffa48;
          }
          uVar6 = (uint)*(byte *)(lVar15 + (uVar14 & 0xff) + 0x520);
          uVar9 = (int)uVar10 - iVar4;
        }
        uVar10 = (ulong)uVar9;
        iVar4 = *(int *)(lVar16 + lVar17 * 4 + 0x150);
        lVar15 = *(long *)(lVar16 + lVar17 * 8 + 0x100);
                    /* catch() { ... } // from try @ 010ffab8 with catch @ 010ffa74 */
        if (iVar4 == 0) {
          if (uVar6 != 0) {
            if (((int)uVar9 < (int)uVar6) &&
               (uVar7 = FUN_011001c4(&local_88,lVar8,uVar10,uVar6), lVar8 = local_78,
               uVar9 = local_70, (int)uVar7 == 0)) {
              return uVar7;
            }
            uVar10 = (ulong)(uVar9 - uVar6);
          }
LAB_010ffc24:
          iVar11 = 1;
          if (0 < iVar3) goto LAB_010ffc44;
        }
        else {
          if (uVar6 == 0) {
            iVar11 = 0;
          }
          else {
            if (((int)uVar9 < (int)uVar6) &&
               (uVar7 = FUN_011001c4(&local_88,lVar8,uVar10,uVar6), lVar8 = local_78,
               uVar9 = local_70, (int)uVar7 == 0)) {
              return uVar7;
            }
            uVar10 = (ulong)(uVar9 - uVar6);
                    /* try { // try from 010ffab0 to 011ffab7 has its CatchHandler @ 010ffb48 */
            uVar9 = *(uint *)(&DAT_01479120 + (long)(int)uVar6 * 4) &
                    (uint)(lVar8 >> (uVar10 & 0x3f));
                    /* try { // try from 010ffab8 to 011ffb63 has its CatchHandler @ 010ffa74 */
            uVar2 = 0;
            if ((int)uVar9 <= *(int *)(&DAT_0147911c + (long)(int)uVar6 * 4)) {
              uVar2 = *(uint *)(&DAT_01479120 + (long)(int)uVar6 * 4);
            }
            iVar11 = uVar9 - uVar2;
          }
          lVar1 = (long)*(int *)(param_1 + lVar17 * 4 + 500) * 4;
          iVar11 = *(int *)((long)&local_a0 + lVar1 + 4) + iVar11;
          *(int *)((long)&local_a0 + lVar1 + 4) = iVar11;
          *puVar18 = (short)iVar11;
          if (iVar4 < 2) goto LAB_010ffc24;
          iVar11 = 1;
          do {
            if ((int)uVar10 < 8) {
              uVar7 = FUN_011001c4(&local_88,lVar8,uVar10,0);
              if ((int)uVar7 == 0) {
                return uVar7;
              }
              uVar10 = (ulong)local_70;
                    /* catch() { ... } // from try @ 010ffab0 with catch @ 010ffb48 */
              lVar8 = local_78;
              if (7 < (int)local_70) goto LAB_010ffb54;
              uVar7 = 1;
LAB_010ffb80:
              uVar6 = FUN_01100318(&local_88,lVar8,uVar10,lVar15,uVar7);
              lVar8 = local_78;
              uVar9 = local_70;
              if ((int)uVar6 < 0) {
                return 0;
              }
            }
            else {
LAB_010ffb54:
              uVar14 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
              iVar5 = *(int *)(lVar15 + (uVar14 & 0xff) * 4 + 0x120);
                    /* catch() { ... } // from try @ 010ffba8 with catch @ 010ffb64 */
              if (iVar5 == 0) {
                uVar7 = 9;
                goto LAB_010ffb80;
              }
              uVar6 = (uint)*(byte *)(lVar15 + (uVar14 & 0xff) + 0x520);
              uVar9 = (int)uVar10 - iVar5;
            }
            uVar10 = (ulong)uVar9;
            uVar2 = uVar6 & 0xf;
                    /* try { // try from 010ffba0 to 011ffba7 has its CatchHandler @ 010ffc38 */
            if (uVar2 == 0) {
              if ((int)uVar6 >> 4 != 0xf) goto LAB_010ffcf4;
              iVar11 = iVar11 + 0xf;
            }
            else {
                    /* try { // try from 010ffba8 to 011ffc53 has its CatchHandler @ 010ffb64 */
              if (((int)uVar9 < (int)uVar2) &&
                 (uVar7 = FUN_011001c4(&local_88,lVar8,uVar10,uVar2), lVar8 = local_78,
                 uVar9 = local_70, (int)uVar7 == 0)) {
                return uVar7;
              }
              uVar10 = (ulong)(uVar9 - uVar2);
              iVar11 = ((int)uVar6 >> 4) + iVar11;
              uVar9 = *(uint *)(&DAT_01479120 + (ulong)uVar2 * 4) & (uint)(lVar8 >> (uVar10 & 0x3f))
              ;
              uVar6 = 0;
              if ((int)uVar9 <= *(int *)(&DAT_0147911c + (long)(int)uVar2 * 4)) {
                uVar6 = *(uint *)(&DAT_01479120 + (ulong)uVar2 * 4);
              }
              puVar18[*(int *)(lVar12 + (long)iVar11 * 4)] = (short)uVar9 - (short)uVar6;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar4);
          for (; iVar11 <= iVar3; iVar11 = iVar11 + ((int)uVar6 >> 4) + 1) {
LAB_010ffc44:
            if ((int)uVar10 < 8) {
              uVar7 = FUN_011001c4(&local_88,lVar8,uVar10,0);
              if ((int)uVar7 == 0) {
                return uVar7;
              }
              uVar10 = (ulong)local_70;
              lVar8 = local_78;
              if (7 < (int)local_70) goto LAB_010ffc74;
              uVar7 = 1;
LAB_010ffca0:
              uVar6 = FUN_01100318(&local_88,lVar8,uVar10,lVar15,uVar7);
              lVar8 = local_78;
              uVar9 = local_70;
              if ((int)uVar6 < 0) {
                return 0;
              }
            }
            else {
LAB_010ffc74:
              uVar14 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
              iVar4 = *(int *)(lVar15 + (uVar14 & 0xff) * 4 + 0x120);
              if (iVar4 == 0) {
                uVar7 = 9;
                goto LAB_010ffca0;
              }
              uVar6 = (uint)*(byte *)(lVar15 + (uVar14 & 0xff) + 0x520);
              uVar9 = (int)uVar10 - iVar4;
            }
            uVar10 = (ulong)uVar9;
            uVar2 = uVar6 & 0xf;
            if (uVar2 == 0) {
              if ((int)uVar6 >> 4 != 0xf) break;
            }
            else {
              if (((int)uVar9 < (int)uVar2) &&
                 (uVar7 = FUN_011001c4(&local_88,lVar8,uVar10,uVar2), lVar8 = local_78,
                 uVar9 = local_70, (int)uVar7 == 0)) {
                return uVar7;
              }
              uVar10 = (ulong)(uVar9 - uVar2);
            }
                    /* catch() { ... } // from try @ 010ffba0 with catch @ 010ffc38 */
          }
        }
LAB_010ffcf4:
        uVar9 = (uint)uVar10;
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x1f0));
      puVar13 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar13 = local_88;
    puVar13[1] = uStack_80;
    *(long *)(lVar16 + 0x18) = lVar8;
    *(uint *)(lVar16 + 0x20) = uVar9;
    *(undefined4 *)(lVar16 + 0x38) = local_90;
    *(undefined8 *)(lVar16 + 0x30) = uStack_98;
    *(undefined8 *)(lVar16 + 0x28) = local_a0;
  }
  *(int *)(lVar16 + 0x40) = *(int *)(lVar16 + 0x40) + -1;
  return 1;
}

