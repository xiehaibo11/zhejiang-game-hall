
/* v8::internal::interpreter::BytecodeGenerator::BuildAwait(int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildAwait(BytecodeGenerator *this,int param_1)

{
  BytecodeArrayBuilder *this_00;
  uint uVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  BytecodeArrayBuilder *pBVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  BytecodeLabel local_60 [8];
  undefined8 local_58;
  
  iVar7 = *(int *)(this + 0x118);
  cVar3 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  uVar1 = *(uint *)(this + 0x118);
  plVar4 = *(long **)(this + 0x120);
  uVar9 = 0x1e3;
  if (*(int *)(this + 0x338) == 4) {
    uVar9 = 0x1e4;
  }
  uVar10 = 0x1de;
  if (*(int *)(this + 0x338) == 4) {
    uVar10 = 0x1df;
  }
  iVar8 = uVar1 + 2;
  if (1 < (byte)(cVar3 - 0xdU)) {
    uVar9 = uVar10;
  }
  *(int *)(this + 0x118) = iVar8;
  iVar2 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar8) {
    iVar2 = iVar8;
  }
  uVar11 = (ulong)uVar1 | 0x200000000;
  *(int *)(this + 0x11c) = iVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar11);
  }
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::MoveRegister(this_00,*(undefined4 *)(this + 0x308),(ulong)uVar1);
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar5,uVar1 + 1);
  BytecodeArrayBuilder::CallRuntime(pBVar5,uVar9,uVar11);
  plVar4 = *(long **)(this + 0x120);
  iVar8 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar7;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar8 - iVar7,iVar7));
  }
  if (this[0x1b2] == (BytecodeGenerator)0x0) {
    iVar7 = *(int *)(this + 0x330);
    uVar1 = *(uint *)(this + 0x118);
    *(int *)(this + 0x330) = iVar7 + 1;
    if ((param_1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = param_1;
    }
    BytecodeArrayBuilder::SuspendGenerator
              (this_00,*(undefined4 *)(this + 0x308),(ulong)uVar1 << 0x20,iVar7);
    BytecodeArrayBuilder::Bind(this_00,*(BytecodeJumpTable **)(this + 0x328),iVar7);
    BytecodeArrayBuilder::ResumeGenerator
              (this_00,*(undefined4 *)(this + 0x308),(ulong)uVar1 << 0x20);
  }
  iVar2 = *(int *)(this + 0x118);
  iVar8 = *(int *)(this + 0x11c);
  plVar4 = *(long **)(this + 0x120);
  iVar7 = iVar2 + 1;
  if (iVar8 <= iVar7) {
    iVar8 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar7;
  *(int *)(this + 0x11c) = iVar8;
  plVar6 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,iVar2);
    iVar7 = *(int *)(this + 0x118);
    iVar8 = *(int *)(this + 0x11c);
    plVar6 = *(long **)(this + 0x120);
  }
  if (iVar8 <= iVar7 + 1) {
    iVar8 = iVar7 + 1;
  }
  *(int *)(this + 0x118) = iVar7 + 1;
  *(int *)(this + 0x11c) = iVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6,iVar7);
  }
  local_60[0] = (BytecodeLabel)0x0;
  local_58 = 0xffffffffffffffff;
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(this_00,iVar2);
  pBVar5 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::CallRuntime(pBVar5,0x1ea,*(undefined4 *)(this + 0x308));
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar5,iVar7);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar5,0);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CompareReference(pBVar5,iVar7);
  BytecodeArrayBuilder::JumpIfTrue(pBVar5,1,local_60);
  pBVar5 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
  BytecodeArrayBuilder::ReThrow(pBVar5);
  BytecodeArrayBuilder::Bind(this_00,local_60);
  BytecodeArrayBuilder::LoadAccumulatorWithRegister(this_00,iVar2);
  return;
}

