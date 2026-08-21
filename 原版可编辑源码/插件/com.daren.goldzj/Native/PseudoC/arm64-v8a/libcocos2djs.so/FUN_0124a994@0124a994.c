
undefined8 FUN_0124a994(undefined8 param_1,undefined8 param_2,char *param_3,int *param_4)

{
  double dVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  byte local_38 [16];
  void *local_28;
  
  auVar4 = v8::Value::NumberValue();
  dVar1 = auVar4._8_8_;
  if ((auVar4._0_8_ & 0xff) == 0) {
    uVar3 = (ulong)local_38 | 1;
    pcVar2 = "%s must be convertible to a number";
  }
  else if ((ABS(dVar1) < INFINITY) || (ABS(dVar1) != INFINITY)) {
    if (0.0 <= dVar1) {
      if (dVar1 <= 4294967295.0) {
        *param_4 = (int)dVar1;
        return 1;
      }
      uVar3 = (ulong)local_38 | 1;
      pcVar2 = "%s must be in the unsigned long range";
    }
    else {
      uVar3 = (ulong)local_38 | 1;
      pcVar2 = "%s must be non-negative";
    }
  }
  else {
    uVar3 = (ulong)local_38 | 1;
    pcVar2 = "%s must be convertible to a valid number";
  }
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_28 = (void *)0x0;
  local_38[0] = 0x14;
  local_38[9] = 0x20;
  local_38[10] = 0x30;
  local_38[1] = 0x41;
  local_38[2] = 0x72;
  local_38[3] = 0x67;
  local_38[4] = 0x75;
  local_38[5] = 0x6d;
  local_38[6] = 0x65;
  local_38[7] = 0x6e;
  local_38[8] = 0x74;
  local_38[0xb] = 0;
  v8::internal::wasm::ErrorThrower::TypeError(param_3,pcVar2,uVar3);
  if ((local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  return 0;
}

