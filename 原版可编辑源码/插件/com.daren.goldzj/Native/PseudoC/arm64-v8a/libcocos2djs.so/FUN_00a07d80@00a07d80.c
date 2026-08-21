
void FUN_00a07d80(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 00a07cc4 with catch @ 00a07d80 */
  *param_2 = &PTR_FUN_01c6ca68;
  uVar1 = *(undefined4 *)(param_1 + 8);
  puVar2 = param_2 + 2;
  *puVar2 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
                    /* catch() { ... } // from try @ 00a07c04 with catch @ 00a07dc4 */
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 00a07bfc with catch @ 00a07dd4 */
    param_2[3] = uVar5;
    *puVar2 = uVar4;
                    /* catch() { ... } // from try @ 00a07bf0 with catch @ 00a07dd8 */
    goto LAB_00a07e38;
  }
                    /* catch() { ... } // from try @ 00a07bd8 with catch @ 00a07ddc */
  __n = *(ulong *)(param_1 + 0x18);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00a07e54 to 00b07e5b has its CatchHandler @ 00a0802c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x20);
                    /* try { // try from 00a07df0 to 00b07e2f has its CatchHandler @ 00a07df0
                       catch() { ... } // from try @ 00a07df0 with catch @ 00a07df0
                       catch() { ... } // from try @ 00a07f34 with catch @ 00a07df0 */
  if (__n < 0x17) {
    __dest = (void *)((long)param_2 + 0x11);
    *(char *)puVar2 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00a07e24;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    param_2[3] = __n;
    param_2[4] = __dest;
    param_2[2] = uVar3 | 1;
LAB_00a07e24:
                    /* try { // try from 00a07e30 to 00b07e43 has its CatchHandler @ 00a08034 */
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00a07e38:
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 00a07e48 to 00b07e4f has its CatchHandler @ 00a08030 */
  return;
}

