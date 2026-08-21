
undefined8 X509_OBJECT_get0_X509_CRL(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 2) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
  return uVar1;
}

