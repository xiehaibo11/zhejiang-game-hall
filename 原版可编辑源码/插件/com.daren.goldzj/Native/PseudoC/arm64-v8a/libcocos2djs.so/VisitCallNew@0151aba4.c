
/* v8::internal::interpreter::BytecodeGenerator::VisitCallNew(v8::internal::CallNew*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitCallNew(BytecodeGenerator *this,CallNew *param_1)

{
  BytecodeArrayBuilder *pBVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_38;
  
  uVar3 = VisitForRegisterValue(this,*(Expression **)(param_1 + 8));
  local_38 = (ulong)*(uint *)(this + 0x118);
  if (0 < *(int *)(param_1 + 0x1c)) {
    lVar5 = 0;
    do {
      VisitAndPushIntoRegisterList
                (this,*(Expression **)(*(long *)(param_1 + 0x10) + lVar5 * 8),
                 (RegisterList *)&local_38);
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x1c));
  }
  iVar2 = *(int *)param_1;
  pBVar1 = (BytecodeArrayBuilder *)(this + 0x18);
  if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar2;
  }
  BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar1,uVar3);
  uVar4 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
  if ((*(int *)(param_1 + 0x1c) == 0) ||
     ((*(uint *)(*(long *)(*(long *)(param_1 + 0x10) + (long)(*(int *)(param_1 + 0x1c) + -1) * 8) +
                4) & 0x3f) != 0x2d)) {
    BytecodeArrayBuilder::Construct(pBVar1,uVar3,local_38,uVar4);
  }
  else {
    BytecodeArrayBuilder::ConstructWithSpread(pBVar1,uVar3);
  }
  return;
}

