
/* v8::internal::compiler::JSTypedLowering::ReduceJSComparison(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSComparison(JSTypedLowering *this,Node *param_1)

{
  char cVar1;
  ulong uVar2;
  Operator *pOVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  Node *pNVar6;
  Node *pNVar7;
  uint uVar8;
  JSTypedLowering *local_48;
  Node *local_40;
  undefined8 local_38;
  long local_18;
  
  uVar8 = *(uint *)(param_1 + 0x14);
  pNVar6 = param_1 + 0x20;
  pNVar7 = pNVar6;
  if ((~uVar8 & 0xf000000) == 0) {
    pNVar7 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  local_18 = *(long *)(*(long *)pNVar7 + 8);
  local_48 = this;
  local_40 = param_1;
  if (local_18 != 0x4021) {
    uVar2 = Type::SlowIs((Type *)&local_18,0x4021);
    if ((uVar2 & 1) != 0) {
      uVar8 = *(uint *)(local_40 + 0x14);
      pNVar6 = local_40 + 0x20;
      goto LAB_0175f210;
    }
LAB_0175f28c:
    uVar8 = *(uint *)(local_40 + 0x14);
    pNVar6 = local_40 + 0x20;
    pNVar7 = pNVar6;
    if ((~uVar8 & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar6 + 0x10);
    }
    local_18 = *(long *)(*(long *)pNVar7 + 8);
    if (local_18 == 1099) {
LAB_0175f2e0:
      if ((~uVar8 & 0xf000000) == 0) {
        pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      local_18 = *(long *)(*(long *)(pNVar6 + 8) + 8);
      if ((local_18 != 1099) && (uVar2 = Type::SlowIs((Type *)&local_18,1099), (uVar2 & 1) == 0))
      goto LAB_0175f318;
LAB_0175f4c0:
      pOVar3 = (Operator *)
               SimplifiedOperatorBuilder::NumberLessThan
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::NumberLessThanOrEqual
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    }
    else {
      uVar2 = Type::SlowIs((Type *)&local_18,1099);
      if ((uVar2 & 1) != 0) {
        uVar8 = *(uint *)(local_40 + 0x14);
        pNVar6 = local_40 + 0x20;
        goto LAB_0175f2e0;
      }
LAB_0175f318:
      uVar8 = *(uint *)(local_40 + 0x14);
      pNVar6 = local_40 + 0x20;
      pNVar7 = pNVar6;
      if ((~uVar8 & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      local_18 = *(long *)(*(long *)pNVar7 + 8);
      if (local_18 == 0x407) {
LAB_0175f36c:
        if ((~uVar8 & 0xf000000) == 0) {
          pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_18 = *(long *)(*(long *)(pNVar6 + 8) + 8);
        if ((local_18 == 0x407) || (uVar2 = Type::SlowIs((Type *)&local_18,0x407), (uVar2 & 1) != 0)
           ) goto LAB_0175f4c0;
      }
      else {
        uVar2 = Type::SlowIs((Type *)&local_18,0x407);
        if ((uVar2 & 1) != 0) {
          uVar8 = *(uint *)(local_40 + 0x14);
          pNVar6 = local_40 + 0x20;
          goto LAB_0175f36c;
        }
      }
      pNVar7 = local_40 + 0x20;
      if ((~*(uint *)(local_40 + 0x14) & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_18 = *(long *)(*(long *)pNVar7 + 8);
      uVar2 = Type::Maybe((Type *)&local_18,0x47f4021);
      if ((uVar2 & 1) == 0) {
LAB_0175f424:
        uVar8 = *(uint *)(local_40 + 0x14);
        pNVar6 = local_40 + 0x20;
        pNVar7 = pNVar6;
        if ((~uVar8 & 0xf000000) == 0) {
          pNVar7 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_18 = *(long *)(*(long *)pNVar7 + 8);
        if (local_18 != 0x5fff) {
          uVar2 = Type::SlowIs((Type *)&local_18,0x5fff);
          if ((uVar2 & 1) == 0) goto LAB_0175f648;
          uVar8 = *(uint *)(local_40 + 0x14);
          pNVar6 = local_40 + 0x20;
        }
        if ((~uVar8 & 0xf000000) == 0) {
          pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
        }
        local_18 = *(long *)(*(long *)(pNVar6 + 8) + 8);
        if ((local_18 == 0x5fff) ||
           (uVar2 = Type::SlowIs((Type *)&local_18,0x5fff), (uVar2 & 1) != 0)) {
          JSBinopReduction::ConvertInputsToNumber((JSBinopReduction *)&local_48);
          goto LAB_0175f4c0;
        }
      }
      else {
        pNVar7 = local_40 + 0x20;
        if ((~*(uint *)(local_40 + 0x14) & 0xf000000) == 0) {
          pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
        }
        local_38 = *(undefined8 *)(*(long *)(pNVar7 + 8) + 8);
        uVar2 = Type::Maybe((Type *)&local_38,0x47f4021);
        if ((uVar2 & 1) == 0) goto LAB_0175f424;
      }
LAB_0175f648:
      cVar1 = CompareOperationHintOf(*(Operator **)local_40);
      if (cVar1 != '\x05') {
        return (Node *)0x0;
      }
      pNVar7 = local_40 + 0x20;
      if ((~*(uint *)(local_40 + 0x14) & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_18 = *(long *)(*(long *)pNVar7 + 8);
      uVar2 = Type::Maybe((Type *)&local_18,0x4021);
      if ((uVar2 & 1) == 0) {
        return (Node *)0x0;
      }
      pNVar7 = local_40 + 0x20;
      if ((~*(uint *)(local_40 + 0x14) & 0xf000000) == 0) {
        pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
      }
      local_38 = *(undefined8 *)(*(long *)(pNVar7 + 8) + 8);
      uVar2 = Type::Maybe((Type *)&local_38,0x4021);
      if ((uVar2 & 1) == 0) {
        return (Node *)0x0;
      }
      JSBinopReduction::CheckInputsToString((JSBinopReduction *)&local_48);
      pOVar3 = (Operator *)
               SimplifiedOperatorBuilder::StringLessThan
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::StringLessThanOrEqual
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    }
    switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
    case 0x2b3:
      break;
    case 0x2b4:
      JSBinopReduction::SwapInputs((JSBinopReduction *)&local_48);
      break;
    case 0x2b6:
      JSBinopReduction::SwapInputs((JSBinopReduction *)&local_48);
    case 0x2b5:
      pOVar3 = pOVar4;
      break;
    default:
LAB_0175f708:
      return (Node *)0x0;
    }
    if (0 < *(int *)(*(long *)local_40 + 0x18)) {
      (**(code **)(**(long **)(local_48 + 8) + 0x20))
                (*(long **)(local_48 + 8),local_40,local_40,0,0);
    }
    NodeProperties::RemoveNonValueInputs(local_40);
    NodeProperties::ChangeOp(local_40,pOVar3);
    pNVar7 = local_40;
    uVar5 = Type::Intersect(*(undefined8 *)(local_40 + 8),0xffffffff,
                            *(undefined8 *)**(undefined8 **)(local_48 + 0x10));
    *(undefined8 *)(pNVar7 + 8) = uVar5;
    return local_40;
  }
LAB_0175f210:
  if ((~uVar8 & 0xf000000) == 0) {
    pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
  }
  local_18 = *(long *)(*(long *)(pNVar6 + 8) + 8);
  if ((local_18 != 0x4021) && (uVar2 = Type::SlowIs((Type *)&local_18,0x4021), (uVar2 & 1) == 0))
  goto LAB_0175f28c;
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0x2b3:
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringLessThan
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_0175f558;
  case 0x2b4:
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringLessThan
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    break;
  case 0x2b5:
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringLessThanOrEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_0175f558;
  case 0x2b6:
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::StringLessThanOrEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    break;
  default:
    goto LAB_0175f708;
  }
  JSBinopReduction::SwapInputs((JSBinopReduction *)&local_48);
LAB_0175f558:
  if (0 < *(int *)(*(long *)local_40 + 0x18)) {
    (**(code **)(**(long **)(local_48 + 8) + 0x20))(*(long **)(local_48 + 8),local_40,local_40,0,0);
  }
  NodeProperties::RemoveNonValueInputs(local_40);
  NodeProperties::ChangeOp(local_40,pOVar3);
  pNVar7 = local_40;
  uVar5 = Type::Intersect(*(undefined8 *)(local_40 + 8),0xffffffff,
                          *(undefined8 *)**(undefined8 **)(local_48 + 0x10));
  *(undefined8 *)(pNVar7 + 8) = uVar5;
  return param_1;
}

