
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::RepresentationChanger::GetWord32RepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type, v8::internal::compiler::Node*,
   v8::internal::compiler::UseInfo) */

Node * __thiscall
v8::internal::compiler::RepresentationChanger::GetWord32RepresentationFor
          (RepresentationChanger *this,Node *param_1,uint param_3,ulong param_4,Node *param_5,
          long param_6)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  Graph *pGVar12;
  ulong uVar13;
  SimplifiedOperatorBuilder *pSVar14;
  double dVar15;
  ulong local_50;
  Node *local_48;
  
  uVar4 = (uint)*(ushort *)(*(long *)param_1 + 0x10);
  local_50 = param_4;
  if (uVar4 == 0x1c) {
    bVar1 = *(byte *)(param_6 + 0xc);
    if (bVar1 < 9) {
      dVar15 = *(double *)(*(long *)param_1 + 0x30);
      if ((1 << (ulong)(bVar1 & 0x1f) & 0x136U) == 0) {
        if (bVar1 == 0) goto LAB_017a46dc;
      }
      else if ((((dVar15 <= 2147483647.0) && (-2147483648.0 <= dVar15)) && (dVar15 != -0.0)) &&
              (dVar15 == (double)(int)dVar15)) {
LAB_017a46dc:
        if (((-2147483648.0 <= dVar15) && (dVar15 <= 2147483647.0)) &&
           ((ABS(dVar15) != INFINITY &&
            ((!NAN(ABS(dVar15)) && (iVar8 = (int)dVar15, dVar15 == (double)(int)dVar15))))))
        goto LAB_017a47ac;
        uVar4 = 0xfffffbce;
        if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
          uVar4 = ((uint)((ulong)dVar15 >> 0x34) & 0x7ff) - 0x433;
        }
        if ((int)uVar4 < 0) {
          if ((int)uVar4 < -0x34) goto LAB_017a4780;
          uVar5 = (ulong)dVar15 & 0xfffffffffffff;
          if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
            uVar5 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar11 = (int)(uVar5 >> ((ulong)-uVar4 & 0x3f));
        }
        else {
          if (0x1f < (int)uVar4) {
LAB_017a4780:
            iVar8 = 0;
            goto LAB_017a47ac;
          }
          uVar5 = (ulong)dVar15 & 0xfffffffffffff;
          if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
            uVar5 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar11 = (int)(uVar5 << ((ulong)uVar4 & 0x3f));
        }
        iVar8 = -iVar11;
        if (-1 < (long)dVar15) {
          iVar8 = iVar11;
        }
LAB_017a47ac:
        pNVar7 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),iVar8);
        return pNVar7;
      }
    }
  }
  else if (uVar4 - 0x17 < 4) goto LAB_017a4e24;
  if ((param_4 == 1) || (uVar5 = Type::SlowIs((Type *)&local_50,1), (uVar5 & 1) != 0)) {
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::DeadValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],4);
    local_48 = param_1;
LAB_017a45e8:
    pNVar7 = (Node *)Graph::NewNode(pGVar12,pOVar6,1,&local_48,false);
    return pNVar7;
  }
  switch(param_3 & 0xff) {
  case 1:
    if ((local_50 != 0x201) && (uVar5 = Type::SlowIs((Type *)&local_50,0x201), (uVar5 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","output_type.Is(Type::Boolean())");
    }
    bVar1 = *(byte *)(param_6 + 4);
    if (bVar1 < 6) {
      if ((1 << (ulong)(bVar1 & 0x1f) & 5U) != 0) {
        return param_1;
      }
      if (bVar1 != 5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "Truncation::Any(kIdentifyZeros) .IsLessGeneralThan(use_info.truncation())");
      }
      if (*(char *)(param_6 + 0xc) == '\x05') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","use_info.type_check() != TypeCheckKind::kNumberOrOddball");
      }
      if (*(char *)(param_6 + 0xc) == '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","use_info.type_check() != TypeCheckKind::kNone");
      }
      pNVar7 = (Node *)InsertUnconditionalDeopt(this,param_5,0x1a);
      pGVar12 = (Graph *)**(undefined8 **)(this + 8);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::DeadValue
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],4);
      local_48 = pNVar7;
      goto LAB_017a45e8;
    }
    goto LAB_017a4e24;
  default:
    if ((param_3 & 0xff | 1) == 3) {
      return param_1;
    }
    if ((param_3 & 0xff) == 5) {
      if ((((local_50 == 1099) || (uVar5 = Type::SlowIs((Type *)&local_50,1099), (uVar5 & 1) != 0))
          || (local_50 == 0x407)) ||
         (uVar5 = Type::SlowIs((Type *)&local_50,0x407), (uVar5 & 1) != 0)) {
LAB_017a47ec:
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::TruncateInt64ToInt32
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      }
      else {
        if ((local_50 == *(ulong *)(*(long *)this + 400)) ||
           (uVar5 = Type::SlowIs((Type *)&local_50), (uVar5 & 1) != 0)) {
          if (5 < *(byte *)(param_6 + 4)) goto LAB_017a4e24;
          if ((1 << (ulong)(*(byte *)(param_6 + 4) & 0x1f) & 0x3aU) == 0) goto LAB_017a47ec;
        }
        if ((8 < *(byte *)(param_6 + 0xc)) ||
           ((1 << (ulong)(*(byte *)(param_6 + 0xc) & 0x1f) & 0x106U) == 0)) {
LAB_017a4dc4:
          uVar9 = 5;
LAB_017a4dcc:
          pNVar7 = (Node *)TypeError(this,param_1,uVar9,local_50,4);
          return pNVar7;
        }
        if ((local_50 == *(ulong *)(*(long *)this + 0x1a8)) ||
           (uVar5 = Type::SlowIs((Type *)&local_50), (uVar5 & 1) != 0)) {
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::CheckedUint64ToInt32
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                              (FeedbackSource *)(param_6 + 0x10));
        }
        else {
          if ((local_50 != *(ulong *)(*(long *)this + 400)) &&
             (uVar5 = Type::SlowIs((Type *)&local_50), (uVar5 & 1) == 0)) goto LAB_017a4dc4;
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::CheckedInt64ToInt32
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                              (FeedbackSource *)(param_6 + 0x10));
        }
      }
      break;
    }
    goto LAB_017a4cbc;
  case 4:
    if (*(byte *)(param_6 + 0xc) < 9) {
      uVar4 = 1 << (ulong)(*(byte *)(param_6 + 0xc) & 0x1f);
      if ((uVar4 & 0x106) != 0) {
        if (local_50 == 1099) {
          return param_1;
        }
        uVar13 = *(ulong *)(param_6 + 4);
        uVar5 = Type::SlowIs((Type *)&local_50,1099);
        if ((uVar5 & 1) != 0) {
          return param_1;
        }
        uVar13 = uVar13 >> 0x20;
        if (uVar13 == 0) {
          if (local_50 == 0xc4b) {
            return param_1;
          }
          uVar5 = Type::SlowIs((Type *)&local_50,0xc4b);
          if ((uVar5 & 1) != 0) {
            return param_1;
          }
        }
        if (((local_50 != 0x407) &&
            (uVar5 = Type::SlowIs((Type *)&local_50,0x407), (uVar5 & 1) == 0)) &&
           ((uVar13 != 0 ||
            ((local_50 != 0xc07 && (uVar5 = Type::SlowIs((Type *)&local_50,0xc07), (uVar5 & 1) == 0)
             ))))) {
          uVar9 = 4;
          goto LAB_017a4dcc;
        }
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::CheckedUint32ToInt32
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                            (FeedbackSource *)(param_6 + 0x10));
        break;
      }
      if ((uVar4 & 0x30) != 0) {
        return param_1;
      }
    }
    goto LAB_017a4cbc;
  case 6:
    uVar4 = BitsetType::SignedSmall();
    if ((local_50 != (uVar4 | 1)) && (uVar5 = Type::SlowIs((Type *)&local_50), (uVar5 & 1) == 0))
    goto switchD_017a46a0_caseD_7;
    pOVar6 = (Operator *)
             SimplifiedOperatorBuilder::ChangeTaggedSignedToInt32
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    if (pOVar6 == (Operator *)0x0) goto LAB_017a4cbc;
    goto LAB_017a4c88;
  case 7:
  case 8:
switchD_017a46a0_caseD_7:
    if ((local_50 == 1099) || (uVar5 = Type::SlowIs((Type *)&local_50,1099), (uVar5 & 1) != 0)) {
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::ChangeTaggedToInt32
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    }
    else {
      cVar2 = *(char *)(param_6 + 0xc);
      if (cVar2 == '\b') {
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::CheckedTaggedToArrayIndex
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                            (FeedbackSource *)(param_6 + 0x10));
      }
      else if (cVar2 == '\x02') {
        pSVar14 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
        uVar5 = Type::Maybe((Type *)&local_50,0x801);
        if ((uVar5 & 1) == 0) {
          bVar3 = true;
        }
        else {
          bVar3 = *(int *)(param_6 + 8) == 0;
        }
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::CheckedTaggedToInt32(pSVar14,bVar3,param_6 + 0x10);
      }
      else if (cVar2 == '\x01') {
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::CheckedTaggedSignedToInt32
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                            (FeedbackSource *)(param_6 + 0x10));
      }
      else if ((local_50 == 0x407) ||
              (uVar5 = Type::SlowIs((Type *)&local_50,0x407), (uVar5 & 1) != 0)) {
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::ChangeTaggedToUint32
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
      }
      else {
        if (5 < *(byte *)(param_6 + 4)) {
LAB_017a4e24:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        if ((1 << (ulong)(*(byte *)(param_6 + 4) & 0x1f) & 0x3aU) != 0) goto LAB_017a4cbc;
        if ((local_50 == 0x801fdf) ||
           (uVar5 = Type::SlowIs((Type *)&local_50,0x801fdf), (uVar5 & 1) != 0)) {
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::TruncateTaggedToWord32
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
        }
        else {
          if (*(char *)(param_6 + 0xc) == '\x05') {
            lVar10 = *(long *)(this + 8);
            uVar9 = 1;
          }
          else {
            if (*(char *)(param_6 + 0xc) != '\x04') goto LAB_017a4cbc;
            lVar10 = *(long *)(this + 8);
            uVar9 = 0;
          }
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::CheckedTruncateTaggedToWord32
                             (*(SimplifiedOperatorBuilder **)(lVar10 + 0x178),uVar9,param_6 + 0x10);
        }
      }
    }
    break;
  case 0xb:
    pGVar12 = (Graph *)**(undefined8 **)(this + 8);
    pOVar6 = (Operator *)
             MachineOperatorBuilder::ChangeFloat32ToFloat64
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_48 = param_1;
    param_1 = (Node *)Graph::NewNode(pGVar12,pOVar6,1,&local_48,false);
    if ((local_50 == 1099) || (uVar5 = Type::SlowIs((Type *)&local_50,1099), (uVar5 & 1) != 0)) {
LAB_017a48d4:
      pOVar6 = (Operator *)
               MachineOperatorBuilder::ChangeFloat64ToInt32
                         (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    }
    else if ((*(byte *)(param_6 + 0xc) < 9) &&
            ((1 << (ulong)(*(byte *)(param_6 + 0xc) & 0x1f) & 0x106U) != 0)) {
LAB_017a4ab8:
      pSVar14 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
      uVar5 = Type::Maybe((Type *)&local_50,0x801);
      if ((uVar5 & 1) == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = *(int *)(param_6 + 8) == 0;
      }
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::CheckedFloat64ToInt32(pSVar14,bVar3,param_6 + 0x10);
    }
    else {
      if ((local_50 == 0x407) || (uVar5 = Type::SlowIs((Type *)&local_50,0x407), (uVar5 & 1) != 0))
      goto LAB_017a4c74;
      if (5 < *(byte *)(param_6 + 4)) goto LAB_017a4e24;
      if ((1 << (ulong)(*(byte *)(param_6 + 4) & 0x1f) & 0x3aU) != 0) {
        uVar9 = 0xb;
        goto LAB_017a4dcc;
      }
LAB_017a4d70:
      pOVar6 = (Operator *)
               MachineOperatorBuilder::TruncateFloat64ToWord32
                         (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    }
    break;
  case 0xc:
    if ((local_50 == 1099) || (uVar5 = Type::SlowIs((Type *)&local_50,1099), (uVar5 & 1) != 0))
    goto LAB_017a48d4;
    if ((*(byte *)(param_6 + 0xc) < 9) &&
       ((1 << (ulong)(*(byte *)(param_6 + 0xc) & 0x1f) & 0x106U) != 0)) goto LAB_017a4ab8;
    if ((local_50 != 0x407) && (uVar5 = Type::SlowIs((Type *)&local_50,0x407), (uVar5 & 1) == 0)) {
      if (5 < *(byte *)(param_6 + 4)) goto LAB_017a4e24;
      if ((1 << (ulong)(*(byte *)(param_6 + 4) & 0x1f) & 0x3aU) != 0) {
        uVar9 = 0xc;
        goto LAB_017a4dcc;
      }
      goto LAB_017a4d70;
    }
LAB_017a4c74:
    pOVar6 = (Operator *)
             MachineOperatorBuilder::ChangeFloat64ToUint32
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
  }
  if (pOVar6 == (Operator *)0x0) {
LAB_017a4cbc:
    pNVar7 = (Node *)TypeError(this,param_1,param_3,local_50,4);
  }
  else {
LAB_017a4c88:
    pNVar7 = (Node *)InsertConversion(this,param_1,pOVar6,param_5);
  }
  return pNVar7;
}

