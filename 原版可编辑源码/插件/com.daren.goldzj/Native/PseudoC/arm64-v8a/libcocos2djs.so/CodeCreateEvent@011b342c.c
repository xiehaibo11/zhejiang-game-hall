
/* v8::internal::ProfilerListener::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::SharedFunctionInfo, v8::internal::Name) */

void __thiscall
v8::internal::ProfilerListener::CodeCreateEvent
          (ProfilerListener *this,uint param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  CodeEntry *pCVar2;
  undefined8 uVar3;
  ProfilerListener *pPVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_b8;
  ulong local_b0;
  undefined4 local_a8 [2];
  long local_a0;
  CodeEntry *local_98;
  int local_90;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = param_3 & 0xffffffff00000000 | 7;
  local_a8[0] = 1;
  local_b8 = param_4;
  if (*(short *)(uVar6 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_b0 = param_3;
      local_a0 = Code::OffHeapInstructionStart((Code *)&local_b0);
    }
    else {
      local_a0 = param_3 + 0x3f;
      local_b0 = param_3;
    }
  }
  else {
    local_a0 = param_3 + 0x21;
  }
  pCVar2 = operator_new(0x40);
  uVar3 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_b8);
  pPVar4 = (ProfilerListener *)StringsStorage::GetName((StringsStorage *)(this + 0x18),uVar3);
  uVar3 = InferScriptName(pPVar4,param_5,local_b8);
  uVar3 = StringsStorage::GetName((StringsStorage *)(this + 0x18),uVar3);
  if (*(short *)(uVar6 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_b0 = param_3;
      lVar5 = Code::OffHeapInstructionStart((Code *)&local_b0);
    }
    else {
      lVar5 = param_3 + 0x3f;
      local_b0 = param_3;
    }
  }
  else {
    lVar5 = param_3 + 0x21;
  }
  *(undefined8 *)(pCVar2 + 0x28) = 0;
  *(long *)(pCVar2 + 0x30) = lVar5;
  *(ProfilerListener **)(pCVar2 + 8) = pPVar4;
  *(undefined8 *)(pCVar2 + 0x10) = uVar3;
  *(undefined8 *)(pCVar2 + 0x18) = 0;
  *(undefined8 *)(pCVar2 + 0x20) = 0;
  *(uint *)pCVar2 = param_2 | 0x5bc00;
  *(undefined8 *)(pCVar2 + 0x38) = 0;
  local_98 = pCVar2;
  CodeEntry::FillFunctionInfo(pCVar2,local_b8);
  if (*(short *)(uVar6 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_b0 = param_3;
      local_90 = Code::OffHeapInstructionSize((Code *)&local_b0);
    }
    else {
      local_90 = *(int *)(param_3 + 0x13);
      local_b0 = param_3;
    }
  }
  else {
    local_90 = *(int *)(param_3 + 3) >> 1;
  }
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_a8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

