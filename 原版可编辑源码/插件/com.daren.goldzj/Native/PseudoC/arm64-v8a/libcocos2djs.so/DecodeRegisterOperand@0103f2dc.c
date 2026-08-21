
/* v8::internal::interpreter::BytecodeDecoder::DecodeRegisterOperand(unsigned long,
   v8::internal::interpreter::OperandType, v8::internal::interpreter::OperandScale) */

int v8::internal::interpreter::BytecodeDecoder::DecodeRegisterOperand
              (int *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  switch(Bytecodes::kOperandKindSizes[(param_2 & 0xff) + (ulong)(param_3 >> 1 & 0x7f) * 0x10]) {
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
  return -5 - iVar1;
}

