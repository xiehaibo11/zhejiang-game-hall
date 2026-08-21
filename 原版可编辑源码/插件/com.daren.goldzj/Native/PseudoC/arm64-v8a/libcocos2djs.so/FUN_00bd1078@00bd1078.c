
bool FUN_00bd1078(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  pthread_t __thread2;
  ulong uVar5;
  
  iVar3 = CRYPTO_THREAD_run_once(&DAT_01d3b454,&LAB_00bd1a94);
  if (iVar3 == 0) {
    return false;
  }
  if (DAT_01d3b458 == 0) {
    return false;
  }
  __thread2 = CRYPTO_THREAD_get_current_id();
  if (DAT_01d3b420 == '\x01') {
    CRYPTO_THREAD_read_lock(DAT_01d3b468);
    iVar3 = CRYPTO_THREAD_compare_id(DAT_01d3b470,__thread2);
    uVar5 = CRYPTO_THREAD_unlock(DAT_01d3b468);
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_00bd1124;
    }
  }
  CRYPTO_THREAD_write_lock(DAT_01d3b460);
  ASYNC_block_pause();
  CRYPTO_THREAD_write_lock(DAT_01d3b468);
  DAT_01d3b470 = __thread2;
  uVar5 = CRYPTO_THREAD_unlock(DAT_01d3b468);
  bVar1 = false;
  DAT_01d3b420 = '\x01';
LAB_00bd1124:
  if ((DAT_01d3b424 & 1) == 0) {
    uVar4 = RAND_poll();
    uVar5 = (ulong)uVar4;
    DAT_01d3b424 = 1;
  }
  bVar2 = 32.0 <= DAT_01d3b478;
  if (!bVar1) {
    DAT_01d3b420 = '\0';
    ASYNC_unblock_pause(uVar5);
    CRYPTO_THREAD_unlock(DAT_01d3b460);
  }
  return bVar2;
}

