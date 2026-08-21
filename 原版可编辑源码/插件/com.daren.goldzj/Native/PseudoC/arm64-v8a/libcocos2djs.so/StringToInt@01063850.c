
/* v8::internal::StringToInt(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>,
   int) */

undefined1  [16] v8::internal::StringToInt(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  undefined2 local_20;
  undefined1 local_1e;
  int local_1c;
  double local_18;
  
  uStack_38 = 0;
  uStack_2c = 0;
  local_20 = 0;
  local_1c = 0;
  local_28 = 0;
  local_24 = 2;
  local_50 = &PTR__StringToIntHelper_01cb24a8;
  local_1e = 1;
  local_18 = 0.0;
  uStack_48 = param_1;
  local_40 = param_2;
  local_30 = param_3;
  StringToIntHelper::ParseInt((StringToIntHelper *)&local_50);
  if (local_1c - 2U < 2) {
    dVar1 = NAN;
  }
  else if (local_1c == 5) {
    dVar1 = -local_18;
    if (local_24 != 0) {
      dVar1 = local_18;
    }
  }
  else {
    if (local_1c != 4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    dVar1 = -0.0;
    if (local_24 != 0) {
      dVar1 = 0.0;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar1;
  return auVar2;
}

