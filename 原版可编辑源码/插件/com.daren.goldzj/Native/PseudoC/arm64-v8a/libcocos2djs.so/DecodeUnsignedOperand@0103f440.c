
/* v8::internal::interpreter::BytecodeDecoder::DecodeUnsignedOperand(unsigned long,
   v8::internal::interpreter::OperandType, v8::internal::interpreter::OperandScale) */

uint v8::internal::interpreter::BytecodeDecoder::DecodeUnsignedOperand
               (uint *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(Bytecodes::kOperandKindSizes[(param_2 & 0xff) + (ulong)(param_3 >> 1 & 0x7f) * 0x10]) {
  case 0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    uVar1 = (uint)(byte)*param_1;
    break;
  case 2:
    return (uint)(ushort)*param_1;
  case 4:
    return *param_1;
  }
  return uVar1;
}

