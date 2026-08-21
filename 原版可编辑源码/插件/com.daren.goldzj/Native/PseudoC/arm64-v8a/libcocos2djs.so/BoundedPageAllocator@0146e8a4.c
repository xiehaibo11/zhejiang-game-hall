
/* v8::base::BoundedPageAllocator::BoundedPageAllocator(v8::PageAllocator*, unsigned long, unsigned
   long, unsigned long) */

void __thiscall
v8::base::BoundedPageAllocator::BoundedPageAllocator
          (BoundedPageAllocator *this,PageAllocator *param_1,ulong param_2,ulong param_3,
          ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__BoundedPageAllocator_01cc3eb8;
  Mutex::Mutex((Mutex *)(this + 8));
  *(ulong *)(this + 0x30) = param_4;
  uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  *(undefined8 *)(this + 0x38) = uVar1;
  *(PageAllocator **)(this + 0x40) = param_1;
  RegionAllocator::RegionAllocator
            ((RegionAllocator *)(this + 0x48),param_2,param_3,*(ulong *)(this + 0x30));
  if (param_1 == (PageAllocator *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(page_allocator) != nullptr");
  }
  lVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((lVar2 - 1U & param_4) == 0) {
    if ((*(long *)(this + 0x38) - 1U & *(ulong *)(this + 0x30)) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAligned(allocate_page_size_, commit_page_size_)");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsAligned(allocate_page_size, page_allocator->AllocatePageSize())");
}

