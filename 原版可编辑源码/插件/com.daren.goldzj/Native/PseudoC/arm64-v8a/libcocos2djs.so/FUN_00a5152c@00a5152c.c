
void FUN_00a5152c(long *param_1)

{
  int __fd;
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  socklen_t local_cc;
  sockaddr asStack_c8 [8];
  
                    /* catch() { ... } // from try @ 00a51374 with catch @ 00a51530 */
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  __fd = *(int *)((long)param_1 + 0x264);
  lVar5 = *param_1;
  local_cc = 0x80;
  iVar2 = getsockname(__fd,asStack_c8,&local_cc);
  if (iVar2 == 0) {
    local_cc = 0x80;
    iVar2 = accept(__fd,asStack_c8,&local_cc);
                    /* try { // try from 00a515dc to 00b515f3 has its CatchHandler @ 00a51764 */
    FUN_00a104c4(param_1,__fd);
    if (iVar2 != -1) {
                    /* try { // try from 00a515fc to 00b51607 has its CatchHandler @ 00a51760 */
      FUN_00a22d58(lVar5,"Connection accepted from server\n");
                    /* try { // try from 00a51608 to 00b51613 has its CatchHandler @ 00a5175c */
      *(undefined1 *)((long)param_1 + 0x3c4) = 0;
      *(int *)((long)param_1 + 0x264) = iVar2;
                    /* try { // try from 00a51614 to 00b516e7 has its CatchHandler @ 00a51774 */
      FUN_00a16c90(iVar2,1);
      *(undefined1 *)((long)param_1 + 0x271) = 1;
      if (*(code **)(lVar5 + 0x2f8) == (code *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(lVar5 + 0x2f8))(*(undefined8 *)(lVar5 + 0x300),iVar2,1);
        if ((int)uVar3 != 0) {
          if (*(int *)((long)param_1 + 0x264) != -1) {
            FUN_00a104c4(param_1);
            *(undefined4 *)((long)param_1 + 0x264) = 0xffffffff;
          }
          uVar3 = 0x2a;
          *(undefined1 *)((long)param_1 + 0x3c6) = 0;
          *(undefined4 *)((long)param_1 + 0x714) = 0;
        }
      }
      goto LAB_00a5159c;
    }
  }
  else {
    FUN_00a104c4(param_1,__fd);
  }
                    /* try { // try from 00a51588 to 00b515db has its CatchHandler @ 00a51588
                       catch() { ... } // from try @ 00a51588 with catch @ 00a51588
                       catch() { ... } // from try @ 00a516e8 with catch @ 00a51588 */
  FUN_00a23020(lVar5,"Error accept()ing server connect");
  uVar3 = 0x1e;
LAB_00a5159c:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

