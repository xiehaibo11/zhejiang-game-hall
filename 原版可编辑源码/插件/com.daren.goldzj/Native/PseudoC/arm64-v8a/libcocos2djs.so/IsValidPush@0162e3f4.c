
/* v8::internal::compiler::CodeGenerator::IsValidPush(v8::internal::compiler::InstructionOperand,
   v8::base::Flags<v8::internal::compiler::CodeGenerator::PushTypeFlag, int>) */

undefined8 v8::internal::compiler::CodeGenerator::IsValidPush(ulong param_1,uint param_2)

{
  uint uVar1;
  
  if (((param_1 & 7) == 3) && ((param_2 & 1) != 0)) {
    return 1;
  }
  uVar1 = (uint)(param_1 >> 5);
  if (((param_1 & 0x1c) == 4) && ((uVar1 & 0xff) < 0xb)) {
    if ((param_2 >> 1 & 1) != 0) {
      return 1;
    }
  }
  else if ((((param_2 >> 2 & 1) != 0) && ((param_1 & 0x1c) == 0xc)) && ((uVar1 & 0xff) < 0xb)) {
    return 1;
  }
  return 0;
}

