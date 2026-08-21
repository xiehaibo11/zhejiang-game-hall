
ulong FUN_00a24350(byte param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = (*(code *)PTR_malloc_017699f8)(0x20);
    *param_2 = lVar1;
    if (lVar1 == 0) {
LAB_00a24410:
      *(undefined4 *)(param_2 + 3) = 1;
      return 0xffffffff;
    }
    lVar2 = 0;
    param_2[2] = 0x20;
    param_2[1] = 0;
  }
  else {
    lVar2 = param_2[1];
    uVar3 = param_2[2];
    if (uVar3 <= lVar2 + 1U) {
      uVar4 = uVar3 * 2;
      if ((uVar4 < uVar3 || uVar3 == 0) ||
         (lVar1 = (*(code *)PTR_realloc_01769a08)(lVar1,uVar4), lVar1 == 0)) goto LAB_00a24410;
      lVar2 = param_2[1];
      *param_2 = lVar1;
      param_2[2] = uVar4;
    }
  }
  *(byte *)(lVar1 + lVar2) = param_1;
  param_2[1] = param_2[1] + 1;
  return (ulong)param_1;
}

