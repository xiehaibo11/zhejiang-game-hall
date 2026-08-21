
/* v8::internal::compiler::MemoryLowering::ReduceAllocateRaw(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MemoryLowering::ReduceAllocateRaw(MemoryLowering *this,Node *param_1)

{
  long lVar1;
  
  lVar1 = AllocateParametersOf(*(Operator **)param_1);
  ReduceAllocateRaw(this,param_1,*(undefined1 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0xc),0);
  return;
}

