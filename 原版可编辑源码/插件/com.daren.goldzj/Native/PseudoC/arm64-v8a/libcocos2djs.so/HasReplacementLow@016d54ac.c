
/* v8::internal::compiler::Int64Lowering::HasReplacementLow(v8::internal::compiler::Node*) */

bool __thiscall
v8::internal::compiler::Int64Lowering::HasReplacementLow(Int64Lowering *this,Node *param_1)

{
  return *(long *)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) !=
         0;
}

