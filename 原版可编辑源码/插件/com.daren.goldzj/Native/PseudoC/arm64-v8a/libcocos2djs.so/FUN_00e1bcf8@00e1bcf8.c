
ushort FUN_00e1bcf8(long *param_1,undefined4 *param_2)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  ushort local_24 [2];
  
  *param_2 = 0;
  lVar2 = param_1[2];
  if ((ulong)param_1[1] <= lVar2 + 1U) {
LAB_00e1bd50:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (ushort *)(*param_1 + lVar2);
    if (puVar3 == (ushort *)0x0) {
      uVar1 = 0;
      goto LAB_00e1bd8c;
    }
  }
  else {
    lVar2 = (*(code *)param_1[5])(param_1,lVar2,local_24,2);
    if (lVar2 != 2) goto LAB_00e1bd50;
    lVar2 = param_1[2];
    puVar3 = local_24;
  }
  uVar1 = *puVar3 >> 8 | *puVar3 << 8;
LAB_00e1bd8c:
  param_1[2] = lVar2 + 2;
  return uVar1;
}

