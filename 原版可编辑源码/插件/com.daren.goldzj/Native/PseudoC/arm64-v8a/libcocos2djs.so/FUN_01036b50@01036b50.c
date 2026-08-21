
void FUN_01036b50(Factory *param_1,undefined4 param_2,undefined8 param_3,undefined2 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  
  plVar1 = (long *)v8::internal::Factory::NewSharedFunctionInfoForBuiltin
                             (param_1,param_3,param_2,param_5);
  *(undefined2 *)(*plVar1 + 0x15) = param_4;
  *(undefined2 *)(*plVar1 + 0x13) = param_4;
  return;
}

