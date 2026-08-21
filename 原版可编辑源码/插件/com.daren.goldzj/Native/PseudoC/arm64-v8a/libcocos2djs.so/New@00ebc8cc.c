
/* v8::Function::New(v8::Local<v8::Context>, void (*)(v8::FunctionCallbackInfo<v8::Value> const&),
   v8::Local<v8::Value>, int, v8::ConstructorBehavior, v8::SideEffectType) */

undefined8
v8::Function::New(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  FunctionTemplate *this;
  undefined8 uVar3;
  long lVar4;
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
  lVar4 = (ulong)*(uint *)(param_1 + 4) << 0x20;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(lVar4 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x370);
  }
  this_00 = *(Logger **)(lVar4 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Function::New");
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x2c60);
  *(undefined4 *)(lVar4 + 0x2c60) = 5;
  this = (FunctionTemplate *)FUN_00ea5390(lVar4,param_2,param_3,0,param_4,1,0,param_6);
  if (param_5 == 0) {
    FunctionTemplate::RemovePrototype(this);
  }
  uVar3 = FunctionTemplate::GetFunction(this,param_1);
  *(undefined4 *)(lVar4 + 0x2c60) = uVar1;
  if (local_80 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar3;
}

