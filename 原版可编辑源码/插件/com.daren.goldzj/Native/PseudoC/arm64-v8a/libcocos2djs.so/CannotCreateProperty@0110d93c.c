
/* v8::internal::Object::CannotCreateProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>) */

bool v8::internal::Object::CannotCreateProperty
               (Factory *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  iVar1 = GetShouldThrow(param_1,param_5);
  if (iVar1 != 1) {
    uVar2 = TypeOf(param_1,param_2);
    puVar3 = (undefined8 *)Factory::NewTypeError(param_1,0xa6,param_3,uVar2,param_2);
    Isolate::Throw((Isolate *)param_1,*puVar3,0);
  }
  return iVar1 == 1;
}

