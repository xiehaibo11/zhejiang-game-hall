
undefined8 uv_async_send(long param_1)

{
  char cVar1;
  ssize_t sVar2;
  bool bVar3;
  int *piVar4;
  size_t __n;
  int __fd;
  undefined1 *__buf;
  
  piVar4 = (int *)(param_1 + 0x78);
  if (*piVar4 == 0) {
    do {
      if (*piVar4 != 0) {
        ClearExclusiveLocal();
        return 0;
      }
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    __fd = *(int *)(*(long *)(param_1 + 8) + 0x200);
    if (__fd == -1) {
      __fd = *(int *)(*(long *)(param_1 + 8) + 0x1f8);
      __buf = &DAT_014a1178;
      __n = 8;
    }
    else {
      __buf = &DAT_013c996e;
      __n = 1;
    }
    do {
      sVar2 = write(__fd,__buf,__n);
      if ((int)sVar2 != -1) {
        bVar3 = false;
        if ((long)(int)sVar2 == __n) {
          return 0;
        }
        goto LAB_011a22e8;
      }
      piVar4 = (int *)__errno();
    } while (*piVar4 == 4);
    bVar3 = true;
    if (__n != 0xffffffffffffffff) {
LAB_011a22e8:
      if ((!bVar3) || (piVar4 = (int *)__errno(), *piVar4 != 0xb)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  return 0;
}

