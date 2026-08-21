
/* v8::internal::Heap::DeoptMarkedAllocationSites() */

void __thiscall v8::internal::Heap::DeoptMarkedAllocationSites(Heap *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_70;
  Heap *pHStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_01ca7da8;
  pHStack_68 = this;
  ForeachAllocationSite(this,*(undefined8 *)(this + 0x5f0),&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f8a238;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00f8a238:
  Deoptimizer::DeoptimizeMarkedCode(*(Isolate **)(this + 0x30));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

