
undefined8 tls_process_finished(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  size_t len;
  
  lVar4 = *(long *)(param_1 + 0x90);
  if (*(int *)(lVar4 + 0xe8) == 0) {
    ERR_put_error(0x14,0x16c,0x9a,"ssl/statem/statem_lib.c",0xca);
    uVar3 = 10;
  }
  else {
    *(undefined4 *)(lVar4 + 0xe8) = 0;
    iVar1 = *(int *)(lVar4 + 0x214);
    len = (size_t)iVar1;
    if (param_2[1] == len) {
      iVar2 = CRYPTO_memcmp((void *)*param_2,(void *)(lVar4 + 0x194),len);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x38) == 0) {
          if (0x40 < iVar1) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: i <= EVP_MAX_MD_SIZE","ssl/statem/statem_lib.c",0xe5);
          }
          memcpy((void *)(*(long *)(param_1 + 0x90) + 0x381),
                 (void *)(*(long *)(param_1 + 0x90) + 0x194),len);
          *(char *)(*(long *)(param_1 + 0x90) + 0x3c1) = (char)iVar1;
        }
        else {
          if (0x40 < iVar1) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: i <= EVP_MAX_MD_SIZE","ssl/statem/statem_lib.c",0xe1);
          }
          memcpy((void *)(*(long *)(param_1 + 0x90) + 0x340),
                 (void *)(*(long *)(param_1 + 0x90) + 0x194),len);
          *(char *)(*(long *)(param_1 + 0x90) + 0x380) = (char)iVar1;
        }
        return 1;
      }
      ERR_put_error(0x14,0x16c,0x95,"ssl/statem/statem_lib.c",0xd9);
      uVar3 = 0x33;
    }
    else {
                    /* try { // try from 00ae428c to 00be43ff has its CatchHandler @ 00ae428c
                       catch() { ... } // from try @ 00ae428c with catch @ 00ae428c
                       catch() { ... } // from try @ 00ae4408 with catch @ 00ae428c */
      ERR_put_error(0x14,0x16c,0x6f,"ssl/statem/statem_lib.c",0xd3);
      uVar3 = 0x32;
    }
  }
  ssl3_send_alert(param_1,2,uVar3);
  ossl_statem_set_error(param_1);
  return 0;
}

