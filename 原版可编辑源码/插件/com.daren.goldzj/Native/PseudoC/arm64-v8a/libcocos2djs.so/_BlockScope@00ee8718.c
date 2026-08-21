
/* v8::internal::ConstantPool::BlockScope::~BlockScope() */

void __thiscall v8::internal::ConstantPool::BlockScope::~BlockScope(BlockScope *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  iVar1 = *(int *)(lVar2 + 0x3c) + -1;
  *(int *)(lVar2 + 0x3c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(lVar2 + 0x38) = 0;
  return;
}

