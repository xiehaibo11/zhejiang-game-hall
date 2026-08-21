
int ENGINE_add(ENGINE *e)

{
  int iVar1;
  int line;
  char *__s2;
  ENGINE *pEVar2;
  
  if (e == (ENGINE *)0x0) {
    ERR_put_error(0x26,0x69,0x43,"crypto/engine/eng_list.c",0xdb);
    return 0;
  }
  if ((*(long *)e == 0) || (*(long *)(e + 8) == 0)) {
    ERR_put_error(0x26,0x69,0x6c,"crypto/engine/eng_list.c",0xdf);
    return 0;
  }
  CRYPTO_THREAD_write_lock(global_engine_lock);
  if (DAT_01782e98 == (ENGINE *)0x0) {
    if (DAT_01782ea0 == (ENGINE *)0x0) {
      DAT_01782e98 = e;
      *(undefined8 *)(e + 0xb0) = 0;
      engine_cleanup_add_last(&LAB_00b2a2c0);
LAB_00b29ea0:
      *(int *)(e + 0x9c) = *(int *)(e + 0x9c) + 1;
      DAT_01782ea0 = e;
      *(undefined8 *)(e + 0xb8) = 0;
      iVar1 = 1;
      goto LAB_00b29ec0;
    }
    iVar1 = 0x6e;
    line = 0x4a;
  }
  else {
    __s2 = *(char **)e;
    pEVar2 = DAT_01782e98;
    do {
      iVar1 = strcmp(*(char **)pEVar2,__s2);
      pEVar2 = *(ENGINE **)(pEVar2 + 0xb8);
      if (pEVar2 == (ENGINE *)0x0) break;
    } while (iVar1 != 0);
    if (iVar1 == 0) {
      iVar1 = 0x67;
      line = 0x44;
    }
    else {
      if ((DAT_01782ea0 != (ENGINE *)0x0) && (*(long *)(DAT_01782ea0 + 0xb8) == 0)) {
        *(ENGINE **)(DAT_01782ea0 + 0xb8) = e;
        *(ENGINE **)(e + 0xb0) = DAT_01782ea0;
        goto LAB_00b29ea0;
      }
      iVar1 = 0x6e;
      line = 0x56;
    }
  }
  ERR_put_error(0x26,0x78,iVar1,"crypto/engine/eng_list.c",line);
  ERR_put_error(0x26,0x69,0x6e,"crypto/engine/eng_list.c",0xe4);
  iVar1 = 0;
LAB_00b29ec0:
  CRYPTO_THREAD_unlock(global_engine_lock);
  return iVar1;
}

