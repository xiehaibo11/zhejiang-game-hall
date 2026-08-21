
undefined4 FUN_01477da4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar2 = _Unwind_GetIP();
  if ((lVar2 == 0) || ((char)param_2[3] != '\0')) {
    lVar1 = param_2[1];
    param_2[1] = lVar1 + 1;
    *(long *)(*param_2 + lVar1 * 8) = lVar2;
    uVar3 = 0;
    if ((ulong)param_2[2] <= (ulong)param_2[1]) {
      uVar3 = 5;
    }
  }
  else {
    uVar3 = 0;
    *(undefined1 *)(param_2 + 3) = 1;
  }
  return uVar3;
}

