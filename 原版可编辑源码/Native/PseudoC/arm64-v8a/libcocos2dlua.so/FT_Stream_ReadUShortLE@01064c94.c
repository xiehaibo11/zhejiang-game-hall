
undefined2 FT_Stream_ReadUShortLE(long *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined2 local_24 [2];
  
  *param_2 = 0;
  lVar2 = param_1[2];
  if ((ulong)param_1[1] <= lVar2 + 1U) {
LAB_01064cec:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (undefined2 *)(*param_1 + lVar2);
    if (puVar3 == (undefined2 *)0x0) {
      uVar1 = 0;
      goto LAB_01064d1c;
    }
  }
  else {
    lVar2 = (*(code *)param_1[5])(param_1,lVar2,local_24,2);
    if (lVar2 != 2) goto LAB_01064cec;
    lVar2 = param_1[2];
    puVar3 = local_24;
  }
  uVar1 = *puVar3;
LAB_01064d1c:
  param_1[2] = lVar2 + 2;
  return uVar1;
}

