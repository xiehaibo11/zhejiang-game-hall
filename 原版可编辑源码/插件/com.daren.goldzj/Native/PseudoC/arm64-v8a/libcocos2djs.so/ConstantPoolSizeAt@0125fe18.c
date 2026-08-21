
/* v8::internal::Assembler::ConstantPoolSizeAt(v8::internal::Instruction*) */

int v8::internal::Assembler::ConstantPoolSizeAt(Instruction *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(uint *)param_1 << 8) >> 0xd;
  if ((*(uint *)param_1 & 0xff00001f) != 0x5800001f) {
    iVar1 = -1;
  }
  return iVar1;
}

