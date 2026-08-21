
/* v8::internal::Object::RedefineIncompatibleProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::Maybe<v8::internal::ShouldThrow>) */

bool v8::internal::Object::RedefineIncompatibleProperty
               (Factory *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = GetShouldThrow(param_1,param_4);
  if (iVar1 != 1) {
    puVar2 = (undefined8 *)Factory::NewTypeError(param_1,0x96,param_2,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar2,0);
  }
  return iVar1 == 1;
}

