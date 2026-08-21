
/* v8::base::CallOnceImpl(std::__ndk1::atomic<unsigned char>*, std::__ndk1::function<void ()>) */

char * v8::base::CallOnceImpl(char *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  if (*param_1 != '\x02') {
    do {
      if (*param_1 != '\0') {
        ClearExclusiveLocal();
        while (*param_1 == '\x01') {
          uVar3 = sched_yield();
          pcVar4 = (char *)(ulong)uVar3;
        }
        return pcVar4;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = '\x01';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    pcVar4 = (char *)(**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
    param_1[0] = '\x02';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
  }
  return pcVar4;
}

