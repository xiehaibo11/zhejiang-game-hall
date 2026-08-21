
undefined8 * FUN_00a07c88(long param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 00a07c98 to 00b07cbb has its CatchHandler @ 00a07d5c */
  puVar1 = operator_new(0x30);
  *puVar1 = &PTR_FUN_01c6ca68;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  puVar1[2] = 0;
                    /* try { // try from 00a07cc4 to 00b07cdb has its CatchHandler @ 00a07d80 */
  puVar1[3] = 0;
  puVar1[4] = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 00a07cdc to 00b07def has its CatchHandler @ 00a07b98 */
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    goto LAB_00a07d48;
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
    if (__n != 0) goto LAB_00a07d34;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    puVar1[3] = __n;
    puVar1[4] = __dest;
    puVar1[2] = uVar2 | 1;
LAB_00a07d34:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00a07d48:
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 00a07c98 with catch @ 00a07d5c */
                    /* catch() { ... } // from try @ 00a07c7c with catch @ 00a07d60 */
                    /* catch() { ... } // from try @ 00a07c40 with catch @ 00a07d64 */
  return puVar1;
}

