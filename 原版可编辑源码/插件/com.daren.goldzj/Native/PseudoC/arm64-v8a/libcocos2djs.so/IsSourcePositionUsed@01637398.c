
/* v8::internal::compiler::InstructionSelector::IsSourcePositionUsed(v8::internal::compiler::Node*)
    */

undefined8 __thiscall
v8::internal::compiler::InstructionSelector::IsSourcePositionUsed
          (InstructionSelector *this,Node *param_1)

{
  ushort uVar1;
  
  if (*(int *)(this + 0x20) == 1) {
    return 1;
  }
  uVar1 = *(ushort *)(*(long *)param_1 + 0x10);
  if (((0x31 < uVar1) || ((1L << ((ulong)uVar1 & 0x3f) & 0x200000000c000U) == 0)) &&
     (1 < uVar1 - 0x1ef)) {
    return 0;
  }
  return 1;
}

