
undefined8 uv_async_send(long param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ssize_t sVar4;
  char *__buf;
  int iVar5;
  size_t __n;
  size_t sVar6;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    piVar3 = (int *)(param_1 + 0x78);
    do {
      iVar5 = *piVar3;
      if (iVar5 != 0) break;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x200);
      if (iVar5 == -1) {
        __n = 8;
        iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x1f8);
        __buf = "\x01";
        sVar6 = __n;
      }
      else {
        __n = 1;
        __buf = "";
        sVar6 = 1;
      }
      do {
        sVar4 = write(iVar5,__buf,__n);
        if ((int)sVar4 != -1) {
          if (sVar6 == (long)(int)sVar4) {
            return 0;
          }
          goto LAB_00bfb9d8;
        }
        piVar3 = (int *)__errno();
      } while (*piVar3 == 4);
      if ((*piVar3 != 0xb) && (*piVar3 != 0xb)) {
LAB_00bfb9d8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
  }
  return 0;
}

