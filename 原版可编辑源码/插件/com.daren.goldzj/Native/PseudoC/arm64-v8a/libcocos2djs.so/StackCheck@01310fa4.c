
/* v8::internal::compiler::WasmGraphBuilder::StackCheck(int, v8::internal::compiler::Node**,
   v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::StackCheck
          (WasmGraphBuilder *this,int param_1,Node **param_2,Node **param_3)

{
  Operator *pOVar1;
  Node *this_00;
  CallDescriptor *pCVar2;
  undefined8 uVar3;
  Node *pNVar4;
  Graph *pGVar5;
  Node *this_01;
  Node *pNVar6;
  Node *pNVar7;
  Node *local_98;
  Node *pNStack_90;
  Node *local_88;
  Node *pNStack_80;
  undefined8 local_78;
  Node *local_70;
  Node *local_68;
  Node *pNStack_60;
  Node *local_58;
  
  if ((FLAG_wasm_no_stack_checks == '\0') && (*(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
    if (param_2 == (Node **)0x0) {
      param_2 = *(Node ***)(this + 0x20);
    }
    if (param_3 == (Node **)0x0) {
      param_3 = *(Node ***)(this + 0x18);
    }
    pGVar5 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5);
    pNVar7 = *(Node **)(this + 0x30);
    pNStack_90 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0x23);
    pNStack_80 = *param_3;
    local_88 = *param_2;
    local_98 = pNVar7;
    pNVar7 = (Node *)Graph::NewNode(pGVar5,pOVar1,4,&local_98,false);
    pGVar5 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::Load
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],5);
    pNStack_90 = (Node *)MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 8),0);
    pNStack_80 = *param_3;
    local_98 = pNVar7;
    local_88 = pNVar7;
    pNVar7 = (Node *)Graph::NewNode(pGVar5,pOVar1,4,&local_98,false);
    *param_2 = pNVar7;
    pGVar5 = (Graph *)**(undefined8 **)(this + 8);
    pOVar1 = (Operator *)
             MachineOperatorBuilder::StackPointerGreaterThan
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2],3);
    pNStack_90 = *param_2;
    local_98 = pNVar7;
    pNVar7 = (Node *)Graph::NewNode(pGVar5,pOVar1,2,&local_98,false);
    *param_2 = pNVar7;
    Diamond::Diamond((Diamond *)&local_98,**(undefined8 **)(this + 8),
                     (*(undefined8 **)(this + 8))[1],pNVar7,1);
    this_01 = *param_3;
    pNVar7 = local_88 + 0x20;
    pNVar6 = pNVar7;
    if ((*(uint *)(local_88 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    this_00 = *(Node **)(pNVar6 + 8);
    if (this_00 != this_01) {
      pNVar4 = local_88;
      if ((*(uint *)(local_88 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar4 = *(Node **)pNVar7;
      }
      if (this_00 != (Node *)0x0) {
        Node::RemoveUse(this_00,(Use *)(pNVar4 + -0x30));
      }
      *(Node **)(pNVar6 + 8) = this_01;
      if (this_01 != (Node *)0x0) {
        Node::AppendUse(this_01,(Use *)(pNVar4 + -0x30));
      }
    }
    pOVar1 = *(Operator **)(this + 0x58);
    if (pOVar1 == (Operator *)0x0) {
      pNStack_60 = (Node *)0x1d2ca58;
      local_68 = (Node *)&PTR__CallInterfaceDescriptor_01ca12c0;
      pCVar2 = (CallDescriptor *)
               Linkage::GetStubCallDescriptor
                         (*(undefined8 *)**(undefined8 **)(this + 8),&local_68,0,0,0,1);
      uVar3 = MachineGraph::RelocatableIntPtrConstant(*(MachineGraph **)(this + 8),0x13,5);
      *(undefined8 *)(this + 0x48) = uVar3;
      pOVar1 = (Operator *)
               CommonOperatorBuilder::Call
                         (*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),pCVar2);
      *(Operator **)(this + 0x58) = pOVar1;
    }
    local_68 = *(Node **)(this + 0x48);
    pNStack_60 = *param_2;
    local_58 = (Node *)local_78;
    uVar3 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar1,3,&local_68,false);
    if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
      SourcePositionTable::SetSourcePosition
                (*(SourcePositionTable **)(this + 0x78),uVar3,
                 (-(ulong)(param_1 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_1 + 1U) << 1)
                 & 0xffff80007fffffff);
    }
    pNVar7 = local_98;
    pNVar6 = *param_2;
    pOVar1 = (Operator *)CommonOperatorBuilder::EffectPhi((CommonOperatorBuilder *)pNStack_90,2);
    local_58 = local_70;
    local_68 = pNVar6;
    pNStack_60 = (Node *)uVar3;
    pNVar7 = (Node *)Graph::NewNode((Graph *)pNVar7,pOVar1,3,&local_68,false);
    *param_3 = local_70;
    *param_2 = pNVar7;
  }
  return;
}

