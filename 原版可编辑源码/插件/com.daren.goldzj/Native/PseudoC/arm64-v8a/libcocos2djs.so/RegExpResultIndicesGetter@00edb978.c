
/* v8::internal::Accessors::RegExpResultIndicesGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::RegExpResultIndicesGetter(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  Isolate *this;
  
  this = *(Isolate **)(*param_2 + 0x10);
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  puVar3 = (undefined8 *)JSRegExpResult::GetAndCacheIndices(this,*param_2 + 8);
  if (puVar3 == (undefined8 *)0x0) {
    Isolate::OptionalRescheduleException(this,false);
    *(undefined8 *)(*param_2 + 0x20) = *(undefined8 *)(this + 0xa0);
  }
  else {
    *(undefined8 *)(*param_2 + 0x20) = *puVar3;
    if (this == (Isolate *)0x0) {
      return;
    }
  }
  *(undefined8 *)(this + 0x95a0) = uVar1;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) == lVar2) {
    return;
  }
  *(long *)(this + 0x95a8) = lVar2;
  HandleScope::DeleteExtensions(this);
  return;
}

