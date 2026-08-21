
undefined4
engine_table_register
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,int param_5,
          int param_6)

{
  int iVar1;
  undefined4 *ptr;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_80 [8];
  
  CRYPTO_THREAD_write_lock(global_engine_lock);
  if (*param_1 == 0) {
    lVar2 = OPENSSL_LH_new(&LAB_00bc87d8,&LAB_00bc87e0);
    if (lVar2 == 0) goto LAB_00bc84a0;
    *param_1 = lVar2;
    engine_cleanup_add_first(param_2);
  }
  if (param_5 != 0) {
    if (param_6 != 0) {
      uVar3 = 1;
      do {
        local_80[0] = *param_4;
        ptr = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_80);
        if (ptr == (undefined4 *)0x0) {
          ptr = CRYPTO_malloc(0x20,"crypto/engine/eng_table.c",100);
          if (ptr == (undefined4 *)0x0) goto LAB_00bc84a0;
          ptr[6] = 1;
          *ptr = *param_4;
          lVar2 = OPENSSL_sk_new_null();
          *(long *)(ptr + 2) = lVar2;
          if (lVar2 == 0) goto LAB_00bc848c;
          *(undefined8 *)(ptr + 4) = 0;
          OPENSSL_LH_insert(*param_1,ptr);
        }
        OPENSSL_sk_delete_ptr(*(undefined8 *)(ptr + 2),param_3);
        iVar1 = OPENSSL_sk_push(*(undefined8 *)(ptr + 2),param_3);
        if (iVar1 == 0) goto LAB_00bc84a0;
        ptr[6] = 0;
        iVar1 = engine_unlocked_init(param_3);
        if (iVar1 == 0) {
          ERR_put_error(0x26,0xb8,0x6d,"crypto/engine/eng_table.c",0x7d);
          goto LAB_00bc84a0;
        }
        if (*(long *)(ptr + 4) != 0) {
          engine_unlocked_finish(*(long *)(ptr + 4),0);
        }
        param_5 = param_5 + -1;
        param_4 = param_4 + 1;
        *(undefined8 *)(ptr + 4) = param_3;
        ptr[6] = 1;
      } while (param_5 != 0);
      goto LAB_00bc84a4;
    }
    do {
      local_80[0] = *param_4;
      ptr = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_80);
      if (ptr == (undefined4 *)0x0) {
        ptr = CRYPTO_malloc(0x20,"crypto/engine/eng_table.c",100);
        if (ptr == (undefined4 *)0x0) goto LAB_00bc84a0;
        ptr[6] = 1;
        *ptr = *param_4;
        lVar2 = OPENSSL_sk_new_null();
        *(long *)(ptr + 2) = lVar2;
        if (lVar2 == 0) goto LAB_00bc848c;
        *(undefined8 *)(ptr + 4) = 0;
        OPENSSL_LH_insert(*param_1,ptr);
      }
      OPENSSL_sk_delete_ptr(*(undefined8 *)(ptr + 2),param_3);
      iVar1 = OPENSSL_sk_push(*(undefined8 *)(ptr + 2),param_3);
      if (iVar1 == 0) goto LAB_00bc84a0;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      ptr[6] = 0;
    } while (param_5 != 0);
  }
  uVar3 = 1;
  goto LAB_00bc84a4;
LAB_00bc848c:
  CRYPTO_free(ptr);
LAB_00bc84a0:
  uVar3 = 0;
LAB_00bc84a4:
  CRYPTO_THREAD_unlock(global_engine_lock);
  return uVar3;
}

