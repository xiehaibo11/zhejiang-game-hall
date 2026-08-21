
/* v8::internal::Accessors::ModuleNamespaceEntrySetter(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<v8::Boolean> const&) */

void v8::internal::Accessors::ModuleNamespaceEntrySetter
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  Isolate *this;
  
  this = *(Isolate **)(*param_3 + 0x10);
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  plVar6 = (long *)*param_3;
  if (*plVar6 != 2) {
    if ((*plVar6 != 4) || (uVar3 = ShouldThrowOnError((Isolate *)plVar6[2]), (uVar3 & 1) != 0)) {
      uVar4 = Object::TypeOf(this,plVar6 + 1);
      puVar5 = (undefined8 *)Factory::NewTypeError((Factory *)this,0xa5,param_1,uVar4,plVar6 + 1);
      Isolate::Throw(this,*puVar5,0);
      Isolate::OptionalRescheduleException(this,false);
      goto joined_r0x00eda14c;
    }
    plVar6 = (long *)*param_3;
  }
  plVar6[4] = *(long *)(plVar6[2] + 0xc0);
joined_r0x00eda14c:
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

