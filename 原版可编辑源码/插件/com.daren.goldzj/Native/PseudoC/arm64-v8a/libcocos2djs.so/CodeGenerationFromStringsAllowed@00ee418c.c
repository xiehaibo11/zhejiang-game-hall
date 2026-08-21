
/* v8::internal::CodeGenerationFromStringsAllowed(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Context>, v8::internal::Handle<v8::internal::String>) */

uint v8::internal::CodeGenerationFromStringsAllowed
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 6;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x74);
  }
  uVar2 = (**(code **)(param_1 + 0xb750))(param_2,param_3);
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return uVar2 & 1;
}

