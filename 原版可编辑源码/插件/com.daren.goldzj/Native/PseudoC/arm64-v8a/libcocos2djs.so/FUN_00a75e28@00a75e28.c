
void FUN_00a75e28(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  void *__src;
  undefined8 *puVar3;
  void *__dest;
  ulong __n;
  ulong uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 00a75e40 to 00b75e93 has its CatchHandler @ 00a75e40
                       catch() { ... } // from try @ 00a75e40 with catch @ 00a75e40
                       catch() { ... } // from try @ 00a76098 with catch @ 00a75e40 */
  *param_1 = *param_2;
  plVar1 = (long *)param_2[6];
  if (plVar1 == (long *)0x0) {
    param_1[6] = 0;
  }
  else if (param_2 + 2 == plVar1) {
    param_1[6] = param_1 + 2;
    (**(code **)(*(long *)param_2[6] + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    param_1[6] = uVar2;
  }
  puVar3 = param_1 + 8;
                    /* try { // try from 00a75e94 to 00b75eab has its CatchHandler @ 00a76130 */
  *puVar3 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uVar5 = param_2[9];
    uVar2 = param_2[8];
                    /* try { // try from 00a75eb4 to 00b75ebf has its CatchHandler @ 00a7612c */
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    *puVar3 = uVar2;
    return;
  }
                    /* try { // try from 00a75ec0 to 00b75ecb has its CatchHandler @ 00a76128 */
  __n = param_2[9];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00a75ecc to 00b75ee3 has its CatchHandler @ 00a76140 */
  __src = (void *)param_2[10];
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x41);
    *(char *)puVar3 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00a75f18;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
                    /* try { // try from 00a75f00 to 00b75f07 has its CatchHandler @ 00a76110 */
    param_1[9] = __n;
    param_1[10] = __dest;
    param_1[8] = uVar4 | 1;
  }
                    /* try { // try from 00a75f14 to 00b75f37 has its CatchHandler @ 00a7610c */
  memcpy(__dest,__src,__n);
LAB_00a75f18:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}

