
/* v8::internal::compiler::InstructionSelector::MarkAsDefined(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::MarkAsDefined(InstructionSelector *this,Node *param_1)

{
  ulong uVar1;
  
  uVar1 = ((ulong)*(uint *)(param_1 + 0x14) & 0xffffc0) >> 3;
  *(ulong *)(*(long *)(this + 0xb8) + uVar1) =
       1L << ((ulong)*(uint *)(param_1 + 0x14) & 0x3f) | *(ulong *)(*(long *)(this + 0xb8) + uVar1);
  return;
}

