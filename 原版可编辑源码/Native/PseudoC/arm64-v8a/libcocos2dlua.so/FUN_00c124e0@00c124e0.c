
void * FUN_00c124e0(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *__s;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar4 = (undefined4 *)__errno();
  uVar3 = *puVar4;
  pvVar5 = mmap((void *)0x0,0x20000,3,0x22,-1,0);
  *puVar4 = uVar3;
  if (pvVar5 == (void *)0xffffffffffffffff) {
    __s = (void *)0x0;
  }
  else {
    uVar9 = 0;
    if (((long)pvVar5 + 0x10U & 7) != 0) {
      uVar9 = -((long)pvVar5 + 0x10U) & 7;
    }
    __s = (void *)((long)pvVar5 + uVar9 + 0x10);
    memset(__s,0,0x368);
    *(undefined8 *)((long)pvVar5 + uVar9 + 8) = 0x36b;
    *(void **)((long)pvVar5 + uVar9 + 0x358) = pvVar5;
    *(undefined8 *)((long)pvVar5 + uVar9 + 0x360) = 0x20000;
    *(undefined8 *)((long)pvVar5 + uVar9 + 0x40) = 0xff;
    lVar6 = 0;
    do {
      lVar1 = lVar6 + 1;
      lVar2 = (long)__s + lVar6 * 0x10 + 0x38;
      *(long *)((long)__s + lVar6 * 0x10 + 0x50) = lVar2;
      *(long *)((long)__s + lVar6 * 0x10 + 0x48) = lVar2;
      lVar6 = lVar1;
    } while (lVar1 != 0x20);
    uVar8 = (long)pvVar5 + uVar9 + 0x378;
    lVar6 = (long)pvVar5 + uVar9 + 0x368;
    uVar7 = 0;
    if ((uVar8 & 7) != 0) {
      uVar7 = -uVar8 & 7;
    }
    lVar1 = lVar6 + uVar7;
    uVar8 = (long)pvVar5 + ((0x1ffc0 - lVar6) - uVar7);
    *(ulong *)((long)pvVar5 + uVar9 + 0x20) = uVar8;
    *(long *)((long)pvVar5 + uVar9 + 0x30) = lVar1;
    *(ulong *)(lVar1 + 8) = uVar8 | 1;
    *(undefined8 *)(lVar1 + uVar8 + 8) = 0x40;
    *(undefined8 *)((long)pvVar5 + uVar9 + 0x38) = 0x200000;
  }
  return __s;
}

