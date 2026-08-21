
void FUN_0011b71c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  size_t __len;
  
  __len = *(size_t *)(param_1 + 0x30);
  puVar4 = mmap((void *)0x0,__len,3,0x22,-1,0);
  if (0xfffffffffffffffd < (long)puVar4 - 1U) {
    __len = (DAT_00171e20 + *(long *)(param_1 + 0x28)) - 1U & -DAT_00171e20;
    puVar4 = mmap((void *)0x0,__len,3,0x22,-1,0);
    if (0xfffffffffffffffd < (long)puVar4 - 1U) {
      __len = *(size_t *)(param_1 + 0x28);
      do {
        lVar8 = DAT_00171e28;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x171e28,0x10);
        if (bVar3) {
          cVar2 = ExclusiveMonitorsStatus();
          DAT_00171e28 = DAT_00171e28 + (__len + 0xf & 0xfffffffffffffff0);
        }
      } while (cVar2 != '\0');
      puVar4 = (ulong *)(lVar8 + 0x171e30);
    }
  }
  lVar8 = *(long *)(param_1 + 0x28);
  puVar1 = (ulong *)((long)puVar4 + (__len - lVar8));
  if (puVar4 <= puVar1) {
    iVar6 = *(int *)(param_1 + 0x3c);
    puVar7 = *(ulong **)(param_1 + 0x40);
    do {
      puVar5 = puVar4;
      iVar6 = iVar6 + 1;
      puVar4 = (ulong *)((long)puVar5 + lVar8);
      *puVar5 = (ulong)puVar7;
      puVar7 = puVar5;
    } while (puVar4 <= puVar1);
    *(ulong **)(param_1 + 0x40) = puVar5;
    *(int *)(param_1 + 0x3c) = iVar6;
  }
  return;
}

