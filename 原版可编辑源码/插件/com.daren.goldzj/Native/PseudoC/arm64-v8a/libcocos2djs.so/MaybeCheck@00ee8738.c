
/* v8::internal::ConstantPool::MaybeCheck() */

void __thiscall v8::internal::ConstantPool::MaybeCheck(ConstantPool *this)

{
  if (*(int *)(*(long *)this + 0x20) - *(int *)(*(long *)this + 0x10) < *(int *)(this + 0x38)) {
    return;
  }
  Check(this,0,1,0);
  return;
}

