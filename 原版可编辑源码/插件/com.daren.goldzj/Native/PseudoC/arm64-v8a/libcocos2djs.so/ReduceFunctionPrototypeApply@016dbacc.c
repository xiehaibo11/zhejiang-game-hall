
/* v8::internal::compiler::JSCallReducer::ReduceFunctionPrototypeApply(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::JSCallReducer::ReduceFunctionPrototypeApply
          (JSCallReducer *this,Node *param_1)

{
  long lVar1;
  uint *puVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  Node *this_00;
  Node *pNVar10;
  Node *pNVar11;
  Operator *pOVar12;
  Node *pNVar13;
  undefined8 uVar14;
  Use *pUVar15;
  Graph *pGVar16;
  ulong uVar17;
  undefined4 local_b8 [2];
  Node *local_b0;
  Node *local_a8;
  Node *local_a0;
  undefined8 uStack_98;
  Node *local_90;
  Node *pNStack_88;
  undefined8 local_80;
  Node *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar2 = (uint *)CallParametersOf(*(Operator **)param_1);
  uVar17 = (ulong)*puVar2 & 0x7ffffff;
  pNVar7 = param_1;
  if (uVar17 == 3) {
    Node::RemoveInput(param_1,0);
    uVar14 = 2;
  }
  else {
    if (uVar17 != 2) {
      pNVar13 = (Node *)NodeProperties::GetValueInput(param_1,1);
      pNVar3 = (Node *)NodeProperties::GetValueInput(param_1,2);
      pNVar10 = (Node *)NodeProperties::GetValueInput(param_1,3);
      uVar14 = NodeProperties::GetContextInput(param_1);
      uVar4 = NodeProperties::GetFrameStateInput(param_1);
      pNVar11 = (Node *)NodeProperties::GetEffectInput(param_1,0);
      uVar5 = NodeProperties::GetControlInput(param_1,0);
      uVar6 = NodeProperties::CanBeNullOrUndefined(*(JSHeapBroker **)(this + 0x18),pNVar10,pNVar11);
      if ((uVar6 & 1) == 0) {
        pNVar11 = param_1 + 0x20;
        pNVar8 = pNVar11;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar8 = (Node *)(*(long *)pNVar11 + 0x10);
        }
        this_00 = *(Node **)pNVar8;
        if (this_00 != pNVar13) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar15 = (Use *)(*(long *)pNVar11 + -0x18);
          }
          else {
            pUVar15 = (Use *)(param_1 + -0x18);
          }
          if (this_00 != (Node *)0x0) {
            Node::RemoveUse(this_00,pUVar15);
          }
          *(Node **)pNVar8 = pNVar13;
          if (pNVar13 != (Node *)0x0) {
            Node::AppendUse(pNVar13,pUVar15);
          }
        }
        pNVar13 = pNVar11;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar13 = (Node *)(*(long *)pNVar11 + 0x10);
        }
        pNVar8 = *(Node **)(pNVar13 + 8);
        if (pNVar8 != pNVar3) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar15 = (Use *)(*(long *)pNVar11 + -0x30);
          }
          else {
            pUVar15 = (Use *)(param_1 + -0x30);
          }
          if (pNVar8 != (Node *)0x0) {
            Node::RemoveUse(pNVar8,pUVar15);
          }
          *(Node **)(pNVar13 + 8) = pNVar3;
          if (pNVar3 != (Node *)0x0) {
            Node::AppendUse(pNVar3,pUVar15);
          }
        }
        pNVar13 = pNVar11;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar13 = (Node *)(*(long *)pNVar11 + 0x10);
        }
        pNVar3 = *(Node **)(pNVar13 + 0x10);
        if (pNVar3 != pNVar10) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar15 = (Use *)(*(long *)pNVar11 + -0x48);
          }
          else {
            pUVar15 = (Use *)(param_1 + -0x48);
          }
          if (pNVar3 != (Node *)0x0) {
            Node::RemoveUse(pNVar3,pUVar15);
          }
          *(Node **)(pNVar13 + 0x10) = pNVar10;
          if (pNVar10 != (Node *)0x0) {
            Node::AppendUse(pNVar10,pUVar15);
          }
        }
        if (3 < (uint)uVar17) {
          do {
            uVar17 = uVar17 - 1;
            Node::RemoveInput(param_1,3);
          } while (3 < uVar17);
        }
        pOVar12 = (Operator *)
                  JSOperatorBuilder::CallWithArrayLike
                            (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),puVar2 + 1,
                             puVar2 + 2,*puVar2 >> 0x1c & 1,1);
        NodeProperties::ChangeOp(param_1,pOVar12);
        puVar2 = (uint *)CallParametersOf(*(Operator **)param_1);
        pNVar13 = (Node *)ReduceCallOrConstructWithArrayLikeOrSpread
                                    (this,param_1,*puVar2 & 0x7ffffff,puVar2 + 1,puVar2 + 2,
                                     *puVar2 >> 0x1c & 1);
        if (pNVar13 != (Node *)0x0) {
          pNVar7 = pNVar13;
        }
      }
      else {
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::ReferenceEqual
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_a8 = (Node *)JSGraph::NullConstant(*(JSGraph **)(this + 0x10));
        local_b0 = pNVar10;
        pNVar7 = (Node *)Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
        local_b0 = pNVar7;
        local_a8 = (Node *)uVar5;
        pNVar7 = (Node *)Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b0 = pNVar7;
        pNVar8 = (Node *)Graph::NewNode(pGVar16,pOVar12,1,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b0 = pNVar7;
        uVar5 = Graph::NewNode(pGVar16,pOVar12,1,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  SimplifiedOperatorBuilder::ReferenceEqual
                            ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        local_a8 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
        local_b0 = pNVar10;
        pNVar7 = (Node *)Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::Branch
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
        local_b0 = pNVar7;
        local_a8 = (Node *)uVar5;
        pNVar7 = (Node *)Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::IfTrue
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b0 = pNVar7;
        uVar5 = Graph::NewNode(pGVar16,pOVar12,1,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::IfFalse
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
        local_b0 = pNVar7;
        uVar9 = Graph::NewNode(pGVar16,pOVar12,1,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  JSOperatorBuilder::CallWithArrayLike
                            ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],puVar2 + 1,
                             puVar2 + 2,*puVar2 >> 0x1c & 1,1);
        local_b0 = pNVar13;
        local_a8 = pNVar3;
        local_a0 = pNVar10;
        uStack_98 = uVar14;
        local_90 = (Node *)uVar4;
        pNStack_88 = pNVar11;
        local_80 = uVar9;
        pNVar10 = (Node *)Graph::NewNode(pGVar16,pOVar12,7,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b0 = pNVar8;
        local_a8 = (Node *)uVar5;
        uVar5 = Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        local_b8[0] = 0x7fc00000;
        local_78 = (Node *)0x0;
        local_70 = 0xffffffff;
        pOVar12 = (Operator *)
                  JSOperatorBuilder::Call
                            ((JSOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2e],2,local_b8,
                             &local_78,2,1,1);
        local_b0 = pNVar13;
        local_a8 = pNVar3;
        local_a0 = (Node *)uVar14;
        uStack_98 = uVar4;
        local_90 = pNVar11;
        pNStack_88 = (Node *)uVar5;
        pNVar3 = (Node *)Graph::NewNode(pGVar16,pOVar12,6,&local_b0,false);
        local_78 = (Node *)0x0;
        uVar17 = NodeProperties::IsExceptionalCall(param_1,&local_78);
        pNVar7 = pNVar10;
        pNVar13 = pNVar3;
        if ((uVar17 & 1) != 0) {
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::IfException
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
          local_b0 = pNVar10;
          local_a8 = pNVar10;
          pNVar11 = (Node *)Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::IfSuccess
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
          local_b0 = pNVar10;
          pNVar7 = (Node *)Graph::NewNode(pGVar16,pOVar12,1,&local_b0,false);
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::IfException
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
          local_b0 = pNVar3;
          local_a8 = pNVar3;
          pNVar8 = (Node *)Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::IfSuccess
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
          local_b0 = pNVar3;
          pNVar13 = (Node *)Graph::NewNode(pGVar16,pOVar12,1,&local_b0,false);
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::Merge
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
          local_b0 = pNVar11;
          local_a8 = pNVar8;
          uVar14 = Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::EffectPhi
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
          local_b0 = pNVar11;
          local_a8 = pNVar8;
          local_a0 = (Node *)uVar14;
          uVar4 = Graph::NewNode(pGVar16,pOVar12,3,&local_b0,false);
          pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar12 = (Operator *)
                    CommonOperatorBuilder::Phi
                              ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
          local_b0 = pNVar11;
          local_a8 = pNVar8;
          local_a0 = (Node *)uVar14;
          uVar5 = Graph::NewNode(pGVar16,pOVar12,3,&local_b0,false);
          (**(code **)(**(long **)(this + 8) + 0x20))
                    (*(long **)(this + 8),local_78,uVar5,uVar4,uVar14);
        }
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::Merge
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b0 = pNVar7;
        local_a8 = pNVar13;
        uVar14 = Graph::NewNode(pGVar16,pOVar12,2,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::EffectPhi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
        local_b0 = pNVar10;
        local_a8 = pNVar3;
        local_a0 = (Node *)uVar14;
        uVar4 = Graph::NewNode(pGVar16,pOVar12,3,&local_b0,false);
        pGVar16 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar12 = (Operator *)
                  CommonOperatorBuilder::Phi
                            ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
        local_b0 = pNVar10;
        local_a8 = pNVar3;
        local_a0 = (Node *)uVar14;
        pNVar7 = (Node *)Graph::NewNode(pGVar16,pOVar12,3,&local_b0,false);
        (**(code **)(**(long **)(this + 8) + 0x20))
                  (*(long **)(this + 8),param_1,pNVar7,uVar4,uVar14);
      }
      goto LAB_016dc400;
    }
    pNVar13 = param_1 + 0x20;
    pNVar3 = pNVar13;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar13 + 0x10);
    }
    pNVar10 = *(Node **)pNVar3;
    pNVar11 = *(Node **)(pNVar3 + 8);
    if (pNVar10 != pNVar11) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar15 = (Use *)(*(long *)pNVar13 + -0x18);
      }
      else {
        pUVar15 = (Use *)(param_1 + -0x18);
      }
      if (pNVar10 != (Node *)0x0) {
        Node::RemoveUse(pNVar10,pUVar15);
      }
      *(Node **)pNVar3 = pNVar11;
      if (pNVar11 != (Node *)0x0) {
        Node::AppendUse(pNVar11,pUVar15);
      }
    }
    pNVar10 = (Node *)JSGraph::UndefinedConstant(*(JSGraph **)(this + 0x10));
    pNVar3 = pNVar13;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar3 = (Node *)(*(long *)pNVar13 + 0x10);
    }
    pNVar11 = *(Node **)(pNVar3 + 8);
    if (pNVar11 != pNVar10) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar15 = (Use *)(*(long *)pNVar13 + -0x30);
      }
      else {
        pUVar15 = (Use *)(param_1 + -0x30);
      }
      if (pNVar11 != (Node *)0x0) {
        Node::RemoveUse(pNVar11,pUVar15);
      }
      *(Node **)(pNVar3 + 8) = pNVar10;
      if (pNVar10 != (Node *)0x0) {
        Node::AppendUse(pNVar10,pUVar15);
      }
    }
    uVar14 = 0;
  }
  pOVar12 = (Operator *)
            JSOperatorBuilder::Call
                      (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),2,puVar2 + 1,
                       puVar2 + 2,uVar14,*puVar2 >> 0x1c & 1,1);
  NodeProperties::ChangeOp(param_1,pOVar12);
  pNVar13 = (Node *)ReduceJSCall(this,param_1);
  if (pNVar13 != (Node *)0x0) {
    pNVar7 = pNVar13;
  }
LAB_016dc400:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return pNVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

