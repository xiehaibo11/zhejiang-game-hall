
/* v8::internal::ProfilerListener::CodeDeoptEvent(v8::internal::Code, v8::internal::DeoptimizeKind,
   unsigned long, int) */

void __thiscall
v8::internal::ProfilerListener::CodeDeoptEvent
          (ProfilerListener *this,long param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  long lVar1;
  ulong extraout_x1;
  long local_90;
  undefined4 local_88 [2];
  long local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88[0] = 4;
  local_90 = param_2;
  Deoptimizer::GetDeoptInfo(param_2,param_4);
  if (*(int *)(param_2 + 0x17) < 0) {
    local_80 = Code::OffHeapInstructionStart((Code *)&local_90);
  }
  else {
    local_80 = param_2 + 0x3f;
  }
  local_78 = DeoptimizeReasonToString(extraout_x1 & 0xffffffff);
  local_70 = (undefined4)(extraout_x1 >> 0x20);
  local_68 = param_4;
  local_60 = param_5;
  AttachDeoptInlinedFrames(this,local_90,local_88);
  (**(code **)**(undefined8 **)(this + 0x10))(*(undefined8 **)(this + 0x10),local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

