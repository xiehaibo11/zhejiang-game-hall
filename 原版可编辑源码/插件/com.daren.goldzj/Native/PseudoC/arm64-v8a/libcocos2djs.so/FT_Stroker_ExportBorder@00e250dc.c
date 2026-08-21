
void FT_Stroker_ExportBorder(long param_1,uint param_2,short *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  byte *pbVar6;
  byte *pbVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  uint *puVar11;
  
  if ((((param_2 < 2) && (param_1 != 0)) && (param_3 != (short *)0x0)) &&
     (*(char *)(param_1 + (ulong)param_2 * 0x30 + 0x98) != '\0')) {
    puVar11 = (uint *)(param_1 + (ulong)param_2 * 0x30 + 0x70);
    if (*puVar11 == 0) {
      sVar5 = param_3[1];
      uVar4 = 0;
    }
    else {
      psVar10 = param_3 + 1;
      param_1 = param_1 + (ulong)param_2 * 0x30;
      memcpy((void *)(*(long *)(param_3 + 4) + (long)*psVar10 * 0x10),*(void **)(param_1 + 0x78),
             (ulong)*puVar11 << 4);
      uVar4 = *puVar11;
      sVar5 = *psVar10;
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        puVar1 = (undefined8 *)(param_1 + 0x80);
        pbVar6 = (byte *)*puVar1;
        pbVar7 = (byte *)(*(long *)(param_3 + 8) + (long)sVar5);
        do {
          bVar2 = *pbVar6 & 2;
          if ((*pbVar6 & 1) != 0) {
            bVar2 = 1;
          }
          uVar4 = uVar4 - 1;
          *pbVar7 = bVar2;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar4 != 0);
        uVar4 = *puVar11;
        sVar5 = param_3[1];
        if (uVar4 != 0) {
          pbVar6 = (byte *)*puVar1;
          psVar8 = (short *)(*(long *)(param_3 + 0xc) + (long)*param_3 * 2);
          uVar3 = uVar4;
          do {
            psVar9 = psVar8;
            if ((*pbVar6 >> 3 & 1) != 0) {
              psVar9 = psVar8 + 1;
              *psVar8 = sVar5;
              *param_3 = *param_3 + 1;
            }
            uVar3 = uVar3 - 1;
            pbVar6 = pbVar6 + 1;
            sVar5 = sVar5 + 1;
            psVar8 = psVar9;
          } while (uVar3 != 0);
          sVar5 = *psVar10;
        }
      }
    }
    param_3[1] = sVar5 + (short)uVar4;
  }
  return;
}

