
undefined8 FUN_00b7303c(undefined8 param_1,long *param_2,BIO *param_3,ulong param_4)

{
  long lVar1;
  
  BIO_printf(param_3,"%*s",param_4 & 0xffffffff,&DAT_0189703a);
  if (*param_2 == 0) {
    lVar1 = param_2[1];
  }
  else {
    BIO_write(param_3,"Not Before: ",0xc);
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    BIO_write(param_3,", ",2);
    lVar1 = param_2[1];
  }
  if (lVar1 != 0) {
    BIO_write(param_3,"Not After: ",0xb);
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)param_2[1]);
  }
  return 1;
}

