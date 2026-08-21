
void obj_cleanup_int(void)

{
  if (DAT_01784a28 != 0) {
    OPENSSL_LH_set_down_load(DAT_01784a28,0);
    OPENSSL_LH_doall(DAT_01784a28,&LAB_00b47060);
    OPENSSL_LH_doall(DAT_01784a28,&LAB_00b4707c);
    OPENSSL_LH_doall(DAT_01784a28,&LAB_00b47090);
    OPENSSL_LH_free(DAT_01784a28);
    DAT_01784a28 = 0;
  }
  return;
}

