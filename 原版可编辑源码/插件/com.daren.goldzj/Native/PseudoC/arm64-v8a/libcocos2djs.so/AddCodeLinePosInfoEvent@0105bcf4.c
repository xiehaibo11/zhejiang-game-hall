
/* v8::internal::JitLogger::AddCodeLinePosInfoEvent(void*, int, int, v8::JitCodeEvent::PositionType)
    */

void __thiscall
v8::internal::JitLogger::AddCodeLinePosInfoEvent
          (JitLogger *this,undefined8 param_1,int param_2,int param_3,uint param_5)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  long local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_30 = (long)param_2;
  local_28 = (long)param_3;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_60 = 3;
  local_20 = (ulong)param_5;
  local_18 = *(undefined8 *)(this + 8);
  local_40 = param_1;
  (**(code **)(this + 0x18))(&local_60);
  return;
}

