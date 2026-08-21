
void FUN_00d91d10(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (0 < (int)param_4) {
    uVar4 = *(uint *)(param_1 + 0x90);
    lVar13 = *(long *)(param_1 + 0x290);
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar14 = (ulong)param_4;
    if ((int)uVar4 < 1) {
      do {
        memset((void *)*param_3,0,(ulong)uVar3);
        uVar14 = uVar14 - 1;
        *(uint *)(lVar13 + 0x4c) = *(int *)(lVar13 + 0x4c) + 1U & 0xf;
        param_3 = param_3 + 1;
      } while (uVar14 != 0);
    }
    else {
      uVar15 = 0;
      do {
        memset((void *)param_3[uVar15],0,(ulong)uVar3);
        iVar5 = *(int *)(lVar13 + 0x4c);
        if (uVar3 != 0) {
          uVar6 = 0;
          do {
            lVar8 = *(long *)(param_2 + uVar15 * 8);
            lVar10 = *(long *)(*(long *)(lVar13 + 0x30) + uVar6 * 8);
            lVar11 = *(long *)(lVar13 + uVar6 * 8 + 0x50);
            uVar7 = 0;
            pcVar9 = (char *)param_3[uVar15];
            uVar12 = uVar3;
            do {
              pbVar2 = (byte *)(uVar6 + lVar8);
              uVar1 = (ulong)uVar7;
              uVar12 = uVar12 - 1;
              uVar7 = uVar7 + 1 & 0xf;
              lVar8 = lVar8 + (int)uVar4;
              *pcVar9 = *pcVar9 + *(char *)(lVar10 + (long)*(int *)(lVar11 + (long)iVar5 * 0x40 +
                                                                   uVar1 * 4) + (ulong)*pbVar2);
              pcVar9 = pcVar9 + 1;
            } while (uVar12 != 0);
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar4);
        }
        uVar15 = uVar15 + 1;
        *(uint *)(lVar13 + 0x4c) = iVar5 + 1U & 0xf;
      } while (uVar15 != uVar14);
    }
  }
  return;
}

