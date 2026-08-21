
undefined8
FUN_01029064(Factory *param_1,undefined8 param_2,char *param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *local_60;
  size_t sStack_58;
  
  sStack_58 = strlen(param_3);
  local_60 = param_3;
  uVar1 = v8::internal::Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  uVar2 = FUN_0102910c(param_1,uVar1,param_4,param_5,param_6 & 1);
  v8::internal::JSObject::AddProperty(param_1,param_2,uVar1,uVar2,param_7);
  return uVar2;
}

