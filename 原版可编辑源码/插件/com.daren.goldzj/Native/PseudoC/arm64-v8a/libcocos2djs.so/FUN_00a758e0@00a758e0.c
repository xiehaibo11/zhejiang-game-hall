
void FUN_00a758e0(undefined8 *param_1,undefined8 *param_2)

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
  
                    /* try { // try from 00a758ec to 00b7592f has its CatchHandler @ 00a758ec
                       catch() { ... } // from try @ 00a758ec with catch @ 00a758ec
                       catch() { ... } // from try @ 00a75970 with catch @ 00a758ec */
  *param_1 = *param_2;
  puVar5 = param_1 + 1;
  *puVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    uVar8 = param_2[2];
    uVar7 = param_2[1];
    param_1[3] = param_2[3];
    param_1[2] = uVar8;
    *puVar5 = uVar7;
    goto LAB_00a7598c;
  }
                    /* try { // try from 00a75930 to 00b7596f has its CatchHandler @ 00a759a0 */
  __n = param_2[2];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __src = (void *)param_2[3];
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)puVar5 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00a75978;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
                    /* try { // try from 00a75970 to 00b759b3 has its CatchHandler @ 00a758ec */
    param_1[2] = __n;
    param_1[3] = __dest;
    param_1[1] = uVar6 | 1;
LAB_00a75978:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00a7598c:
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[6];
  param_1[6] = lVar4;
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 00a75930 with catch @ 00a759a0 */
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
                    /* catch() { ... } // from try @ 00a75a08 with catch @ 00a759b4 */
  param_1[7] = param_2[7];
  lVar4 = param_2[8];
  param_1[8] = lVar4;
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
  param_1[9] = param_2[9];
  lVar4 = param_2[10];
  param_1[10] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
                    /* try { // try from 00a759f8 to 00b75a07 has its CatchHandler @ 00a75e24 */
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* try { // try from 00a75a08 to 00b75e3f has its CatchHandler @ 00a759b4 */
  param_1[0xb] = param_2[0xb];
  lVar4 = param_2[0xc];
  param_1[0xc] = lVar4;
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

