
/* v8::internal::ProfilerListener::RegExpCodeCreateEvent(v8::internal::AbstractCode,
   v8::internal::String) */

void __thiscall
v8::internal::ProfilerListener::RegExpCodeCreateEvent
          (ProfilerListener *this,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_a0;
  undefined4 local_98 [2];
  long local_90;
  undefined4 *local_88;
  int local_80;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_98[0] = 1;
  uVar5 = param_2 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar5 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_a0 = param_2;
      local_90 = Code::OffHeapInstructionStart((Code *)&local_a0);
    }
    else {
      local_90 = param_2 + 0x3f;
      local_a0 = param_2;
    }
  }
  else {
    local_90 = param_2 + 0x21;
  }
  puVar2 = operator_new(0x40);
  uVar3 = StringsStorage::GetConsName((StringsStorage *)(this + 0x18),"RegExp: ",param_3);
  if (*(short *)(uVar5 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_a0 = param_2;
      lVar4 = Code::OffHeapInstructionStart((Code *)&local_a0);
    }
    else {
      lVar4 = param_2 + 0x3f;
      local_a0 = param_2;
    }
  }
  else {
    lVar4 = param_2 + 0x21;
  }
  *(undefined8 *)(puVar2 + 2) = uVar3;
  *(undefined1 **)(puVar2 + 4) = &DAT_0189703a;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(long *)(puVar2 + 0xc) = lVar4;
  *(undefined8 *)(puVar2 + 0xe) = 0;
  *puVar2 = 0x5bc10;
  local_88 = puVar2;
  if (*(short *)(uVar5 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_a0 = param_2;
      local_80 = Code::OffHeapInstructionSize((Code *)&local_a0);
    }
    else {
      local_80 = *(int *)(param_2 + 0x13);
      local_a0 = param_2;
    }
  }
  else {
    local_80 = *(int *)(param_2 + 3) >> 1;
  }
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_98);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

