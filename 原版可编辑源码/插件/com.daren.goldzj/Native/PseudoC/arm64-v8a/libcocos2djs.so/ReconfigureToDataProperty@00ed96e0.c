
/* v8::internal::Accessors::ReconfigureToDataProperty(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<v8::Boolean> const&) */

void v8::internal::Accessors::ReconfigureToDataProperty
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  Isolate *this;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  this = *(Isolate **)(*param_3 + 0x10);
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xb4);
  }
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  lVar3 = ReplaceAccessorWithDataProperty(*param_3 + 0x30,*param_3 + 8,param_1,param_2);
  if (lVar3 == 0) {
    Isolate::OptionalRescheduleException(this,false);
  }
  else {
    *(undefined8 *)(*param_3 + 0x20) = *(undefined8 *)(*(long *)(*param_3 + 0x10) + 0xb8);
  }
  *(undefined8 *)(this + 0x95a0) = uVar1;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar2) {
    *(long *)(this + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(this);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return;
}

