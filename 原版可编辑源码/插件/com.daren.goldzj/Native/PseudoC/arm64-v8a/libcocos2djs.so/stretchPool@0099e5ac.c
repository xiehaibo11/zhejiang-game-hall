
/* cocos2d::ThreadPool::stretchPool(int) */

void __thiscall cocos2d::ThreadPool::stretchPool(ThreadPool *this,int param_1)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  timeval local_78;
  timeval local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0099e5dc to 00a9e61f has its CatchHandler @ 0099e5dc
                       catch() { ... } // from try @ 0099e5dc with catch @ 0099e5dc
                       catch() { ... } // from try @ 0099e670 with catch @ 0099e5dc */
  uVar3 = gettimeofday(&local_68,(__timezone_ptr_t)0x0);
  uVar4 = (ulong)uVar3;
  if (0 < *(int *)(this + 0x144)) {
    uVar1 = *(undefined4 *)(this + 0x148);
    lVar7 = 0;
    lVar5 = 0;
    iVar6 = 0;
    do {
      if ((**(byte **)(*(long *)(this + 0x48) + lVar7) & 1) == 0) {
                    /* try { // try from 0099e620 to 00a9e66f has its CatchHandler @ 0099e6a0 */
        **(undefined4 **)(*(long *)(this + 0x18) + lVar7) = 0;
        uVar4 = setThread(this,(int)lVar5);
        iVar6 = iVar6 + 1;
        **(undefined4 **)(*(long *)(this + 0x48) + lVar7) = 1;
        *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
        if (param_1 <= iVar6) break;
      }
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar5 < *(int *)(this + 0x144));
    if (0 < iVar6) {
                    /* try { // try from 0099e670 to 00a9e6b3 has its CatchHandler @ 0099e5dc */
      gettimeofday(&local_78,(__timezone_ptr_t)0x0);
                    /* catch() { ... } // from try @ 0099e620 with catch @ 0099e6a0 */
                    /* catch() { ... } // from try @ 0099e710 with catch @ 0099e6b4 */
      uVar4 = __android_log_print((double)((float)(local_78.tv_usec - local_68.tv_usec) / 1e+06 +
                                          (float)(local_78.tv_sec - local_68.tv_sec)),3,"ThreadPool"
                                  ,"stretch pool from %d to %d, waste %f seconds\n",uVar1,
                                  *(undefined4 *)(this + 0x148));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

