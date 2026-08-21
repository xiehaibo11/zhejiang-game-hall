
uint FUN_00c2843c(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int *local_9a8;
  uint local_9a0;
  uint local_99c;
  uint local_998;
  undefined4 local_994;
  long local_988;
  undefined8 local_980;
  uint local_974;
  undefined4 local_970;
  uint local_96c;
  undefined4 local_968;
  uint local_964;
  undefined2 auStack_956 [1195];
  
  uVar11 = FUN_00c27d44();
  if (*(int *)(param_1 + 4) == 0x7b) {
    FUN_00c2593c(param_1);
    uVar22 = uVar11;
    if (*(int *)(param_1 + 4) != 0x7d) {
      bVar10 = false;
LAB_00c284d0:
      uVar12 = FUN_00c27ec4(param_1,&local_9a0,0x20000);
      local_994 = 4;
      if (uVar12 == 0) {
        local_994 = 0xe;
      }
      if (bVar10) {
LAB_00c28a0c:
                    /* WARNING: Subroutine does not return */
        FUN_00c258bc(param_1,0x7d);
      }
      do {
        local_964 = 0xffffffff;
        FUN_00c263c4(param_1,&local_9a0);
        uVar13 = FUN_00c25220(param_1,&local_9a0);
        uVar19 = (ulong)uVar13;
        if ((uVar12 & 0x20000) == 0) {
          uVar14 = FUN_00c0e728(*(undefined8 *)(param_1 + 0x50),&local_9a8);
          lVar20 = **(long **)(param_1 + 0x50);
          while( true ) {
            puVar1 = (uint *)(lVar20 + uVar19 * 0x18);
            uVar24 = *(uint *)(lVar20 + uVar19 * 0x18);
            uVar7 = uVar24 >> 0x1c;
            if (uVar7 != 8) break;
            uVar19 = (ulong)(ushort)uVar24;
          }
          if (local_964 == 0xffffffff) {
            if (uVar7 == 3) {
              bVar10 = puVar1[1] == 0xffffffff;
              if (local_988 == 0) goto LAB_00c28880;
LAB_00c28800:
              *local_9a8 = uVar13 + 0x907f0000;
              local_9a8[1] = local_974;
              goto LAB_00c28678;
            }
            bVar10 = false;
            if (local_988 != 0) goto LAB_00c28800;
            if (uVar7 == 1) {
              if ((uVar24 >> 0x14 & 1) != 0) goto LAB_00c28880;
            }
            else if (uVar7 != 5) {
LAB_00c28880:
                    /* WARNING: Subroutine does not return */
              FUN_00c258bc(param_1,0x100);
            }
            uVar24 = 0;
            *local_9a8 = uVar13 + 0x80030000;
            if (*puVar1 >> 0x1c == 1) {
              uVar24 = local_974 | 0x80000000;
            }
            local_9a8[1] = uVar24;
            bVar10 = false;
          }
          else {
            if (((uVar24 & 0xf4000000) != 0) ||
               (((local_964 == 0 && (local_988 != 0)) || (uVar7 = puVar1[1] << 3, 0x20 < uVar7)))) {
LAB_00c289fc:
                    /* WARNING: Subroutine does not return */
              FUN_00c24fe0(param_1,0x3a,0x219);
            }
            if ((uVar24 & 0x8000000) != 0) {
              uVar7 = 1;
            }
            if (uVar7 < local_964) goto LAB_00c289fc;
            bVar10 = false;
            *local_9a8 = uVar13 + 0x90000000 + local_964 * 0x10000;
            local_9a8[1] = local_974;
            if (local_988 == 0) goto LAB_00c28690;
LAB_00c28678:
            *(byte *)(local_988 + 8) = *(byte *)(local_988 + 8) | 0x20;
            *(long *)(local_9a8 + 4) = local_988;
            lVar20 = **(long **)(param_1 + 0x50);
          }
LAB_00c28690:
          *(short *)(lVar20 + (ulong)uVar22 * 0x18 + 8) = (short)uVar14;
          iVar3 = *(int *)(param_1 + 4);
          uVar22 = uVar14;
        }
        else {
          bVar10 = false;
          uVar13 = FUN_00c27470(param_1,&local_9a8);
          *(short *)(**(long **)(param_1 + 0x50) + (ulong)uVar22 * 0x18 + 8) = (short)uVar13;
          *(byte *)(local_988 + 8) = *(byte *)(local_988 + 8) | 0x20;
          *(long *)(local_9a8 + 4) = local_988;
          iVar3 = *(int *)(param_1 + 4);
          uVar22 = uVar13;
        }
        if (iVar3 != 0x2c) goto LAB_00c286b8;
        FUN_00c2593c(param_1);
        local_99c = local_998;
        local_9a0 = local_998 + 1;
        auStack_956[(ulong)local_998 * 0xc] = 0;
        local_974 = local_96c;
        local_970 = local_968;
        local_988 = 0;
        local_980 = 0;
        if (bVar10) goto LAB_00c28a0c;
      } while( true );
    }
LAB_00c286cc:
    uVar13 = 0;
    FUN_00c263a0(param_1,0x7d);
    *(undefined2 *)(**(long **)(param_1 + 0x50) + (ulong)uVar22 * 0x18 + 8) = 0;
    FUN_00c277f0(param_1,param_2);
    uVar14 = *(uint *)(param_2 + 0x2c);
    plVar16 = *(long **)(param_1 + 0x50);
    uVar22 = 0;
    uVar12 = uVar14 >> 0x10 & 0xf;
    lVar20 = *plVar16;
    piVar2 = (int *)(lVar20 + (ulong)uVar11 * 0x18);
    uVar24 = *(uint *)(lVar20 + (ulong)uVar11 * 0x18);
    uVar6 = *(ushort *)(piVar2 + 2);
    if (uVar6 != 0) {
      do {
        puVar1 = (uint *)(lVar20 + (ulong)uVar6 * 0x18);
        uVar15 = *(uint *)(lVar20 + (ulong)uVar6 * 0x18);
        uVar7 = puVar1[1];
        if ((uVar15 >> 0x1c == 9) ||
           ((uVar23 = uVar24, (uVar15 & 0xf0ff0000) == 0x80030000 && (uVar7 != 0)))) {
          uVar17 = FUN_00c0ecb0(plVar16,(short)uVar15,&local_9a0);
          uVar15 = (uint)uVar17;
          uVar23 = uVar24 | uVar15 & 0x3100000;
          if (local_9a0 < 0x20000000) {
            uVar18 = local_9a0 * 8;
            if ((uVar22 + uVar18 < uVar22) || ((uVar15 >> 0x14 & 1) != 0)) {
LAB_00c287e0:
                    /* WARNING: Subroutine does not return */
              FUN_00c2520c(param_1,0xb92);
            }
          }
          else {
            if (((local_9a0 != 0xffffffff) || (uVar15 >> 0x1c != 3)) || ((uVar24 & 0x800000) != 0))
            goto LAB_00c287e0;
            local_9a0 = 0;
            uVar18 = 0;
          }
          uVar8 = uVar7 | uVar14;
          if ((uVar8 >> 1 & 1) == 0) {
            uVar21 = (uint)((ulong)uVar17 >> 0x10) & 0xf;
            if (((uVar7 & 1) != 0) && (uVar4 = uVar7 >> 0x10 & 0xf, uVar21 < uVar4)) {
              uVar21 = uVar4;
            }
          }
          else {
            uVar21 = uVar7 >> 0x10 & 0xf;
          }
          uVar4 = *puVar1;
          uVar9 = uVar4 >> 0x10 & 0x7f;
          bVar5 = *(byte *)(param_1 + (ulong)*(byte *)(param_1 + 0x7f) + 0x78);
          if (bVar5 < uVar21) {
            uVar21 = (uint)bVar5;
          }
          if (uVar12 < uVar21) {
            uVar12 = uVar21;
          }
          uVar21 = (8 << (ulong)(uVar21 & 0x1f)) - 1;
          if ((uVar9 == 0x7f) || (uVar4 >> 0x1c != 9)) {
            uVar22 = uVar21 + uVar22 & (uVar21 ^ 0xffffffff);
            puVar1[1] = uVar22 >> 3;
          }
          else {
            if (((uVar9 == 0) || ((uVar7 & 1) != 0)) ||
               (((uVar8 & 2) == 0 && (uVar18 < (uVar21 & uVar22) + uVar9)))) {
              uVar22 = uVar21 + uVar22 & (uVar21 ^ 0xffffffff);
            }
            if ((uVar9 == uVar18) && ((uVar22 & uVar21) == 0)) {
              *puVar1 = (uVar4 & 0xffff) + 0x90000000;
              puVar1[1] = uVar22 >> 3;
            }
            else {
              *puVar1 = uVar9 * 0x100 + -0x60000000 + (uVar15 & 0xb800000) + uVar18 * 0x2000 +
                        (uVar22 & uVar18 - 1);
              puVar1[1] = (uVar22 & -uVar18) >> 3;
              uVar18 = uVar9;
            }
          }
          if ((uVar24 & 0x800000) != 0) {
            if (uVar13 < uVar18) {
              uVar13 = uVar18;
            }
            goto LAB_00c28920;
          }
          uVar22 = uVar22 + uVar18;
          uVar6 = (ushort)puVar1[2];
          uVar24 = uVar23;
        }
        else {
LAB_00c28920:
          uVar6 = (ushort)puVar1[2];
          uVar24 = uVar23;
        }
        if (uVar6 == 0) break;
        plVar16 = *(long **)(param_1 + 0x50);
        lVar20 = *plVar16;
      } while( true );
    }
    uVar14 = (8 << (ulong)(uVar12 & 0x1f)) - 1;
    if ((uVar24 & 0x800000) == 0) {
      uVar13 = uVar22;
    }
    *piVar2 = uVar24 + uVar12 * 0x10000;
    piVar2[1] = (uVar13 + uVar14 & (uVar14 ^ 0xffffffff)) >> 3;
  }
  return uVar11;
LAB_00c286b8:
  FUN_00c263a0(param_1,0x3b);
  if (*(int *)(param_1 + 4) == 0x7d) goto LAB_00c286cc;
  goto LAB_00c284d0;
}

