
void X509_REQ_get0_signature(long param_1,undefined8 *param_2,long *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x48);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 + 0x38;
  }
  return;
}

