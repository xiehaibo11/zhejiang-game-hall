
/* v8::internal::compiler::JSTypedLowering::ReduceJSStrictEqual(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSStrictEqual(JSTypedLowering *this,Node *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  Operator *pOVar6;
  Operator *pOVar7;
  undefined8 uVar8;
  Node *pNVar9;
  uint uVar10;
  Node *pNVar11;
  Graph *this_00;
  Graph *this_01;
  JSTypedLowering *local_60;
  Node *local_58;
  undefined8 local_50;
  Node *local_48;
  
  local_60 = this;
  local_58 = param_1;
  lVar3 = NodeProperties::GetValueInput(param_1,0);
  lVar4 = NodeProperties::GetValueInput(param_1,1);
  if (lVar3 == lVar4) {
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar7 = (Operator *)
             SimplifiedOperatorBuilder::BooleanNot
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    this_01 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsNaN
                       ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
    local_48 = (Node *)NodeProperties::GetValueInput(param_1,0);
    local_48 = (Node *)Graph::NewNode(this_01,pOVar6,1,&local_48,false);
    pNVar9 = (Node *)Graph::NewNode(this_00,pOVar7,1,&local_48,false);
    goto LAB_01760f50;
  }
  pNVar9 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  local_48 = *(Node **)(*(long *)pNVar9 + 8);
  uVar5 = Type::Maybe((Type *)&local_48,0x8005c7f);
  if ((uVar5 & 1) == 0) {
LAB_01760cd4:
    pNVar9 = local_58 + 0x20;
    if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
      local_48 = *(Node **)(*(long *)(*(long *)pNVar9 + 0x10) + 8);
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    else {
      local_48 = *(Node **)(*(long *)pNVar9 + 8);
    }
    uVar5 = Type::Maybe((Type *)&local_48,*(undefined8 *)(*(long *)(pNVar9 + 8) + 8));
    if ((uVar5 & 1) == 0) {
      pNVar9 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
LAB_01760f50:
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar9,0,0);
      return pNVar9;
    }
  }
  else {
    pNVar9 = local_58 + 0x20;
    if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    local_50 = *(undefined8 *)(*(long *)(pNVar9 + 8) + 8);
    uVar5 = Type::Maybe((Type *)&local_50,0x8005c7f);
    if ((uVar5 & 1) == 0) goto LAB_01760cd4;
  }
  uVar10 = *(uint *)(local_58 + 0x14);
  pNVar11 = local_58 + 0x20;
  pNVar9 = pNVar11;
  if ((~uVar10 & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar11 + 0x10);
  }
  local_48 = *(Node **)(*(long *)pNVar9 + 8);
  if (local_48 == (Node *)0x47f6381) {
LAB_01760dfc:
    if ((~uVar10 & 0xf000000) == 0) {
      pNVar11 = (Node *)(*(long *)pNVar11 + 0x10);
    }
    local_48 = *(Node **)(*(long *)(pNVar11 + 8) + 8);
    if ((local_48 != (Node *)0x47f6381) &&
       (uVar5 = Type::SlowIs((Type *)&local_48,0x47f6381), (uVar5 & 1) == 0)) goto LAB_01760e38;
  }
  else {
    uVar5 = Type::SlowIs((Type *)&local_48,0x47f6381);
    if ((uVar5 & 1) != 0) {
      uVar10 = *(uint *)(local_58 + 0x14);
      pNVar11 = local_58 + 0x20;
      goto LAB_01760dfc;
    }
LAB_01760e38:
    pNVar11 = *(Node **)(this + 0x28);
    pNVar9 = local_58 + 0x20;
    if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    local_48 = *(Node **)(*(long *)pNVar9 + 8);
    if ((local_48 != pNVar11) && (uVar5 = Type::SlowIs((Type *)&local_48,pNVar11), (uVar5 & 1) == 0)
       ) {
      pNVar9 = local_58 + 0x20;
      if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
        pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
      }
      local_48 = *(Node **)(*(long *)(pNVar9 + 8) + 8);
      if ((local_48 != pNVar11) &&
         (uVar5 = Type::SlowIs((Type *)&local_48,pNVar11), (uVar5 & 1) == 0)) {
        cVar1 = CompareOperationHintOf(*(Operator **)local_58);
        if (cVar1 == '\x04') {
          pNVar9 = local_58 + 0x20;
          if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
            pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          local_48 = *(Node **)(*(long *)pNVar9 + 8);
          uVar5 = Type::Maybe((Type *)&local_48,0x4001);
          if ((uVar5 & 1) != 0) {
            pNVar9 = local_58 + 0x20;
            if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
              pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            local_50 = *(undefined8 *)(*(long *)(pNVar9 + 8) + 8);
            uVar5 = Type::Maybe((Type *)&local_50,0x4001);
            if ((uVar5 & 1) != 0) {
              JSBinopReduction::CheckInputsToInternalizedString((JSBinopReduction *)&local_60);
              goto LAB_01760ec4;
            }
          }
        }
        uVar10 = *(uint *)(local_58 + 0x14);
        pNVar11 = local_58 + 0x20;
        pNVar9 = pNVar11;
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar9 = (Node *)(*(long *)pNVar11 + 0x10);
        }
        local_48 = *(Node **)(*(long *)pNVar9 + 8);
        if (local_48 == (Node *)0x4021) {
LAB_01761088:
          if ((~uVar10 & 0xf000000) == 0) {
            pNVar11 = (Node *)(*(long *)pNVar11 + 0x10);
          }
          local_48 = *(Node **)(*(long *)(pNVar11 + 8) + 8);
          if ((local_48 != (Node *)0x4021) &&
             (uVar5 = Type::SlowIs((Type *)&local_48,0x4021), (uVar5 & 1) == 0)) goto LAB_017610d4;
LAB_017610c4:
          pOVar7 = (Operator *)
                   SimplifiedOperatorBuilder::StringEqual
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
          goto LAB_01760ed0;
        }
        uVar5 = Type::SlowIs((Type *)&local_48,0x4021);
        if ((uVar5 & 1) != 0) {
          uVar10 = *(uint *)(local_58 + 0x14);
          pNVar11 = local_58 + 0x20;
          goto LAB_01761088;
        }
LAB_017610d4:
        uVar10 = *(uint *)(local_58 + 0x14);
        pNVar11 = local_58 + 0x20;
        pNVar9 = pNVar11;
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar9 = (Node *)(*(long *)pNVar11 + 0x10);
        }
        local_48 = *(Node **)(*(long *)pNVar9 + 8);
        if (local_48 == (Node *)0x44b) {
LAB_01761128:
          if ((~uVar10 & 0xf000000) == 0) {
            pNVar11 = (Node *)(*(long *)pNVar11 + 0x10);
          }
          local_48 = *(Node **)(*(long *)(pNVar11 + 8) + 8);
          if ((local_48 != (Node *)0x44b) &&
             (uVar5 = Type::SlowIs((Type *)&local_48,1099), (uVar5 & 1) == 0)) goto LAB_01761160;
LAB_017612d4:
          pOVar7 = (Operator *)
                   SimplifiedOperatorBuilder::NumberEqual
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
          goto LAB_01760ed0;
        }
        uVar5 = Type::SlowIs((Type *)&local_48,1099);
        if ((uVar5 & 1) != 0) {
          uVar10 = *(uint *)(local_58 + 0x14);
          pNVar11 = local_58 + 0x20;
          goto LAB_01761128;
        }
LAB_01761160:
        uVar10 = *(uint *)(local_58 + 0x14);
        pNVar11 = local_58 + 0x20;
        pNVar9 = pNVar11;
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar9 = (Node *)(*(long *)pNVar11 + 0x10);
        }
        local_48 = *(Node **)(*(long *)pNVar9 + 8);
        if (local_48 == (Node *)0x407) {
LAB_017611b4:
          if ((~uVar10 & 0xf000000) == 0) {
            pNVar11 = (Node *)(*(long *)pNVar11 + 0x10);
          }
          local_48 = *(Node **)(*(long *)(pNVar11 + 8) + 8);
          if ((local_48 == (Node *)0x407) ||
             (uVar5 = Type::SlowIs((Type *)&local_48,0x407), (uVar5 & 1) != 0)) goto LAB_017612d4;
        }
        else {
          uVar5 = Type::SlowIs((Type *)&local_48,0x407);
          if ((uVar5 & 1) != 0) {
            uVar10 = *(uint *)(local_58 + 0x14);
            pNVar11 = local_58 + 0x20;
            goto LAB_017611b4;
          }
        }
        iVar2 = CompareOperationHintOf(*(Operator **)local_58);
        if ((iVar2 - 1U & 0xff) < 3) {
          uVar8 = SimplifiedOperatorBuilder::SpeculativeNumberEqual
                            (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178),
                             0x40300 >> (ulong)((iVar2 - 1U & 3) << 3));
          pNVar9 = (Node *)JSBinopReduction::ChangeToSpeculativeOperator
                                     ((JSBinopReduction *)&local_60,uVar8,0x201);
          return pNVar9;
        }
        uVar10 = *(uint *)(local_58 + 0x14);
        pNVar11 = local_58 + 0x20;
        pNVar9 = pNVar11;
        if ((~uVar10 & 0xf000000) == 0) {
          pNVar9 = (Node *)(*(long *)pNVar11 + 0x10);
        }
        local_48 = *(Node **)(*(long *)pNVar9 + 8);
        if (local_48 == (Node *)0x1c5f) {
LAB_01761298:
          if ((~uVar10 & 0xf000000) == 0) {
            pNVar11 = (Node *)(*(long *)pNVar11 + 0x10);
          }
          local_48 = *(Node **)(*(long *)(pNVar11 + 8) + 8);
          if ((local_48 == (Node *)0x1c5f) ||
             (uVar5 = Type::SlowIs((Type *)&local_48,0x1c5f), (uVar5 & 1) != 0)) goto LAB_017612d4;
        }
        else {
          uVar5 = Type::SlowIs((Type *)&local_48,0x1c5f);
          if ((uVar5 & 1) != 0) {
            uVar10 = *(uint *)(local_58 + 0x14);
            pNVar11 = local_58 + 0x20;
            goto LAB_01761298;
          }
        }
        cVar1 = CompareOperationHintOf(*(Operator **)local_58);
        if (cVar1 == '\b') {
          pNVar9 = local_58 + 0x20;
          if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
            pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          local_48 = *(Node **)(*(long *)pNVar9 + 8);
          uVar5 = Type::Maybe((Type *)&local_48,0x47f0001);
          if ((uVar5 & 1) != 0) {
            pNVar9 = local_58 + 0x20;
            if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
              pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            local_50 = *(undefined8 *)(*(long *)(pNVar9 + 8) + 8);
            uVar5 = Type::Maybe((Type *)&local_50,0x47f0001);
            if ((uVar5 & 1) != 0) {
              JSBinopReduction::CheckLeftInputToReceiver((JSBinopReduction *)&local_60);
              goto LAB_01760ec4;
            }
          }
        }
        cVar1 = CompareOperationHintOf(*(Operator **)local_58);
        if (cVar1 == '\t') {
          pNVar9 = local_58 + 0x20;
          if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
            pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          local_48 = *(Node **)(*(long *)pNVar9 + 8);
          uVar5 = Type::Maybe((Type *)&local_48,0x47f0181);
          if ((uVar5 & 1) != 0) {
            pNVar9 = local_58 + 0x20;
            if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
              pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            local_50 = *(undefined8 *)(*(long *)(pNVar9 + 8) + 8);
            uVar5 = Type::Maybe((Type *)&local_50,0x47f0181);
            if ((uVar5 & 1) != 0) {
              JSBinopReduction::CheckLeftInputToReceiverOrNullOrUndefined
                        ((JSBinopReduction *)&local_60);
              goto LAB_01760ec4;
            }
          }
        }
        cVar1 = CompareOperationHintOf(*(Operator **)local_58);
        if (cVar1 == '\x05') {
          pNVar9 = local_58 + 0x20;
          if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
            pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          local_48 = *(Node **)(*(long *)pNVar9 + 8);
          uVar5 = Type::Maybe((Type *)&local_48,0x4021);
          if ((uVar5 & 1) != 0) {
            pNVar9 = local_58 + 0x20;
            if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
              pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
            }
            local_50 = *(undefined8 *)(*(long *)(pNVar9 + 8) + 8);
            uVar5 = Type::Maybe((Type *)&local_50,0x4021);
            if ((uVar5 & 1) != 0) {
              JSBinopReduction::CheckInputsToString((JSBinopReduction *)&local_60);
              goto LAB_017610c4;
            }
          }
        }
        cVar1 = CompareOperationHintOf(*(Operator **)local_58);
        if (cVar1 != '\x06') {
          return (Node *)0x0;
        }
        pNVar9 = local_58 + 0x20;
        if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
          pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        local_48 = *(Node **)(*(long *)pNVar9 + 8);
        uVar5 = Type::Maybe((Type *)&local_48,0x2001);
        if ((uVar5 & 1) == 0) {
          return (Node *)0x0;
        }
        pNVar9 = local_58 + 0x20;
        if ((~*(uint *)(local_58 + 0x14) & 0xf000000) == 0) {
          pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        local_50 = *(undefined8 *)(*(long *)(pNVar9 + 8) + 8);
        uVar5 = Type::Maybe((Type *)&local_50,0x2001);
        if ((uVar5 & 1) == 0) {
          return (Node *)0x0;
        }
        JSBinopReduction::CheckLeftInputToSymbol((JSBinopReduction *)&local_60);
      }
    }
  }
LAB_01760ec4:
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::ReferenceEqual
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
LAB_01760ed0:
  if (0 < *(int *)(*(long *)local_58 + 0x18)) {
    (**(code **)(**(long **)(local_60 + 8) + 0x20))(*(long **)(local_60 + 8),local_58,local_58,0,0);
  }
  NodeProperties::RemoveNonValueInputs(local_58);
  NodeProperties::ChangeOp(local_58,pOVar7);
  pNVar9 = local_58;
  uVar8 = Type::Intersect(*(undefined8 *)(local_58 + 8),0xffffffff,
                          *(undefined8 *)**(undefined8 **)(local_60 + 0x10));
  *(undefined8 *)(pNVar9 + 8) = uVar8;
  return local_58;
}

