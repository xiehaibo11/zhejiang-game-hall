
/* universe::Downloader2::JobQueue::push(std::__ndk1::vector<universe::Downloader2::BaseJob*,
   std::__ndk1::allocator<universe::Downloader2::BaseJob*> > const&) */

void __thiscall universe::Downloader2::JobQueue::push(JobQueue *this,vector *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  JobQueue *pJVar6;
  
  if (*(long *)param_1 == *(long *)(param_1 + 8)) {
                    /* catch() { ... } // from try @ 00a0118c with catch @ 00a01418 */
                    /* catch() { ... } // from try @ 00a0117c with catch @ 00a01428 */
    return;
  }
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
  plVar3 = *(long **)param_1;
  plVar1 = *(long **)(param_1 + 8);
  if (plVar3 != plVar1) {
    lVar4 = *(long *)(this + 0x10);
    do {
      lVar5 = *plVar3;
      if ((lVar4 == 0) ||
         ((uint)*(byte *)(lVar5 + 4) <= *(uint *)(*(long *)(*(long *)this + 0x10) + 4))) {
        plVar2 = operator_new(0x18);
        plVar2[1] = (long)this;
        plVar2[2] = lVar5;
        lVar5 = *(long *)this;
        *plVar2 = lVar5;
        *(long **)(lVar5 + 8) = plVar2;
        *(long **)this = plVar2;
LAB_00a013e0:
        lVar4 = lVar4 + 1;
        *(long *)(this + 0x10) = lVar4;
      }
      else {
        for (pJVar6 = *(JobQueue **)(this + 8); this != pJVar6; pJVar6 = *(JobQueue **)(pJVar6 + 8))
        {
          if (*(uint *)(*(long *)(pJVar6 + 0x10) + 4) <= (uint)*(byte *)(lVar5 + 4)) {
            plVar2 = operator_new(0x18);
            *plVar2 = 0;
            plVar2[2] = lVar5;
            lVar5 = *(long *)pJVar6;
            *(long **)(lVar5 + 8) = plVar2;
            *plVar2 = lVar5;
            *(long **)pJVar6 = plVar2;
            plVar2[1] = (long)pJVar6;
            goto LAB_00a013e0;
          }
        }
      }
      plVar3 = plVar3 + 1;
                    /* try { // try from 00a013e8 to 00b0140f has its CatchHandler @ 00a014a0 */
    } while (plVar3 != plVar1);
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
                    /* try { // try from 00a01410 to 00b01547 has its CatchHandler @ 00a00ff8 */
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x40));
  return;
}

