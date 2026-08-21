
void TIFFYCbCrtoRGB(long param_1,uint param_2,int param_3,int param_4,int *param_5,int *param_6,
                   int *param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (0xfe < param_2) {
    param_2 = 0xff;
  }
  if (param_3 < 0) {
    lVar3 = 0;
  }
  else {
    if (0xfe < param_3) {
      param_3 = 0xff;
    }
    lVar3 = (long)param_3;
  }
  if (param_4 < 0) {
    lVar5 = 0;
  }
  else {
    if (0xfe < param_4) {
      param_4 = 0xff;
    }
    lVar5 = (long)param_4;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  lVar4 = (ulong)param_2 * 4;
  iVar1 = *(int *)(*(long *)(param_1 + 8) + lVar5 * 4) + *(int *)(lVar6 + lVar4);
  iVar2 = iVar1;
  if (0xfe < iVar1) {
    iVar2 = 0xff;
  }
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  *param_5 = iVar2;
  iVar1 = *(int *)(lVar6 + lVar4) +
          (*(int *)(*(long *)(param_1 + 0x18) + lVar5 * 4) +
           *(int *)(*(long *)(param_1 + 0x20) + lVar3 * 4) >> 0x10);
  iVar2 = iVar1;
  if (0xfe < iVar1) {
    iVar2 = 0xff;
  }
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  *param_6 = iVar2;
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + lVar3 * 4) + *(int *)(lVar6 + lVar4);
  iVar2 = iVar1;
  if (0xfe < iVar1) {
    iVar2 = 0xff;
  }
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  *param_7 = iVar2;
  return;
}

