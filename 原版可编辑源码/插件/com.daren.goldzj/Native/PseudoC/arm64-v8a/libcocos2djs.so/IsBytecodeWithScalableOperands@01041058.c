
/* v8::internal::interpreter::Bytecodes::IsBytecodeWithScalableOperands(v8::internal::interpreter::Bytecode)
    */

undefined8 v8::internal::interpreter::Bytecodes::IsBytecodeWithScalableOperands(ulong param_1)

{
  long lVar1;
  
  if (0 < *(int *)(kOperandCount + (param_1 & 0xff) * 4)) {
    lVar1 = 0;
    do {
      if (*(byte *)(*(long *)(kOperandTypeInfos + (param_1 & 0xff) * 8) + lVar1) - 1 < 2) {
        return 1;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(kOperandCount + (param_1 & 0xff) * 4));
  }
  return 0;
}

