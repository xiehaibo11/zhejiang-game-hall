
/* v8::internal::interpreter::BytecodeDecoder::DecodeRegisterListOperand(unsigned long, unsigned
   int, v8::internal::interpreter::OperandType, v8::internal::interpreter::OperandScale) */

ulong v8::internal::interpreter::BytecodeDecoder::DecodeRegisterListOperand
                (int *param_1,long param_2,ulong param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = 0;
  switch(Bytecodes::kOperandKindSizes[(param_3 & 0xff) + (ulong)(param_4 >> 1 & 0x7f) * 0x10]) {
  case 0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    iVar1 = (int)(char)*param_1;
    break;
  case 2:
    iVar1 = (int)(short)*param_1;
    break;
  case 4:
    iVar1 = *param_1;
  }
  return (ulong)(-iVar1 - 5) | param_2 << 0x20;
}

