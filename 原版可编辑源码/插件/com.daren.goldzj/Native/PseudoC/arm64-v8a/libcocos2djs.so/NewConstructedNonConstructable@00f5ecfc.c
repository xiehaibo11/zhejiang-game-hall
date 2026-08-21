
/* v8::internal::ErrorUtils::NewConstructedNonConstructable(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::ErrorUtils::NewConstructedNonConstructable(Factory *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_4;
  
  local_40 = 0;
  local_28 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0xffffffff;
  local_4 = 0;
  uVar1 = FUN_00f5eb0c(param_1,param_2,&local_40,&local_4);
  Factory::NewTypeError(param_1,0x59,uVar1,0,0);
  return;
}

