
/* v8::internal::ConstantPool::IsAlignmentRequiredIfEmittedAt(v8::internal::Jump, int) const */

undefined8 __thiscall
v8::internal::ConstantPool::IsAlignmentRequiredIfEmittedAt
          (ConstantPool *this,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = PrologueSize();
  if ((*(long *)(this + 0x30) == 0) || ((iVar1 + param_3 & 7U) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

