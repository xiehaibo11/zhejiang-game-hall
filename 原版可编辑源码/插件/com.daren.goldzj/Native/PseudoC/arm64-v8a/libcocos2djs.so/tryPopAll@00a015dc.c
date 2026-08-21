
/* universe::Downloader2::JobQueue::tryPopAll(std::__ndk1::vector<universe::Downloader2::BaseJob*,
   std::__ndk1::allocator<universe::Downloader2::BaseJob*> >&) */

void __thiscall universe::Downloader2::JobQueue::tryPopAll(JobQueue *this,vector *param_1)

{
  long lVar1;
  JobQueue *pJVar2;
  ulong uVar3;
  long lVar4;
  JobQueue *pJVar5;
  
  uVar3 = std::__ndk1::mutex::try_lock((mutex *)(this + 0x18));
  if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a01664 with catch @ 00a0167c */
    return;
  }
                    /* try { // try from 00a01620 to 00b01653 has its CatchHandler @ 00a01620
                       catch() { ... } // from try @ 00a01620 with catch @ 00a01620
                       catch() { ... } // from try @ 00a01668 with catch @ 00a01620 */
  if ((*(long *)(this + 0x10) != 0) &&
     (std::__ndk1::
      vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
      ::insert<std::__ndk1::__list_iterator<universe::Downloader2::BaseJob*,void*>>
                ((vector<universe::Downloader2::BaseJob*,std::__ndk1::allocator<universe::Downloader2::BaseJob*>>
                  *)param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(this + 8),this),
     *(long *)(this + 0x10) != 0)) {
    lVar1 = *(long *)this;
    pJVar2 = *(JobQueue **)(this + 8);
    lVar4 = *(long *)pJVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar4;
    *(undefined8 *)(this + 0x10) = 0;
    while (pJVar2 != this) {
      pJVar5 = *(JobQueue **)(pJVar2 + 8);
      operator_delete(pJVar2);
                    /* try { // try from 00a01654 to 00b0165b has its CatchHandler @ 00a0168c */
      pJVar2 = pJVar5;
    }
  }
                    /* try { // try from 00a01664 to 00b01667 has its CatchHandler @ 00a0167c */
                    /* try { // try from 00a01668 to 00b0169f has its CatchHandler @ 00a01620 */
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
  return;
}

