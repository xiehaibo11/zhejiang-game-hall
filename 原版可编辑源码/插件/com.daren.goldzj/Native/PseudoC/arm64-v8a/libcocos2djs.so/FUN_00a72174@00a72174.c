
void FUN_00a72174(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__dest;
  ulong __n;
  void *__src;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = &PTR_FUN_01c6ece0;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = param_2 + 3;
  *puVar1 = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = uVar4;
  param_2[1] = uVar3;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    param_2[5] = *(undefined8 *)(param_1 + 0x28);
    param_2[4] = uVar4;
    *puVar1 = uVar3;
    return;
  }
  __n = *(ulong *)(param_1 + 0x20);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a72100 with catch @ 00a7223c
                       catch() { ... } // from try @ 00a721dc with catch @ 00a7223c */
    abort();
  }
  __src = *(void **)(param_1 + 0x28);
                    /* try { // try from 00a721dc to 00b7221f has its CatchHandler @ 00a7223c */
  if (__n < 0x17) {
    __dest = (void *)((long)param_2 + 0x19);
    *(char *)puVar1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00a72224;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    param_2[4] = __n;
    param_2[5] = __dest;
    param_2[3] = uVar2 | 1;
  }
                    /* try { // try from 00a72220 to 00b722bb has its CatchHandler @ 00a72034 */
  memcpy(__dest,__src,__n);
LAB_00a72224:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* catch() { ... } // from try @ 00a720b4 with catch @ 00a72234 */
                    /* catch() { ... } // from try @ 00a720a8 with catch @ 00a72238 */
  return;
}

