
undefined8 tls_construct_finished(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  size_t __n;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 8);
  uVar1 = *(uint *)(lVar3 + 0x6c);
  iVar2 = (**(code **)(lVar3 + 0x28))();
                    /* catch() { ... } // from try @ 00ad5094 with catch @ 00ad50e8 */
  if (0 < iVar2) {
    lVar3 = *(long *)(param_1 + 0x90);
    __n = (size_t)iVar2;
    *(int *)(lVar3 + 400) = iVar2;
    memcpy((void *)(lVar4 + (ulong)uVar1),(void *)(lVar3 + 0x110),__n);
    if (*(int *)(param_1 + 0x38) == 0) {
      if (0x40 < iVar2) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: i <= EVP_MAX_MD_SIZE","ssl/statem/statem_lib.c",0x51);
      }
      memcpy((void *)(*(long *)(param_1 + 0x90) + 0x340),(void *)(*(long *)(param_1 + 0x90) + 0x110)
             ,__n);
      *(char *)(*(long *)(param_1 + 0x90) + 0x380) = (char)iVar2;
    }
    else {
      if (0x40 < iVar2) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: i <= EVP_MAX_MD_SIZE","ssl/statem/statem_lib.c",0x55);
      }
      memcpy((void *)(*(long *)(param_1 + 0x90) + 0x381),(void *)(*(long *)(param_1 + 0x90) + 0x110)
             ,__n);
      *(char *)(*(long *)(param_1 + 0x90) + 0x3c1) = (char)iVar2;
    }
    iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x70))(param_1,0x14,__n);
    if (iVar2 != 0) {
      return 1;
    }
    ERR_put_error(0x14,0x167,0x44,"ssl/statem/statem_lib.c",0x5b);
  }
  return 0;
}

