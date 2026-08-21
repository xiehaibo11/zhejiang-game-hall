
/* v8::internal::ConstantPool::ComputeSize(v8::internal::Jump, v8::internal::Alignment) const */

int __thiscall
v8::internal::ConstantPool::ComputeSize(ConstantPool *this,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = PrologueSize();
  return iVar1 + *(int *)(this + 0x28) * 4 + (uint)(param_3 == 1) * 4 + *(int *)(this + 0x30) * 8;
}

