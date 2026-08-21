
void FUN_01036c40(Factory *param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  char *local_40;
  size_t sStack_38;
  
  sStack_38 = strlen(param_3);
  local_40 = param_3;
  uVar1 = v8::internal::Factory::InternalizeUtf8String(param_1,(Vector *)&local_40);
  v8::internal::JSObject::AddProperty(param_1,param_2,uVar1,param_1 + 0xb8,0);
  return;
}

