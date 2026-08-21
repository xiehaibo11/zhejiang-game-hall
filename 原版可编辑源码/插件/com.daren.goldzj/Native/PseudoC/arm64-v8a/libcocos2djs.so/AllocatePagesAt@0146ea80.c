
/* v8::base::BoundedPageAllocator::AllocatePagesAt(unsigned long, unsigned long,
   v8::PageAllocator::Permission) */

undefined8 __thiscall
v8::base::BoundedPageAllocator::AllocatePagesAt
          (BoundedPageAllocator *this,ulong param_1,ulong param_2,undefined4 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((*(long *)(this + 0x30) - 1U & param_1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAligned(address, allocate_page_size_)");
  }
  if ((*(long *)(this + 0x30) - 1U & param_2) == 0) {
    uVar2 = param_1 - *(long *)(this + 0x48);
    if ((uVar2 < *(ulong *)(this + 0x50)) && (uVar2 + param_2 <= *(ulong *)(this + 0x50))) {
      uVar2 = RegionAllocator::AllocateRegionAt((RegionAllocator *)(this + 0x48),param_1,param_2);
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar2 = (**(code **)(**(long **)(this + 0x40) + 0x48))
                          (*(long **)(this + 0x40),param_1,param_2,param_4);
        if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "page_allocator_->SetPermissions(reinterpret_cast<void*>(address), size, access)"
                  );
        }
        uVar1 = 1;
      }
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","region_allocator_.contains(address, size)");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsAligned(size, allocate_page_size_)");
}

