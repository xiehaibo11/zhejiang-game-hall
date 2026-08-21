
undefined1 FUN_00e1dabc(long *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 local_24 [4];
  
  local_24[0] = 0;
  *param_2 = 0;
  uVar2 = param_1[2];
  if ((code *)param_1[5] == (code *)0x0) {
    if ((ulong)param_1[1] <= uVar2) goto LAB_00e1db3c;
    local_24[0] = *(undefined1 *)(*param_1 + uVar2);
  }
  else {
    lVar1 = (*(code *)param_1[5])(param_1,uVar2,local_24,1);
    if (lVar1 != 1) {
LAB_00e1db3c:
      *param_2 = 0x55;
      return 0;
    }
    uVar2 = param_1[2];
  }
  param_1[2] = uVar2 + 1;
  return local_24[0];
}

