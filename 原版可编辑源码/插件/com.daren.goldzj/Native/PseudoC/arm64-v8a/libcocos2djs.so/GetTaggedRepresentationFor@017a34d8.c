
/* v8::internal::compiler::RepresentationChanger::GetTaggedRepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type,
   v8::internal::compiler::Truncation) */

long * __thiscall
v8::internal::compiler::RepresentationChanger::GetTaggedRepresentationFor
          (RepresentationChanger *this,Node *param_1,uint param_3,long param_4,undefined8 param_5)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  Operator *pOVar4;
  long *plVar5;
  undefined8 uVar6;
  SimplifiedOperatorBuilder *pSVar7;
  long lVar8;
  Graph *pGVar9;
  int iVar10;
  long local_48;
  Node *local_28;
  
  uVar1 = *(ushort *)(*(long *)param_1 + 0x10);
  local_48 = param_4;
  if (uVar1 < 0x1f) {
    uVar2 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar2 & 0x50000000) != 0) {
      return (long *)param_1;
    }
    if ((uVar2 & 0x6800000) != 0) goto LAB_017a3a70;
  }
  if (uVar1 == 0x119) {
    return (long *)param_1;
  }
  if ((param_3 & 0xff | 1) == 7) {
    return (long *)param_1;
  }
  if ((param_4 == 1) || (uVar3 = Type::SlowIs((Type *)&local_48,1), (uVar3 & 1) != 0)) {
    pGVar9 = (Graph *)**(undefined8 **)(this + 8);
    pOVar4 = (Operator *)
             CommonOperatorBuilder::DeadValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],8);
    local_28 = param_1;
    goto LAB_017a37dc;
  }
  uVar2 = (uint)param_5;
  switch(param_3 & 0xff) {
  case 1:
    if ((local_48 != 0x201) && (uVar3 = Type::SlowIs((Type *)&local_48,0x201), (uVar3 & 1) == 0)) {
      uVar6 = 1;
      goto LAB_017a3724;
    }
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ChangeBitToTagged
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    break;
  case 2:
  case 3:
  case 4:
    if ((local_48 == 0x441) || (uVar3 = Type::SlowIs((Type *)&local_48,0x441), (uVar3 & 1) != 0)) {
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::ChangeInt31ToTaggedSigned
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    }
    else {
      if ((local_48 != 1099) && (uVar3 = Type::SlowIs((Type *)&local_48,1099), (uVar3 & 1) == 0)) {
        iVar10 = (int)((ulong)param_5 >> 0x20);
        if (local_48 == 0xc4b) {
          if (iVar10 != 0) {
LAB_017a383c:
            uVar3 = Type::SlowIs((Type *)&local_48,0x407);
            if ((uVar3 & 1) == 0) {
              if (local_48 == 0xc07) {
                if (iVar10 != 0) {
LAB_017a3914:
                  if (5 < (uVar2 & 0xff)) {
LAB_017a3a70:
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("unreachable code");
                  }
                  if ((1 << (ulong)(uVar2 & 0x1f) & 0x3aU) != 0) {
switchD_017a35b0_caseD_6:
                    plVar5 = (long *)TypeError(this,param_1,param_3,local_48,8);
                    return plVar5;
                  }
                }
              }
              else {
                uVar3 = Type::SlowIs((Type *)&local_48,0xc07);
                if ((iVar10 != 0) || ((uVar3 & 1) == 0)) goto LAB_017a3914;
              }
            }
LAB_017a384c:
            pOVar4 = (Operator *)
                     SimplifiedOperatorBuilder::ChangeUint32ToTagged
                               (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
            break;
          }
        }
        else {
          uVar3 = Type::SlowIs((Type *)&local_48,0xc4b);
          if ((iVar10 != 0) || ((uVar3 & 1) == 0)) {
            if (local_48 != 0x407) goto LAB_017a383c;
            goto LAB_017a384c;
          }
        }
      }
      pSVar7 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
LAB_017a37c0:
      pOVar4 = (Operator *)SimplifiedOperatorBuilder::ChangeInt32ToTagged(pSVar7);
    }
    break;
  case 5:
    if ((local_48 == 0x441) || (uVar3 = Type::SlowIs((Type *)&local_48,0x441), (uVar3 & 1) != 0)) {
      pGVar9 = (Graph *)**(undefined8 **)(this + 8);
      pOVar4 = (Operator *)
               MachineOperatorBuilder::TruncateInt64ToInt32
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
LAB_017a36c0:
      local_28 = param_1;
      param_1 = (Node *)Graph::NewNode(pGVar9,pOVar4,1,&local_28,false);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::ChangeInt31ToTaggedSigned
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    }
    else {
      if ((local_48 == 1099) || (uVar3 = Type::SlowIs((Type *)&local_48,1099), (uVar3 & 1) != 0)) {
        pGVar9 = (Graph *)**(undefined8 **)(this + 8);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::TruncateInt64ToInt32
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
LAB_017a3794:
        local_28 = param_1;
        param_1 = (Node *)Graph::NewNode(pGVar9,pOVar4,1,&local_28,false);
        pSVar7 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
        goto LAB_017a37c0;
      }
      if ((local_48 == 0x407) || (uVar3 = Type::SlowIs((Type *)&local_48,0x407), (uVar3 & 1) != 0))
      {
        pGVar9 = (Graph *)**(undefined8 **)(this + 8);
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::TruncateInt64ToInt32
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
LAB_017a38b8:
        local_28 = param_1;
        param_1 = (Node *)Graph::NewNode(pGVar9,pOVar4,1,&local_28,false);
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::ChangeUint32ToTagged
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
      }
      else if ((local_48 == *(long *)(*(long *)this + 0x1a8)) ||
              (uVar3 = Type::SlowIs((Type *)&local_48), (uVar3 & 1) != 0)) {
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::ChangeUint64ToTagged
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
      }
      else if ((local_48 == *(long *)(*(long *)this + 400)) ||
              (uVar3 = Type::SlowIs((Type *)&local_48), (uVar3 & 1) != 0)) {
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::ChangeInt64ToTagged
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
      }
      else {
        if ((local_48 != 0x8000001) &&
           (uVar3 = Type::SlowIs((Type *)&local_48,0x8000001), (uVar3 & 1) == 0)) {
          uVar6 = 5;
          goto LAB_017a3724;
        }
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::ChangeUint64ToBigInt
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
      }
    }
    break;
  default:
    goto switchD_017a35b0_caseD_6;
  case 0xb:
    pGVar9 = (Graph *)**(undefined8 **)(this + 8);
    pOVar4 = (Operator *)
             MachineOperatorBuilder::ChangeFloat32ToFloat64
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_28 = param_1;
    param_1 = (Node *)Graph::NewNode(pGVar9,pOVar4,1,&local_28,false);
    lVar8 = *(long *)(this + 8);
    goto LAB_017a3670;
  case 0xc:
    if ((local_48 == 0x441) || (uVar3 = Type::SlowIs((Type *)&local_48,0x441), (uVar3 & 1) != 0)) {
      pGVar9 = (Graph *)**(undefined8 **)(this + 8);
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ChangeFloat64ToInt32
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
      goto LAB_017a36c0;
    }
    if ((local_48 == 1099) || (uVar3 = Type::SlowIs((Type *)&local_48,1099), (uVar3 & 1) != 0)) {
      pGVar9 = (Graph *)**(undefined8 **)(this + 8);
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ChangeFloat64ToInt32
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
      goto LAB_017a3794;
    }
    if ((local_48 == 0x407) || (uVar3 = Type::SlowIs((Type *)&local_48,0x407), (uVar3 & 1) != 0)) {
      pGVar9 = (Graph *)**(undefined8 **)(this + 8);
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ChangeFloat64ToUint32
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
      goto LAB_017a38b8;
    }
    if ((local_48 != 0x1c5f) && (uVar3 = Type::SlowIs((Type *)&local_48,0x1c5f), (uVar3 & 1) == 0))
    {
      if ((local_48 == 0x801fdf) ||
         (uVar3 = Type::SlowIs((Type *)&local_48,0x801fdf), (uVar3 & 1) != 0)) {
        if (5 < (uVar2 & 0xff)) goto LAB_017a3a70;
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x1dU) != 0) goto LAB_017a39e8;
      }
      uVar6 = 0xc;
LAB_017a3724:
      plVar5 = (long *)TypeError(this,param_1,uVar6,local_48,8);
      return plVar5;
    }
LAB_017a39e8:
    lVar8 = *(long *)(this + 8);
LAB_017a3670:
    pSVar7 = *(SimplifiedOperatorBuilder **)(lVar8 + 0x178);
    uVar2 = Type::Maybe((Type *)&local_48,0x801);
    pOVar4 = (Operator *)SimplifiedOperatorBuilder::ChangeFloat64ToTagged(pSVar7,~uVar2 & 1);
  }
  pGVar9 = (Graph *)**(undefined8 **)(this + 8);
  local_28 = param_1;
LAB_017a37dc:
  plVar5 = (long *)Graph::NewNode(pGVar9,pOVar4,1,&local_28,false);
  return plVar5;
}

