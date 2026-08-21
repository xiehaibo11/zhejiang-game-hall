
/* v8::internal::ConstantPool::StartBlock() */

void __thiscall v8::internal::ConstantPool::StartBlock(ConstantPool *this)

{
  if (*(int *)(this + 0x3c) == 0) {
    *(undefined4 *)(this + 0x38) = 0x7fffffff;
  }
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
  return;
}

