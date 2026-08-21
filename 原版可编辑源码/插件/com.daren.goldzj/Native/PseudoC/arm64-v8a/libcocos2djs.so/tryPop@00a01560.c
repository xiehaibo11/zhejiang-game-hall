
/* universe::Downloader2::JobQueue::tryPop() */

long __thiscall universe::Downloader2::JobQueue::tryPop(JobQueue *this)

{
  mutex *this_00;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  this_00 = (mutex *)(this + 0x18);
  uVar2 = std::__ndk1::mutex::try_lock(this_00);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(this + 0x10);
    if (lVar4 != 0) {
      plVar3 = *(long **)(this + 8);
      lVar1 = *plVar3;
      lVar5 = plVar3[2];
      *(long *)(lVar1 + 8) = plVar3[1];
      *(long *)plVar3[1] = lVar1;
      *(long *)(this + 0x10) = lVar4 + -1;
      operator_delete(plVar3);
      std::__ndk1::mutex::unlock(this_00);
      return lVar5;
    }
    std::__ndk1::mutex::unlock(this_00);
  }
  return 0;
}

