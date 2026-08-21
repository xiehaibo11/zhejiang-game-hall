
/* v8::internal::ProfileTree::ProfileTree(v8::internal::Isolate*) */

void __thiscall v8::internal::ProfileTree::ProfileTree(ProfileTree *this,Isolate *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ProfileNode *pPVar4;
  code *pcVar5;
  ProfileNode *local_80;
  code *pcStack_78;
  undefined8 *local_70;
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  pPVar4 = operator_new(0xb0);
  if (CodeEntry::kRootEntry != '\x02') {
    local_70 = &DAT_01d3f8e8;
    local_80 = (ProfileNode *)&PTR_FUN_01c984d0;
    pcStack_78 = base::
                 LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::RootEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                 ::InitInstance;
    local_60 = (long *)&local_80;
    base::CallOnceImpl(&CodeEntry::kRootEntry,&local_80);
    if (&local_80 == (ProfileNode **)local_60) {
      pcVar5 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_011ad880;
      pcVar5 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar5)();
  }
LAB_011ad880:
  uVar3 = DAT_01d3f8e8;
  *(undefined4 *)(pPVar4 + 0x10) = 0;
  *(undefined4 *)(pPVar4 + 0x40) = 0;
  *(undefined8 *)(pPVar4 + 0x20) = 0;
  *(undefined8 *)(pPVar4 + 0x18) = 0;
  *(undefined8 *)(pPVar4 + 0x30) = 0;
  *(undefined8 *)(pPVar4 + 0x28) = 0;
  *(undefined4 *)(pPVar4 + 0x38) = 0x3f800000;
  *(undefined8 *)(pPVar4 + 0x50) = 0;
  *(undefined8 *)(pPVar4 + 0x48) = 0;
  *(undefined8 *)(pPVar4 + 0x60) = 0;
  *(undefined8 *)(pPVar4 + 0x58) = 0;
  *(ProfileTree **)pPVar4 = this;
  *(undefined8 *)(pPVar4 + 8) = uVar3;
  iVar1 = *(int *)(this + 0x18);
  *(int *)(this + 0x18) = iVar1 + 1;
  *(int *)(pPVar4 + 0x68) = iVar1;
  *(undefined8 *)(pPVar4 + 0x78) = 0;
  *(undefined8 *)(pPVar4 + 0x70) = 0;
  *(undefined8 *)(pPVar4 + 0x88) = 0;
  *(undefined8 *)(pPVar4 + 0x80) = 0;
  *(undefined4 *)(pPVar4 + 0x90) = 0x3f800000;
  *(undefined8 *)(pPVar4 + 0xa0) = 0;
  *(undefined8 *)(pPVar4 + 0xa8) = 0;
  *(undefined8 *)(pPVar4 + 0x98) = 0;
  local_80 = pPVar4;
  if (*(undefined8 **)(this + 8) == *(undefined8 **)(this + 0x10)) {
    std::__ndk1::
    vector<v8::internal::ProfileNode_const*,std::__ndk1::allocator<v8::internal::ProfileNode_const*>>
    ::__push_back_slow_path<v8::internal::ProfileNode_const*const&>
              ((vector<v8::internal::ProfileNode_const*,std::__ndk1::allocator<v8::internal::ProfileNode_const*>>
                *)this,&local_80);
  }
  else {
    **(undefined8 **)(this + 8) = pPVar4;
    *(long *)(this + 8) = *(long *)(this + 8) + 8;
  }
  *(ProfileNode **)(this + 0x20) = pPVar4;
  *(Isolate **)(this + 0x28) = param_1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

