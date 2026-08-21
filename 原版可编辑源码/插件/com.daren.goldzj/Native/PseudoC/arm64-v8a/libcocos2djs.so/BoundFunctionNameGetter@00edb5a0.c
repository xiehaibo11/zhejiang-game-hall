
/* v8::internal::Accessors::BoundFunctionNameGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::BoundFunctionNameGetter(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  Isolate *this;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  this = *(Isolate **)(*param_2 + 0x10);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x73);
  }
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  puVar3 = (undefined8 *)JSBoundFunction::GetName(this,*param_2 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    Isolate::OptionalRescheduleException(this,false);
  }
  else {
    *(undefined8 *)(*param_2 + 0x20) = *puVar3;
  }
  *(undefined8 *)(this + 0x95a0) = uVar1;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar2) {
    *(long *)(this + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(this);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return;
}

