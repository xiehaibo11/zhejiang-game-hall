
undefined8 * FUN_00a72094(long param_1)

{
  undefined8 *puVar1;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 00a720a8 to 00b720b3 has its CatchHandler @ 00a72238 */
  puVar1 = operator_new(0x30);
                    /* try { // try from 00a720b4 to 00b720bf has its CatchHandler @ 00a72234 */
  *puVar1 = &PTR_FUN_01c6ece0;
                    /* try { // try from 00a720c0 to 00b720ff has its CatchHandler @ 00a72264 */
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    puVar1[4] = uVar4;
    puVar1[3] = uVar3;
    return puVar1;
  }
  __n = *(ulong *)(param_1 + 0x20);
                    /* try { // try from 00a72100 to 00b72113 has its CatchHandler @ 00a7223c */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(param_1 + 0x28);
  if (__n < 0x17) {
    __dest = (void *)((long)puVar1 + 0x19);
    *(char *)(puVar1 + 3) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00a72154;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00a72130 to 00b7216b has its CatchHandler @ 00a72264 */
    __dest = operator_new(uVar2);
    puVar1[4] = __n;
    puVar1[5] = __dest;
    puVar1[3] = uVar2 | 1;
  }
  memcpy(__dest,__src,__n);
LAB_00a72154:
  *(undefined1 *)((long)__dest + __n) = 0;
  return puVar1;
}

