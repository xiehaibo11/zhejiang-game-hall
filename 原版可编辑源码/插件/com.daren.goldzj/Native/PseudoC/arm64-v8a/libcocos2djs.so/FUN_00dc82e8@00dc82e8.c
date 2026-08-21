
void FUN_00dc82e8(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,int param_6,uint param_7,int param_8,byte *param_9)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  
  if (param_6 != 0) {
    lVar8 = *(long *)(param_1 + 0x60);
    uVar1 = param_7 + 3;
    if (-1 < (int)param_7) {
      uVar1 = param_7;
    }
    lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x22;
    if (param_5 < 4) {
      do {
        puVar6 = param_2;
        pbVar12 = param_9;
        if (param_5 != 0) {
          pbVar12 = param_9 + 1;
          puVar7 = *(undefined4 **)(lVar8 + (ulong)*param_9 * 8);
          if (param_5 != 1) {
            puVar10 = puVar7;
            if (param_5 != 2) {
              if (param_5 != 3) goto LAB_00dc8428;
              puVar10 = puVar7 + 1;
              puVar6 = param_2 + 1;
              *param_2 = *puVar7;
            }
            puVar7 = puVar10 + 1;
            param_2 = puVar6 + 1;
            *puVar6 = *puVar10;
          }
          puVar6 = param_2 + 1;
          *param_2 = *puVar7;
        }
LAB_00dc8428:
        param_2 = puVar6 + param_8;
        param_6 = param_6 + -1;
        param_9 = pbVar12 + lVar2;
      } while (param_6 != 0);
    }
    else {
      uVar3 = param_5 - 4;
      uVar1 = uVar3 & 0xfffffffc;
      iVar4 = param_5 - uVar1;
      do {
        param_6 = param_6 + -1;
        puVar6 = param_2;
        pbVar12 = param_9;
        uVar5 = param_5;
        do {
          uVar5 = uVar5 - 4;
          puVar7 = *(undefined4 **)(lVar8 + (ulong)*pbVar12 * 8);
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6[2] = puVar7[2];
          puVar6[3] = puVar7[3];
          puVar6 = puVar6 + 4;
          pbVar12 = pbVar12 + 1;
        } while (3 < uVar5);
        puVar6 = param_2 + (ulong)uVar1 + 4;
        puVar7 = puVar6;
        if (uVar3 == uVar1) {
          lVar9 = 1;
        }
        else {
          puVar10 = *(undefined4 **)(lVar8 + (ulong)param_9[(ulong)(uVar3 >> 2) + 1] * 8);
          if (iVar4 == 5) {
LAB_00dc83c8:
            puVar7 = puVar6 + 1;
            *puVar6 = *puVar10;
          }
          else {
            puVar11 = puVar10;
            if (iVar4 == 6) {
LAB_00dc83c0:
              puVar10 = puVar11 + 1;
              puVar6 = puVar7 + 1;
              *puVar7 = *puVar11;
              goto LAB_00dc83c8;
            }
            if (iVar4 == 7) {
              puVar11 = puVar10 + 1;
              puVar7 = param_2 + (ulong)uVar1 + 5;
              *puVar6 = *puVar10;
              goto LAB_00dc83c0;
            }
          }
          lVar9 = 2;
        }
        param_2 = puVar7 + param_8;
        param_9 = param_9 + lVar2 + lVar9 + (ulong)(uVar3 >> 2);
      } while (param_6 != 0);
    }
  }
  return;
}

