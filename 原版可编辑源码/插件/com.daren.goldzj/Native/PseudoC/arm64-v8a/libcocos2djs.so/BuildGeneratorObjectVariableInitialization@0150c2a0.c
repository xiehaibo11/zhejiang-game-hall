
/* v8::internal::interpreter::BytecodeGenerator::BuildGeneratorObjectVariableInitialization() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildGeneratorObjectVariableInitialization
          (BytecodeGenerator *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  BytecodeArrayBuilder *pBVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  
  if (*(long *)(*(long *)(this + 0x1e0) + 0xd8) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)(*(long *)(this + 0x1e0) + 0xd8) + 8);
  }
  uVar3 = *(uint *)(this + 0x118);
  uVar9 = (ulong)uVar3;
  plVar6 = *(long **)(this + 0x120);
  iVar1 = uVar3 + 2;
  iVar2 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(this + 0x118) = iVar1;
  *(int *)(this + 0x11c) = iVar2;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar9 | 0x200000000);
  }
  cVar4 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  if (((byte)(cVar4 - 10U) < 5) &&
     (cVar4 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10)),
     1 < (byte)(cVar4 - 0xdU))) {
    uVar8 = 0x1e0;
  }
  else {
    cVar4 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
    uVar8 = 0x1e0;
    if (cVar4 != '\x02') {
      uVar8 = 0x1e8;
    }
  }
  uVar5 = Register::function_closure();
  pBVar7 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::MoveRegister((BytecodeArrayBuilder *)(this + 0x18),uVar5,uVar9);
  uVar5 = BytecodeArrayBuilder::Receiver((BytecodeArrayBuilder *)(this + 0x18));
  pBVar7 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::MoveRegister(pBVar7,uVar5,uVar3 + 1);
  pBVar7 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::CallRuntime(pBVar7,uVar8,uVar9 | 0x200000000);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar7,*(undefined4 *)(this + 0x308));
  if ((*(ushort *)(lVar10 + 0x28) & 0x380) != 0x100) {
    BuildVariableAssignment(this,lVar10,0x10,1,0);
  }
  plVar6 = *(long **)(this + 0x120);
  iVar1 = *(int *)(this + 0x118);
  *(uint *)(this + 0x118) = uVar3;
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0150c408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - uVar3,uVar3));
  return;
}

