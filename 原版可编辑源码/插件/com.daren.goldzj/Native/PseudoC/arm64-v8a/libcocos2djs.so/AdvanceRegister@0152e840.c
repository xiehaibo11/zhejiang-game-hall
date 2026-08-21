
/* v8::internal::RegExpBytecodeGenerator::AdvanceRegister(int, int) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::AdvanceRegister
          (RegExpBytecodeGenerator *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar2 + 3) {
    Expand(this);
    iVar2 = *(int *)(this + 0x38);
  }
  *(uint *)(*(long *)(this + 0x28) + (long)iVar2) = param_1 << 8 | 9;
  iVar1 = *(int *)(this + 0x38);
  iVar2 = iVar1 + 4;
  *(int *)(this + 0x38) = iVar2;
  if (*(int *)(this + 0x30) <= iVar1 + 7) {
    Expand(this);
    iVar2 = *(int *)(this + 0x38);
  }
  *(int *)(*(long *)(this + 0x28) + (long)iVar2) = param_2;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  return;
}

