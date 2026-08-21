
void speex_bits_write(long *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[2];
  lVar4 = param_1[1];
  if ((int)lVar3 != 0) {
    uVar2 = 0;
    while( true ) {
      speex_bits_pack(param_1,uVar2,1);
      if ((int)param_1[2] == 0) break;
      uVar2 = 1;
    }
  }
  *(int *)(param_1 + 2) = (int)lVar3;
  iVar1 = (int)lVar4 + 7 >> 3;
  if (param_3 <= iVar1) {
    iVar1 = param_3;
  }
  param_1[1] = lVar4;
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      *(undefined1 *)(param_2 + lVar3) = *(undefined1 *)(*param_1 + lVar3);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}

