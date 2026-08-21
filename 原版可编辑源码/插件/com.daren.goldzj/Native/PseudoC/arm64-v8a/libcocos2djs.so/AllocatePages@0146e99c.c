
/* v8::base::BoundedPageAllocator::AllocatePages(void*, unsigned long, unsigned long,
   v8::PageAllocator::Permission) */

long __thiscall
v8::base::BoundedPageAllocator::AllocatePages
          (BoundedPageAllocator *this,undefined8 param_2_00,ulong param_2,ulong param_3,
          undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  
  Mutex::Lock((Mutex *)(this + 8));
  if ((*(long *)(this + 0x78) - 1U & param_3) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAligned(alignment, region_allocator_.page_size())");
  }
  if (param_3 <= *(ulong *)(this + 0x30)) {
    lVar1 = RegionAllocator::AllocateRegion((RegionAllocator *)(this + 0x48),param_2);
    if (lVar1 == -1) {
      lVar1 = 0;
    }
    else {
      uVar2 = (**(code **)(**(long **)(this + 0x40) + 0x48))
                        (*(long **)(this + 0x40),lVar1,param_2,param_5);
      if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "page_allocator_->SetPermissions(reinterpret_cast<void*>(address), size, access)");
      }
    }
    Mutex::Unlock((Mutex *)(this + 8));
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","alignment <= allocate_page_size_");
}

