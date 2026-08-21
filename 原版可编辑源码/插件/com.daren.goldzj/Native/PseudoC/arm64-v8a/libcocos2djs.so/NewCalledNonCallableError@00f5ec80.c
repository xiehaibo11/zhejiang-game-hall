
/* v8::internal::ErrorUtils::NewCalledNonCallableError(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::ErrorUtils::NewCalledNonCallableError(Factory *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  uint local_4;
  
  local_40 = 0;
  local_28 = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0xffffffff;
  local_4 = 0;
  uVar1 = FUN_00f5eb0c(param_1,param_2,&local_40,&local_4);
  if (local_4 < 5) {
    uVar2 = *(undefined4 *)(&DAT_019b53ac + (long)(int)local_4 * 4);
  }
  else {
    uVar2 = 0x18;
  }
  Factory::NewTypeError(param_1,uVar2,uVar1,0,0);
  return;
}

