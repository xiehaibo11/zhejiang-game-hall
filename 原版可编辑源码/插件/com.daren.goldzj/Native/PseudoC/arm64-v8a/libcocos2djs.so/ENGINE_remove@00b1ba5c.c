
int ENGINE_remove(ENGINE *e)

{
  ENGINE *pEVar1;
  ENGINE *pEVar2;
  long lVar3;
  int iVar4;
  
  if (e == (ENGINE *)0x0) {
    ERR_put_error(0x26,0x7b,0x43,"crypto/engine/eng_list.c",0xf0);
    iVar4 = 0;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    pEVar2 = (ENGINE *)&DAT_01d39118;
    do {
      pEVar1 = *(ENGINE **)pEVar2;
      if (pEVar1 == e) break;
      pEVar2 = pEVar1 + 0xb8;
    } while (pEVar1 != (ENGINE *)0x0);
    if (pEVar1 == (ENGINE *)0x0) {
      ERR_put_error(0x26,0x79,0x69,"crypto/engine/eng_list.c",0x75);
      ERR_put_error(0x26,0x7b,0x6e,"crypto/engine/eng_list.c",0xf5);
      iVar4 = 0;
    }
    else {
      lVar3 = *(long *)(e + 0xb8);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)(e + 0xb0);
      }
      pEVar2 = *(ENGINE **)(e + 0xb0);
      if (pEVar2 != (ENGINE *)0x0) {
        *(long *)(pEVar2 + 0xb8) = lVar3;
      }
      if (DAT_01d39118 == e) {
        DAT_01d39118 = *(ENGINE **)(e + 0xb8);
      }
      if (DAT_01d39120 == e) {
        DAT_01d39120 = pEVar2;
      }
      engine_free_util(e,0);
      iVar4 = 1;
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
  }
  return iVar4;
}

