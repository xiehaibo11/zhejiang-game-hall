
void FUN_00c0c9c0(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined4 local_68;
  int local_64;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined8 local_38;
  int local_30;
  byte local_2c;
  undefined1 local_2b;
  undefined8 local_20;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined8 local_8;
  
  uVar11 = *(int *)((long)param_1 + 0xac) + 1;
  *(uint *)((long)param_1 + 0xac) = uVar11;
  if (199 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00c064c4(param_1,0,0x863);
  }
  iVar8 = *(int *)((long)param_1 + 0x34);
  do {
    switch(iVar8) {
    case 0x104:
    case 0x105:
    case 0x106:
    case 0x115:
    case 0x121:
switchD_00c0ca30_caseD_104:
      *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + -1;
      return;
    }
    uVar9 = (undefined4)param_1[0xe];
    switch(iVar8) {
    case 0x102:
      FUN_00c079c0(param_1);
      *(byte *)(*(long *)(*param_1 + 0x18) + 0xd) = *(byte *)(*(long *)(*param_1 + 0x18) + 0xd) | 2;
      uVar9 = FUN_00c0899c(*param_1);
      FUN_00c095e8(param_1,1,2,uVar9);
      iVar8 = *(int *)((long)param_1 + 0x34);
      goto joined_r0x00c0ccfc;
    case 0x103:
      FUN_00c079c0(param_1);
      FUN_00c0dcb0(param_1);
      FUN_00c086ac(param_1,0x106,0x103,uVar9);
      break;
    default:
switchD_00c0cb20_caseD_104:
      lVar20 = *param_1;
      FUN_00c0c45c(param_1,&local_20);
      if (local_18 == 0xd) {
        *(undefined1 *)(*(long *)(lVar20 + 0x48) + ((ulong)local_20 & 0xffffffff) * 8 + 3) = 1;
      }
      else {
        local_8 = 0;
        FUN_00c0c77c(param_1,&local_20,1);
      }
      break;
    case 0x108:
      lVar20 = *param_1;
      local_3b = 1;
      local_3c = (undefined1)*(undefined4 *)(lVar20 + 0x38);
      local_48 = *(undefined8 *)(lVar20 + 0x18);
      local_40 = *(undefined4 *)(*(long *)(lVar20 + 8) + 0x9c);
      *(undefined8 **)(lVar20 + 0x18) = &local_48;
      FUN_00c079c0(param_1);
      uVar16 = FUN_00c07cb4(param_1);
      iVar8 = *(int *)((long)param_1 + 0x34);
      if (iVar8 == 0x3d) {
        lVar24 = *param_1;
        iVar8 = *(int *)(lVar24 + 0x34);
        FUN_00c083f4(param_1,0,1);
        FUN_00c083f4(param_1,1,2);
        FUN_00c083f4(param_1,2,3);
        FUN_00c083f4(param_1,3,uVar16);
        FUN_00c07cfc(param_1,0x3d);
        FUN_00c0c3c8(param_1);
        FUN_00c07cfc(param_1,0x2c);
        FUN_00c0c3c8(param_1);
        if (*(int *)((long)param_1 + 0x34) == 0x2c) {
          FUN_00c079c0(param_1);
          FUN_00c0c3c8(param_1);
        }
        else {
          FUN_00c07f70(lVar24,*(int *)(lVar24 + 0x34) << 8 | 0x10029);
          FUN_00c07f38(lVar24,1);
          *(int *)(lVar24 + 0x34) = *(int *)(lVar24 + 0x34) + 1;
        }
        lVar19 = *param_1;
        uVar6 = iVar8 << 8;
        uVar11 = *(uint *)(lVar19 + 0x38);
        uVar10 = *(undefined4 *)(lVar19 + 0x28);
        lVar18 = param_1[0x12] + (ulong)*(ushort *)(lVar19 + (ulong)uVar11 * 2 + 0x5c) * 0x18;
        *(char *)(lVar18 + 0x10) = (char)uVar11;
        *(undefined1 *)(lVar18 + 0x11) = 0;
        *(undefined4 *)(lVar18 + 8) = uVar10;
        uVar10 = *(undefined4 *)(lVar19 + 0x28);
        lVar18 = param_1[0x12] + (ulong)*(ushort *)(lVar19 + (ulong)(uVar11 + 1) * 2 + 0x5c) * 0x18;
        *(char *)(lVar18 + 0x10) = (char)(uVar11 + 1);
        *(undefined1 *)(lVar18 + 0x11) = 0;
        *(undefined4 *)(lVar18 + 8) = uVar10;
        lVar18 = param_1[0x12] + (ulong)*(ushort *)(lVar19 + (ulong)(uVar11 + 2) * 2 + 0x5c) * 0x18;
        *(undefined4 *)(lVar18 + 8) = *(undefined4 *)(lVar19 + 0x28);
        *(char *)(lVar18 + 0x10) = (char)(uVar11 + 2);
        *(undefined1 *)(lVar18 + 0x11) = 0;
        *(uint *)(lVar19 + 0x38) = uVar11 + 3;
        FUN_00c07cfc(param_1,0x103);
        uVar15 = FUN_00c07f70(lVar24,uVar6 | 0x7fff004d);
        local_14._0_2_ = (ushort)(byte)*(undefined4 *)(lVar24 + 0x38);
        local_20 = *(undefined8 **)(lVar24 + 0x18);
        local_18 = *(int *)(*(long *)(lVar24 + 8) + 0x9c);
        *(undefined8 **)(lVar24 + 0x18) = &local_20;
        lVar19 = *param_1;
        uVar11 = *(uint *)(lVar19 + 0x38);
        lVar18 = param_1[0x12] + (ulong)*(ushort *)(lVar19 + (ulong)uVar11 * 2 + 0x5c) * 0x18;
        *(undefined4 *)(lVar18 + 8) = *(undefined4 *)(lVar19 + 0x28);
        *(char *)(lVar18 + 0x10) = (char)uVar11;
        *(undefined1 *)(lVar18 + 0x11) = 0;
        *(uint *)(lVar19 + 0x38) = uVar11 + 1;
        FUN_00c07f38(lVar24);
        *(int *)(lVar24 + 0x34) = *(int *)(lVar24 + 0x34) + 1;
        FUN_00c0dcb0(param_1);
        FUN_00c096b4(lVar24);
        uVar6 = FUN_00c07f70(lVar24,uVar6 | 0x7fff004f);
        uVar11 = (uVar15 + 0x8000) - uVar6;
        lVar19 = *(long *)(lVar24 + 0x48);
        lVar18 = lVar19 + (ulong)uVar6 * 8;
        *(undefined4 *)(lVar18 + 4) = uVar9;
        uVar16 = *(undefined8 *)(lVar24 + 8);
        if (0xffff < uVar11) goto LAB_00c0dc84;
        iVar8 = *(int *)(lVar24 + 0x28);
        *(short *)(lVar18 + 2) = (short)uVar11;
        uVar11 = (iVar8 + 0x7fff) - uVar15;
        if (0xffff < uVar11) goto LAB_00c0dc84;
        *(short *)(lVar19 + (ulong)uVar15 * 8 + 2) = (short)uVar11;
      }
      else {
        if ((iVar8 != 0x10c) && (iVar8 != 0x2c)) {
                    /* WARNING: Subroutine does not return */
          FUN_00c07bc4(param_1,0xac5);
        }
        puVar23 = (undefined8 *)*param_1;
        iVar8 = *(int *)((long)puVar23 + 0x34);
        uVar11 = *(uint *)(puVar23 + 5);
        FUN_00c083f4(param_1,0,4);
        FUN_00c083f4(param_1,1,5);
        FUN_00c083f4(param_1,2,6);
        FUN_00c083f4(param_1,3,uVar16);
        if (*(int *)((long)param_1 + 0x34) == 0x2c) {
          uVar6 = 4;
          do {
            uVar15 = uVar6;
            uVar6 = uVar15 + 1;
            FUN_00c079c0(param_1);
            uVar16 = FUN_00c07cb4(param_1);
            FUN_00c083f4(param_1,uVar15,uVar16);
          } while (*(int *)((long)param_1 + 0x34) == 0x2c);
          FUN_00c07cfc(param_1,0x10c);
          local_68 = (undefined4)param_1[0xe];
          uVar10 = FUN_00c0c134(param_1,&local_20);
          FUN_00c09148(*param_1,3,uVar10,&local_20);
          FUN_00c07f38(puVar23,4);
          iVar22 = uVar15 - 2;
          local_64 = uVar15 - 3;
          if (uVar6 < 6) goto LAB_00c0d684;
LAB_00c0d388:
          lVar24 = param_1[0x12];
          goto LAB_00c0d38c;
        }
        local_64 = 0;
        FUN_00c07cfc(param_1,0x10c);
        uVar6 = 4;
        local_68 = (undefined4)param_1[0xe];
        iVar22 = 1;
        uVar10 = FUN_00c0c134(param_1,&local_20);
        FUN_00c09148(*param_1,3,uVar10,&local_20);
        FUN_00c07f38(puVar23,4);
LAB_00c0d684:
        uVar15 = *(uint *)(puVar23[9] + (ulong)uVar11 * 8);
        uVar11 = uVar15 & 0xff;
        if (uVar11 == 0x2d) {
          lVar24 = param_1[0x12];
          lVar18 = *(long *)(lVar24 + (ulong)*(ushort *)
                                              ((long)puVar23 + (ulong)(uVar15 >> 0x10) * 2 + 0x1ec)
                                      * 0x18);
LAB_00c0d7f0:
          if (*(int *)(lVar18 + 0x10) == 5) {
            iVar14 = strcmp((char *)(lVar18 + 0x18),"pairs");
            if (iVar14 != 0) goto LAB_00c0d38c;
            bVar3 = true;
          }
          else if ((*(int *)(lVar18 + 0x10) == 4) &&
                  (iVar14 = strcmp((char *)(lVar18 + 0x18),"next"), iVar14 == 0)) {
            bVar3 = true;
          }
          else {
LAB_00c0d38c:
            bVar3 = false;
          }
        }
        else {
          if (uVar11 != 0x36) {
            if (uVar11 != 0x12) goto LAB_00c0d388;
            lVar24 = param_1[0x12];
            lVar18 = *(long *)(lVar24 + (ulong)*(ushort *)
                                                ((long)puVar23 + (ulong)(uVar15 >> 0x10) * 2 + 0x5c)
                                        * 0x18);
            goto LAB_00c0d7f0;
          }
          uVar21 = *puVar23;
          uVar16 = FUN_00bfba1c(param_1[1],"pairs",5);
          puVar17 = (uint *)FUN_00c1bc28(uVar21,uVar16);
          if (((puVar17 == (uint *)0x0) || (puVar17[1] != 0)) || (*puVar17 != uVar15 >> 0x10)) {
            uVar21 = *puVar23;
            uVar16 = FUN_00bfba1c(param_1[1],&DAT_014107d8,4);
            puVar17 = (uint *)FUN_00c1bc28(uVar21,uVar16);
            if (((puVar17 == (uint *)0x0) || (puVar17[1] != 0)) || (*puVar17 != uVar15 >> 0x10))
            goto LAB_00c0d388;
            lVar24 = param_1[0x12];
          }
          else {
            lVar24 = param_1[0x12];
          }
          bVar3 = true;
        }
        lVar18 = *param_1;
        uVar11 = *(uint *)(lVar18 + 0x38);
        uVar15 = (iVar8 + 3) * 0x100;
        uVar10 = *(undefined4 *)(lVar18 + 0x28);
        lVar24 = lVar24 + (ulong)*(ushort *)(lVar18 + (ulong)uVar11 * 2 + 0x5c) * 0x18;
        *(char *)(lVar24 + 0x10) = (char)uVar11;
        *(undefined1 *)(lVar24 + 0x11) = 0;
        *(undefined4 *)(lVar24 + 8) = uVar10;
        uVar10 = *(undefined4 *)(lVar18 + 0x28);
        lVar24 = param_1[0x12] + (ulong)*(ushort *)(lVar18 + (ulong)(uVar11 + 1) * 2 + 0x5c) * 0x18;
        *(char *)(lVar24 + 0x10) = (char)(uVar11 + 1);
        *(undefined1 *)(lVar24 + 0x11) = 0;
        *(undefined4 *)(lVar24 + 8) = uVar10;
        lVar24 = param_1[0x12] + (ulong)*(ushort *)(lVar18 + (ulong)(uVar11 + 2) * 2 + 0x5c) * 0x18;
        *(undefined4 *)(lVar24 + 8) = *(undefined4 *)(lVar18 + 0x28);
        *(char *)(lVar24 + 0x10) = (char)(uVar11 + 2);
        *(undefined1 *)(lVar24 + 0x11) = 0;
        *(uint *)(lVar18 + 0x38) = uVar11 + 3;
        FUN_00c07cfc(param_1,0x103);
        uVar11 = 0x48;
        if (!bVar3) {
          uVar11 = 0x58;
        }
        uVar12 = FUN_00c07f70(puVar23,uVar15 | 0x7fff0000 | uVar11);
        local_2c = (byte)*(undefined4 *)(puVar23 + 7);
        local_2b = 0;
        local_38 = puVar23[3];
        local_30 = *(int *)(puVar23[1] + 0x9c);
        puVar23[3] = &local_38;
        lVar24 = *param_1;
        uVar11 = *(uint *)(lVar24 + 0x38);
        if (iVar22 != 0) {
          uVar1 = uVar11 + 1 + local_64;
          uVar13 = uVar11;
          do {
            uVar10 = *(undefined4 *)(lVar24 + 0x28);
            lVar18 = param_1[0x12] + (ulong)*(ushort *)(lVar24 + (ulong)uVar13 * 2 + 0x5c) * 0x18;
            *(char *)(lVar18 + 0x10) = (char)uVar13;
            uVar13 = uVar13 + 1;
            *(undefined4 *)(lVar18 + 8) = uVar10;
            *(undefined1 *)(lVar18 + 0x11) = 0;
            uVar11 = uVar1;
          } while (uVar13 != uVar1);
        }
        *(uint *)(lVar24 + 0x38) = uVar11;
        FUN_00c07f38(puVar23,iVar22);
        *(int *)((long)puVar23 + 0x34) = *(int *)((long)puVar23 + 0x34) + iVar22;
        FUN_00c0dcb0(param_1);
        FUN_00c096b4(puVar23);
        uVar11 = (*(int *)(puVar23 + 5) + 0x7fff) - uVar12;
        uVar16 = puVar23[1];
        if (0xffff < uVar11) {
LAB_00c0dc84:
                    /* WARNING: Subroutine does not return */
          FUN_00c07bc4(uVar16,0x91a);
        }
        uVar13 = 0x46;
        if (!bVar3) {
          uVar13 = 0x45;
        }
        *(short *)(puVar23[9] + (ulong)uVar12 * 8 + 2) = (short)uVar11;
        FUN_00c07f70(puVar23,uVar15 | 0x30000 | (uVar6 - 2) * 0x1000000 | uVar13);
        uVar6 = FUN_00c07f70(puVar23,uVar15 | 0x7fff0052);
        lVar24 = puVar23[9] + (ulong)uVar6 * 8;
        uVar11 = (uVar12 + 0x8000) - uVar6;
        uVar16 = puVar23[1];
        *(undefined4 *)(puVar23[9] + (ulong)(uVar6 - 1) * 8 + 4) = local_68;
        *(undefined4 *)(lVar24 + 4) = local_68;
        if (0xffff < uVar11) goto LAB_00c0dc84;
        *(short *)(lVar24 + 2) = (short)uVar11;
      }
      FUN_00c086ac(param_1,0x106,0x108,uVar9);
      FUN_00c096b4(lVar20);
      break;
    case 0x109:
      FUN_00c079c0(param_1);
      lVar20 = *param_1;
      uVar16 = FUN_00c07cb4(param_1);
      FUN_00c084cc(lVar20,uVar16,&local_38,1);
      iVar8 = *(int *)((long)param_1 + 0x34);
      while (iVar8 == 0x2e) {
        while( true ) {
          lVar20 = *param_1;
          FUN_00c08cac(lVar20,&local_38);
          FUN_00c079c0(param_1);
          local_18 = 3;
          local_20 = (undefined8 *)((ulong)local_20 & 0xffffffff00000000);
          local_14 = 0xffffffff;
          local_10 = 0xffffffff;
          if ((*(int *)((long)param_1 + 0x34) != 0x10a) && (*(int *)((long)param_1 + 0x34) != 0x11f)
             ) {
                    /* WARNING: Subroutine does not return */
            FUN_00c07c88(param_1,0x11f);
          }
          puVar23 = (undefined8 *)(param_1[2] & 0x7fffffffffff);
          FUN_00c079c0(param_1);
          local_30 = 9;
          local_20 = puVar23;
          if (((local_18 == 4) || (local_18 != 3)) ||
             (uVar11 = FUN_00c07b10(lVar20,puVar23,0xfffffffb), 0xff < uVar11)) break;
          local_38 = CONCAT44(~uVar11,(undefined4)local_38);
          iVar8 = *(int *)((long)param_1 + 0x34);
          if (iVar8 != 0x2e) goto LAB_00c0d1e8;
        }
        uVar10 = FUN_00c08cac(lVar20,&local_20);
        local_38 = CONCAT44(uVar10,(undefined4)local_38);
        iVar8 = *(int *)((long)param_1 + 0x34);
      }
LAB_00c0d1e8:
      if (iVar8 == 0x3a) {
        FUN_00c0906c(param_1,&local_38,0);
      }
      FUN_00c0a994(param_1,&local_20,iVar8 == 0x3a,uVar9);
      lVar20 = *param_1;
      FUN_00c08e38(lVar20,&local_38,&local_20);
      *(undefined4 *)(*(long *)(lVar20 + 0x48) + (ulong)(*(int *)(lVar20 + 0x28) - 1) * 8 + 4) =
           uVar9;
      break;
    case 0x10a:
      iVar8 = FUN_00c07a1c(param_1);
      if (iVar8 != 0x11f) goto switchD_00c0cb20_caseD_104;
      FUN_00c079c0(param_1);
      lVar24 = *param_1;
      uVar16 = FUN_00c07cb4(param_1);
      lVar20 = FUN_00c07aac(param_1,uVar16);
      if (lVar20 != 0) {
        FUN_00c07f70(lVar24,(uint)*(byte *)(lVar20 + 0x10) << 8 | 0x7fff0055);
      }
      *(byte *)(*(long *)(lVar24 + 0x18) + 0xd) = *(byte *)(*(long *)(lVar24 + 0x18) + 0xd) | 4;
      uVar9 = FUN_00c0899c(lVar24);
      FUN_00c095e8(param_1,uVar16,2,uVar9);
      break;
    case 0x10b:
      local_38 = CONCAT44(local_38._4_4_,0xffffffff);
      lVar24 = *param_1;
      FUN_00c079c0(param_1);
      lVar20 = lVar24 + 0x30;
      uVar10 = FUN_00c0b9f4(param_1);
      FUN_00c07cfc(param_1,0x113);
      FUN_00c0dcb0(param_1);
      iVar8 = *(int *)((long)param_1 + 0x34);
      while (iVar8 == 0x105) {
        uVar5 = FUN_00c0899c(lVar24);
        FUN_00c07bd8(lVar24,&local_38,uVar5);
        *(undefined4 *)(lVar24 + 0x2c) = *(undefined4 *)(lVar24 + 0x28);
        FUN_00c07bd8(lVar24,lVar20,uVar10);
        FUN_00c079c0(param_1);
        FUN_00c0ad38(param_1,&local_20,0);
        if (local_18 == 0) {
          local_18 = 1;
        }
        FUN_00c09498(*param_1,&local_20);
        uVar10 = local_10;
        if (*(int *)((long)param_1 + 0x34) != 0x113) {
                    /* WARNING: Subroutine does not return */
          FUN_00c07c88(param_1,0x113);
        }
        FUN_00c079c0();
        FUN_00c0dcb0(param_1);
        iVar8 = *(int *)((long)param_1 + 0x34);
      }
      if (iVar8 == 0x104) {
        uVar5 = FUN_00c0899c(lVar24);
        FUN_00c07bd8(lVar24,&local_38,uVar5);
        *(undefined4 *)(lVar24 + 0x2c) = *(undefined4 *)(lVar24 + 0x28);
        FUN_00c07bd8(lVar24,lVar20,uVar10);
        FUN_00c079c0(param_1);
        FUN_00c0dcb0(param_1);
      }
      else {
        FUN_00c07bd8(lVar24,&local_38,uVar10);
      }
      *(undefined4 *)(lVar24 + 0x2c) = *(undefined4 *)(lVar24 + 0x28);
      FUN_00c07bd8(lVar24,lVar20,local_38 & 0xffffffff);
      FUN_00c086ac(param_1,0x106,0x10b,uVar9);
      break;
    case 0x10d:
      FUN_00c079c0(param_1);
      iVar8 = 0;
      if (*(int *)((long)param_1 + 0x34) == 0x109) {
        FUN_00c079c0(param_1);
        lVar18 = *param_1;
        uVar16 = FUN_00c07cb4(param_1);
        FUN_00c083f4(param_1,0,uVar16);
        uVar9 = *(undefined4 *)(lVar18 + 0x34);
        FUN_00c07f38(lVar18,1);
        lVar24 = *param_1;
        lVar20 = param_1[0x12];
        uVar11 = *(uint *)(lVar24 + 0x38);
        uVar2 = *(ushort *)(lVar24 + (ulong)uVar11 * 2 + 0x5c);
        *(int *)(lVar18 + 0x34) = *(int *)(lVar18 + 0x34) + 1;
        uVar10 = *(undefined4 *)(lVar24 + 0x28);
        lVar20 = lVar20 + (ulong)uVar2 * 0x18;
        *(char *)(lVar20 + 0x10) = (char)uVar11;
        *(undefined1 *)(lVar20 + 0x11) = 0;
        *(undefined4 *)(lVar20 + 8) = uVar10;
        lVar20 = param_1[0xe];
        *(uint *)(lVar24 + 0x38) = uVar11 + 1;
        FUN_00c0a994(param_1,&local_20,0,(int)lVar20);
        if (local_18 == 0xc) {
          FUN_00c07f1c(lVar18,(ulong)local_20 & 0xffffffff);
        }
        FUN_00c08ac0(lVar18,&local_20,uVar9);
        *(undefined4 *)
         (param_1[0x12] +
          (ulong)*(ushort *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x38) - 1) * 2 + 0x5c) * 0x18 + 8) =
             *(undefined4 *)(lVar18 + 0x28);
      }
      else {
        while( true ) {
          iVar22 = iVar8 + 1;
          uVar16 = FUN_00c07cb4(param_1);
          FUN_00c083f4(param_1,iVar8,uVar16);
          if (*(int *)((long)param_1 + 0x34) != 0x2c) break;
          FUN_00c079c0(param_1);
          iVar8 = iVar22;
        }
        if (*(int *)((long)param_1 + 0x34) == 0x3d) {
          FUN_00c079c0(param_1);
          uVar9 = FUN_00c0c134(param_1,&local_20);
        }
        else {
          local_18 = 0xe;
          uVar9 = 0;
        }
        FUN_00c09148(*param_1,iVar22,uVar9,&local_20);
        lVar20 = *param_1;
        uVar11 = *(uint *)(lVar20 + 0x38);
        if (iVar22 == 0) {
          *(uint *)(lVar20 + 0x38) = uVar11;
        }
        else {
          uVar6 = uVar11 + 1 + iVar8;
          do {
            uVar9 = *(undefined4 *)(lVar20 + 0x28);
            lVar24 = param_1[0x12] + (ulong)*(ushort *)(lVar20 + (ulong)uVar11 * 2 + 0x5c) * 0x18;
            *(char *)(lVar24 + 0x10) = (char)uVar11;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(lVar24 + 8) = uVar9;
            *(undefined1 *)(lVar24 + 0x11) = 0;
          } while (uVar11 != uVar6);
          *(uint *)(lVar20 + 0x38) = uVar6;
        }
      }
      break;
    case 0x111:
      lVar20 = *param_1;
      uVar11 = *(uint *)(lVar20 + 0x28);
      local_2c = *(byte *)(lVar20 + 0x38);
      *(uint *)(lVar20 + 0x2c) = uVar11;
      local_2b = 1;
      local_38 = *(ulong *)(lVar20 + 0x18);
      local_30 = *(int *)(*(long *)(lVar20 + 8) + 0x9c);
      local_14._0_2_ = (ushort)local_2c;
      *(undefined8 **)(lVar20 + 0x18) = &local_20;
      local_20 = &local_38;
      local_18 = local_30;
      FUN_00c079c0(param_1);
      FUN_00c07f70(lVar20,*(int *)(lVar20 + 0x38) << 8 | 0x55);
      FUN_00c0c9c0(param_1);
      FUN_00c086ac(param_1,0x115,0x111,uVar9);
      uVar9 = FUN_00c0b9f4(param_1);
      if ((local_14._1_1_ >> 3 & 1) == 0) {
        FUN_00c096b4(lVar20);
      }
      else {
        *(byte *)(*(long *)(*param_1 + 0x18) + 0xd) =
             *(byte *)(*(long *)(*param_1 + 0x18) + 0xd) | 2;
        uVar10 = FUN_00c0899c(*param_1);
        uVar6 = *(uint *)((long)param_1 + 0x9c);
        lVar24 = *param_1;
        if (uVar6 < *(uint *)(param_1 + 0x13)) {
          lVar18 = param_1[0x12];
        }
        else {
          if (0xffc3 < *(uint *)(param_1 + 0x13)) {
                    /* WARNING: Subroutine does not return */
            FUN_00c064c4(param_1,0,0x958,0xffc4);
          }
          lVar18 = FUN_00c1a384(param_1[1],param_1[0x12],param_1 + 0x13,0xffc4,0x18);
          param_1[0x12] = lVar18;
        }
        uVar5 = *(undefined4 *)(lVar24 + 0x38);
        lVar24 = (ulong)uVar6 * 0x18;
        *(undefined8 *)(lVar18 + lVar24) = 1;
        *(char *)(lVar18 + lVar24 + 0x10) = (char)uVar5;
        *(undefined4 *)(lVar18 + lVar24 + 8) = uVar10;
        *(undefined1 *)(param_1[0x12] + lVar24 + 0x11) = 2;
        *(uint *)((long)param_1 + 0x9c) = uVar6 + 1;
        *(undefined4 *)(lVar20 + 0x2c) = *(undefined4 *)(lVar20 + 0x28);
        FUN_00c07bd8(lVar20,lVar20 + 0x30,uVar9);
        FUN_00c096b4(lVar20);
        uVar9 = FUN_00c0899c(lVar20);
      }
      FUN_00c07ef0(lVar20,uVar9,uVar11);
      uVar16 = *(undefined8 *)(lVar20 + 8);
      uVar6 = (*(int *)(lVar20 + 0x28) + 0x7fff) - uVar11;
      if (0xffff < uVar6) goto LAB_00c0dc84;
      *(short *)(*(long *)(lVar20 + 0x48) + (ulong)uVar11 * 8 + 2) = (short)uVar6;
      FUN_00c096b4(lVar20);
      break;
    case 0x112:
      lVar20 = *param_1;
      FUN_00c079c0(param_1);
      bVar4 = *(byte *)(lVar20 + 0x58) | 0x20;
      *(byte *)(lVar20 + 0x58) = bVar4;
      switch(*(int *)((long)param_1 + 0x34)) {
      case 0x104:
      case 0x105:
      case 0x106:
      case 0x115:
      case 0x121:
switchD_00c0d620_caseD_104:
        uVar11 = 0x1004b;
        break;
      default:
        if (*(int *)((long)param_1 + 0x34) == 0x3b) goto switchD_00c0d620_caseD_104;
        iVar8 = FUN_00c0c134(param_1,&local_20);
        if (iVar8 == 1) {
          if (local_18 == 0xd) {
            lVar19 = *(long *)(lVar20 + 0x48);
            lVar18 = ((ulong)local_20 & 0xffffffff) * 8;
            lVar24 = lVar19 + lVar18;
            if (*(char *)(lVar19 + lVar18) == 'G') goto LAB_00c0ccb4;
            *(int *)(lVar20 + 0x28) = *(int *)(lVar20 + 0x28) + -1;
            uVar11 = *(uint *)(lVar19 + lVar18) & 0xffff00 | (*(uint *)(lVar19 + lVar18) & 0xff) + 2
            ;
            bVar4 = *(byte *)(lVar20 + 0x58);
          }
          else {
            iVar8 = FUN_00c08cac(lVar20,&local_20);
            uVar11 = iVar8 << 8 | 0x2004c;
            bVar4 = *(byte *)(lVar20 + 0x58);
          }
        }
        else if (local_18 == 0xd) {
          lVar24 = *(long *)(lVar20 + 0x48) + ((ulong)local_20 & 0xffffffff) * 8;
LAB_00c0ccb4:
          *(undefined1 *)(lVar24 + 3) = 0;
          uVar11 = *(int *)(lVar20 + 0x38) << 8 | 0x49U |
                   (local_20._4_4_ - *(int *)(lVar20 + 0x38)) * 0x10000;
          bVar4 = *(byte *)(lVar20 + 0x58);
        }
        else {
          FUN_00c08c34(lVar20,&local_20);
          bVar4 = *(byte *)(lVar20 + 0x58);
          uVar11 = *(int *)(lVar20 + 0x38) << 8 | 0x4aU | (iVar8 + 1) * 0x10000;
        }
      }
      if ((bVar4 & 1) != 0) {
        FUN_00c07f70(lVar20,0x80000032);
      }
      FUN_00c07f70(lVar20,uVar11);
      iVar8 = *(int *)((long)param_1 + 0x34);
joined_r0x00c0ccfc:
      if (iVar8 == 0x3b) {
        FUN_00c079c0(param_1);
      }
      *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)(*param_1 + 0x38);
      goto switchD_00c0ca30_caseD_104;
    case 0x116:
      lVar20 = *param_1;
      FUN_00c079c0(param_1);
      uVar10 = *(undefined4 *)(lVar20 + 0x28);
      *(undefined4 *)(lVar20 + 0x2c) = uVar10;
      uVar5 = FUN_00c0b9f4(param_1);
      local_14._0_2_ = CONCAT11(1,(char)*(undefined4 *)(lVar20 + 0x38));
      local_20 = *(undefined8 **)(lVar20 + 0x18);
      local_18 = *(int *)(*(long *)(lVar20 + 8) + 0x9c);
      *(undefined8 **)(lVar20 + 0x18) = &local_20;
      FUN_00c07cfc(param_1,0x103);
      uVar6 = FUN_00c07f70(lVar20,*(int *)(lVar20 + 0x38) << 8 | 0x55);
      FUN_00c0dcb0(param_1);
      uVar7 = FUN_00c0899c(lVar20);
      FUN_00c07ef0(lVar20,uVar7,uVar10);
      FUN_00c086ac(param_1,0x106,0x116,uVar9);
      FUN_00c096b4(lVar20);
      *(undefined4 *)(lVar20 + 0x2c) = *(undefined4 *)(lVar20 + 0x28);
      FUN_00c07bd8(lVar20,lVar20 + 0x30,uVar5);
      uVar16 = *(undefined8 *)(lVar20 + 8);
      uVar11 = (*(int *)(lVar20 + 0x28) + 0x7fff) - uVar6;
      if (0xffff < uVar11) goto LAB_00c0dc84;
      *(short *)(*(long *)(lVar20 + 0x48) + (ulong)uVar6 * 8 + 2) = (short)uVar11;
      break;
    case 0x11d:
      FUN_00c0a798(param_1);
      iVar8 = *(int *)((long)param_1 + 0x34);
      goto joined_r0x00c0cb34;
    }
    iVar8 = *(int *)((long)param_1 + 0x34);
joined_r0x00c0cb34:
    if (iVar8 == 0x3b) {
      FUN_00c079c0(param_1);
      iVar8 = *(int *)((long)param_1 + 0x34);
      *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)(*param_1 + 0x38);
    }
    else {
      *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)(*param_1 + 0x38);
    }
  } while( true );
}

