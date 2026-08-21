
int FUN_00e47cec(long param_1,byte *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  int local_44;
  
  pbVar14 = (byte *)(param_1 + 5);
  local_44 = 0;
  if (pbVar14 <= param_2) {
    bVar2 = *(byte *)(param_1 + 4);
    bVar3 = *(byte *)(param_1 + 3);
    uVar15 = (ulong)bVar3;
    uVar1 = *(int *)(param_3 + 0x11) + (uint)bVar2;
    if (*(uint *)((long)param_3 + 0x8c) < uVar1) {
      uVar1 = uVar1 + 3 & 0xfffffffc;
      uVar4 = FUN_00e13bcc(*param_3,0x28,*(int *)(param_3 + 0x11),uVar1,param_3[0x12],&local_44);
      param_3[0x12] = uVar4;
      if (local_44 != 0) {
        return local_44;
      }
      *(uint *)((long)param_3 + 0x8c) = uVar1;
    }
    if (pbVar14 + ((uVar15 & 1 | 8) + ((uVar15 & 2) >> 1) + ((uVar15 & 4) >> 2) +
                   ((uVar15 & 8) >> 3) + ((uVar15 & 0x10) >> 4)) * (ulong)bVar2 <= param_2) {
      uVar1 = *(uint *)(param_3 + 0x11);
      uVar12 = (uint)bVar2;
      if (bVar2 != 0) {
        puVar9 = (uint *)(param_3[0x12] + (ulong)uVar1 * 0x28);
        iVar5 = (int)(uVar15 & 2);
        iVar6 = (int)(uVar15 & 4);
        iVar7 = (int)(uVar15 & 8);
        iVar8 = (int)(uVar15 & 0x10);
        uVar10 = uVar12;
        if ((bVar3 & 1) == 0) {
          do {
            *puVar9 = (uint)*pbVar14;
            if (iVar5 == 0) {
              pbVar13 = pbVar14 + 2;
              puVar9[1] = (uint)pbVar14[1];
              puVar9[2] = (uint)*pbVar13;
              if (iVar6 == 0) goto LAB_00e47f88;
LAB_00e47f0c:
              pbVar14 = pbVar13 + 4;
              puVar9[5] = (uint)pbVar13[1] << 0x10 | (uint)pbVar13[2] << 8 | (uint)pbVar13[3];
              if (iVar7 != 0) goto LAB_00e47f34;
LAB_00e47fa8:
              pbVar13 = pbVar14 + 2;
              puVar9[6] = (uint)CONCAT11(*pbVar14,pbVar14[1]);
              if (iVar8 == 0) goto LAB_00e47fc8;
LAB_00e47f5c:
              pbVar14 = pbVar13 + 2;
              uVar11 = (uint)CONCAT11(*pbVar13,pbVar13[1]);
            }
            else {
              pbVar13 = pbVar14 + 3;
              puVar9[1] = (uint)CONCAT11(pbVar14[1],pbVar14[2]);
              puVar9[2] = (uint)*pbVar13;
              if (iVar6 != 0) goto LAB_00e47f0c;
LAB_00e47f88:
              pbVar14 = pbVar13 + 3;
              puVar9[5] = (uint)CONCAT11(pbVar13[1],pbVar13[2]);
              if (iVar7 == 0) goto LAB_00e47fa8;
LAB_00e47f34:
              pbVar13 = pbVar14 + 3;
              puVar9[6] = (uint)*pbVar14 << 0x10 | (uint)pbVar14[1] << 8 | (uint)pbVar14[2];
              if (iVar8 != 0) goto LAB_00e47f5c;
LAB_00e47fc8:
              pbVar14 = pbVar13 + 1;
              uVar11 = (uint)*pbVar13;
            }
            puVar9[7] = uVar11;
            uVar10 = uVar10 - 1;
            puVar9 = puVar9 + 10;
          } while (uVar10 != 0);
        }
        else {
          do {
            while (*puVar9 = (uint)CONCAT11(*pbVar14,pbVar14[1]), iVar5 != 0) {
              pbVar13 = pbVar14 + 4;
              puVar9[1] = (uint)CONCAT11(pbVar14[2],pbVar14[3]);
              puVar9[2] = (uint)*pbVar13;
              if (iVar6 != 0) goto LAB_00e47dfc;
LAB_00e47e88:
              pbVar14 = pbVar13 + 3;
              puVar9[5] = (uint)CONCAT11(pbVar13[1],pbVar13[2]);
              if (iVar7 == 0) goto LAB_00e47ea8;
LAB_00e47e24:
              pbVar13 = pbVar14 + 3;
              puVar9[6] = (uint)*pbVar14 << 0x10 | (uint)pbVar14[1] << 8 | (uint)pbVar14[2];
              if (iVar8 != 0) goto LAB_00e47e4c;
LAB_00e47ec8:
              pbVar14 = pbVar13 + 1;
              puVar9[7] = (uint)*pbVar13;
              uVar10 = uVar10 - 1;
              puVar9 = puVar9 + 10;
              if (uVar10 == 0) goto LAB_00e47fdc;
            }
            pbVar13 = pbVar14 + 3;
            puVar9[1] = (uint)pbVar14[2];
            puVar9[2] = (uint)*pbVar13;
            if (iVar6 == 0) goto LAB_00e47e88;
LAB_00e47dfc:
            pbVar14 = pbVar13 + 4;
            puVar9[5] = (uint)pbVar13[1] << 0x10 | (uint)pbVar13[2] << 8 | (uint)pbVar13[3];
            if (iVar7 != 0) goto LAB_00e47e24;
LAB_00e47ea8:
            pbVar13 = pbVar14 + 2;
            puVar9[6] = (uint)CONCAT11(*pbVar14,pbVar14[1]);
            if (iVar8 == 0) goto LAB_00e47ec8;
LAB_00e47e4c:
            pbVar14 = pbVar13 + 2;
            puVar9[7] = (uint)CONCAT11(*pbVar13,pbVar13[1]);
            uVar10 = uVar10 - 1;
            puVar9 = puVar9 + 10;
          } while (uVar10 != 0);
        }
      }
LAB_00e47fdc:
      *(uint *)(param_3 + 0x11) = uVar1 + uVar12;
      return local_44;
    }
  }
  return 8;
}

