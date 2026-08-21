
undefined8 SSL_enable_ct(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int reason;
  int line;
  undefined1 *puVar3;
  
                    /* try { // try from 00acaed0 to 00bcaedf has its CatchHandler @ 00acb2a0 */
  if (param_2 == 0) {
                    /* try { // try from 00acaf20 to 00bcaf4f has its CatchHandler @ 00acadbc */
    iVar1 = SSL_CTX_has_client_custom_ext(*(undefined8 *)(param_1 + 0x1b8),0x12);
    if (iVar1 == 0) {
                    /* try { // try from 00acaf80 to 00bcaf8f has its CatchHandler @ 00acb298 */
      lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x41,1,0);
      if (lVar2 == 0) {
        return 0;
      }
      puVar3 = &LAB_00acae34;
LAB_00acafa0:
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined1 **)(param_1 + 0x238) = puVar3;
      return 1;
                    /* try { // try from 00acafac to 00bcafcf has its CatchHandler @ 00acb2d0 */
    }
  }
  else {
    if (param_2 != 1) {
                    /* try { // try from 00acaf50 to 00bcaf67 has its CatchHandler @ 00acb29c */
      iVar1 = 0x192;
      reason = 0xd4;
      line = 0x1093;
      goto LAB_00acaf64;
    }
    iVar1 = SSL_CTX_has_client_custom_ext(*(undefined8 *)(param_1 + 0x1b8),0x12);
    if (iVar1 == 0) {
                    /* try { // try from 00acaefc to 00bcaf1f has its CatchHandler @ 00acb2d4 */
      lVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x80))(param_1,0x41,1,0);
      if (lVar2 == 0) {
        return 0;
      }
      puVar3 = &DAT_00acae3c;
      goto LAB_00acafa0;
    }
  }
  iVar1 = 399;
  reason = 0xce;
  line = 0xff3;
LAB_00acaf64:
  ERR_put_error(0x14,iVar1,reason,"ssl/ssl_lib.c",line);
  return 0;
}

