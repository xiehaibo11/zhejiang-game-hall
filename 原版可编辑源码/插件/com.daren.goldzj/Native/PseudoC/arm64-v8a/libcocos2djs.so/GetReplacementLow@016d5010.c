
/* v8::internal::compiler::Int64Lowering::GetReplacementLow(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::Int64Lowering::GetReplacementLow(Int64Lowering *this,Node *param_1)

{
  return *(undefined8 *)
          (*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10);
}

