
/* v8::FunctionTemplate::New(v8::Isolate*, void (*)(v8::FunctionCallbackInfo<v8::Value> const&),
   v8::Local<v8::Value>, v8::Local<v8::Signature>, int, v8::ConstructorBehavior, v8::SideEffectType)
    */

FunctionTemplate *
v8::FunctionTemplate::New
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
          int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  FunctionTemplate *this;
  Logger *this_00;
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
    internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x373);
  }
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::FunctionTemplate::New");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  this = (FunctionTemplate *)FUN_00ea5390(param_1,param_2,param_3,param_4,param_5,0,0,param_7);
  if (param_6 == 0) {
    RemovePrototype(this);
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (local_80 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return this;
}

