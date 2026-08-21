
/* v8::internal::ProfilerListener::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, char const*) */

void __thiscall
v8::internal::ProfilerListener::CodeCreateEvent
          (ProfilerListener *this,uint param_2,ulong param_3,char *param_4)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_a0;
  undefined4 local_98 [2];
  long local_90;
  uint *local_88;
  int local_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_98[0] = 1;
  uVar5 = param_3 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar5 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_a0 = param_3;
      local_90 = Code::OffHeapInstructionStart((Code *)&local_a0);
    }
    else {
      local_90 = param_3 + 0x3f;
      local_a0 = param_3;
    }
  }
  else {
    local_90 = param_3 + 0x21;
  }
  puVar2 = operator_new(0x40);
  uVar3 = StringsStorage::GetCopy((StringsStorage *)(this + 0x18),param_4);
  if (*(short *)(uVar5 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_a0 = param_3;
      lVar4 = Code::OffHeapInstructionStart((Code *)&local_a0);
    }
    else {
      lVar4 = param_3 + 0x3f;
      local_a0 = param_3;
    }
  }
  else {
    lVar4 = param_3 + 0x21;
  }
  *(undefined8 *)(puVar2 + 2) = uVar3;
  *(undefined1 **)(puVar2 + 4) = &DAT_0189703a;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(long *)(puVar2 + 0xc) = lVar4;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *puVar2 = param_2 | 0x5bc00;
  local_88 = puVar2;
  if (*(short *)(uVar5 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_a0 = param_3;
      local_80 = Code::OffHeapInstructionSize((Code *)&local_a0);
    }
    else {
      local_80 = *(int *)(param_3 + 0x13);
      local_a0 = param_3;
    }
  }
  else {
    local_80 = *(int *)(param_3 + 3) >> 1;
  }
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

