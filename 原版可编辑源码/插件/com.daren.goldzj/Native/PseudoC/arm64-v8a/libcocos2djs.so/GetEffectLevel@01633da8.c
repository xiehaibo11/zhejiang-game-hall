
/* v8::internal::compiler::InstructionSelector::GetEffectLevel(v8::internal::compiler::Node*) const
    */

undefined4 __thiscall
v8::internal::compiler::InstructionSelector::GetEffectLevel(InstructionSelector *this,Node *param_1)

{
  return *(undefined4 *)(*(long *)(this + 0xf8) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 4)
  ;
}

