
/* v8::FunctionTemplate::NewWithCache(v8::Isolate*, void (*)(v8::FunctionCallbackInfo<v8::Value>
   const&), v8::Local<v8::Private>, v8::Local<v8::Value>, v8::Local<v8::Signature>, int,
   v8::SideEffectType) */

undefined8
v8::FunctionTemplate::NewWithCache
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  Logger *this;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x375);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar2 = internal::Logger::is_logging(this);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::FunctionTemplate::NewWithCache");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  uVar3 = FUN_00ea5390(param_1,param_2,param_4,param_5,param_6,0,param_3,param_7);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (local_80 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar3;
}

