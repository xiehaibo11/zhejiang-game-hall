
undefined8
FUN_01028fbc(Factory *param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined4 param_5
            ,undefined4 param_6,uint param_7,undefined4 param_8)

{
  undefined8 uVar1;
  char *local_60;
  size_t sStack_58;
  
  sStack_58 = strlen(param_4);
  local_60 = param_4;
  uVar1 = v8::internal::Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  uVar1 = FUN_0102910c(param_1,uVar1,param_5,param_6,param_7 & 1);
  v8::internal::JSObject::AddProperty(param_1,param_2,param_3,uVar1,param_8);
  return uVar1;
}

