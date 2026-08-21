
long FUN_010a169c(long param_1,undefined4 param_2)

{
  long lVar1;
  
  switch(param_2) {
  case 0:
    return param_1 + 0x130;
  case 1:
    return param_1 + 0x1c8;
  case 2:
    lVar1 = 0;
    if (*(short *)(param_1 + 600) != -1) {
      lVar1 = param_1 + 600;
    }
    break;
  case 3:
    return param_1 + 400;
  case 4:
    lVar1 = param_1 + 0x1f8;
    if (*(char *)(param_1 + 0x1f0) == '\0') {
      lVar1 = 0;
    }
    return lVar1;
  case 5:
    return param_1 + 0x2e0;
  case 6:
    lVar1 = param_1 + 0x380;
    if (*(long *)(param_1 + 0x380) == 0) {
      lVar1 = 0;
    }
    return lVar1;
  default:
    return 0;
  }
  return lVar1;
}

