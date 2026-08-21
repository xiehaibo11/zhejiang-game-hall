
undefined8
FUN_0103cdd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,uint param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = v8::internal::Name::ToFunctionName(param_1,param_3,param_1 + 0x700);
  if (lVar1 != 0) {
    uVar2 = FUN_0102910c(param_1,lVar1,param_5,0,param_6 & 1);
    lVar1 = v8::internal::JSObject::DefineAccessor(param_2,param_4,uVar2,param_1 + 0xa0,2);
    if (lVar1 != 0) {
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

