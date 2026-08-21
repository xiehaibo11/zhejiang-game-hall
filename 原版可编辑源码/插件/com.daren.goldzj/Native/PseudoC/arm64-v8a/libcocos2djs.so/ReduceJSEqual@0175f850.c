
/* v8::internal::compiler::JSTypedLowering::ReduceJSEqual(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSEqual(JSTypedLowering *this,Node *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  undefined8 uVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  undefined8 uVar12;
  Graph *pGVar13;
  JSTypedLowering *local_88;
  Node *local_80;
  Node *local_78;
  Node *pNStack_70;
  undefined8 local_68;
  undefined8 local_48;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  pNVar7 = param_1 + 0x20;
  pNVar6 = pNVar7;
  if ((~uVar2 & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
  }
  local_78 = *(Node **)(*(long *)pNVar6 + 8);
  local_88 = this;
  local_80 = param_1;
  if (local_78 == (Node *)0x6001) {
LAB_0175f8d0:
    if ((~uVar2 & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    local_78 = *(Node **)(*(long *)(pNVar7 + 8) + 8);
    if ((local_78 != (Node *)0x6001) &&
       (uVar3 = Type::SlowIs((Type *)&local_78,0x6001), (uVar3 & 1) == 0)) goto LAB_0175f90c;
  }
  else {
    uVar3 = Type::SlowIs((Type *)&local_78,0x6001);
    if ((uVar3 & 1) != 0) {
      uVar2 = *(uint *)(local_80 + 0x14);
      pNVar7 = local_80 + 0x20;
      goto LAB_0175f8d0;
    }
LAB_0175f90c:
    cVar1 = CompareOperationHintOf(*(Operator **)local_80);
    if (cVar1 == '\x04') {
      pNVar6 = local_80 + 0x20;
      if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
        pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      local_78 = *(Node **)(*(long *)pNVar6 + 8);
      uVar3 = Type::Maybe((Type *)&local_78,0x4001);
      if ((uVar3 & 1) != 0) {
        pNVar6 = local_80 + 0x20;
        if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
          pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_48 = *(undefined8 *)(*(long *)(pNVar6 + 8) + 8);
        uVar3 = Type::Maybe((Type *)&local_48,0x4001);
        if ((uVar3 & 1) != 0) {
          JSBinopReduction::CheckInputsToInternalizedString((JSBinopReduction *)&local_88);
          goto LAB_0175fb74;
        }
      }
    }
    uVar2 = *(uint *)(local_80 + 0x14);
    pNVar7 = local_80 + 0x20;
    pNVar6 = pNVar7;
    if ((~uVar2 & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    local_78 = *(Node **)(*(long *)pNVar6 + 8);
    if (local_78 == (Node *)0x4021) {
LAB_0175fa00:
      if ((~uVar2 & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_78 = *(Node **)(*(long *)(pNVar7 + 8) + 8);
      if ((local_78 != (Node *)0x4021) &&
         (uVar3 = Type::SlowIs((Type *)&local_78,0x4021), (uVar3 & 1) == 0)) goto LAB_0175fa4c;
LAB_0175fa3c:
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::StringEqual
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      goto LAB_0175fb80;
    }
    uVar3 = Type::SlowIs((Type *)&local_78,0x4021);
    if ((uVar3 & 1) != 0) {
      uVar2 = *(uint *)(local_80 + 0x14);
      pNVar7 = local_80 + 0x20;
      goto LAB_0175fa00;
    }
LAB_0175fa4c:
    uVar2 = *(uint *)(local_80 + 0x14);
    pNVar7 = local_80 + 0x20;
    pNVar6 = pNVar7;
    if ((~uVar2 & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    local_78 = *(Node **)(*(long *)pNVar6 + 8);
    if (local_78 == (Node *)0x201) {
LAB_0175faa0:
      if ((~uVar2 & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_78 = *(Node **)(*(long *)(pNVar7 + 8) + 8);
      if ((local_78 == (Node *)0x201) ||
         (uVar3 = Type::SlowIs((Type *)&local_78,0x201), (uVar3 & 1) != 0)) goto LAB_0175fb74;
    }
    else {
      uVar3 = Type::SlowIs((Type *)&local_78,0x201);
      if ((uVar3 & 1) != 0) {
        uVar2 = *(uint *)(local_80 + 0x14);
        pNVar7 = local_80 + 0x20;
        goto LAB_0175faa0;
      }
    }
    uVar2 = *(uint *)(local_80 + 0x14);
    pNVar7 = local_80 + 0x20;
    pNVar6 = pNVar7;
    if ((~uVar2 & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    local_78 = *(Node **)(*(long *)pNVar6 + 8);
    if (local_78 == (Node *)0x47f0001) {
LAB_0175fb38:
      if ((~uVar2 & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_78 = *(Node **)(*(long *)(pNVar7 + 8) + 8);
      if ((local_78 == (Node *)0x47f0001) ||
         (uVar3 = Type::SlowIs((Type *)&local_78,0x47f0001), (uVar3 & 1) != 0)) goto LAB_0175fb74;
    }
    else {
      uVar3 = Type::SlowIs((Type *)&local_78,0x47f0001);
      if ((uVar3 & 1) != 0) {
        uVar2 = *(uint *)(local_80 + 0x14);
        pNVar7 = local_80 + 0x20;
        goto LAB_0175fb38;
      }
    }
    pNVar6 = local_80 + 0x20;
    if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    local_78 = *(Node **)(*(long *)pNVar6 + 8);
    if ((local_78 == (Node *)0x40181) ||
       (uVar3 = Type::SlowIs((Type *)&local_78,0x40181), (uVar3 & 1) != 0)) {
LAB_0175fcb0:
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
      pNVar6 = local_80 + 0x20;
      if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
        pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      local_78 = *(Node **)(*(long *)pNVar6 + 8);
      if (local_78 == (Node *)0x40181) {
        uVar2 = 0;
      }
      else {
        uVar2 = Type::SlowIs((Type *)&local_78,0x40181);
        uVar2 = ~uVar2 & 1;
      }
      Node::RemoveInput(param_1,uVar2);
      Node::TrimInputCount(param_1,1);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::ObjectIsUndetectable
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      NodeProperties::ChangeOp(param_1,pOVar4);
      return param_1;
    }
    pNVar6 = local_80 + 0x20;
    if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    local_78 = *(Node **)(*(long *)(pNVar6 + 8) + 8);
    if ((local_78 == (Node *)0x40181) ||
       (uVar3 = Type::SlowIs((Type *)&local_78,0x40181), (uVar3 & 1) != 0)) goto LAB_0175fcb0;
    uVar2 = *(uint *)(local_80 + 0x14);
    pNVar7 = local_80 + 0x20;
    pNVar6 = pNVar7;
    if ((~uVar2 & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    local_78 = *(Node **)(*(long *)pNVar6 + 8);
    if (local_78 == (Node *)0x44b) {
LAB_0175fda8:
      if ((~uVar2 & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_78 = *(Node **)(*(long *)(pNVar7 + 8) + 8);
      if ((local_78 != (Node *)0x44b) &&
         (uVar3 = Type::SlowIs((Type *)&local_78,1099), (uVar3 & 1) == 0)) goto LAB_0175fde0;
LAB_0175ff00:
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::NumberEqual
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      goto LAB_0175fb80;
    }
    uVar3 = Type::SlowIs((Type *)&local_78,1099);
    if ((uVar3 & 1) != 0) {
      uVar2 = *(uint *)(local_80 + 0x14);
      pNVar7 = local_80 + 0x20;
      goto LAB_0175fda8;
    }
LAB_0175fde0:
    uVar2 = *(uint *)(local_80 + 0x14);
    pNVar7 = local_80 + 0x20;
    pNVar6 = pNVar7;
    if ((~uVar2 & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    local_78 = *(Node **)(*(long *)pNVar6 + 8);
    if (local_78 == (Node *)0x407) {
LAB_0175fe34:
      if ((~uVar2 & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_78 = *(Node **)(*(long *)(pNVar7 + 8) + 8);
      if ((local_78 == (Node *)0x407) ||
         (uVar3 = Type::SlowIs((Type *)&local_78,0x407), (uVar3 & 1) != 0)) goto LAB_0175ff00;
    }
    else {
      uVar3 = Type::SlowIs((Type *)&local_78,0x407);
      if ((uVar3 & 1) != 0) {
        uVar2 = *(uint *)(local_80 + 0x14);
        pNVar7 = local_80 + 0x20;
        goto LAB_0175fe34;
      }
    }
    uVar2 = *(uint *)(local_80 + 0x14);
    pNVar7 = local_80 + 0x20;
    pNVar6 = pNVar7;
    if ((~uVar2 & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    local_78 = *(Node **)(*(long *)pNVar6 + 8);
    if (local_78 == (Node *)0x1c5f) {
LAB_0175fec4:
      if ((~uVar2 & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_78 = *(Node **)(*(long *)(pNVar7 + 8) + 8);
      if ((local_78 == (Node *)0x1c5f) ||
         (uVar3 = Type::SlowIs((Type *)&local_78,0x1c5f), (uVar3 & 1) != 0)) goto LAB_0175ff00;
    }
    else {
      uVar3 = Type::SlowIs((Type *)&local_78,0x1c5f);
      if ((uVar3 & 1) != 0) {
        uVar2 = *(uint *)(local_80 + 0x14);
        pNVar7 = local_80 + 0x20;
        goto LAB_0175fec4;
      }
    }
    cVar1 = CompareOperationHintOf(*(Operator **)local_80);
    if (cVar1 == '\b') {
      pNVar6 = local_80 + 0x20;
      if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
        pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      local_78 = *(Node **)(*(long *)pNVar6 + 8);
      uVar3 = Type::Maybe((Type *)&local_78,0x47f0001);
      if ((uVar3 & 1) != 0) {
        pNVar6 = local_80 + 0x20;
        if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
          pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_48 = *(undefined8 *)(*(long *)(pNVar6 + 8) + 8);
        uVar3 = Type::Maybe((Type *)&local_48,0x47f0001);
        if ((uVar3 & 1) != 0) {
          JSBinopReduction::CheckInputsToReceiver((JSBinopReduction *)&local_88);
          goto LAB_0175fb74;
        }
      }
    }
    cVar1 = CompareOperationHintOf(*(Operator **)local_80);
    if (cVar1 == '\t') {
      pNVar6 = local_80 + 0x20;
      if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
        pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      local_78 = *(Node **)(*(long *)pNVar6 + 8);
      uVar3 = Type::Maybe((Type *)&local_78,0x47f0181);
      if ((uVar3 & 1) != 0) {
        pNVar6 = local_80 + 0x20;
        if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
          pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_48 = *(undefined8 *)(*(long *)(pNVar6 + 8) + 8);
        uVar3 = Type::Maybe((Type *)&local_48,0x47f0181);
        if ((uVar3 & 1) != 0) {
          JSBinopReduction::CheckInputsToReceiverOrNullOrUndefined((JSBinopReduction *)&local_88);
          pNVar6 = local_80 + 0x20;
          if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
            pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
          }
          local_78 = *(Node **)(*(long *)pNVar6 + 8);
          if ((local_78 != (Node *)0x47b0001) &&
             (uVar3 = Type::SlowIs((Type *)&local_78,0x47b0001), (uVar3 & 1) == 0)) {
            pNVar6 = local_80 + 0x20;
            if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
              pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
            }
            local_78 = *(Node **)(*(long *)(pNVar6 + 8) + 8);
            if ((local_78 != (Node *)0x47b0001) &&
               (uVar3 = Type::SlowIs((Type *)&local_78,0x47b0001), (uVar3 & 1) == 0)) {
              pNVar6 = (Node *)NodeProperties::GetValueInput(local_80,0);
              pNVar7 = (Node *)NodeProperties::GetValueInput(local_80,1);
              uVar5 = NodeProperties::GetEffectInput(local_80,0);
              uVar8 = NodeProperties::GetControlInput(local_80,0);
              pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar4 = (Operator *)
                       SimplifiedOperatorBuilder::ObjectIsUndetectable
                                 ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]
                                 );
              local_78 = pNVar6;
              pNVar9 = (Node *)Graph::NewNode(pGVar13,pOVar4,1,&local_78,false);
              pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar4 = (Operator *)
                       CommonOperatorBuilder::Branch
                                 ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2,1);
              local_78 = pNVar9;
              pNStack_70 = (Node *)uVar8;
              pNVar9 = (Node *)Graph::NewNode(pGVar13,pOVar4,2,&local_78,false);
              pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar4 = (Operator *)
                       CommonOperatorBuilder::IfTrue
                                 ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
              local_78 = pNVar9;
              pNVar10 = (Node *)Graph::NewNode(pGVar13,pOVar4,1,&local_78,false);
              pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar4 = (Operator *)
                       SimplifiedOperatorBuilder::ObjectIsUndetectable
                                 ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]
                                 );
              local_78 = pNVar7;
              pNVar11 = (Node *)Graph::NewNode(pGVar13,pOVar4,1,&local_78,false);
              pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar4 = (Operator *)
                       CommonOperatorBuilder::IfFalse
                                 ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1]);
              local_78 = pNVar9;
              uVar8 = Graph::NewNode(pGVar13,pOVar4,1,&local_78,false);
              pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar4 = (Operator *)
                       SimplifiedOperatorBuilder::ReferenceEqual
                                 ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]
                                 );
              local_78 = pNVar6;
              pNStack_70 = pNVar7;
              uVar12 = Graph::NewNode(pGVar13,pOVar4,2,&local_78,false);
              pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar4 = (Operator *)
                       CommonOperatorBuilder::Merge
                                 ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],2);
              local_78 = pNVar10;
              pNStack_70 = (Node *)uVar8;
              uVar8 = Graph::NewNode(pGVar13,pOVar4,2,&local_78,false);
              pGVar13 = (Graph *)**(undefined8 **)(this + 0x10);
              pOVar4 = (Operator *)
                       CommonOperatorBuilder::Phi
                                 ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,2);
              local_78 = pNVar11;
              pNStack_70 = (Node *)uVar12;
              local_68 = uVar8;
              pNVar6 = (Node *)Graph::NewNode(pGVar13,pOVar4,3,&local_78,false);
              (**(code **)(**(long **)(this + 8) + 0x20))
                        (*(long **)(this + 8),param_1,pNVar6,uVar5,uVar8);
              return pNVar6;
            }
          }
          goto LAB_0175fb74;
        }
      }
    }
    cVar1 = CompareOperationHintOf(*(Operator **)local_80);
    if (cVar1 == '\x05') {
      pNVar6 = local_80 + 0x20;
      if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
        pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      local_78 = *(Node **)(*(long *)pNVar6 + 8);
      uVar3 = Type::Maybe((Type *)&local_78,0x4021);
      if ((uVar3 & 1) != 0) {
        pNVar6 = local_80 + 0x20;
        if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
          pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_48 = *(undefined8 *)(*(long *)(pNVar6 + 8) + 8);
        uVar3 = Type::Maybe((Type *)&local_48,0x4021);
        if ((uVar3 & 1) != 0) {
          JSBinopReduction::CheckInputsToString((JSBinopReduction *)&local_88);
          goto LAB_0175fa3c;
        }
      }
    }
    cVar1 = CompareOperationHintOf(*(Operator **)local_80);
    if (cVar1 != '\x06') {
      return (Node *)0x0;
    }
    pNVar6 = local_80 + 0x20;
    if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    local_78 = *(Node **)(*(long *)pNVar6 + 8);
    uVar3 = Type::Maybe((Type *)&local_78,0x2001);
    if ((uVar3 & 1) == 0) {
      return (Node *)0x0;
    }
    pNVar6 = local_80 + 0x20;
    if ((~*(uint *)(local_80 + 0x14) & 0xf000000) == 0) {
      pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    local_48 = *(undefined8 *)(*(long *)(pNVar6 + 8) + 8);
    uVar3 = Type::Maybe((Type *)&local_48,0x2001);
    if ((uVar3 & 1) == 0) {
      return (Node *)0x0;
    }
    JSBinopReduction::CheckInputsToSymbol((JSBinopReduction *)&local_88);
  }
LAB_0175fb74:
  pOVar4 = (Operator *)
           SimplifiedOperatorBuilder::ReferenceEqual
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
LAB_0175fb80:
  if (0 < *(int *)(*(long *)local_80 + 0x18)) {
    (**(code **)(**(long **)(local_88 + 8) + 0x20))(*(long **)(local_88 + 8),local_80,local_80,0,0);
  }
  NodeProperties::RemoveNonValueInputs(local_80);
  NodeProperties::ChangeOp(local_80,pOVar4);
  pNVar6 = local_80;
  uVar5 = Type::Intersect(*(undefined8 *)(local_80 + 8),0xffffffff,
                          *(undefined8 *)**(undefined8 **)(local_88 + 0x10));
  *(undefined8 *)(pNVar6 + 8) = uVar5;
  return local_80;
}

