
ulong FT_Stroker_EndSubPath(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong local_50 [2];
  
  if (param_1 == (undefined8 *)0x0) {
    uVar5 = 6;
  }
  else if (*(char *)((long)param_1 + 0x29) == '\0') {
    if (((param_1[2] == param_1[7]) && (param_1[3] == param_1[8])) ||
       (uVar5 = FT_Stroker_LineTo(param_1), (int)uVar5 == 0)) {
      param_1[1] = param_1[6];
      uVar8 = FT_Angle_Diff(*param_1);
      if ((uVar8 == 0) ||
         ((uVar5 = FUN_00e24060(param_1,uVar8 >> 0x3f,param_1[9]), (int)uVar5 == 0 &&
          (uVar5 = FUN_00e24338(param_1,(uint)(uVar8 >> 0x3f) ^ 1,param_1[9]), (int)uVar5 == 0)))) {
        uVar11 = *(uint *)((long)param_1 + 0x8c);
        uVar5 = (ulong)uVar11;
        uVar13 = *(uint *)(param_1 + 0xe);
        if (uVar11 + 1 < uVar13) {
          uVar11 = uVar13 - 1;
          *(uint *)(param_1 + 0xe) = uVar11;
          puVar15 = (undefined8 *)(param_1[0xf] + (ulong)uVar11 * 0x10);
          uVar17 = *puVar15;
          puVar12 = (undefined8 *)(param_1[0xf] + uVar5 * 0x10);
          puVar12[1] = puVar15[1];
          *puVar12 = uVar17;
          *(undefined1 *)(param_1[0x10] + uVar5) = *(undefined1 *)(param_1[0x10] + (ulong)uVar11);
          *(byte *)(param_1[0x10] + uVar5) = *(byte *)(param_1[0x10] + uVar5) | 4;
          *(byte *)(param_1[0x10] + (ulong)(uVar13 - 2)) =
               *(byte *)(param_1[0x10] + (ulong)(uVar13 - 2)) | 8;
        }
        else {
          *(uint *)(param_1 + 0xe) = uVar11;
        }
        uVar11 = *(uint *)((long)param_1 + 0xbc);
        uVar5 = (ulong)uVar11;
        uVar13 = *(uint *)(param_1 + 0x14);
        *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x11) = 0;
        if (uVar11 + 1 < uVar13) {
          uVar8 = (ulong)(uVar13 - 1);
          *(uint *)(param_1 + 0x14) = uVar13 - 1;
          puVar15 = (undefined8 *)(param_1[0x15] + uVar8 * 0x10);
          uVar17 = *puVar15;
          puVar12 = (undefined8 *)(param_1[0x15] + uVar5 * 0x10);
          puVar12[1] = puVar15[1];
          *puVar12 = uVar17;
          *(undefined1 *)(param_1[0x16] + uVar5) = *(undefined1 *)(param_1[0x16] + uVar8);
          lVar7 = param_1[0x15];
          puVar15 = (undefined8 *)(lVar7 + uVar5 * 0x10 + 0x10);
          if (puVar15 < (undefined8 *)((lVar7 + uVar8 * 0x10) - 0x10)) {
            puVar12 = (undefined8 *)((lVar7 + uVar8 * 0x10) - 0x20);
            do {
              uVar19 = puVar15[1];
              uVar17 = *puVar15;
              uVar6 = puVar12[2];
              puVar15[1] = puVar12[3];
              *puVar15 = uVar6;
              bVar4 = puVar15 + 2 < puVar12;
              puVar12[3] = uVar19;
              puVar12[2] = uVar17;
              puVar15 = puVar15 + 2;
              puVar12 = puVar12 + -2;
            } while (bVar4);
          }
          pbVar14 = (byte *)(param_1[0x16] + uVar5);
          lVar7 = param_1[0x16] + uVar8;
          if (pbVar14 + 1 < (byte *)(lVar7 + -1)) {
            pbVar14 = pbVar14 + 1;
            pbVar9 = (byte *)(lVar7 + -2);
            do {
              bVar2 = *pbVar14;
              *pbVar14 = pbVar9[1];
              bVar4 = pbVar14 + 1 < pbVar9;
              pbVar9[1] = bVar2;
              pbVar14 = pbVar14 + 1;
              pbVar9 = pbVar9 + -1;
            } while (bVar4);
            pbVar14 = (byte *)(param_1[0x16] + uVar5);
          }
          *pbVar14 = *pbVar14 | 4;
          *(byte *)(param_1[0x16] + (ulong)(uVar13 - 2)) =
               *(byte *)(param_1[0x16] + (ulong)(uVar13 - 2)) | 8;
        }
        else {
          *(uint *)(param_1 + 0x14) = uVar11;
        }
        uVar5 = 0;
        *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
    }
  }
  else {
    uVar5 = FUN_00e23a6c(param_1,*param_1);
    if ((int)uVar5 == 0) {
      uVar11 = *(uint *)(param_1 + 0x14);
      iVar10 = *(int *)((long)param_1 + 0xbc);
      iVar3 = uVar11 - iVar10;
      if (0 < iVar3) {
        uVar13 = *(uint *)(param_1 + 0xe);
        uVar1 = *(uint *)((long)param_1 + 0x74);
        local_50[0] = local_50[0] & 0xffffffff00000000;
        if (uVar1 < uVar13 + iVar3) {
          uVar17 = param_1[0x12];
          uVar18 = uVar1;
          do {
            uVar18 = uVar18 + (uVar18 >> 1) + 0x10;
          } while (uVar18 < uVar13 + iVar3);
          uVar6 = FUN_00e13bcc(uVar17,0x10,uVar1,uVar18,param_1[0xf],local_50);
          param_1[0xf] = uVar6;
          if ((int)local_50[0] != 0) {
            return local_50[0] & 0xffffffff;
          }
          lVar7 = FUN_00e13bcc(uVar17,1,uVar1,uVar18,param_1[0x10],local_50);
          param_1[0x10] = lVar7;
          if ((int)local_50[0] != 0) {
            return local_50[0] & 0xffffffff;
          }
          uVar13 = *(uint *)(param_1 + 0xe);
          uVar11 = *(uint *)(param_1 + 0x14);
          iVar10 = *(int *)((long)param_1 + 0xbc);
          *(uint *)((long)param_1 + 0x74) = uVar18;
        }
        else {
          lVar7 = param_1[0x10];
        }
        puVar15 = (undefined8 *)((param_1[0x15] + (ulong)uVar11 * 0x10) - 0x10);
        if ((undefined8 *)(param_1[0x15] + (long)iVar10 * 0x10) <= puVar15) {
          pbVar14 = (byte *)(param_1[0x16] + (ulong)uVar11);
          pbVar9 = (byte *)(lVar7 + (ulong)uVar13);
          puVar12 = (undefined8 *)(param_1[0xf] + (ulong)uVar13 * 0x10);
          do {
            pbVar14 = pbVar14 + -1;
            puVar16 = puVar15 + -2;
            uVar17 = *puVar15;
            puVar12[1] = puVar15[1];
            *puVar12 = uVar17;
            *pbVar9 = *pbVar14 & 0xf3;
            iVar10 = *(int *)((long)param_1 + 0xbc);
            pbVar9 = pbVar9 + 1;
            puVar12 = puVar12 + 2;
            puVar15 = puVar16;
          } while ((undefined8 *)(param_1[0x15] + (long)iVar10 * 0x10) <= puVar16);
          uVar13 = *(uint *)(param_1 + 0xe);
        }
        *(int *)(param_1 + 0x14) = iVar10;
        *(undefined1 *)(param_1 + 0x11) = 0;
        *(uint *)(param_1 + 0xe) = uVar13 + iVar3;
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
      param_1[3] = param_1[8];
      param_1[2] = param_1[7];
      uVar5 = FUN_00e23a6c(param_1,param_1[6] + 0xb40000);
      if ((int)uVar5 == 0) {
        uVar11 = *(uint *)((long)param_1 + 0x8c);
        uVar5 = (ulong)uVar11;
        uVar13 = *(uint *)(param_1 + 0xe);
        if (uVar11 + 1 < uVar13) {
          uVar11 = uVar13 - 1;
          *(uint *)(param_1 + 0xe) = uVar11;
          puVar15 = (undefined8 *)(param_1[0xf] + (ulong)uVar11 * 0x10);
          uVar17 = *puVar15;
          puVar12 = (undefined8 *)(param_1[0xf] + uVar5 * 0x10);
          puVar12[1] = puVar15[1];
          *puVar12 = uVar17;
          *(undefined1 *)(param_1[0x10] + uVar5) = *(undefined1 *)(param_1[0x10] + (ulong)uVar11);
          *(byte *)(param_1[0x10] + uVar5) = *(byte *)(param_1[0x10] + uVar5) | 4;
          *(byte *)(param_1[0x10] + (ulong)(uVar13 - 2)) =
               *(byte *)(param_1[0x10] + (ulong)(uVar13 - 2)) | 8;
        }
        else {
          *(uint *)(param_1 + 0xe) = uVar11;
        }
        uVar5 = 0;
        *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x11) = 0;
      }
    }
  }
  return uVar5;
}

