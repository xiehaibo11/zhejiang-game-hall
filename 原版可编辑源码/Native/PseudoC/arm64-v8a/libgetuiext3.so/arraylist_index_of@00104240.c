
ulong arraylist_index_of(long *param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_1[1]) {
    uVar2 = 0;
    do {
      iVar1 = (*param_2)(*(undefined8 *)(*param_1 + uVar2 * 8),param_3);
      if (iVar1 != 0) goto LAB_00104294;
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)(int)param_1[1]);
  }
  uVar2 = 0xffffffff;
LAB_00104294:
  return uVar2 & 0xffffffff;
}

