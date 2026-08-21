
/* v8::internal::compiler::InstructionSelector::GetFrameStateDescriptor(v8::internal::compiler::Node*)
    */

void v8::internal::compiler::InstructionSelector::GetFrameStateDescriptor(Node *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_01641618(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  uVar3 = **(ulong **)(param_1 + 0x1b0);
  uVar1 = *(ulong *)(lVar2 + 0x28);
  if (*(ulong *)(lVar2 + 0x28) <= uVar3) {
    uVar1 = uVar3;
  }
  **(ulong **)(param_1 + 0x1b0) = uVar1;
  return;
}

