
undefined8 * FUN_00bff850(undefined8 *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  
  puVar3 = (undefined1 *)*param_1;
  iVar1 = *(int *)(param_2 + 0x10);
  if ((int)param_1[1] == (int)puVar3) {
    puVar3 = (undefined1 *)FUN_00c1a4a8(param_1,1);
  }
  pbVar4 = puVar3 + 1;
  *puVar3 = 0x22;
  *param_1 = pbVar4;
  if (iVar1 != 0) {
    pbVar5 = (byte *)(param_2 + 0x18);
    do {
      pbVar7 = pbVar5 + 1;
      bVar8 = *pbVar5;
      uVar6 = (uint)bVar8;
      if ((uint)((int)param_1[1] - (int)pbVar4) < 4) {
        pbVar4 = (byte *)FUN_00c1a4a8(param_1,4);
      }
      if ((bVar8 == 0x5c || bVar8 == 0x22) || (bVar8 == 10)) {
        pbVar5 = pbVar4 + 1;
        *pbVar4 = 0x5c;
      }
      else {
        pbVar5 = pbVar4;
        if (((&DAT_01410f61)[bVar8] & 1) != 0) {
          *pbVar4 = 0x5c;
          if (bVar8 < 100) {
            if (((byte)(&DAT_01410f61)[*pbVar7] >> 3 & 1) != 0) {
              pbVar4[1] = 0x30;
              pbVar4 = pbVar4 + 2;
              goto LAB_00bff92c;
            }
            pbVar5 = pbVar4 + 1;
            pbVar4 = pbVar5;
            if (9 < bVar8) goto LAB_00bff92c;
          }
          else {
            pbVar4[1] = 0x31;
            uVar6 = bVar8 - 100;
            pbVar4 = pbVar4 + 2;
LAB_00bff92c:
            pbVar5 = pbVar4 + 1;
            cVar2 = (char)(uVar6 * 0xcd >> 0xb);
            *pbVar4 = cVar2 + 0x30;
            bVar8 = (char)uVar6 + cVar2 * -10;
          }
          bVar8 = bVar8 + 0x30;
        }
      }
      pbVar4 = pbVar5 + 1;
      *pbVar5 = bVar8;
      *param_1 = pbVar4;
      pbVar5 = pbVar7;
    } while (pbVar7 != (byte *)(param_2 + (ulong)(iVar1 - 1) + 0x19));
  }
  if ((int)param_1[1] == (int)pbVar4) {
    pbVar4 = (byte *)FUN_00c1a4a8(param_1,1);
  }
  *pbVar4 = 0x22;
  *param_1 = pbVar4 + 1;
  return param_1;
}

