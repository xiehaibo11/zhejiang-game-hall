
/* v8::internal::interpreter::BytecodeGenerator::BuildInstanceMemberInitialization(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildInstanceMemberInitialization
          (BytecodeGenerator *this,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  BytecodeArrayBuilder *pBVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  BytecodeLabel local_50 [8];
  undefined8 local_48;
  
  uVar1 = *(uint *)(this + 0x118);
  uVar8 = (ulong)uVar1;
  iVar7 = *(int *)(this + 0x11c);
  plVar2 = *(long **)(this + 0x120);
  iVar6 = uVar1 + 1;
  if (iVar7 <= iVar6) {
    iVar7 = uVar1 + 1;
  }
  *(int *)(this + 0x118) = iVar6;
  *(int *)(this + 0x11c) = iVar7;
  plVar3 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar8 | 0x100000000);
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
  uVar4 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),5);
  local_50[0] = (BytecodeLabel)0x0;
  local_48 = 0xffffffffffffffff;
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::LoadClassFieldsInitializer
                     ((BytecodeArrayBuilder *)(this + 0x18),param_2,uVar4);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::JumpIfUndefined(pBVar5,local_50);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar5,iVar6);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar5,param_3,uVar8);
  uVar4 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::CallProperty(pBVar5,iVar6,uVar8 | 0x100000000,uVar4);
  BytecodeArrayBuilder::Bind(pBVar5,local_50);
  return;
}

