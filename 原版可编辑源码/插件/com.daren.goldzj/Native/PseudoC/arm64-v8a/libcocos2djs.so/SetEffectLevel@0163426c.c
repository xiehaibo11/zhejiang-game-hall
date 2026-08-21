
/* v8::internal::compiler::InstructionSelector::SetEffectLevel(v8::internal::compiler::Node*, int)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::SetEffectLevel
          (InstructionSelector *this,Node *param_1,int param_2)

{
  *(int *)(*(long *)(this + 0xf8) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 4) = param_2;
  return;
}

