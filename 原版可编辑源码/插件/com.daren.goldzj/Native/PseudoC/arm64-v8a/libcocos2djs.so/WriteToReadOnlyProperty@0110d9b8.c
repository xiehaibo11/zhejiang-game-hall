
/* v8::internal::Object::WriteToReadOnlyProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::ShouldThrow) */

undefined8
v8::internal::Object::WriteToReadOnlyProperty
          (Factory *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_5 == 1) {
    return 1;
  }
  uVar1 = TypeOf();
  puVar2 = (undefined8 *)Factory::NewTypeError(param_1,0xa5,param_3,uVar1,param_2);
  Isolate::Throw((Isolate *)param_1,*puVar2,0);
  return 0;
}

