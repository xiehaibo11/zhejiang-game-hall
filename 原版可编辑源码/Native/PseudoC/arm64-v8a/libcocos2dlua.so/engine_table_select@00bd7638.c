
long engine_table_select(long *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 local_70 [8];
  
  if (*param_1 == 0) {
    lVar4 = 0;
  }
  else {
    ERR_set_mark();
    CRYPTO_THREAD_write_lock(global_engine_lock);
    if ((*param_1 == 0) ||
       (local_70[0] = param_2, lVar3 = OPENSSL_LH_retrieve(*param_1,local_70), lVar3 == 0)) {
      lVar4 = 0;
    }
    else {
      if ((*(long *)(lVar3 + 0x10) == 0) || (iVar1 = engine_unlocked_init(), iVar1 == 0)) {
        if (*(int *)(lVar3 + 0x18) == 0) {
          lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar3 + 8),0);
          if (lVar4 != 0) {
            iVar1 = 1;
            do {
              if (((0 < *(int *)(lVar4 + 0xa0)) || ((DAT_01785138 & 1) == 0)) &&
                 (iVar2 = engine_unlocked_init(lVar4), iVar2 != 0)) {
                if ((*(long *)(lVar3 + 0x10) != lVar4) &&
                   (iVar1 = engine_unlocked_init(lVar4), iVar1 != 0)) {
                  if (*(long *)(lVar3 + 0x10) != 0) {
                    engine_unlocked_finish(*(long *)(lVar3 + 0x10),0);
                  }
                  *(long *)(lVar3 + 0x10) = lVar4;
                }
                break;
              }
              lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar3 + 8),iVar1);
              iVar1 = iVar1 + 1;
            } while (lVar4 != 0);
          }
        }
        else {
          lVar4 = *(long *)(lVar3 + 0x10);
        }
      }
      else {
        lVar4 = *(long *)(lVar3 + 0x10);
      }
      *(undefined4 *)(lVar3 + 0x18) = 1;
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
    ERR_pop_to_mark();
  }
  return lVar4;
}

