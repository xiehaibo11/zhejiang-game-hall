
/* v8::base::TimeTicks::IsHighResolution() */

undefined1 v8::base::TimeTicks::IsHighResolution(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  timespec local_50;
  
  if (((DAT_01d460a8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d460a8), iVar4 != 0)) {
    iVar4 = clock_gettime(1,&local_50);
    if (iVar4 != 0) {
LAB_01474a6c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (0x8637bd05af4 < local_50.tv_sec) {
LAB_01474a78:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kSecondsLimit > ts.tv_sec");
    }
    lVar3 = local_50.tv_nsec / 1000;
    lVar2 = local_50.tv_sec * 1000000;
    do {
      iVar4 = clock_gettime(1,&local_50);
      if (iVar4 != 0) goto LAB_01474a6c;
      if (0x8637bd05af4 < local_50.tv_sec) goto LAB_01474a78;
      lVar5 = local_50.tv_nsec / 1000 + local_50.tv_sec * 1000000;
      do {
        iVar4 = clock_gettime(1,&local_50);
        if (iVar4 != 0) goto LAB_01474a6c;
        if (0x8637bd05af4 < local_50.tv_sec) goto LAB_01474a78;
        lVar1 = local_50.tv_nsec / 1000 + (local_50.tv_sec * 1000000 - lVar5);
      } while (lVar1 == 0);
    } while ((lVar5 < lVar3 + lVar2 + 100000) && (1 < lVar1));
    DAT_01d460a0 = lVar1 < 2;
    __cxa_guard_release(&DAT_01d460a8);
  }
  return DAT_01d460a0;
}

