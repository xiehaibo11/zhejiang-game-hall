
/* v8::internal::interpreter::Bytecodes::BytecodeHasHandler(v8::internal::interpreter::Bytecode,
   v8::internal::interpreter::OperandScale) */

undefined8 v8::internal::interpreter::Bytecodes::BytecodeHasHandler(ulong param_1,char param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (param_2 == '\x01') {
    return 1;
  }
  uVar1 = (ulong)*(uint *)(kOperandCount + (param_1 & 0xff) * 4);
  if (0 < (int)*(uint *)(kOperandCount + (param_1 & 0xff) * 4)) {
    pbVar2 = *(byte **)(kOperandTypeInfos + (param_1 & 0xff) * 8);
    do {
      if (*pbVar2 - 1 < 2) {
        return 1;
      }
      uVar1 = uVar1 - 1;
      pbVar2 = pbVar2 + 1;
    } while (uVar1 != 0);
  }
  return 0;
}

