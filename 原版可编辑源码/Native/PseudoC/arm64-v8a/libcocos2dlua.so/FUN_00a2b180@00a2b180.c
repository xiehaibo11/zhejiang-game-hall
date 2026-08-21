
void FUN_00a2b180(undefined8 *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 local_120;
  long local_118;
  ulong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e4 [128];
  undefined1 auStack_64 [12];
  long local_58;
  
                    /* try { // try from 00a2b180 to 00b2b1a7 has its CatchHandler @ 00a2b08c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a2b1a8 to 00b2b1bb has its CatchHandler @ 00a2b23c */
  uVar5 = *param_1;
  *param_4 = 0;
  uVar4 = 10;
  if (param_1[0x82] != 2) {
    uVar4 = 0;
  }
  uVar3 = 2;
  if (param_1[0x82] != 1) {
    if (DAT_01769a20 == -1) {
      iVar2 = socket(10,2,0);
      if (iVar2 == -1) {
                    /* catch() { ... } // from try @ 00a2b154 with catch @ 00a2b228
                       catch() { ... } // from try @ 00a2b20c with catch @ 00a2b228 */
        DAT_01769a20 = 0;
      }
      else {
                    /* try { // try from 00a2b20c to 00b2b213 has its CatchHandler @ 00a2b228 */
                    /* try { // try from 00a2b214 to 00b2b277 has its CatchHandler @ 00a2b08c */
        DAT_01769a20 = 1;
        FUN_00a25eac(0,iVar2);
      }
    }
                    /* catch() { ... } // from try @ 00a2b0e0 with catch @ 00a2b22c */
    uVar3 = uVar4;
    if (DAT_01769a20 < 1) {
      uVar3 = 2;
    }
  }
                    /* catch() { ... } // from try @ 00a2b11c with catch @ 00a2b23c
                       catch() { ... } // from try @ 00a2b1a8 with catch @ 00a2b23c */
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_100 = 0;
  local_108 = 0;
  local_118 = (ulong)uVar3 << 0x20;
  uStack_110 = (ulong)*(uint *)((long)param_1 + 0xac);
  iVar2 = inet_pton(2,param_2,auStack_e4);
                    /* try { // try from 00a2b278 to 00b2b2cb has its CatchHandler @ 00a2b278
                       catch() { ... } // from try @ 00a2b278 with catch @ 00a2b278
                       catch() { ... } // from try @ 00a2b36c with catch @ 00a2b278
                       catch() { ... } // from try @ 00a2b400 with catch @ 00a2b278 */
  if ((iVar2 == 1) || (iVar2 = inet_pton(10,param_2,auStack_e4), iVar2 == 1)) {
    local_118 = CONCAT44(local_118._4_4_,4);
  }
  if (param_3 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = auStack_64;
    FUN_00a241ac(auStack_64,0xc,"%d",param_3);
  }
  iVar2 = FUN_00a2bd24(param_2,puVar6,&local_118,&local_120);
  if (iVar2 != 0) {
                    /* try { // try from 00a2b2cc to 00b2b2e7 has its CatchHandler @ 00a2b418 */
    FUN_00a38740(uVar5,"getaddrinfo(3) failed for %s:%d\n",param_2,param_3);
    local_120 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00a2b308 to 00b2b31f has its CatchHandler @ 00a2b428 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_120);
}

