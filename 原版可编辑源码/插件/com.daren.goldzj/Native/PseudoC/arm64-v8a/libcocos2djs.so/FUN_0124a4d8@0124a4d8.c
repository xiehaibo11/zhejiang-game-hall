
undefined8
FUN_0124a4d8(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  char *local_60;
  undefined8 uStack_58;
  char local_34 [4];
  
  local_34[0] = '\0';
  uStack_58 = __strlen_chk("initial",8);
  local_60 = "initial";
  lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_60,0);
  if (lVar2 == 0) {
LAB_0124a610:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  uVar3 = FUN_0124a624(param_2,param_3,param_4,lVar2,local_34,param_5,0,param_6);
  if ((uVar3 & 1) != 0) {
    uVar1 = v8::internal::wasm::WasmFeatures::FromFlags();
    if (local_34[0] != '\0') {
      return 1;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      uStack_58 = __strlen_chk("minimum",8);
      local_60 = "minimum";
      lVar2 = v8::internal::Factory::NewStringFromOneByte(param_1,&local_60,0);
      if (lVar2 == 0) goto LAB_0124a610;
      uVar3 = FUN_0124a624(param_2,param_3,param_4,lVar2,local_34,param_5,0,param_6);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      if (local_34[0] != '\0') {
        return 1;
      }
    }
    v8::internal::wasm::ErrorThrower::TypeError(param_2,"Property \'initial\' is required");
  }
  return 0;
}

