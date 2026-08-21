
/* v8::internal::ConstantPool::BlockScope::BlockScope(v8::internal::Assembler*,
   v8::internal::PoolEmissionCheck) */

void __thiscall v8::internal::ConstantPool::BlockScope::BlockScope(BlockScope *this,long param_1)

{
  *(long *)this = param_1 + 0x138;
  if (*(int *)(param_1 + 0x174) == 0) {
    *(undefined4 *)(param_1 + 0x170) = 0x7fffffff;
  }
  *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
  return;
}

