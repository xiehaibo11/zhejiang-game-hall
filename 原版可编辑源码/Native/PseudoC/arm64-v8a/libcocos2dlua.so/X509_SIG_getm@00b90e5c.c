
void X509_SIG_getm(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
                    /* catch() { ... } // from try @ 00b90dfc with catch @ 00b90e5c */
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}

