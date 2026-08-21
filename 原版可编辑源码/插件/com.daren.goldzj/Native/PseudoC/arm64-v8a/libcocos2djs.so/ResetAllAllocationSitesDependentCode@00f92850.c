
/* v8::internal::Heap::ResetAllAllocationSitesDependentCode(v8::internal::AllocationType) */

void __thiscall
v8::internal::Heap::ResetAllAllocationSitesDependentCode(Heap *this,undefined1 param_2)

{
  long lVar1;
  code *pcVar2;
  char local_74 [4];
  undefined **local_70;
  char *pcStack_68;
  undefined1 local_60;
  Heap *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pcStack_68 = local_74;
  local_74[0] = '\0';
  local_70 = &PTR_FUN_01ca7df0;
  local_60 = param_2;
  local_58 = this;
  local_50 = &local_70;
  ForeachAllocationSite(this,*(undefined8 *)(this + 0x5f0),&local_70);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00f928cc;
    pcVar2 = (code *)(*local_50)[5];
  }
  (*pcVar2)();
LAB_00f928cc:
  if (local_74[0] != '\0') {
    StackGuard::RequestInterrupt((StackGuard *)(*(long *)(this + 0x30) + 0x48),0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

