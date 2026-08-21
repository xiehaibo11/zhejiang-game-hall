
/* v8::internal::Sweeper::SweepSpaceIncrementallyFromTask(v8::internal::AllocationSpace) */

bool __thiscall v8::internal::Sweeper::SweepSpaceIncrementallyFromTask(Sweeper *this,int param_2)

{
  Mutex *this_00;
  long *plVar1;
  long lVar2;
  Sweeper *pSVar3;
  
  this_00 = (Mutex *)(this + 0x40);
  base::Mutex::Lock(this_00);
  pSVar3 = this + (long)param_2 * 0x18 + 0x88;
  if (*(long *)(this + (long)param_2 * 0x18 + 0x80) == *(long *)pSVar3) {
    base::Mutex::Unlock(this_00);
  }
  else {
    plVar1 = (long *)(*(long *)pSVar3 + -8);
    lVar2 = *plVar1;
    *(long **)pSVar3 = plVar1;
    base::Mutex::Unlock(this_00);
    if (lVar2 != 0) {
      ParallelSweepPage(this,lVar2,param_2,1);
    }
  }
  return *(long *)(this + (long)param_2 * 0x18 + 0x80) == *(long *)pSVar3;
}

