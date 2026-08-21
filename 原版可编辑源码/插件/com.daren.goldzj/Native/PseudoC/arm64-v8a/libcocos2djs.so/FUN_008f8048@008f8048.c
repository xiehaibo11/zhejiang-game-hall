
undefined8 * FUN_008f8048(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *__dest;
  long lVar5;
  ulong __n;
  void *__src;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = operator_new(0x30);
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_FUN_01c68128;
  puVar4[1] = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 8);
    puVar4[3] = *(undefined8 *)(param_1 + 0x18);
    puVar4[2] = uVar8;
    puVar4[1] = uVar7;
    goto LAB_008f8100;
  }
  __n = *(ulong *)(param_1 + 0x10);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x18);
  if (__n < 0x17) {
    __dest = (void *)((long)puVar4 + 9);
    *(char *)(puVar4 + 1) = (char)((int)__n << 1);
    if (__n != 0) goto LAB_008f80ec;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    puVar4[2] = __n;
    puVar4[3] = __dest;
    puVar4[1] = uVar6 | 1;
LAB_008f80ec:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_008f8100:
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  puVar4[5] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar4;
}

