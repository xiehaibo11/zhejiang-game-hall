
/* v8::internal::compiler::BytecodeGraphBuilder::VisitCallUndefinedReceiver() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::VisitCallUndefinedReceiver(BytecodeGraphBuilder *this)

{
  uint uVar1;
  BytecodeArrayAccessor *this_00;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Zone *this_01;
  undefined8 *puVar7;
  ulong uVar8;
  Environment *pEVar9;
  undefined8 *puVar10;
  
  pEVar9 = *(Environment **)(this + 0xa8);
  this_00 = (BytecodeArrayAccessor *)(this + 0x88);
  uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,0);
  uVar5 = Environment::LookupRegister(pEVar9,uVar2);
  iVar3 = interpreter::BytecodeArrayAccessor::GetRegisterOperand(this_00,1);
  uVar4 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand(this_00,2);
  uVar2 = interpreter::BytecodeArrayAccessor::GetIndexOperand(this_00,3);
  uVar6 = JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
  this_01 = *(Zone **)(this + 8);
  uVar1 = uVar4 + 2;
  uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  puVar7 = *(undefined8 **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)puVar7) < uVar8) {
    puVar7 = (undefined8 *)Zone::NewExpand(this_01,uVar8);
  }
  else {
    *(ulong *)(this_01 + 0x10) = (long)puVar7 + uVar8;
  }
  *puVar7 = uVar5;
  puVar7[1] = uVar6;
  if (0 < (int)uVar4) {
    uVar8 = (ulong)uVar4;
    puVar10 = puVar7 + 2;
    do {
      uVar5 = Environment::LookupRegister(*(Environment **)(this + 0xa8),iVar3);
      *puVar10 = uVar5;
      uVar8 = uVar8 - 1;
      iVar3 = iVar3 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar8 != 0);
  }
  BuildCall(this,0,puVar7,(long)(int)uVar1,uVar2);
  return;
}

