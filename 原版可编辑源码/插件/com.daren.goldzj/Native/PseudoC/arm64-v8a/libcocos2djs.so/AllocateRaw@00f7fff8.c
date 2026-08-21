
/* v8::internal::PagedSpace::AllocateRaw(int, v8::internal::AllocationAlignment,
   v8::internal::AllocationOrigin) */

ulong __thiscall
v8::internal::PagedSpace::AllocateRaw
          (PagedSpace *this,int param_1,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar1 = *(ulong *)(this + 0x78);
  if (uVar1 == 0) {
LAB_00f80060:
    iVar3 = 0;
  }
  else {
    if (*(ulong *)(this + 0x68) < uVar1) {
      uVar1 = (**(code **)(*(long *)this + 0x80))(this);
      if ((uVar1 & 1) == 0) {
        uVar1 = *(ulong *)(this + 0x78);
      }
      else {
        uVar1 = *(ulong *)(this + 0x68);
        *(ulong *)(this + 0x78) = uVar1;
      }
      if (uVar1 == 0) goto LAB_00f80060;
    }
    iVar3 = *(int *)(this + 0x68) - (int)uVar1;
  }
  uVar2 = *(ulong *)(this + 0x68);
  uVar1 = uVar2 + (long)param_1;
  if (*(ulong *)(this + 0x70) < uVar1) {
    uVar1 = (**(code **)(*(long *)this + 0xb8))(this,param_1,param_4);
    if ((uVar1 & 1) == 0) {
      return (long)*(int *)(this + 0x48) << 1;
    }
    uVar2 = *(ulong *)(this + 0x68);
    uVar1 = uVar2 + (long)param_1;
  }
  *(ulong *)(this + 0x68) = uVar1;
  if (FLAG_trace_allocations_origins != '\0') {
    SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)this,param_4);
  }
  if ((uVar2 + 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!object.IsSmi()");
  }
  if (*(int *)(this + 0x9c) == 0) {
    Space::AllocationStep((Space *)this,iVar3 + param_1,uVar2,param_1);
    (**(code **)(*(long *)this + 0x30))(this);
  }
  return uVar2 + 1;
}

