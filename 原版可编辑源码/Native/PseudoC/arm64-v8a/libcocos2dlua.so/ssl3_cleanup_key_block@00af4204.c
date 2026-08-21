
void ssl3_cleanup_key_block(long param_1)

{
  long lVar1;
  
  CRYPTO_clear_free(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x260),
                    (long)*(int *)(*(long *)(param_1 + 0x90) + 600),"ssl/s3_enc.c",0x147);
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(lVar1 + 0x260) = 0;
  *(undefined4 *)(lVar1 + 600) = 0;
  return;
}

