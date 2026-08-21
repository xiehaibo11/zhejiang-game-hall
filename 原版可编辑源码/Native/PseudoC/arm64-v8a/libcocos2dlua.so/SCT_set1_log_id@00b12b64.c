
undefined8 SCT_set1_log_id(int *param_1,long param_2,long param_3)

{
  long lVar1;
  int reason;
  int line;
  long *plVar2;
  
  if ((param_3 == 0x20) || (*param_1 != 0)) {
    plVar2 = (long *)(param_1 + 6);
    CRYPTO_free((void *)*plVar2);
    param_1[0x18] = 0;
    *plVar2 = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    if (param_2 == 0) {
      return 1;
    }
    if (param_3 == 0) {
      return 1;
    }
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto/ct/ct_sct.c",0x65);
    *plVar2 = lVar1;
    if (lVar1 != 0) {
      *(long *)(param_1 + 8) = param_3;
      return 1;
    }
    reason = 0x41;
    line = 0x67;
  }
  else {
    reason = 100;
    line = 0x5b;
  }
  ERR_put_error(0x32,0x73,reason,"crypto/ct/ct_sct.c",line);
  return 0;
}

