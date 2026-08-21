
/* v8::internal::compiler::InstructionSelector::CanCoverTransitively(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) const */

bool __thiscall
v8::internal::compiler::InstructionSelector::CanCoverTransitively
          (InstructionSelector *this,Node *param_1,Node *param_2,Node *param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = CanCover(this,param_1,param_2);
  if (((uVar2 & 1) == 0) || (uVar2 = CanCover(this,param_2,param_3), (uVar2 & 1) == 0)) {
    bVar1 = false;
  }
  else if (((~*(byte *)(*(long *)param_2 + 0x12) & 0x7c) == 0) &&
          ((~*(byte *)(*(long *)param_3 + 0x12) & 0x7c) != 0)) {
    bVar1 = *(int *)(*(long *)(this + 0xf8) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 4) ==
            *(int *)(*(long *)(this + 0xf8) + ((ulong)*(uint *)(param_3 + 0x14) & 0xffffff) * 4);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

