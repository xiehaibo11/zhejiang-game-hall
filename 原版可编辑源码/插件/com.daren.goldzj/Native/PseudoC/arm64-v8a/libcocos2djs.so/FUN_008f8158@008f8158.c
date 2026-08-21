
void FUN_008f8158(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_01c68128;
  puVar5 = param_2 + 1;
  *puVar5 = 0;
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 8);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[2] = uVar8;
    *puVar5 = uVar7;
    goto LAB_008f8208;
  }
  __n = *(ulong *)(param_1 + 0x10);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x18);
  if (__n < 0x17) {
    __dest = (void *)((long)param_2 + 9);
    *(char *)puVar5 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_008f81f4;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    param_2[2] = __n;
    param_2[3] = __dest;
    param_2[1] = uVar6 | 1;
LAB_008f81f4:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_008f8208:
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  param_2[5] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

