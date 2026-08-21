
/* v8::internal::compiler::BytecodeGraphBuilder::ApplyEarlyReduction(v8::internal::compiler::JSTypeHintLowering::LoweringResult)
    */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::ApplyEarlyReduction
          (BytecodeGraphBuilder *this,int *param_2)

{
  if (*param_2 == 1) {
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x20) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(*(long *)(this + 0xa8) + 0x18) = *(undefined8 *)(param_2 + 6);
  }
  else if (*param_2 == 2) {
    MergeControlToLeaveFunction(this,*(Node **)(param_2 + 6));
    return;
  }
  return;
}

