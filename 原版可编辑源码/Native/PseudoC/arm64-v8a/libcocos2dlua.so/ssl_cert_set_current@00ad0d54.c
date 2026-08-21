
undefined8 ssl_cert_set_current(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 != (long *)0x0) {
    if (param_2 == 1) {
      iVar1 = 0;
    }
    else {
      if (param_2 != 2) {
        return 0;
      }
      iVar1 = (int)(*param_1 - (long)(param_1 + 4) >> 3) * -0x33333333 + 1;
      if (6 < iVar1) {
        return 0;
      }
    }
    lVar2 = (long)iVar1 + -1;
    plVar3 = param_1 + (long)iVar1 * 5 + 4;
    do {
      if ((*plVar3 != 0) && (plVar3[1] != 0)) {
        *param_1 = (long)plVar3;
        return 1;
      }
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 5;
    } while (lVar2 < 6);
  }
  return 0;
}

