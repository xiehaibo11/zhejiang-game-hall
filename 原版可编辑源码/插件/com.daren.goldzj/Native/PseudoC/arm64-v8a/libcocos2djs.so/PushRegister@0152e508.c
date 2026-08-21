
/* v8::internal::RegExpBytecodeGenerator::PushRegister(int,
   v8::internal::RegExpMacroAssembler::StackCheckFlag) */

void v8::internal::RegExpBytecodeGenerator::PushRegister
               (RegExpBytecodeGenerator *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x30) <= iVar1 + 3) {
    Expand(param_1);
    iVar1 = *(int *)(param_1 + 0x38);
  }
  *(uint *)(*(long *)(param_1 + 0x28) + (long)iVar1) = param_2 << 8 | 3;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 4;
  return;
}

