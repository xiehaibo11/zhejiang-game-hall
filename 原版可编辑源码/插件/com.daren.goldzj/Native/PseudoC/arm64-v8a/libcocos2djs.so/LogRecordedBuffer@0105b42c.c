
/* v8::internal::LowLevelLogger::LogRecordedBuffer(v8::internal::AbstractCode,
   v8::internal::SharedFunctionInfo, char const*, int) */

void __thiscall
v8::internal::LowLevelLogger::LogRecordedBuffer
          (LowLevelLogger *this,ulong param_2,undefined8 param_3,void *param_4,int param_5)

{
  int iVar1;
  void *__ptr;
  ulong uVar2;
  int local_58 [2];
  long local_50;
  int local_48;
  ulong local_28;
  
  uVar2 = param_2 & 0xffffffff00000000 | 7;
  local_58[0] = param_5;
  if (*(short *)(uVar2 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_28 = param_2;
      local_50 = Code::OffHeapInstructionStart((Code *)&local_28);
    }
    else {
      local_50 = param_2 + 0x3f;
      local_28 = param_2;
    }
  }
  else {
    local_50 = param_2 + 0x21;
  }
  if (*(short *)(uVar2 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_28 = param_2;
      local_48 = Code::OffHeapInstructionSize((Code *)&local_28);
    }
    else {
      local_48 = *(int *)(param_2 + 0x13);
      local_28 = param_2;
    }
  }
  else {
    local_48 = *(int *)(param_2 + 3) >> 1;
  }
  fputc(0x43,*(FILE **)(this + 0x18));
  fwrite(local_58,1,0x18,*(FILE **)(this + 0x18));
  fwrite(param_4,1,(long)param_5,*(FILE **)(this + 0x18));
  if (*(short *)(uVar2 + *(uint *)(param_2 - 1)) == 0x9a) {
    if (*(int *)(param_2 + 0x17) < 0) {
      local_28 = param_2;
      __ptr = (void *)Code::OffHeapInstructionStart((Code *)&local_28);
    }
    else {
      __ptr = (void *)(param_2 + 0x3f);
      local_28 = param_2;
    }
  }
  else {
    __ptr = (void *)(param_2 + 0x21);
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
  fwrite(__ptr,1,(long)iVar1,*(FILE **)(this + 0x18));
  return;
}

