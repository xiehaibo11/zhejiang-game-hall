
/* v8::internal::Sweeper::SweepSpaceFromTask(v8::internal::AllocationSpace) */

void __thiscall v8::internal::Sweeper::SweepSpaceFromTask(Sweeper *this,int param_2)

{
  Mutex *this_00;
  long lVar1;
  long *plVar2;
  
  if (((byte)this[0x108] & 1) == 0) {
    this_00 = (Mutex *)(this + 0x40);
    do {
      base::Mutex::Lock(this_00);
      lVar1 = *(long *)(this + (long)param_2 * 0x18 + 0x88);
      if (*(long *)(this + (long)param_2 * 0x18 + 0x80) == lVar1) {
        base::Mutex::Unlock(this_00);
        return;
      }
      plVar2 = (long *)(lVar1 + -8);
      lVar1 = *plVar2;
      *(long **)(this + (long)param_2 * 0x18 + 0x88) = plVar2;
      base::Mutex::Unlock(this_00);
    } while ((lVar1 != 0) && (ParallelSweepPage(this,lVar1,param_2,1), ((byte)this[0x108] & 1) == 0)
            );
  }
  return;
}

