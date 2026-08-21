
/* v8::internal::interpreter::BytecodeGenerator::BuildAsyncReturn(int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildAsyncReturn(BytecodeGenerator *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  BytecodeArrayBuilder *pBVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  iVar3 = *(int *)(this + 0x118);
  cVar5 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  uVar4 = *(uint *)(this + 0x118);
  uVar8 = (ulong)uVar4;
  plVar6 = *(long **)(this + 0x120);
  iVar1 = uVar4 + 3;
  iVar2 = *(int *)(this + 0x11c);
  if (*(int *)(this + 0x11c) <= iVar1) {
    iVar2 = iVar1;
  }
  uVar9 = uVar8 | 0x300000000;
  *(int *)(this + 0x118) = iVar1;
  *(int *)(this + 0x11c) = iVar2;
  if ((byte)(cVar5 - 0xdU) < 2) {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar9);
    }
    pBVar7 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::MoveRegister
                       ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(this + 0x308),uVar8);
    pBVar7 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar7,uVar4 + 1);
    pBVar7 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadTrue(pBVar7);
    uVar10 = 0x1e6;
  }
  else {
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar9);
    }
    pBVar7 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::MoveRegister
                       ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(this + 0x308),uVar8);
    pBVar7 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar7,uVar4 + 1);
    pBVar7 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::LoadBoolean
                       (pBVar7,0 < *(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x18));
    uVar10 = 0x1e2;
  }
  pBVar7 = (BytecodeArrayBuilder *)
           BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar7,uVar4 + 2);
  BytecodeArrayBuilder::CallRuntime(pBVar7,uVar10,uVar9);
  BuildReturn(this,param_1);
  plVar6 = *(long **)(this + 0x120);
  iVar1 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar3;
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015159d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - iVar3,iVar3));
    return;
  }
  return;
}

