
/* v8::internal::JitLogger::EndCodePosInfoEvent(unsigned long, void*) */

void __thiscall
v8::internal::JitLogger::EndCodePosInfoEvent(JitLogger *this,ulong param_1,void *param_2)

{
  undefined8 local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  void *local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  local_60 = 5;
  uStack_18 = *(undefined8 *)(this + 8);
  local_20 = 0;
  uStack_58 = param_1;
  local_40 = param_2;
  (**(code **)(this + 0x18))(&local_60);
  return;
}

