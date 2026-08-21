
ulong FUN_00e1dbfc(long *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  byte local_24 [4];
  
  *param_2 = 0;
  lVar1 = param_1[2];
  if ((ulong)param_1[1] <= lVar1 + 2U) {
LAB_00e1dc54:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    pbVar3 = (byte *)(*param_1 + lVar1);
    if (pbVar3 == (byte *)0x0) {
      uVar2 = 0;
      goto LAB_00e1dc9c;
    }
  }
  else {
    lVar1 = (*(code *)param_1[5])(param_1,lVar1,local_24,3);
    if (lVar1 != 3) goto LAB_00e1dc54;
    lVar1 = param_1[2];
    pbVar3 = local_24;
  }
  uVar2 = (ulong)*pbVar3 << 0x10 | (ulong)pbVar3[1] << 8 | (ulong)pbVar3[2];
LAB_00e1dc9c:
  param_1[2] = lVar1 + 3;
  return uVar2;
}

