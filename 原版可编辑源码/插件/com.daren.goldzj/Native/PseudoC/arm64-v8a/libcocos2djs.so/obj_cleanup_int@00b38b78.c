
void obj_cleanup_int(void)

{
  if (DAT_01d3aca8 != 0) {
    OPENSSL_LH_set_down_load(DAT_01d3aca8,0);
    OPENSSL_LH_doall(DAT_01d3aca8,&LAB_00b38be0);
    OPENSSL_LH_doall(DAT_01d3aca8,&LAB_00b38bfc);
    OPENSSL_LH_doall(DAT_01d3aca8,&LAB_00b38c10);
    OPENSSL_LH_free(DAT_01d3aca8);
    DAT_01d3aca8 = 0;
  }
  return;
}

