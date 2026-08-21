
/* v8::internal::compiler::SimdScalarLowering::BuildF64Trunc(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SimdScalarLowering::BuildF64Trunc(SimdScalarLowering *this,Node *param_1)

{
  char cVar1;
  Operator *pOVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  CallDescriptor *pCVar6;
  Node **ppNVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  Operator *extraout_x1;
  int iVar10;
  Zone *pZVar11;
  Graph *pGVar12;
  undefined8 uVar13;
  undefined8 local_70;
  Node *local_68;
  undefined8 uStack_60;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  cVar1 = MachineOperatorBuilder::Float64RoundTruncate
                    (*(MachineOperatorBuilder **)(*(long *)this + 0x10));
  if (cVar1 == '\0') {
    local_70 = ExternalReference::wasm_f64_trunc();
    pGVar12 = (Graph *)**(undefined8 **)this;
    pOVar2 = (Operator *)
             MachineOperatorBuilder::StackSlot
                       ((MachineOperatorBuilder *)(*(undefined8 **)this)[2],0xc,0);
    local_68 = (Node *)0x0;
    pNVar3 = (Node *)Graph::NewNode(pGVar12,pOVar2,0,&local_68,false);
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Store(*(MachineOperatorBuilder **)(*(long *)this + 0x10),0xc);
    pGVar12 = *(Graph **)*(MachineGraph **)this;
    uStack_60 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    uStack_50 = *(undefined8 *)(**(long **)this + 8);
    local_68 = pNVar3;
    local_58 = param_1;
    local_48 = uStack_50;
    pNVar4 = (Node *)Graph::NewNode(pGVar12,pOVar2,5,&local_68,false);
    pGVar12 = (Graph *)**(undefined8 **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::ExternalConstant
                       ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],
                        (ExternalReference *)&local_70);
    local_68 = (Node *)0x0;
    pNVar5 = (Node *)Graph::NewNode(pGVar12,pOVar2,0,&local_68,false);
    pZVar11 = *(Zone **)**(undefined8 **)this;
    ppNVar7 = *(Node ***)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)ppNVar7) < 0x20) {
      ppNVar7 = (Node **)Zone::NewExpand(pZVar11,0x20);
    }
    else {
      *(Node ***)(pZVar11 + 0x10) = ppNVar7 + 4;
    }
    *ppNVar7 = pNVar5;
    ppNVar7[1] = pNVar3;
    ppNVar7[2] = pNVar4;
    ppNVar7[3] = *(Node **)(**(long **)this + 8);
    pZVar11 = *(Zone **)**(undefined8 **)this;
    puVar8 = *(undefined2 **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar8) < 8) {
      puVar8 = (undefined2 *)Zone::NewExpand(pZVar11,8);
    }
    else {
      *(undefined2 **)(pZVar11 + 0x10) = puVar8 + 4;
    }
    *puVar8 = 5;
    puVar9 = *(undefined8 **)(pZVar11 + 0x10);
    uVar13 = *(undefined8 *)**(undefined8 **)this;
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar9) < 0x18) {
      puVar9 = (undefined8 *)Zone::NewExpand(pZVar11,0x18);
    }
    else {
      *(undefined8 **)(pZVar11 + 0x10) = puVar9 + 3;
    }
    puVar9[2] = puVar8;
    puVar9[1] = 1;
    *puVar9 = 0;
    pCVar6 = (CallDescriptor *)Linkage::GetSimplifiedCDescriptor(uVar13,puVar9,0);
    pGVar12 = (Graph *)**(undefined8 **)this;
    pOVar2 = (Operator *)
             CommonOperatorBuilder::Call((CommonOperatorBuilder *)(*(undefined8 **)this)[1],pCVar6);
    uVar13 = Graph::NewNode(pGVar12,pOVar2,4,ppNVar7,false);
    pGVar12 = (Graph *)**(undefined8 **)this;
    pOVar2 = (Operator *)
             MachineOperatorBuilder::Load((MachineOperatorBuilder *)(*(undefined8 **)this)[2],0x60c)
    ;
    uStack_60 = MachineGraph::Int32Constant(*(MachineGraph **)this,0);
    iVar10 = 4;
    uStack_50 = *(undefined8 *)(**(long **)this + 8);
    local_68 = pNVar3;
    local_58 = (Node *)uVar13;
  }
  else {
    pGVar12 = (Graph *)**(undefined8 **)this;
    MachineOperatorBuilder::Float64RoundTruncate
              ((MachineOperatorBuilder *)(*(undefined8 **)this)[2]);
    iVar10 = 1;
    pOVar2 = extraout_x1;
    local_68 = param_1;
  }
  Graph::NewNode(pGVar12,pOVar2,iVar10,&local_68,false);
  return;
}

