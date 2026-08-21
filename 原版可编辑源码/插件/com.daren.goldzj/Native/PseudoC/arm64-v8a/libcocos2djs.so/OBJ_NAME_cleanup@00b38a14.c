
void OBJ_NAME_cleanup(int type)

{
  undefined8 uVar1;
  
  if (DAT_01d3ac98 != 0) {
    DAT_01d3ac90 = type;
    uVar1 = OPENSSL_LH_get_down_load(DAT_01d3ac98);
    OPENSSL_LH_set_down_load(DAT_01d3ac98,0);
    OPENSSL_LH_doall(DAT_01d3ac98,&LAB_00b38aac);
    if (-1 < type) {
      OPENSSL_LH_set_down_load(DAT_01d3ac98,uVar1);
      return;
    }
    OPENSSL_LH_free(DAT_01d3ac98);
    OPENSSL_sk_pop_free(DAT_01d3aca0,&LAB_00b38b68);
    DAT_01d3ac98 = 0;
    DAT_01d3aca0 = 0;
  }
  return;
}

