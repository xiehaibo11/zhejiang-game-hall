
/* v8::base::BoundedPageAllocator::ReleasePages(void*, unsigned long, unsigned long) */

void __thiscall
v8::base::BoundedPageAllocator::ReleasePages
          (BoundedPageAllocator *this,void *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(long *)(this + 0x30) - 1;
  if ((uVar1 & (ulong)param_1) == 0) {
    uVar2 = -*(long *)(this + 0x30);
    uVar3 = uVar1 + param_3 & uVar2;
    if (uVar3 < (uVar1 + param_2 & uVar2)) {
      Mutex::Lock((Mutex *)(this + 8));
      RegionAllocator::TrimRegion((RegionAllocator *)(this + 0x48),(ulong)param_1,uVar3);
      Mutex::Unlock((Mutex *)(this + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x0146ecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x40) + 0x48))
              (*(long **)(this + 0x40),(long)param_1 + param_3,param_2 - param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsAligned(address, allocate_page_size_)");
}

