
/* v8::internal::ProfileNode::source_type() const */

ProfileNode * __thiscall v8::internal::ProfileNode::source_type(ProfileNode *this)

{
  long lVar1;
  ProfileNode *pPVar2;
  code *pcVar3;
  long lVar4;
  undefined **local_80;
  code *pcStack_78;
  undefined8 *local_70;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(this + 8);
  pPVar2 = this;
  if (CodeEntry::kProgramEntry != '\x02') {
    local_70 = &DAT_01d3f8a8;
    local_80 = &PTR_FUN_01c984d0;
    pcStack_78 = base::
                 LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::ProgramEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                 ::InitInstance;
    local_60 = (long *)&local_80;
    base::CallOnceImpl(&CodeEntry::kProgramEntry,&local_80);
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
    }
    else {
      pPVar2 = (ProfileNode *)0x0;
      if (local_60 == (long *)0x0) goto LAB_00ed3af4;
      pcVar3 = *(code **)(*local_60 + 0x28);
    }
    pPVar2 = (ProfileNode *)(*pcVar3)();
  }
LAB_00ed3af4:
  if (lVar4 == DAT_01d3f8a8) {
LAB_00ed3cf8:
    pPVar2 = (ProfileNode *)0x3;
  }
  else {
    lVar4 = *(long *)(this + 8);
    if (CodeEntry::kIdleEntry != '\x02') {
      local_70 = &DAT_01d3f8b8;
      local_80 = &PTR_FUN_01c984d0;
      pcStack_78 = base::
                   LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::IdleEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                   ::InitInstance;
      local_60 = (long *)&local_80;
      base::CallOnceImpl(&CodeEntry::kIdleEntry,&local_80);
      if (&local_80 == (undefined ***)local_60) {
        pcVar3 = *(code **)(*local_60 + 0x20);
      }
      else {
        pPVar2 = (ProfileNode *)0x0;
        if (local_60 == (long *)0x0) goto LAB_00ed3b78;
        pcVar3 = *(code **)(*local_60 + 0x28);
      }
      pPVar2 = (ProfileNode *)(*pcVar3)();
    }
LAB_00ed3b78:
    if (lVar4 == DAT_01d3f8b8) goto LAB_00ed3cf8;
    lVar4 = *(long *)(this + 8);
    if (CodeEntry::kGCEntry != '\x02') {
      local_70 = &DAT_01d3f8c8;
      local_80 = &PTR_FUN_01c984d0;
      pcStack_78 = base::
                   LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::GCEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                   ::InitInstance;
      local_60 = (long *)&local_80;
      base::CallOnceImpl(&CodeEntry::kGCEntry,&local_80);
      if (&local_80 == (undefined ***)local_60) {
        pcVar3 = *(code **)(*local_60 + 0x20);
      }
      else {
        pPVar2 = (ProfileNode *)0x0;
        if (local_60 == (long *)0x0) goto LAB_00ed3bfc;
        pcVar3 = *(code **)(*local_60 + 0x28);
      }
      pPVar2 = (ProfileNode *)(*pcVar3)();
    }
LAB_00ed3bfc:
    if (lVar4 == DAT_01d3f8c8) goto LAB_00ed3cf8;
    lVar4 = *(long *)(this + 8);
    if (CodeEntry::kRootEntry != '\x02') {
      local_70 = &DAT_01d3f8e8;
      local_80 = &PTR_FUN_01c984d0;
      pcStack_78 = base::
                   LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::RootEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                   ::InitInstance;
      local_60 = (long *)&local_80;
      base::CallOnceImpl(&CodeEntry::kRootEntry,&local_80);
      if (&local_80 == (undefined ***)local_60) {
        pcVar3 = *(code **)(*local_60 + 0x20);
      }
      else {
        pPVar2 = (ProfileNode *)0x0;
        if (local_60 == (long *)0x0) goto LAB_00ed3c80;
        pcVar3 = *(code **)(*local_60 + 0x28);
      }
      pPVar2 = (ProfileNode *)(*pcVar3)();
    }
LAB_00ed3c80:
    if (lVar4 == DAT_01d3f8e8) goto LAB_00ed3cf8;
    lVar4 = *(long *)(this + 8);
    if (CodeEntry::kUnresolvedEntry != '\x02') {
      local_70 = &DAT_01d3f8d8;
      local_80 = &PTR_FUN_01c984d0;
      pcStack_78 = base::
                   LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::UnresolvedEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                   ::InitInstance;
      local_60 = (long *)&local_80;
      base::CallOnceImpl(&CodeEntry::kUnresolvedEntry,&local_80);
      if (&local_80 == (undefined ***)local_60) {
        pcVar3 = *(code **)(*local_60 + 0x20);
      }
      else {
        pPVar2 = (ProfileNode *)0x0;
        if (local_60 == (long *)0x0) goto LAB_00ed3d30;
        pcVar3 = *(code **)(*local_60 + 0x28);
      }
      pPVar2 = (ProfileNode *)(*pcVar3)();
    }
LAB_00ed3d30:
    if (lVar4 != DAT_01d3f8d8) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return (ProfileNode *)
               (ulong)*(uint *)(&DAT_0199c074 +
                               (-((ulong)(**(uint **)(this + 8) >> 7) & 1) & 0xfffffffffffffc00 |
                               ((ulong)**(uint **)(this + 8) & 0xff) << 2));
      }
      goto LAB_00ed3d70;
    }
    pPVar2 = (ProfileNode *)&DAT_00000004;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pPVar2;
  }
LAB_00ed3d70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar2);
}

