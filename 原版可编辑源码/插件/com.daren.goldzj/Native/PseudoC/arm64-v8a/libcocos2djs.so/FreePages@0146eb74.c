
/* v8::base::BoundedPageAllocator::FreePages(void*, unsigned long) */

undefined4 __thiscall
v8::base::BoundedPageAllocator::FreePages(BoundedPageAllocator *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  Mutex::Lock((Mutex *)(this + 8));
  uVar1 = RegionAllocator::TrimRegion((RegionAllocator *)(this + 0x48),(ulong)param_1,0);
  if (uVar1 == param_2) {
    uVar1 = (**(code **)(**(long **)(this + 0x40) + 0x48))
                      (*(long **)(this + 0x40),param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "page_allocator_->SetPermissions(raw_address, size, PageAllocator::kNoAccess)");
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  Mutex::Unlock((Mutex *)(this + 8));
  return uVar2;
}

