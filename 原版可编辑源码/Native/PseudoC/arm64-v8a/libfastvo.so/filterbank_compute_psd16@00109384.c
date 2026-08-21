
void filterbank_compute_psd16(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar5 = *(int *)((long)param_1 + 0x24);
  if (0 < iVar5) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    lVar2 = param_1[2];
    lVar4 = param_1[3];
    lVar6 = 0;
    do {
      lVar7 = lVar6 * 4;
      lVar8 = lVar6 * 2;
      lVar6 = lVar6 + 1;
      *(short *)(param_3 + lVar8) =
           (short)((int)*(short *)(lVar4 + lVar8) *
                   (int)*(short *)(param_2 + (long)*(int *)(lVar3 + lVar7) * 2) +
                   (int)*(short *)(lVar2 + lVar8) *
                   (int)*(short *)(param_2 + (long)*(int *)(lVar1 + lVar7) * 2) + 0x4000U >> 0xf);
    } while (lVar6 < iVar5);
  }
  return;
}

