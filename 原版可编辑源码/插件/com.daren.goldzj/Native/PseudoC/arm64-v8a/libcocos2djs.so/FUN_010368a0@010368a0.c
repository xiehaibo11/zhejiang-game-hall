
void FUN_010368a0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = v8::internal::Name::ToFunctionName(param_1,param_3,param_1 + 0x700);
  if (lVar1 != 0) {
    uVar2 = FUN_0102910c(param_1,lVar1,param_4,0,1);
    lVar1 = v8::internal::Name::ToFunctionName(param_1,param_3,param_1 + 0x9b0);
    if (lVar1 != 0) {
      uVar3 = FUN_0102910c(param_1,lVar1,param_5,1,1);
      lVar1 = v8::internal::JSObject::DefineAccessor(param_2,param_3,uVar2,uVar3,2);
      if (lVar1 != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

