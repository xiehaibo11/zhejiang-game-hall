
/* v8::internal::interpreter::BytecodeGenerator::BuildGetIterator(v8::internal::IteratorType) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildGetIterator(BytecodeGenerator *this,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  BytecodeArrayBuilder *pBVar6;
  undefined8 uVar7;
  BytecodeArrayBuilder *pBVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  BytecodeLabel local_60 [8];
  undefined8 local_58;
  BytecodeLabel local_50 [8];
  undefined8 local_48;
  
  uVar1 = *(uint *)(this + 0x118);
  uVar11 = (ulong)uVar1;
  iVar10 = *(int *)(this + 0x11c);
  plVar4 = *(long **)(this + 0x120);
  iVar9 = uVar1 + 1;
  if (iVar10 <= iVar9) {
    iVar10 = uVar1 + 1;
  }
  *(int *)(this + 0x118) = iVar9;
  *(int *)(this + 0x11c) = iVar10;
  if (param_2 == 1) {
    plVar5 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,uVar11);
      iVar9 = *(int *)(this + 0x118);
      iVar10 = *(int *)(this + 0x11c);
      plVar5 = *(long **)(this + 0x120);
    }
    if (iVar10 <= iVar9 + 1) {
      iVar10 = iVar9 + 1;
    }
    *(int *)(this + 0x118) = iVar9 + 1;
    *(int *)(this + 0x11c) = iVar10;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,iVar9);
    }
    pBVar8 = (BytecodeArrayBuilder *)(this + 0x18);
    pBVar6 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,uVar11)
    ;
    uVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
    BytecodeArrayBuilder::LoadAsyncIteratorProperty(pBVar6,uVar11,uVar7);
    local_50[0] = (BytecodeLabel)0x0;
    local_60[0] = (BytecodeLabel)0x0;
    local_48 = 0xffffffffffffffff;
    local_58 = 0xffffffffffffffff;
    BytecodeArrayBuilder::JumpIfUndefinedOrNull(pBVar8,local_50);
    pBVar6 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,iVar9);
    uVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
    BytecodeArrayBuilder::CallProperty(pBVar6,iVar9,uVar11 | 0x100000000,uVar7);
    BytecodeArrayBuilder::JumpIfJSReceiver(pBVar8,local_60);
    BytecodeArrayBuilder::CallRuntime(pBVar8,0xb3);
    BytecodeArrayBuilder::Bind(pBVar8,local_50);
    uVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
    pBVar6 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadIteratorProperty(pBVar8,uVar11,uVar7)
    ;
    BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar6,iVar9);
    uVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
    BytecodeArrayBuilder::CallProperty(pBVar8,iVar9,uVar11 | 0x100000000,uVar7);
    pBVar6 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,iVar9);
    BytecodeArrayBuilder::CallRuntime(pBVar6,0x1eb,iVar9);
    BytecodeArrayBuilder::Bind(pBVar8,local_60);
    plVar4 = *(long **)(this + 0x120);
    iVar9 = *(int *)(this + 0x118);
    *(uint *)(this + 0x118) = uVar1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar9 - uVar1,uVar1));
    }
  }
  else {
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,uVar11);
    }
    uVar2 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
    uVar3 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
    pBVar8 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister
                       ((BytecodeArrayBuilder *)(this + 0x18),uVar11);
    BytecodeArrayBuilder::GetIterator(pBVar8,uVar11,uVar2,uVar3);
    plVar4 = *(long **)(this + 0x120);
    iVar9 = *(int *)(this + 0x118);
    *(uint *)(this + 0x118) = uVar1;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151ea7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar9 - uVar1,uVar1));
      return;
    }
  }
  return;
}

