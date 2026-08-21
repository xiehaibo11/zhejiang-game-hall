
/* v8::internal::interpreter::BytecodeGenerator::BuildReturn(int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildReturn(BytecodeGenerator *this,int param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  BytecodeArrayBuilder *pBVar4;
  byte *pbVar5;
  FunctionLiteral *pFVar6;
  
  if (FLAG_trace != '\0') {
    iVar1 = *(int *)(this + 0x118);
    iVar2 = *(int *)(this + 0x11c);
    plVar3 = *(long **)(this + 0x120);
    if (iVar2 <= iVar1 + 1) {
      iVar2 = iVar1 + 1;
    }
    *(int *)(this + 0x118) = iVar1 + 1;
    *(int *)(this + 0x11c) = iVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,iVar1);
    }
    pBVar4 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister
                       ((BytecodeArrayBuilder *)(this + 0x18),iVar1);
    BytecodeArrayBuilder::CallRuntime(pBVar4,0x1b6,iVar1);
    plVar3 = *(long **)(this + 0x120);
    iVar2 = *(int *)(this + 0x118);
    *(int *)(this + 0x118) = iVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,CONCAT44(iVar2 - iVar1,iVar1));
    }
  }
  pbVar5 = *(byte **)(this + 0x1d0);
  if ((*pbVar5 >> 1 & 1) != 0) {
    pFVar6 = *(FunctionLiteral **)(pbVar5 + 0x10);
    iVar1 = FunctionLiteral::start_position(pFVar6);
    iVar2 = FunctionLiteral::end_position(pFVar6);
    iVar2 = iVar2 - (*(uint *)(pFVar6 + 4) >> 0x15 & 1);
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    BytecodeArrayBuilder::CollectTypeProfile((BytecodeArrayBuilder *)(this + 0x18),iVar2);
    pbVar5 = *(byte **)(this + 0x1d0);
  }
  if (param_1 == -1) {
    pFVar6 = *(FunctionLiteral **)(pbVar5 + 0x10);
    iVar1 = FunctionLiteral::start_position(pFVar6);
    iVar2 = FunctionLiteral::end_position(pFVar6);
    iVar2 = iVar2 - (*(uint *)(pFVar6 + 4) >> 0x15 & 1);
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    if (iVar2 == -1) goto LAB_0150cc4c;
    iVar2 = FunctionLiteral::start_position(pFVar6);
    iVar1 = FunctionLiteral::end_position(pFVar6);
    param_1 = iVar1 - (*(uint *)(pFVar6 + 4) >> 0x15 & 1);
    if (param_1 <= iVar2) {
      param_1 = iVar2;
    }
  }
  this[0x1c0] = (BytecodeGenerator)0x2;
  *(int *)(this + 0x1c4) = param_1;
LAB_0150cc4c:
  BytecodeArrayBuilder::Return((BytecodeArrayBuilder *)(this + 0x18));
  return;
}

