
/* v8::internal::PerfBasicLogger::LogRecordedBuffer(v8::internal::AbstractCode,
   v8::internal::SharedFunctionInfo, char const*, int) */

void __thiscall
v8::internal::PerfBasicLogger::LogRecordedBuffer
          (PerfBasicLogger *this,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_48;
  
  if ((((FLAG_perf_basic_prof_only_functions == '\0') ||
       (uVar3 = param_2 & 0xffffffff00000000 | 7, *(short *)(uVar3 + *(uint *)(param_2 - 1)) != 0x9a
       )) || (uVar1 = *(uint *)(param_2 + 0x17) & 0x3e, uVar1 == 0x18)) ||
     (((*(short *)(uVar3 + *(uint *)(param_2 - 1)) == 0x9a && (uVar1 == 6)) ||
      ((*(short *)(uVar3 + *(uint *)(param_2 - 1)) == 0x9a && (uVar1 == 0)))))) {
    uVar3 = param_2 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar3 + *(uint *)(param_2 - 1)) == 0x9a) {
      if (*(int *)(param_2 + 0x17) < 0) {
        local_48 = param_2;
        lVar2 = Code::OffHeapInstructionStart((Code *)&local_48);
      }
      else {
        lVar2 = param_2 + 0x3f;
        local_48 = param_2;
      }
    }
    else {
      lVar2 = param_2 + 0x21;
    }
    if (*(short *)(uVar3 + *(uint *)(param_2 - 1)) == 0x9a) {
      if (*(int *)(param_2 + 0x17) < 0) {
        local_48 = param_2;
        uVar3 = Code::OffHeapInstructionSize((Code *)&local_48);
        uVar3 = uVar3 & 0xffffffff;
      }
      else {
        uVar3 = (ulong)*(uint *)(param_2 + 0x13);
        local_48 = param_2;
      }
    }
    else {
      uVar3 = (ulong)(uint)(*(int *)(param_2 + 3) >> 1);
    }
    base::OS::FPrint(*(__sFILE **)(this + 0x18),"%lx %x %.*s\n",lVar2,uVar3,(ulong)param_5,param_4);
  }
  return;
}

