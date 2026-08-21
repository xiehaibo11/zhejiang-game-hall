
/* v8::internal::RegExpBytecodeGenerator::Fail() */

void __thiscall v8::internal::RegExpBytecodeGenerator::Fail(RegExpBytecodeGenerator *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar1 + 3) {
    Expand(this);
    iVar1 = *(int *)(this + 0x38);
  }
  *(undefined4 *)(*(long *)(this + 0x28) + (long)iVar1) = 0xd;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  return;
}

