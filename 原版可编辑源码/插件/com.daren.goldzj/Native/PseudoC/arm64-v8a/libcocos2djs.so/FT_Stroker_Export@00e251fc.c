
void FT_Stroker_Export(long param_1,short *param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  short *psVar9;
  
  if ((param_1 != 0) && (param_2 != (short *)0x0)) {
    if (*(char *)(param_1 + 0x98) != '\0') {
      if (*(uint *)(param_1 + 0x70) == 0) {
        sVar2 = param_2[1];
      }
      else {
        psVar9 = param_2 + 1;
        memcpy((void *)(*(long *)(param_2 + 4) + (long)*psVar9 * 0x10),*(void **)(param_1 + 0x78),
               (ulong)*(uint *)(param_1 + 0x70) << 4);
        iVar3 = *(int *)(param_1 + 0x70);
        sVar2 = *psVar9;
        if (iVar3 != 0) {
          pbVar4 = *(byte **)(param_1 + 0x80);
          pbVar5 = (byte *)(*(long *)(param_2 + 8) + (long)sVar2);
          do {
            bVar1 = *pbVar4 & 2;
            if ((*pbVar4 & 1) != 0) {
              bVar1 = 1;
            }
            iVar3 = iVar3 + -1;
            *pbVar5 = bVar1;
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
          } while (iVar3 != 0);
          iVar3 = *(int *)(param_1 + 0x70);
          sVar2 = param_2[1];
          if (iVar3 != 0) {
            pbVar4 = *(byte **)(param_1 + 0x80);
            psVar6 = (short *)(*(long *)(param_2 + 0xc) + (long)*param_2 * 2);
            iVar8 = iVar3;
            do {
              psVar7 = psVar6;
              if ((*pbVar4 >> 3 & 1) != 0) {
                psVar7 = psVar6 + 1;
                *psVar6 = sVar2;
                *param_2 = *param_2 + 1;
              }
              iVar8 = iVar8 + -1;
              pbVar4 = pbVar4 + 1;
              sVar2 = sVar2 + 1;
              psVar6 = psVar7;
            } while (iVar8 != 0);
            sVar2 = *psVar9;
          }
          sVar2 = sVar2 + (short)iVar3;
        }
      }
      param_2[1] = sVar2;
    }
    if (*(char *)(param_1 + 200) != '\0') {
      if (*(uint *)(param_1 + 0xa0) == 0) {
        sVar2 = param_2[1];
        iVar3 = 0;
      }
      else {
        psVar9 = param_2 + 1;
        memcpy((void *)(*(long *)(param_2 + 4) + (long)*psVar9 * 0x10),*(void **)(param_1 + 0xa8),
               (ulong)*(uint *)(param_1 + 0xa0) << 4);
        iVar3 = *(int *)(param_1 + 0xa0);
        sVar2 = *psVar9;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          pbVar4 = *(byte **)(param_1 + 0xb0);
          pbVar5 = (byte *)(*(long *)(param_2 + 8) + (long)sVar2);
          do {
            bVar1 = *pbVar4 & 2;
            if ((*pbVar4 & 1) != 0) {
              bVar1 = 1;
            }
            iVar3 = iVar3 + -1;
            *pbVar5 = bVar1;
            pbVar4 = pbVar4 + 1;
            pbVar5 = pbVar5 + 1;
          } while (iVar3 != 0);
          iVar3 = *(int *)(param_1 + 0xa0);
          sVar2 = param_2[1];
          if (iVar3 != 0) {
            pbVar4 = *(byte **)(param_1 + 0xb0);
            psVar6 = (short *)(*(long *)(param_2 + 0xc) + (long)*param_2 * 2);
            iVar8 = iVar3;
            do {
              psVar7 = psVar6;
              if ((*pbVar4 >> 3 & 1) != 0) {
                psVar7 = psVar6 + 1;
                *psVar6 = sVar2;
                *param_2 = *param_2 + 1;
              }
              iVar8 = iVar8 + -1;
              pbVar4 = pbVar4 + 1;
              sVar2 = sVar2 + 1;
              psVar6 = psVar7;
            } while (iVar8 != 0);
            sVar2 = *psVar9;
          }
        }
      }
      param_2[1] = sVar2 + (short)iVar3;
    }
  }
  return;
}

