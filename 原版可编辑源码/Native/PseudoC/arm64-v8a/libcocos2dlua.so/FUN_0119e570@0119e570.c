
void FUN_0119e570(void)

{
  int iVar1;
  char *__nptr;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_50 [16];
  
  iVar1 = pthread_atfork((__prepare *)0x0,(__parent *)0x0,FUN_0119ea1c);
  if (iVar1 != 0) goto LAB_0119e708;
  DAT_01793230 = 4;
  __nptr = getenv("UV_THREADPOOL_SIZE");
  if (__nptr == (char *)0x0) {
LAB_0119e5f4:
    DAT_01793240 = &DAT_01793258;
  }
  else {
    DAT_01793230 = atoi(__nptr);
    if (DAT_01793230 == 0) {
      DAT_01793230 = 1;
      goto LAB_0119e5f4;
    }
    if (DAT_01793230 < 0x81) {
      DAT_01793240 = &DAT_01793258;
      if (4 < DAT_01793230) goto LAB_0119e618;
    }
    else {
      DAT_01793230 = 0x80;
LAB_0119e618:
      DAT_01793240 = &DAT_01793258;
      DAT_01793240 = malloc((ulong)DAT_01793230 << 3);
      if (DAT_01793240 == (undefined *)0x0) {
        DAT_01793230 = 4;
        DAT_01793240 = &DAT_01793258;
      }
    }
  }
  iVar1 = uv_cond_init(&DAT_017932a0);
  if ((iVar1 == 0) && (iVar1 = uv_mutex_init(&DAT_01793278), iVar1 == 0)) {
    DAT_01793228 = &DAT_01793220;
    DAT_01793220 = &DAT_01793220;
    iVar1 = uv_sem_init(auStack_50,0);
    if (iVar1 == 0) {
      if (DAT_01793230 != 0) {
        lVar3 = 0;
        uVar4 = 0;
        do {
          iVar1 = uv_thread_create(DAT_01793240 + lVar3,FUN_0119ea2c,auStack_50);
          if (iVar1 != 0) goto LAB_0119e708;
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (uVar4 < DAT_01793230);
        if (DAT_01793230 != 0) {
          uVar2 = 0;
          do {
            uv_sem_wait(auStack_50);
            uVar2 = uVar2 + 1;
          } while (uVar2 < DAT_01793230);
        }
      }
      uv_sem_destroy(auStack_50);
      return;
    }
  }
LAB_0119e708:
                    /* WARNING: Subroutine does not return */
  abort();
}

