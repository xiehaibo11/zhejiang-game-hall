
/* v8::internal::ExternalCodeEventListener::CodeMoveEvent(v8::internal::AbstractCode,
   v8::internal::AbstractCode) */

void __thiscall
v8::internal::ExternalCodeEventListener::CodeMoveEvent
          (ExternalCodeEventListener *this,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_78 [8];
  long local_70;
  long local_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 *local_40;
  long local_38;
  ulong local_18;
  
  local_60 = 0;
  lStack_58 = 0;
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x9a) {
    local_18 = param_2;
    if (*(int *)(param_2 + 0x17) < 0) {
      local_38 = Code::OffHeapInstructionStart((Code *)&local_18);
    }
    else {
      local_38 = param_2 + 0x3f;
    }
  }
  else {
    local_38 = param_2 + 0x21;
  }
  uVar2 = param_3 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar2 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_18 = param_3;
      local_70 = Code::OffHeapInstructionStart((Code *)&local_18);
    }
    else {
      local_70 = param_3 + 0x3f;
      local_18 = param_3;
    }
  }
  else {
    local_70 = param_3 + 0x21;
  }
  if (*(short *)(uVar2 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_18 = param_3;
      iVar1 = Code::OffHeapInstructionSize((Code *)&local_18);
    }
    else {
      iVar1 = *(int *)(param_3 + 0x13);
      local_18 = param_3;
    }
  }
  else {
    iVar1 = *(int *)(param_3 + 3) >> 1;
  }
  local_68 = (long)iVar1;
  local_48 = 0xc;
  local_50 = 0;
  local_60 = *(long *)(this + 0x10) + 200;
  local_40 = &DAT_0189703a;
  lStack_58 = local_60;
  (**(code **)(**(long **)(this + 0x18) + 0x10))(*(long **)(this + 0x18),auStack_78);
  return;
}

