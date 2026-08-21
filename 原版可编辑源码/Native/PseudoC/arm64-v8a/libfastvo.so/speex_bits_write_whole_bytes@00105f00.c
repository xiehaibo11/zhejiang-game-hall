
int speex_bits_write_whole_bytes(long *param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  
  iVar1 = (int)param_1[1] >> 3;
  if (param_3 <= iVar1) {
    iVar1 = param_3;
  }
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_2 + lVar2) = *(undefined1 *)(*param_1 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  if ((int)param_1[2] < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((undefined1 *)*param_1)[iVar1];
  }
  *(undefined1 *)*param_1 = uVar3;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 7;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return iVar1;
}

