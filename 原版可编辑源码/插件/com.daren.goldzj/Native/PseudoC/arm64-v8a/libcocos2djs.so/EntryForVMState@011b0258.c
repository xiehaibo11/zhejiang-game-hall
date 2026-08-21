
/* v8::internal::ProfileGenerator::EntryForVMState(v8::StateTag) */

void __thiscall
v8::internal::ProfileGenerator::EntryForVMState(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined **local_70;
  code *pcStack_68;
  undefined1 *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch(param_2) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    puVar3 = &CodeEntry::kProgramEntry;
    if (CodeEntry::kProgramEntry == '\x02') goto LAB_011b0310;
    pcStack_68 = base::
                 LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::ProgramEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                 ::InitInstance;
    break;
  case 1:
    puVar3 = &CodeEntry::kGCEntry;
    if (CodeEntry::kGCEntry == '\x02') goto LAB_011b0310;
    pcStack_68 = base::
                 LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::GCEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                 ::InitInstance;
    break;
  case 7:
    puVar3 = &CodeEntry::kIdleEntry;
    if (CodeEntry::kIdleEntry == '\x02') goto LAB_011b0310;
    pcStack_68 = base::
                 LazyInstanceImpl<v8::internal::CodeEntry,v8::base::DynamicallyAllocatedInstanceTrait<v8::internal::CodeEntry>,v8::internal::CodeEntry::IdleEntryCreateTrait,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::CodeEntry>>
                 ::InitInstance;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  local_60 = puVar3 + 8;
  local_70 = &PTR_FUN_01c984d0;
  local_50 = (long *)&local_70;
  base::CallOnceImpl(puVar3,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_011b0310;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_011b0310:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(puVar3 + 8));
  }
  return;
}

