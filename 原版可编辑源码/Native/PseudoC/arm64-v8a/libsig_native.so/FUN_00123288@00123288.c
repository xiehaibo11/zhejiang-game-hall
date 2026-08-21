
long FUN_00123288(long *param_1)

{
  char cVar1;
  long lVar2;
  long local_28;
  
  if ((char *)param_1[1] != (char *)*param_1) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == 'D') {
      lVar2 = FUN_0011c920(param_1);
    }
    else {
      if (cVar1 != 'T') goto LAB_001232c8;
      lVar2 = FUN_0011c690(param_1);
    }
    if (lVar2 != 0) {
      local_28 = lVar2;
      FUN_0011b8dc(param_1 + 0x25,&local_28);
    }
    return lVar2;
  }
LAB_001232c8:
  lVar2 = FUN_0011be3c(param_1);
  return lVar2;
}

