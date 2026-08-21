
undefined8 * FUN_00a76de4(long param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 00a76dfc to 00b76f1b has its CatchHandler @ 00a76b88 */
  puVar1 = operator_new(0x28);
  *puVar1 = &PTR_FUN_01c6f050;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
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
    abort();
  }
  __src = *(void **)(param_1 + 0x20);
  if (__n < 0x17) {
    __dest = (void *)((long)puVar1 + 0x11);
    *(char *)(puVar1 + 2) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00a76ea4;
  }
  else {
                    /* catch() { ... } // from try @ 00a76c6c with catch @ 00a76e74
                       catch() { ... } // from try @ 00a76d54 with catch @ 00a76e74 */
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    puVar1[3] = __n;
    puVar1[4] = __dest;
    puVar1[2] = uVar2 | 1;
  }
                    /* catch() { ... } // from try @ 00a76c48 with catch @ 00a76e94
                       catch() { ... } // from try @ 00a76d00 with catch @ 00a76e94 */
  memcpy(__dest,__src,__n);
LAB_00a76ea4:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* catch() { ... } // from try @ 00a76c08 with catch @ 00a76eac */
                    /* catch() { ... } // from try @ 00a76bfc with catch @ 00a76eb0 */
                    /* catch() { ... } // from try @ 00a76bdc with catch @ 00a76eb4 */
  return puVar1;
}

