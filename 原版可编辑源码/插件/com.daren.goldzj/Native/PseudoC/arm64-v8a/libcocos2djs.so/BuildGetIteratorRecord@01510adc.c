
/* v8::internal::interpreter::BytecodeGenerator::BuildGetIteratorRecord(v8::internal::IteratorType)
    */

undefined1  [16] __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildGetIteratorRecord
          (BytecodeGenerator *this,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  BytecodeArrayBuilder *pBVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  iVar1 = *(int *)(this + 0x118);
  iVar7 = *(int *)(this + 0x11c);
  plVar2 = *(long **)(this + 0x120);
  iVar6 = iVar1 + 1;
  if (iVar7 <= iVar6) {
    iVar7 = iVar1 + 1;
  }
  *(int *)(this + 0x118) = iVar6;
  *(int *)(this + 0x11c) = iVar7;
  plVar3 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,iVar1);
    iVar6 = *(int *)(this + 0x118);
    iVar7 = *(int *)(this + 0x11c);
    plVar3 = *(long **)(this + 0x120);
  }
  if (iVar7 <= iVar6 + 1) {
    iVar7 = iVar6 + 1;
  }
  *(int *)(this + 0x118) = iVar6 + 1;
  *(int *)(this + 0x11c) = iVar7;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3,iVar6);
  }
  BuildGetIterator(this,param_2);
  pBVar4 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister
                     ((BytecodeArrayBuilder *)(this + 0x18),iVar6);
  uVar8 = *(undefined8 *)(*(long *)(this + 0x1d8) + 0x170);
  uVar5 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
  pBVar4 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadNamedProperty(pBVar4,iVar6,uVar8,uVar5)
  ;
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar4,iVar1);
  auVar9._4_4_ = iVar6;
  auVar9._0_4_ = param_2;
  auVar9._8_4_ = iVar1;
  auVar9._12_4_ = 0;
  return auVar9;
}

