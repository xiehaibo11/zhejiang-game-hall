
/* v8::internal::ConstantPool::BlockScope::BlockScope(v8::internal::Assembler*, unsigned long) */

void __thiscall
v8::internal::ConstantPool::BlockScope::BlockScope
          (BlockScope *this,Assembler *param_1,ulong param_2)

{
  long lVar1;
  
  *(Assembler **)this = param_1 + 0x138;
  Check((ConstantPool *)(*(long *)(param_1 + 0x138) + 0x138),0,1,param_2);
  lVar1 = *(long *)this;
  if (*(int *)(lVar1 + 0x3c) == 0) {
    *(undefined4 *)(lVar1 + 0x38) = 0x7fffffff;
  }
  *(int *)(lVar1 + 0x3c) = *(int *)(lVar1 + 0x3c) + 1;
  return;
}

