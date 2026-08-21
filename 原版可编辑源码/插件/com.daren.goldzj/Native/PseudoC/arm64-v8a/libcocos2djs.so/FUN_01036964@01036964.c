
void FUN_01036964(Factory *param_1,undefined8 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  char *local_60;
  size_t sStack_58;
  
  sStack_58 = strlen(param_3);
  local_60 = param_3;
  uVar1 = v8::internal::Factory::InternalizeUtf8String(param_1,(Vector *)&local_60);
  FUN_0103cd68(param_1,param_2,uVar1,param_4,param_5,param_6,param_7,param_8);
  return;
}

