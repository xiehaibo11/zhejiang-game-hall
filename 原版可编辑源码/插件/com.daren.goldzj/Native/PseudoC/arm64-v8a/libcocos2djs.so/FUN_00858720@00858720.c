
undefined8 * FUN_00858720(long param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = operator_new(0x28);
  *puVar1 = &PTR_FUN_01c660c8;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    return puVar1;
  }
  __n = *(ulong *)(param_1 + 0x18);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x20);
  if (__n < 0x17) {
    __dest = (void *)((long)puVar1 + 0x11);
    *(char *)(puVar1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_008587dc;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    puVar1[3] = __n;
    puVar1[4] = __dest;
    puVar1[2] = uVar2 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_008587dc:
  *(undefined1 *)((long)__dest + __n) = 0;
  return puVar1;
}

