
/* cocos2d::experimental::ThreadPool::stretchPool(int) */

ulong __thiscall cocos2d::experimental::ThreadPool::stretchPool(ThreadPool *this,int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  timeval local_70;
  timeval local_60;
  
  uVar2 = gettimeofday(&local_60,(__timezone_ptr_t)0x0);
  uVar3 = (ulong)uVar2;
  if (0 < *(int *)(this + 0x144)) {
    uVar1 = *(undefined4 *)(this + 0x148);
    lVar6 = 0;
    lVar4 = 0;
    iVar5 = 0;
    do {
      if ((**(byte **)(*(long *)(this + 0x48) + lVar6) & 1) == 0) {
        **(undefined4 **)(*(long *)(this + 0x18) + lVar6) = 0;
        uVar3 = setThread(this,(int)lVar4);
        iVar5 = iVar5 + 1;
        **(undefined4 **)(*(long *)(this + 0x48) + lVar6) = 1;
        *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
        if (param_1 <= iVar5) break;
      }
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 < *(int *)(this + 0x144));
    if (0 < iVar5) {
      gettimeofday(&local_70,(__timezone_ptr_t)0x0);
      uVar3 = __android_log_print((double)((float)(local_70.tv_usec - local_60.tv_usec) / 1e+06 +
                                          (float)(local_70.tv_sec - local_60.tv_sec)),3,"ThreadPool"
                                  ,"stretch pool from %d to %d, waste %f seconds\n",uVar1,
                                  *(undefined4 *)(this + 0x148));
    }
  }
  return uVar3;
}

