
/* v8::internal::compiler::CodeAssembler::LoadRoot(v8::internal::RootIndex) */

void __thiscall v8::internal::compiler::CodeAssembler::LoadRoot(CodeAssembler *this,ushort param_2)

{
  bool bVar1;
  Operator *pOVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Node **ppNVar6;
  RawMachineAssembler *pRVar7;
  Node *local_38;
  
  pRVar7 = (RawMachineAssembler *)**(undefined8 **)this;
  if (param_2 < 0x1d7) {
    local_38 = (Node *)(*(Isolate **)pRVar7 + (ulong)param_2 * 8 + 0x80);
    bVar1 = (*(ulong *)local_38 & 1) != 0;
    if (bVar1) {
      pOVar2 = (Operator *)
               CommonOperatorBuilder::HeapConstant
                         ((CommonOperatorBuilder *)(pRVar7 + 0x48),(Handle *)&local_38);
      ppNVar6 = (Node **)0x0;
    }
    else {
      pOVar2 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(pRVar7 + 0x48),*(ulong *)local_38);
      pIVar3 = (Isolate *)RawMachineAssembler::AddNode(pRVar7,pOVar2,0,(Node **)0x0);
      pRVar7 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar2 = (Operator *)
               MachineOperatorBuilder::BitcastWordToTaggedSigned
                         ((MachineOperatorBuilder *)(pRVar7 + 0x20));
      ppNVar6 = &local_38;
      local_38 = (Node *)pIVar3;
    }
    RawMachineAssembler::AddNode(pRVar7,pOVar2,(uint)!bVar1,ppNVar6);
  }
  else {
    local_38 = (Node *)ExternalReference::isolate_root(*(Isolate **)pRVar7);
    pRVar7 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::ExternalConstant
                       ((CommonOperatorBuilder *)(pRVar7 + 0x48),(ExternalReference *)&local_38);
    uVar4 = RawMachineAssembler::AddNode(pRVar7,pOVar2,0,(Node **)0x0);
    pRVar7 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Int64Constant
                       ((CommonOperatorBuilder *)(pRVar7 + 0x48),(ulong)param_2 * 8 + 0x80);
    uVar5 = RawMachineAssembler::AddNode(pRVar7,pOVar2,0,(Node **)0x0);
    LoadFullTagged(this,uVar4,uVar5,2);
  }
  return;
}

