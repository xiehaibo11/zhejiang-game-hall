
/* v8::internal::compiler::InstructionSelector::CanProduceSignalingNaN(v8::internal::compiler::Node*)
    */

bool __thiscall
v8::internal::compiler::InstructionSelector::CanProduceSignalingNaN
          (InstructionSelector *this,Node *param_1)

{
  if (*(ushort *)(*(long *)param_1 + 0x10) - 0x16b < 2) {
    return false;
  }
  return *(ushort *)(*(long *)param_1 + 0x10) != 0x16d;
}

