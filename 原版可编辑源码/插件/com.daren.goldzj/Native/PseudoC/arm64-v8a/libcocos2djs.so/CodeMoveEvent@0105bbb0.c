
/* v8::internal::JitLogger::CodeMoveEvent(v8::internal::AbstractCode, v8::internal::AbstractCode) */

void __thiscall v8::internal::JitLogger::CodeMoveEvent(JitLogger *this,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_90;
  uint local_8c;
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_60;
  undefined8 local_48;
  ulong local_28;
  
  base::Mutex::Lock((Mutex *)(this + 0x20));
  local_78 = 0;
  local_90 = 1;
  uVar2 = param_2 & 0xffffffff00000000 | 7;
  local_8c = (uint)(*(short *)(uVar2 + *(uint *)(param_2 - 1)) == 0x9a);
  if (*(short *)(uVar2 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_28 = param_2;
      local_88 = Code::OffHeapInstructionStart((Code *)&local_28);
    }
    else {
      local_88 = param_2 + 0x3f;
      local_28 = param_2;
    }
  }
  else {
    local_88 = param_2 + 0x21;
  }
  if (*(short *)(uVar2 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_28 = param_2;
      iVar1 = Code::OffHeapInstructionSize((Code *)&local_28);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x13);
      local_28 = param_2;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 3) >> 1;
  }
  local_80 = (long)iVar1;
  if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x9a) {
    local_28 = param_3;
    if (*(int *)(param_3 + 0x17) < 0) {
      local_60 = Code::OffHeapInstructionStart((Code *)&local_28);
    }
    else {
      local_60 = param_3 + 0x3f;
    }
  }
  else {
    local_60 = param_3 + 0x21;
  }
  local_48 = *(undefined8 *)(this + 8);
  (**(code **)(this + 0x18))(&local_90);
  base::Mutex::Unlock((Mutex *)(this + 0x20));
  return;
}

