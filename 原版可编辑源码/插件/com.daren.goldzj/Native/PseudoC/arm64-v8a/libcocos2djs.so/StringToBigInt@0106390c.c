
/* v8::internal::StringToBigInt(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>)
    */

void v8::internal::StringToBigInt(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = String::Flatten(param_1,param_2,0);
  uStack_58 = 0;
  local_40 = 0;
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0x200000000;
  local_70 = &PTR__StringToIntHelper_01cb24e0;
  local_38 = 0;
  local_30 = 0;
  local_3f = 1;
  uStack_68 = param_1;
  StringToBigIntHelper::GetResult((StringToBigIntHelper *)&local_70);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

