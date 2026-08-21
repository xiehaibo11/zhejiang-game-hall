
long FUN_0125f62c(long *param_1)

{
  char cVar1;
  long lVar2;
  long local_28;
  
  if ((char *)param_1[1] != (char *)*param_1) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == 'D') {
      lVar2 = FUN_01258cc4(param_1);
    }
    else {
      if (cVar1 != 'T') goto LAB_0125f66c;
      lVar2 = FUN_01258a34(param_1);
    }
    if (lVar2 != 0) {
      local_28 = lVar2;
      FUN_01257c80(param_1 + 0x25,&local_28);
    }
    return lVar2;
  }
LAB_0125f66c:
  lVar2 = FUN_012581e0(param_1);
  return lVar2;
}

