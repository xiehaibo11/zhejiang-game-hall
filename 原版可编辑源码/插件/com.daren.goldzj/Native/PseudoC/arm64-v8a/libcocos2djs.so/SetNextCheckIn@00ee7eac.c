
/* v8::internal::ConstantPool::SetNextCheckIn(unsigned long) */

void __thiscall v8::internal::ConstantPool::SetNextCheckIn(ConstantPool *this,ulong param_1)

{
  *(int *)(this + 0x38) =
       (*(int *)(*(long *)this + 0x20) - *(int *)(*(long *)this + 0x10)) + (int)param_1 * 4;
  return;
}

