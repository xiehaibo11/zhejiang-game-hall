
/* v8::internal::compiler::JSGenericLowering::LowerJSStackCheck(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::LowerJSStackCheck(JSGenericLowering *this,Node *param_1)

{
  Use *pUVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  Use *pUVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Operator *pOVar8;
  undefined8 uVar9;
  Node *pNVar10;
  Node *pNVar11;
  Node *pNVar12;
  ulong uVar13;
  Use *pUVar14;
  Zone *pZVar15;
  Graph *pGVar16;
  MachineGraph *pMVar17;
  Use *pUVar18;
  Node *local_80;
  Node *pNStack_78;
  Node *local_70;
  undefined8 uStack_68;
  
  uVar6 = NodeProperties::GetEffectInput(param_1,0);
  uVar7 = NodeProperties::GetControlInput(param_1,0);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           MachineOperatorBuilder::Load
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2],5);
  pMVar17 = *(MachineGraph **)(this + 0x10);
  uVar9 = ExternalReference::address_of_jslimit(*(Isolate **)(pMVar17 + 0x168));
  pNVar10 = (Node *)MachineGraph::ExternalConstant(pMVar17,uVar9);
  pNStack_78 = (Node *)MachineGraph::IntPtrConstant(*(MachineGraph **)(this + 0x10),0);
  local_80 = pNVar10;
  local_70 = (Node *)uVar6;
  uStack_68 = uVar7;
  pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar8,4,&local_80,false);
  iVar3 = *(int *)(*(long *)param_1 + 0x2c);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           MachineOperatorBuilder::StackPointerGreaterThan
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
  local_80 = pNVar10;
  pNStack_78 = pNVar10;
  pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,&local_80,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Branch
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],1,1);
  local_80 = pNVar10;
  pNStack_78 = (Node *)uVar7;
  pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,&local_80,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::IfTrue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_80 = pNVar11;
  pNVar12 = (Node *)Graph::NewNode(pGVar16,pOVar8,1,&local_80,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::IfFalse
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
  local_80 = pNVar11;
  pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar8,1,&local_80,false);
  NodeProperties::ReplaceControlInput(param_1,pNVar11,0);
  NodeProperties::ReplaceEffectInput(param_1,pNVar10,0);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::Merge
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_80 = pNVar12;
  pNStack_78 = param_1;
  pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar8,2,&local_80,false);
  pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar8 = (Operator *)
           CommonOperatorBuilder::EffectPhi
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
  local_80 = pNVar10;
  pNStack_78 = param_1;
  local_70 = pNVar11;
  pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar8,3,&local_80,false);
  NodeProperties::ReplaceUses(param_1,param_1,pNVar10,pNVar11,pNVar11);
  NodeProperties::ReplaceControlInput(pNVar11,param_1,1);
  NodeProperties::ReplaceEffectInput(pNVar10,param_1,1);
  pUVar18 = *(Use **)(pNVar11 + 0x18);
  while (pUVar5 = pUVar18, pUVar5 != (Use *)0x0) {
    pUVar18 = *(Use **)pUVar5;
    lVar2 = 0x10;
    if ((*(uint *)(pUVar5 + 0x10) & 1) != 0) {
      lVar2 = 0x20;
    }
    pUVar1 = pUVar5 + lVar2 + (ulong)(*(uint *)(pUVar5 + 0x10) >> 1) * 0x20 + 0x18;
    uVar13 = NodeProperties::IsControlEdge(pUVar5,pUVar1);
    if ((uVar13 & 1) != 0) {
      uVar4 = *(uint *)(pUVar5 + 0x10);
      pNVar10 = (Node *)(pUVar5 + (ulong)(uVar4 >> 1) * 0x18 + 0x18);
      pUVar14 = (Use *)pNVar10;
      if ((uVar4 & 1) == 0) {
        pUVar14 = *(Use **)pNVar10;
      }
      if (*(short *)(*(long *)pUVar14 + 0x10) == 6) {
        if ((uVar4 & 1) == 0) {
          pNVar10 = *(Node **)pNVar10;
        }
        NodeProperties::ReplaceUses(pNVar10,(Node *)0x0,(Node *)0x0,pNVar11,(Node *)0x0);
        pNVar10 = (Node *)(pUVar5 + (ulong)(*(uint *)(pUVar5 + 0x10) >> 1) * 0x18 + 0x18);
        if ((*(uint *)(pUVar5 + 0x10) & 1) == 0) {
          pNVar10 = *(Node **)pNVar10;
        }
        NodeProperties::ReplaceControlInput(pNVar11,pNVar10,1);
        pNVar10 = *(Node **)pUVar1;
        if (pNVar10 != param_1) {
          if (pNVar10 != (Node *)0x0) {
            Node::RemoveUse(pNVar10,pUVar5);
          }
          *(Node **)pUVar1 = param_1;
          Node::AppendUse(param_1,pUVar5);
        }
      }
      uVar4 = *(uint *)(pUVar5 + 0x10);
      pNVar10 = (Node *)(pUVar5 + (ulong)(uVar4 >> 1) * 0x18 + 0x18);
      pUVar14 = (Use *)pNVar10;
      if ((uVar4 & 1) == 0) {
        pUVar14 = *(Use **)pNVar10;
      }
      if (*(short *)(*(long *)pUVar14 + 0x10) == 7) {
        if ((uVar4 & 1) == 0) {
          pNVar10 = *(Node **)pNVar10;
        }
        NodeProperties::ReplaceEffectInput(pNVar10,param_1,0);
        pNVar10 = *(Node **)pUVar1;
        if (pNVar10 != param_1) {
          if (pNVar10 != (Node *)0x0) {
            Node::RemoveUse(pNVar10,pUVar5);
          }
          *(Node **)pUVar1 = param_1;
          Node::AppendUse(param_1,pUVar5);
        }
      }
    }
  }
  if (iVar3 == 0) {
    pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
    pZVar15 = *(Zone **)pGVar16;
    pOVar8 = (Operator *)
             MachineOperatorBuilder::LoadStackCheckOffset
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    local_80 = (Node *)0x0;
    pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar8,0,&local_80,false);
    Node::InsertInput(param_1,pZVar15,0,pNVar10);
    uVar6 = 0xa3;
  }
  else {
    uVar6 = 0xa2;
  }
  ReplaceWithRuntimeCall(this,param_1,uVar6,0xffffffff);
  return;
}

