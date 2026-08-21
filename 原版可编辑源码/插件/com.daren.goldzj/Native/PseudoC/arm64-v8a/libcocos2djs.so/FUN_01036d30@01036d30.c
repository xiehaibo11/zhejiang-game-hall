
void FUN_01036d30(Factory *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)v8::internal::Factory::NewSharedFunctionInfoForBuiltin(param_1,param_2,0x1cd,0);
  *(undefined2 *)(*plVar1 + 0x15) = 2;
  *(undefined2 *)(*plVar1 + 0x13) = 2;
  return;
}

