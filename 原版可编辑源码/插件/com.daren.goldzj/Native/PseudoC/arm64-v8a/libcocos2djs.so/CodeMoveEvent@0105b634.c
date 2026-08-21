
/* v8::internal::LowLevelLogger::CodeMoveEvent(v8::internal::AbstractCode,
   v8::internal::AbstractCode) */

void __thiscall
v8::internal::LowLevelLogger::CodeMoveEvent(LowLevelLogger *this,ulong param_2,ulong param_3)

{
  ulong local_38;
  long local_30;
  ulong local_28;
  
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_38 = param_2;
      local_38 = Code::OffHeapInstructionStart((Code *)&local_38);
    }
    else {
      local_38 = param_2 + 0x3f;
    }
  }
  else {
    local_38 = param_2 + 0x21;
  }
  if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x9a) {
    local_28 = param_3;
    if (*(int *)(param_3 + 0x17) < 0) {
      local_30 = Code::OffHeapInstructionStart((Code *)&local_28);
    }
    else {
      local_30 = param_3 + 0x3f;
    }
  }
  else {
    local_30 = param_3 + 0x21;
  }
  fputc(0x4d,*(FILE **)(this + 0x18));
  fwrite(&local_38,1,0x10,*(FILE **)(this + 0x18));
  return;
}

