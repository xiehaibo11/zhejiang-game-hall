
void filterbank_compute_bank32(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (0 < (int)param_1[4]) {
    lVar5 = 0;
    do {
      *(undefined4 *)(param_3 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[4]);
  }
  if (0 < *(int *)((long)param_1 + 0x24)) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    lVar2 = param_1[2];
    lVar4 = param_1[3];
    lVar5 = 0;
    do {
      lVar6 = lVar5 * 4;
      lVar9 = lVar5 * 2;
      lVar7 = (long)*(int *)(lVar1 + lVar6) * 4;
      iVar8 = (int)*(short *)(lVar2 + lVar9);
      *(int *)(param_3 + lVar7) =
           *(int *)(param_3 + lVar7) + ((int)(*(uint *)(param_2 + lVar6) << 1) >> 0x10) * iVar8 +
           ((int)((*(uint *)(param_2 + lVar6) & 0x7fff) * iVar8 + 0x4000) >> 0xf);
      lVar5 = lVar5 + 1;
      lVar7 = (long)*(int *)(lVar3 + lVar6) * 4;
      iVar8 = (int)*(short *)(lVar4 + lVar9);
      *(int *)(param_3 + lVar7) =
           *(int *)(param_3 + lVar7) + ((int)(*(uint *)(param_2 + lVar6) << 1) >> 0x10) * iVar8 +
           ((int)((*(uint *)(param_2 + lVar6) & 0x7fff) * iVar8 + 0x4000) >> 0xf);
    } while (lVar5 < *(int *)((long)param_1 + 0x24));
  }
  return;
}

