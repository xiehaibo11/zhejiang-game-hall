
/* v8::internal::Accessors::ErrorStackSetter(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<v8::Boolean> const&) */

void v8::internal::Accessors::ErrorStackSetter(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  Isolate *this;
  
  this = *(Isolate **)(*param_3 + 0x10);
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  lVar3 = Object::SetProperty(this,*param_3 + 0x30,this + 0xbe8,param_2,0,1);
  if (lVar3 == 0) {
    Isolate::OptionalRescheduleException(this,false);
  }
  if (this != (Isolate *)0x0) {
    *(undefined8 *)(this + 0x95a0) = uVar1;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar2) {
      *(long *)(this + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(this);
      return;
    }
  }
  return;
}

