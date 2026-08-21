
/* v8::internal::ConstantPool::EndBlock() */

void __thiscall v8::internal::ConstantPool::EndBlock(ConstantPool *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3c);
  *(int *)(this + 0x3c) = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}

