
/* v8::internal::RegExpBytecodeGenerator::AdvanceCurrentPosition(int) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::AdvanceCurrentPosition
          (RegExpBytecodeGenerator *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x38);
  *(int *)(this + 0x44) = iVar1;
  *(int *)(this + 0x48) = param_1;
  if (*(int *)(this + 0x30) <= iVar1 + 3) {
    Expand(this);
    iVar1 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar1) = param_1 << 8 | 0xf;
  iVar1 = *(int *)(this + 0x38);
  *(int *)(this + 0x38) = iVar1 + 4;
  *(int *)(this + 0x4c) = iVar1 + 4;
  return;
}

