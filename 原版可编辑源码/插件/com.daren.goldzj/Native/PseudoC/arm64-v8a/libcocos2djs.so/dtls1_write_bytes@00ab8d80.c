
void dtls1_write_bytes(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 < 0x4001) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    do_dtls1_write();
    return;
  }
                    /* WARNING: Subroutine does not return */
  OPENSSL_die("assertion failed: len <= SSL3_RT_MAX_PLAIN_LENGTH","ssl/record/rec_layer_d1.c",0x3cf)
  ;
}

