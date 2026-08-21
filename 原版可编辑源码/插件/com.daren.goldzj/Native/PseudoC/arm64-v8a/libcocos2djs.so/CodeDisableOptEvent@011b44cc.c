
/* v8::internal::ProfilerListener::CodeDisableOptEvent(v8::internal::AbstractCode,
   v8::internal::SharedFunctionInfo) */

void __thiscall
v8::internal::ProfilerListener::CodeDisableOptEvent
          (ProfilerListener *this,ulong param_2,long param_3)

{
  long lVar1;
  ulong local_80;
  undefined4 local_78 [2];
  long local_70;
  undefined8 local_68;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_78[0] = 3;
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x9a) {
    local_80 = param_2;
    if (*(int *)(param_2 + 0x17) < 0) {
      local_70 = Code::OffHeapInstructionStart((Code *)&local_80);
    }
    else {
      local_70 = param_2 + 0x3f;
    }
  }
  else {
    local_70 = param_2 + 0x21;
  }
  local_68 = GetBailoutReason(*(uint *)(param_3 + 0x1b) >> 0x14 & 0xf);
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

