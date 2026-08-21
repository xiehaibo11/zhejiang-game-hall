
/* v8::internal::RegExpBytecodeGenerator::ReadCurrentPositionFromRegister(int) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::ReadCurrentPositionFromRegister
          (RegExpBytecodeGenerator *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar1 + 3) {
    Expand(this);
    iVar1 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar1) = param_1 << 8 | 5;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  return;
}

