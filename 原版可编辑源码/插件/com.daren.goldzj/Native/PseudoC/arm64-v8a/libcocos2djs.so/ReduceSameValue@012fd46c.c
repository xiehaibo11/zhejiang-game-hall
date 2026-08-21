
/* v8::internal::compiler::TypedOptimization::ReduceSameValue(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::TypedOptimization::ReduceSameValue(TypedOptimization *this,Node *param_1)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long local_40;
  long local_38;
  
  plVar2 = (long *)NodeProperties::GetValueInput(param_1,0);
  plVar3 = (long *)NodeProperties::GetValueInput(param_1,1);
  local_38 = plVar2[1];
  local_40 = plVar3[1];
  while( true ) {
    uVar1 = *(ushort *)(*plVar2 + 0x10);
    uVar9 = uVar1 - 0xd7;
    if ((((7 < uVar9) || ((1 << (ulong)(uVar9 & 0x1f) & 0xc1U) == 0)) && (uVar1 != 0x3a)) &&
       (uVar1 != 0x28)) break;
    plVar8 = plVar2 + 4;
    uVar9 = *(uint *)((long)plVar2 + 0x14) >> 0x18 & 0xf;
    plVar10 = plVar8;
    if (uVar9 == 0xf) {
      uVar9 = *(uint *)(*plVar8 + 8);
      plVar10 = (long *)(*plVar8 + 0x10);
    }
    if ((0 < (int)uVar9) && (*plVar10 == 0)) break;
    if ((~*(uint *)((long)plVar2 + 0x14) & 0xf000000) == 0) {
      plVar8 = (long *)(*plVar8 + 0x10);
    }
    plVar2 = (long *)*plVar8;
  }
  do {
    uVar1 = *(ushort *)(*plVar3 + 0x10);
    uVar9 = uVar1 - 0xd7;
    if (((7 < uVar9) || ((1 << (ulong)(uVar9 & 0x1f) & 0xc1U) == 0)) &&
       ((uVar1 != 0x3a && (uVar1 != 0x28)))) break;
    plVar8 = plVar3 + 4;
    uVar9 = *(uint *)((long)plVar3 + 0x14) >> 0x18 & 0xf;
    plVar10 = plVar8;
    if (uVar9 == 0xf) {
      uVar9 = *(uint *)(*plVar8 + 8);
      plVar10 = (long *)(*plVar8 + 0x10);
    }
    if ((0 < (int)uVar9) && (*plVar10 == 0)) break;
    if ((~*(uint *)((long)plVar3 + 0x14) & 0xf000000) == 0) {
      plVar8 = (long *)(*plVar8 + 0x10);
    }
    plVar3 = (long *)*plVar8;
  } while( true );
  if (plVar2 == plVar3) {
    if (*(long *)(param_1 + 8) == 1) {
      return (Node *)0x0;
    }
    pNVar6 = (Node *)JSGraph::TrueConstant(*(JSGraph **)(this + 0x18));
    return pNVar6;
  }
  if (((local_38 == 0x47f6381) ||
      (uVar4 = Type::SlowIs((Type *)&local_38,0x47f6381), (uVar4 & 1) != 0)) &&
     ((local_40 == 0x47f6381 ||
      (uVar4 = Type::SlowIs((Type *)&local_40,0x47f6381), (uVar4 & 1) != 0)))) {
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::ReferenceEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
  }
  else if (((local_38 == 0x4021) ||
           (uVar4 = Type::SlowIs((Type *)&local_38,0x4021), (uVar4 & 1) != 0)) &&
          ((local_40 == 0x4021 || (uVar4 = Type::SlowIs((Type *)&local_40,0x4021), (uVar4 & 1) != 0)
           ))) {
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::StringEqual
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
  }
  else {
    if ((local_38 == 0x801) || (uVar4 = Type::SlowIs((Type *)&local_38,0x801), (uVar4 & 1) != 0)) {
      iVar7 = 0;
    }
    else {
      if ((local_40 != 0x801) && (uVar4 = Type::SlowIs((Type *)&local_40,0x801), (uVar4 & 1) == 0))
      {
        if ((local_38 == 0x1001) ||
           (uVar4 = Type::SlowIs((Type *)&local_38,0x1001), (uVar4 & 1) != 0)) {
          iVar7 = 0;
        }
        else {
          if ((local_40 != 0x1001) &&
             (uVar4 = Type::SlowIs((Type *)&local_40,0x1001), (uVar4 & 1) == 0)) {
            if ((local_38 != 0x45f) &&
               (uVar4 = Type::SlowIs((Type *)&local_38,0x45f), (uVar4 & 1) == 0)) {
              return (Node *)0x0;
            }
            if ((local_40 != 0x45f) &&
               (uVar4 = Type::SlowIs((Type *)&local_40,0x45f), (uVar4 & 1) == 0)) {
              return (Node *)0x0;
            }
            pOVar5 = (Operator *)
                     SimplifiedOperatorBuilder::NumberEqual
                               (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
            goto LAB_012fd6c8;
          }
          iVar7 = 1;
        }
        Node::RemoveInput(param_1,iVar7);
        pOVar5 = (Operator *)
                 SimplifiedOperatorBuilder::ObjectIsNaN
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
        goto LAB_012fd6c8;
      }
      iVar7 = 1;
    }
    Node::RemoveInput(param_1,iVar7);
    pOVar5 = (Operator *)
             SimplifiedOperatorBuilder::ObjectIsMinusZero
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
  }
LAB_012fd6c8:
  NodeProperties::ChangeOp(param_1,pOVar5);
  return param_1;
}

