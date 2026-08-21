
void _Uaarch64_flush_cache(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x32a90);
  *(undefined8 *)(param_1 + 0x58) = 0;
  for (; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
    if (*(void **)(lVar4 + 0x20) != (void *)0x0) {
      free(*(void **)(lVar4 + 0x20));
    }
    free(*(void **)(lVar4 + 0x10));
  }
  piVar1 = (int *)(param_1 + 0x48);
  *(long *)(param_1 + 0x32a90) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}

