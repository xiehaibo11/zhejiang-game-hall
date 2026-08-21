
void FUN_01036d60(Factory *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  char *local_50;
  size_t sStack_48;
  
  sStack_48 = strlen(param_2);
  local_50 = param_2;
  uVar1 = v8::internal::Factory::InternalizeUtf8String(param_1,(Vector *)&local_50);
  FUN_01028494(param_1,uVar1,param_3,param_4,0,param_5,param_6);
  return;
}

