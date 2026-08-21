
/* v8::internal::Sweeper::ParallelSweepSpace(v8::internal::AllocationSpace, int, int,
   v8::internal::Sweeper::FreeSpaceMayContainInvalidatedSlots) */

int __thiscall
v8::internal::Sweeper::ParallelSweepSpace
          (Sweeper *this,int param_2,int param_3,int param_4,undefined4 param_5)

{
  Mutex *this_00;
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  Sweeper *pSVar6;
  
  this_00 = (Mutex *)(this + 0x40);
  base::Mutex::Lock(this_00);
  pSVar6 = this + (long)param_2 * 0x18 + 0x88;
  lVar2 = *(long *)pSVar6;
  if (*(long *)(this + (long)param_2 * 0x18 + 0x80) == lVar2) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar3 = 1;
    do {
      lVar5 = *(long *)(lVar2 + -8);
      *(long **)pSVar6 = (long *)(lVar2 + -8);
      base::Mutex::Unlock(this_00);
      if (lVar5 == 0) {
        return iVar4;
      }
      iVar1 = ParallelSweepPage(this,lVar5,param_2,param_5);
      if ((*(byte *)(lVar5 + 9) >> 4 & 1) == 0) {
        if (iVar1 <= iVar4) {
          iVar1 = iVar4;
        }
        if (0 < param_3 && param_3 <= iVar1) {
          return iVar1;
        }
        iVar4 = iVar1;
        if (0 < param_4 && param_4 <= iVar3) {
          return iVar1;
        }
      }
      base::Mutex::Lock(this_00);
      lVar2 = *(long *)pSVar6;
      iVar3 = iVar3 + 1;
    } while (*(long *)(this + (long)param_2 * 0x18 + 0x80) != lVar2);
  }
  base::Mutex::Unlock(this_00);
  return iVar4;
}

