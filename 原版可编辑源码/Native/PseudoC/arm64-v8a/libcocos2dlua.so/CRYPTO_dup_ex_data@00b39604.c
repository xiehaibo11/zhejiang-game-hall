
int CRYPTO_dup_ex_data(int class_index,CRYPTO_EX_DATA *to,CRYPTO_EX_DATA *from)

{
  int iVar1;
  int iVar2;
  undefined1 *ptr;
  undefined8 uVar3;
  int line;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 local_a8 [80];
  void *local_58;
  
  if (from->sk == (stack_st_void *)0x0) {
    return 1;
  }
  if (0xd < (uint)class_index) {
    iVar1 = 0x71;
    iVar2 = 7;
    line = 0x37;
    goto LAB_00b396e4;
  }
  iVar1 = CRYPTO_THREAD_run_once(&DAT_01784820,FUN_00b39af4);
  if ((iVar1 == 0) || (DAT_01784824 == 0)) {
    iVar1 = 0x71;
    iVar2 = 0x41;
    line = 0x3c;
    goto LAB_00b396e4;
  }
  if (DAT_01784828 == 0) {
    return 0;
  }
  puVar4 = &DAT_01784830 + class_index;
  CRYPTO_THREAD_write_lock();
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  iVar2 = OPENSSL_sk_num(*puVar4);
  iVar1 = OPENSSL_sk_num(from->sk);
  if (iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  if (iVar1 < 1) {
    ptr = (undefined1 *)0x0;
  }
  else {
    if (iVar1 < 10) {
      ptr = local_a8;
    }
    else {
      ptr = CRYPTO_malloc(iVar1 << 3,"crypto/ex_data.c",0x114);
      if (ptr == (undefined1 *)0x0) goto LAB_00b39738;
    }
    uVar5 = 0;
    do {
      uVar3 = OPENSSL_sk_value(*puVar4,uVar5 & 0xffffffff);
      *(undefined8 *)(ptr + uVar5 * 8) = uVar3;
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)iVar1);
  }
LAB_00b39738:
  CRYPTO_THREAD_unlock(DAT_01784828);
  if ((iVar1 < 1) || (ptr != (undefined1 *)0x0)) {
    if (0 < iVar1) {
      uVar5 = 0;
      do {
        if ((from->sk == (stack_st_void *)0x0) ||
           (iVar2 = OPENSSL_sk_num(), (long)iVar2 <= (long)uVar5)) {
          local_58 = (void *)0x0;
        }
        else {
          local_58 = (void *)OPENSSL_sk_value(from->sk,uVar5 & 0xffffffff);
        }
        puVar4 = *(undefined8 **)(ptr + uVar5 * 8);
        if ((puVar4 != (undefined8 *)0x0) && ((code *)puVar4[4] != (code *)0x0)) {
          (*(code *)puVar4[4])(to,from,&local_58,uVar5 & 0xffffffff,*puVar4,puVar4[1]);
        }
        CRYPTO_set_ex_data(to,(int)uVar5,local_58);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)iVar1);
    }
    if (ptr != local_a8) {
      CRYPTO_free(ptr);
    }
    return 1;
  }
  iVar1 = 0x6e;
  iVar2 = 0x41;
  line = 0x11c;
LAB_00b396e4:
  ERR_put_error(0xf,iVar1,iVar2,"crypto/ex_data.c",line);
  return 0;
}

