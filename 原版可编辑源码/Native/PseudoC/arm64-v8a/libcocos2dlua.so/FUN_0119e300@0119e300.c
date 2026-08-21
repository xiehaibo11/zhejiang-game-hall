
ulong FUN_0119e300(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (*(code *)PTR_malloc_01781840)(param_1 + (param_2 + -1) + 8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 + lVar1 + 7U & -(long)param_2;
    *(long *)(uVar2 - 8) = lVar1;
  }
  return uVar2;
}

