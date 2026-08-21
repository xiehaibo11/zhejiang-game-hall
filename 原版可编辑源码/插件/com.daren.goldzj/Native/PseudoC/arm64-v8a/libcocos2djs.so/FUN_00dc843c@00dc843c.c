
void FUN_00dc843c(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,int param_6,uint param_7,int param_8,byte *param_9)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  
  if (param_6 != 0) {
    lVar8 = *(long *)(param_1 + 0x60);
    uVar1 = param_7 + 7;
    if (-1 < (int)param_7) {
      uVar1 = param_7;
    }
    lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
    if (param_5 < 8) {
      do {
        pbVar11 = param_9;
        if (param_5 != 0) {
          pbVar11 = param_9 + 1;
          if (param_5 - 1 < 7) {
            puVar12 = *(undefined4 **)(lVar8 + (ulong)*param_9 * 8);
            puVar5 = param_2;
            puVar7 = param_2;
            puVar4 = puVar12;
            switch(param_5) {
            case 7:
              puVar4 = puVar12 + 1;
              puVar7 = param_2 + 1;
              *param_2 = *puVar12;
            case 6:
              puVar12 = puVar4 + 1;
              puVar5 = puVar7 + 1;
              *puVar7 = *puVar4;
            case 5:
              puVar4 = puVar12 + 1;
              param_2 = puVar5 + 1;
              *puVar5 = *puVar12;
            case 4:
              puVar12 = puVar4 + 1;
              puVar5 = param_2 + 1;
              *param_2 = *puVar4;
            case 3:
              puVar4 = puVar12 + 1;
              param_2 = puVar5 + 1;
              *puVar5 = *puVar12;
            case 2:
              puVar12 = puVar4 + 1;
              puVar5 = param_2 + 1;
              *param_2 = *puVar4;
            case 1:
              param_2 = puVar5 + 1;
              *puVar5 = *puVar12;
            }
          }
        }
        param_2 = param_2 + param_8;
        param_6 = param_6 + -1;
        param_9 = pbVar11 + lVar2;
      } while (param_6 != 0);
    }
    else {
      uVar3 = param_5 - 8;
      uVar1 = uVar3 & 0xfffffff8;
      do {
        param_6 = param_6 + -1;
        puVar5 = param_2;
        pbVar11 = param_9;
        uVar6 = param_5;
        do {
          uVar6 = uVar6 - 8;
          puVar7 = *(undefined4 **)(lVar8 + (ulong)*pbVar11 * 8);
          *puVar5 = *puVar7;
          puVar5[1] = puVar7[1];
          puVar5[2] = puVar7[2];
          puVar5[3] = puVar7[3];
          puVar5[4] = puVar7[4];
          puVar5[5] = puVar7[5];
          puVar5[6] = puVar7[6];
          puVar5[7] = puVar7[7];
          puVar5 = puVar5 + 8;
          pbVar11 = pbVar11 + 1;
        } while (7 < uVar6);
        puVar5 = param_2 + (ulong)uVar1 + 8;
        if (uVar3 == uVar1) {
          lVar9 = 1;
        }
        else {
          if ((param_5 - uVar1) - 9 < 7) {
            puVar10 = *(undefined4 **)(lVar8 + (ulong)param_9[(ulong)(uVar3 >> 3) + 1] * 8);
            puVar7 = puVar5;
            puVar4 = puVar5;
            puVar12 = puVar10;
            switch(param_5 - uVar1) {
            case 0xf:
              puVar12 = puVar10 + 1;
              puVar7 = param_2 + (ulong)uVar1 + 9;
              *puVar5 = *puVar10;
            case 0xe:
              puVar10 = puVar12 + 1;
              puVar4 = puVar7 + 1;
              *puVar7 = *puVar12;
            case 0xd:
              puVar12 = puVar10 + 1;
              puVar5 = puVar4 + 1;
              *puVar4 = *puVar10;
            case 0xc:
              puVar10 = puVar12 + 1;
              puVar7 = puVar5 + 1;
              *puVar5 = *puVar12;
            case 0xb:
              puVar12 = puVar10 + 1;
              puVar5 = puVar7 + 1;
              *puVar7 = *puVar10;
            case 10:
              puVar10 = puVar12 + 1;
              puVar7 = puVar5 + 1;
              *puVar5 = *puVar12;
            case 9:
              puVar5 = puVar7 + 1;
              *puVar7 = *puVar10;
            }
          }
          lVar9 = 2;
        }
        param_2 = puVar5 + param_8;
        param_9 = param_9 + lVar2 + lVar9 + (ulong)(uVar3 >> 3);
      } while (param_6 != 0);
    }
  }
  return;
}

