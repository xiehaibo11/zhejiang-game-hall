
void FUN_00a76ec4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 00a76c14 with catch @ 00a76ec4
                       catch() { ... } // from try @ 00a76c94 with catch @ 00a76ec4
                       catch() { ... } // from try @ 00a76dc0 with catch @ 00a76ec4 */
  *param_2 = &PTR_FUN_01c6f050;
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = param_2 + 2;
  *puVar2 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = uVar1;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
    param_2[3] = uVar4;
    *puVar2 = uVar1;
    return;
  }
  __n = *(ulong *)(param_1 + 0x18);
                    /* try { // try from 00a76f1c to 00b76f6f has its CatchHandler @ 00a76f1c
                       catch() { ... } // from try @ 00a76f1c with catch @ 00a76f1c
                       catch() { ... } // from try @ 00a77174 with catch @ 00a76f1c */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = *(void **)(param_1 + 0x20);
  if (__n < 0x17) {
    __dest = (void *)((long)param_2 + 0x11);
    *(char *)puVar2 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00a76f74;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    param_2[3] = __n;
    param_2[4] = __dest;
    param_2[2] = uVar3 | 1;
  }
                    /* try { // try from 00a76f70 to 00b76f87 has its CatchHandler @ 00a7720c */
  memcpy(__dest,__src,__n);
LAB_00a76f74:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}

