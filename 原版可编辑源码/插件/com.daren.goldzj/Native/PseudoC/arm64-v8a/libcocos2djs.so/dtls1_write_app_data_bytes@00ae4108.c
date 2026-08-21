
undefined8
dtls1_write_app_data_bytes(long param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int line;
  
                    /* try { // try from 00ae4114 to 00be411f has its CatchHandler @ 00ae4184 */
                    /* try { // try from 00ae4120 to 00be416b has its CatchHandler @ 00ae404c */
  iVar1 = SSL_in_init();
  if ((iVar1 != 0) && (iVar1 = ossl_statem_get_in_handshake(param_1), iVar1 == 0)) {
    uVar2 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if ((int)uVar2 == 0) {
      iVar1 = 0xe5;
      line = 0x22;
                    /* try { // try from 00ae41c0 to 00be42c7 has its CatchHandler @ 00ae41c0
                       catch() { ... } // from try @ 00ae41c0 with catch @ 00ae41c0
                       catch() { ... } // from try @ 00ae42f4 with catch @ 00ae41c0 */
      goto LAB_00ae415c;
    }
  }
  if (param_4 < 0x4001) {
                    /* catch() { ... } // from try @ 00ae40e8 with catch @ 00ae4174
                       catch() { ... } // from try @ 00ae416c with catch @ 00ae4174
                       try { // try from 00ae4174 to 00be41bf has its CatchHandler @ 00ae404c */
                    /* catch() { ... } // from try @ 00ae4114 with catch @ 00ae4184 */
    uVar2 = dtls1_write_bytes(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  iVar1 = 0x14e;
  line = 0x28;
LAB_00ae415c:
  ERR_put_error(0x14,0x10c,iVar1,"ssl/d1_msg.c",line);
                    /* try { // try from 00ae416c to 00be4173 has its CatchHandler @ 00ae4174 */
  return 0xffffffff;
}

