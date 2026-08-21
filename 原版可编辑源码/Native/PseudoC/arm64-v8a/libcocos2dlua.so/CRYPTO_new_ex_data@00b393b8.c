
int CRYPTO_new_ex_data(int class_index,void *obj,CRYPTO_EX_DATA *ad)

{
  int iVar1;
  uint uVar2;
  undefined1 *ptr;
  undefined8 uVar3;
  int reason;
  int line;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 local_a0 [80];
  
  ptr = local_a0;
  if ((uint)class_index < 0xe) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_01784820,FUN_00b39af4);
    if ((iVar1 == 0) || (DAT_01784824 == 0)) {
      iVar1 = 0x71;
      reason = 0x41;
      line = 0x3c;
    }
    else {
      if (DAT_01784828 == 0) {
        return 0;
      }
      puVar4 = &DAT_01784830 + class_index;
      CRYPTO_THREAD_write_lock();
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      ad->sk = (stack_st_void *)0x0;
      uVar2 = OPENSSL_sk_num(*puVar4);
      if ((int)uVar2 < 1) {
        ptr = (undefined1 *)0x0;
      }
      else if (((int)uVar2 < 10) ||
              (ptr = CRYPTO_malloc(uVar2 << 3,"crypto/ex_data.c",0xe2), ptr != (undefined1 *)0x0)) {
        uVar5 = 0;
        do {
          uVar3 = OPENSSL_sk_value(*puVar4,uVar5 & 0xffffffff);
          *(undefined8 *)(ptr + uVar5 * 8) = uVar3;
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
      }
      CRYPTO_THREAD_unlock(DAT_01784828);
      if (((int)uVar2 < 1) || (ptr != (undefined1 *)0x0)) {
        if (0 < (int)uVar2) {
          uVar5 = 0;
          do {
            if ((*(long *)(ptr + uVar5 * 8) != 0) &&
               (*(long *)(*(long *)(ptr + uVar5 * 8) + 0x10) != 0)) {
              if ((ad->sk == (stack_st_void *)0x0) ||
                 (iVar1 = OPENSSL_sk_num(), (long)iVar1 <= (long)uVar5)) {
                uVar3 = 0;
              }
              else {
                uVar3 = OPENSSL_sk_value(ad->sk,uVar5 & 0xffffffff);
              }
              puVar4 = *(undefined8 **)(ptr + uVar5 * 8);
              (*(code *)puVar4[2])(obj,uVar3,ad,uVar5 & 0xffffffff,*puVar4,puVar4[1]);
            }
            uVar5 = uVar5 + 1;
          } while (uVar2 != uVar5);
        }
        if (ptr != local_a0) {
          CRYPTO_free(ptr);
        }
        return 1;
      }
      iVar1 = 0x70;
      reason = 0x41;
      line = 0xea;
    }
  }
  else {
    iVar1 = 0x71;
    reason = 7;
    line = 0x37;
  }
  ERR_put_error(0xf,iVar1,reason,"crypto/ex_data.c",line);
  return 0;
}

