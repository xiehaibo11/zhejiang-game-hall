
/* v8::internal::compiler::Int64Lowering::ReplaceNode(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Int64Lowering::ReplaceNode
          (Int64Lowering *this,Node *param_1,Node *param_2,Node *param_3)

{
  *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10) =
       param_2;
  *(Node **)(*(long *)(this + 0x78) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 8) =
       param_3;
  return;
}

