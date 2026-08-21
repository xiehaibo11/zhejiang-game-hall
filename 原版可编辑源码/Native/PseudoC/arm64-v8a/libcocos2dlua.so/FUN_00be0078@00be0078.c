
bool FUN_00be0078(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  pthread_t __thread2;
  ulong uVar5;
  
  iVar3 = CRYPTO_THREAD_run_once(&DAT_017851d4,&LAB_00be0a94);
  if (iVar3 == 0) {
    return false;
  }
  if (DAT_017851d8 == 0) {
    return false;
  }
  __thread2 = CRYPTO_THREAD_get_current_id();
  if (DAT_017851a0 == '\x01') {
    CRYPTO_THREAD_read_lock(DAT_017851e8);
    iVar3 = CRYPTO_THREAD_compare_id(DAT_017851f0,__thread2);
    uVar5 = CRYPTO_THREAD_unlock(DAT_017851e8);
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_00be0124;
    }
  }
  CRYPTO_THREAD_write_lock(DAT_017851e0);
  ASYNC_block_pause();
  CRYPTO_THREAD_write_lock(DAT_017851e8);
  DAT_017851f0 = __thread2;
  uVar5 = CRYPTO_THREAD_unlock(DAT_017851e8);
  bVar1 = false;
  DAT_017851a0 = '\x01';
LAB_00be0124:
  if ((DAT_017851a4 & 1) == 0) {
    uVar4 = RAND_poll();
    uVar5 = (ulong)uVar4;
    DAT_017851a4 = 1;
  }
  bVar2 = 32.0 <= DAT_017851f8;
  if (!bVar1) {
    DAT_017851a0 = '\0';
    ASYNC_unblock_pause(uVar5);
    CRYPTO_THREAD_unlock(DAT_017851e0);
  }
  return bVar2;
}

