
/* v8::internal::RegExpBytecodeGenerator::Succeed() */

undefined8 __thiscall v8::internal::RegExpBytecodeGenerator::Succeed(RegExpBytecodeGenerator *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar1 + 3) {
    Expand(this);
    iVar1 = *(int *)(this + 0x38);
  }
  *(undefined4 *)(*(long *)(this + 0x28) + (long)iVar1) = 0xe;
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 4;
  return 0;
}

