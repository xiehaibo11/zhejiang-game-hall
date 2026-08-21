
/* v8::internal::LocalAllocator::NewLocalAllocationBuffer() */

undefined4 __thiscall v8::internal::LocalAllocator::NewLocalAllocationBuffer(LocalAllocator *this)

{
  LocalAllocationBuffer *this_00;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  NewSpace *pNVar7;
  LocalAllocationBuffer aLStack_70 [24];
  LocalAllocationBuffer aLStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  if (this[0x200] != (LocalAllocator)0x0) {
    return 0;
  }
  this_00 = (LocalAllocationBuffer *)(this + 0x1e8);
  LocalAllocationBuffer::LocalAllocationBuffer(aLStack_58,this_00);
  pNVar7 = *(NewSpace **)(this + 8);
  base::Mutex::Lock((Mutex *)(pNVar7 + 0x98));
  uVar4 = *(ulong *)(pNVar7 + 0x68);
  if (uVar4 < *(ulong *)(pNVar7 + 0x78)) {
    *(ulong *)(pNVar7 + 0x78) = uVar4;
  }
  uVar5 = uVar4 + 0x8000;
  if (*(ulong *)(pNVar7 + 0x70) < uVar5) {
    uVar4 = NewSpace::EnsureAllocation(pNVar7,0x8000,0);
    if ((uVar4 & 1) == 0) {
      uVar4 = 2;
      goto LAB_00fe5bd0;
    }
    uVar4 = *(ulong *)(pNVar7 + 0x68);
    uVar5 = uVar4 + 0x8000;
  }
  *(ulong *)(pNVar7 + 0x68) = uVar5;
  uVar4 = uVar4 + 1;
  if (FLAG_trace_allocations_origins != '\0') {
    SpaceWithLinearArea::UpdateAllocationOrigins((SpaceWithLinearArea *)pNVar7,1);
  }
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!object.IsSmi()");
  }
LAB_00fe5bd0:
  base::Mutex::Unlock((Mutex *)(pNVar7 + 0x98));
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)this;
    lVar2 = uVar4 - 1;
    lVar3 = uVar4 + 0x7fff;
  }
  LocalAllocationBuffer::LocalAllocationBuffer(aLStack_70,uVar1,lVar2,lVar3);
  LocalAllocationBuffer::operator=(this_00,aLStack_70);
  LocalAllocationBuffer::Close(aLStack_70);
  if (*(long *)(this + 0x1f0) == 0) {
    LocalAllocationBuffer::operator=(this_00,aLStack_58);
    uVar6 = 0;
    this[0x200] = (LocalAllocator)0x1;
  }
  else if (*(long *)(this + 0x1f0) == local_48) {
    uVar6 = 1;
    *(undefined8 *)(this + 0x1f0) = local_50;
    local_50 = 0;
    local_48 = 0;
  }
  else {
    uVar6 = 1;
  }
  LocalAllocationBuffer::Close(aLStack_58);
  return uVar6;
}

