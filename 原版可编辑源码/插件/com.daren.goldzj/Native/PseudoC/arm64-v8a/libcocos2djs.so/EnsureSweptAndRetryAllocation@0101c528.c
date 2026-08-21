
/* v8::internal::PagedSpace::EnsureSweptAndRetryAllocation(int, v8::internal::AllocationOrigin) */

undefined8 __thiscall
v8::internal::PagedSpace::EnsureSweptAndRetryAllocation
          (PagedSpace *this,int param_1,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(*(long *)(*(MarkCompactCollector **)(*(long *)(this + 0x40) + 0x800) + 0x26f8) +
               0xf9) != '\0') {
    MarkCompactCollector::EnsureSweepingCompleted
              (*(MarkCompactCollector **)(*(long *)(this + 0x40) + 0x800));
    uVar1 = RefillLinearAllocationAreaFromFreeList(this,(long)param_1,param_3);
    return uVar1;
  }
  return 0;
}

