
undefined8 OPENSSL_sk_value(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (-1 < param_2)) {
    if (*param_1 <= param_2) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
  }
  return uVar1;
}

