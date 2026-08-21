
void FUN_00d73be0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  void *__src;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar5;
    param_1[1] = puVar1 + 2;
    return;
  }
  __src = (void *)*param_1;
  __n = (long)puVar1 - (long)__src;
  uVar4 = ((long)__n >> 4) + 1;
  if (uVar4 >> 0x3c != 0) {
LAB_00d73c60:
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00d73c38 to 00e73c3f has its CatchHandler @ 00d75150 */
  lVar2 = (long)param_1[2] - (long)__src;
  if ((ulong)(lVar2 >> 4) < 0x7ffffffffffffff) {
    uVar3 = lVar2 >> 3;
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d73c74;
    }
    if (uVar4 >> 0x3c != 0) goto LAB_00d73c60;
  }
  else {
    uVar4 = 0xfffffffffffffff;
  }
  __dest = operator_new(uVar4 << 4);
LAB_00d73c74:
  uVar5 = *param_2;
                    /* try { // try from 00d73c78 to 00e73c8b has its CatchHandler @ 00d75188 */
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
  puVar1[1] = param_2[1];
  *puVar1 = uVar5;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
                    /* try { // try from 00d73ca0 to 00e73ca7 has its CatchHandler @ 00d750a4 */
  *param_1 = __dest;
  param_1[1] = puVar1 + 2;
  param_1[2] = (void *)((long)__dest + uVar4 * 0x10);
                    /* try { // try from 00d73ca8 to 00e73cb3 has its CatchHandler @ 00d750c8 */
  if (__src == (void *)0x0) {
                    /* try { // try from 00d73cd4 to 00e73cf3 has its CatchHandler @ 00d75188 */
    return;
  }
  operator_delete(__src);
  return;
}

