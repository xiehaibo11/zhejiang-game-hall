
void FUN_0011e6d0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  size_t __len;
  
  __len = *(size_t *)(param_1 + 0x30);
  puVar3 = mmap((void *)0x0,__len,3,0x22,-1,0);
  puVar4 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0xffffffffffffffff) {
    puVar4 = puVar3;
  }
  if (puVar4 == (undefined8 *)0x0) {
    __len = (*(long *)(param_1 + 0x28) + DAT_00176e90) - 1U & -DAT_00176e90;
    puVar3 = mmap((void *)0x0,__len,3,0x22,-1,0);
    puVar4 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0xffffffffffffffff) {
      puVar4 = puVar3;
    }
    if (puVar4 == (undefined8 *)0x0) {
      __len = *(size_t *)(param_1 + 0x28);
      do {
        lVar6 = DAT_00172e80;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x172e80,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          DAT_00172e80 = DAT_00172e80 + (__len + 0xf & 0xfffffffffffffff0);
        }
      } while (cVar1 != '\0');
      puVar4 = (undefined8 *)(&DAT_00172e90 + lVar6);
    }
  }
  lVar6 = *(long *)(param_1 + 0x28);
  puVar3 = (undefined8 *)((long)puVar4 + (__len - lVar6));
  if (puVar4 <= puVar3) {
    iVar7 = *(int *)(param_1 + 0x3c);
    puVar8 = *(undefined8 **)(param_1 + 0x40);
    do {
      puVar5 = puVar4;
      puVar4 = (undefined8 *)((long)puVar5 + lVar6);
      *puVar5 = puVar8;
      iVar7 = iVar7 + 1;
      puVar8 = puVar5;
    } while (puVar4 <= puVar3);
    *(long *)(param_1 + 0x40) = (long)puVar4 - lVar6;
    *(int *)(param_1 + 0x3c) = iVar7;
  }
  return;
}

