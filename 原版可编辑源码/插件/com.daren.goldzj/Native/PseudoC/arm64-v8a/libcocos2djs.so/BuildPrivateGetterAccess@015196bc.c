
/* v8::internal::interpreter::BytecodeGenerator::BuildPrivateGetterAccess(v8::internal::interpreter::Register,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildPrivateGetterAccess
          (BytecodeGenerator *this,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  BytecodeArrayBuilder *pBVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  iVar3 = *(int *)(this + 0x118);
  iVar4 = *(int *)(this + 0x11c);
  plVar5 = *(long **)(this + 0x120);
  uVar1 = iVar3 + 1;
  uVar8 = (ulong)uVar1;
  if (iVar4 <= (int)uVar1) {
    iVar4 = iVar3 + 1;
  }
  *(uint *)(this + 0x118) = uVar1;
  *(int *)(this + 0x11c) = iVar4;
  if (plVar5 == (long *)0x0) {
    iVar2 = iVar3 + 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    *(int *)(this + 0x118) = iVar2;
    *(int *)(this + 0x11c) = iVar4;
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5,iVar3);
    uVar1 = *(uint *)(this + 0x118);
    uVar8 = (ulong)uVar1;
    iVar4 = *(int *)(this + 0x11c);
    plVar5 = *(long **)(this + 0x120);
    if (iVar4 <= (int)(uVar1 + 1)) {
      iVar4 = uVar1 + 1;
    }
    *(uint *)(this + 0x118) = uVar1 + 1;
    *(int *)(this + 0x11c) = iVar4;
    if (plVar5 != (long *)0x0) {
      uVar9 = uVar8 | 0x100000000;
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar9);
      goto LAB_01519768;
    }
  }
  uVar9 = uVar8 | 0x100000000;
LAB_01519768:
  pBVar6 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::CallRuntime((BytecodeArrayBuilder *)(this + 0x18),0xed,param_3);
  pBVar6 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar6,iVar3);
  pBVar6 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar6,param_2,uVar8);
  uVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),4);
  BytecodeArrayBuilder::CallProperty(pBVar6,iVar3,uVar9,uVar7);
  plVar5 = *(long **)(this + 0x120);
  iVar4 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar3;
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015197e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar4 - iVar3,iVar3));
    return;
  }
  return;
}

