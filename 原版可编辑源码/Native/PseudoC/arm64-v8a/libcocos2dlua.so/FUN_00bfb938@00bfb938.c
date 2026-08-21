
void FUN_00bfb938(long param_1,uint param_2)

{
  uint uVar1;
  void *__s;
  long *plVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  size_t __n;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if ((param_2 < 0x3ffffff) && (*(char *)((long)plVar6 + 0x31) != '\x03')) {
    __n = (ulong)(param_2 + 1) << 3;
    __s = (void *)FUN_00c1a2b4(param_1,0,0,__n);
    memset(__s,0,__n);
    uVar5 = *(uint *)(plVar6 + 1);
    lVar3 = *plVar6;
    if (uVar5 != 0xffffffff) {
      do {
        plVar2 = *(long **)(lVar3 + (ulong)uVar5 * 8);
        if (plVar2 != (long *)0x0) {
          do {
            plVar4 = (long *)*plVar2;
            uVar1 = param_2 & *(uint *)((long)plVar2 + 0xc);
            *plVar2 = *(long *)((long)__s + (ulong)uVar1 * 8);
            *(long **)((long)__s + (ulong)uVar1 * 8) = plVar2;
            plVar2 = plVar4;
          } while (plVar4 != (long *)0x0);
          lVar3 = *plVar6;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0xffffffff);
      uVar5 = *(uint *)(plVar6 + 1);
    }
    plVar6[4] = plVar6[4] + (ulong)(uVar5 + 1) * -8;
    (*(code *)plVar6[2])(plVar6[3],lVar3,(ulong)(uVar5 + 1) * 8,0);
    *(uint *)(plVar6 + 1) = param_2;
    *plVar6 = (long)__s;
  }
  return;
}

