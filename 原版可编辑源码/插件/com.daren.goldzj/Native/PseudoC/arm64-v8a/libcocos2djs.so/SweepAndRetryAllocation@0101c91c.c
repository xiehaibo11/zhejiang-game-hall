
/* v8::internal::PagedSpace::SweepAndRetryAllocation(int, int, int, v8::internal::AllocationOrigin)
    */

undefined8 __thiscall
v8::internal::PagedSpace::SweepAndRetryAllocation
          (PagedSpace *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_5)

{
  int iVar1;
  Sweeper *pSVar2;
  undefined8 uVar3;
  
  pSVar2 = *(Sweeper **)(*(long *)(*(long *)(this + 0x40) + 0x800) + 0x26f8);
  if (pSVar2[0xf9] != (Sweeper)0x0) {
    iVar1 = Sweeper::ParallelSweepSpace
                      (pSVar2,*(undefined4 *)(this + 0x48),param_1,param_2,
                       2 < *(int *)(this + 0x9c) - 2U);
    (**(code **)(*(long *)this + 0xa8))(this);
    if (param_3 <= iVar1) {
      uVar3 = RefillLinearAllocationAreaFromFreeList(this,(long)param_3,param_5);
      return uVar3;
    }
  }
  return 0;
}

