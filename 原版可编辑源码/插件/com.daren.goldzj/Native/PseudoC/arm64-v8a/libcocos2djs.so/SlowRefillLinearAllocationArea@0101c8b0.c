
/* v8::internal::OffThreadSpace::SlowRefillLinearAllocationArea(int, v8::internal::AllocationOrigin)
    */

undefined8 __thiscall
v8::internal::OffThreadSpace::SlowRefillLinearAllocationArea
          (OffThreadSpace *this,int param_1,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = PagedSpace::RefillLinearAllocationAreaFromFreeList((PagedSpace *)this,(long)param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = PagedSpace::Expand((PagedSpace *)this);
    if ((uVar1 & 1) != 0) {
      uVar2 = PagedSpace::RefillLinearAllocationAreaFromFreeList
                        ((PagedSpace *)this,(long)param_1,param_3);
      return uVar2;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

