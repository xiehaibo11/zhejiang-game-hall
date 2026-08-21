
/* v8::internal::compiler::RepresentationChanger::GetTaggedSignedRepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type, v8::internal::compiler::Node*,
   v8::internal::compiler::UseInfo) */

Node * __thiscall
v8::internal::compiler::RepresentationChanger::GetTaggedSignedRepresentationFor
          (RepresentationChanger *this,Node *param_1,uint param_3,ulong param_4,Node *param_5,
          long param_6)

{
  uint uVar1;
  ulong uVar2;
  Operator *pOVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Graph *pGVar6;
  ulong local_50;
  Node *local_48;
  
  local_50 = param_4;
  if (*(short *)(*(long *)param_1 + 0x10) == 0x1c) {
    uVar1 = BitsetType::SignedSmall();
    if ((uVar1 | 1) == param_4) {
      return param_1;
    }
    uVar2 = Type::SlowIs((Type *)&local_50);
    if ((uVar2 & 1) != 0) {
      return param_1;
    }
  }
  if ((local_50 == 1) || (uVar2 = Type::SlowIs((Type *)&local_50,1), (uVar2 & 1) != 0)) {
    pGVar6 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::DeadValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],6);
    local_48 = param_1;
    pNVar4 = (Node *)Graph::NewNode(pGVar6,pOVar3,1,&local_48,false);
    return pNVar4;
  }
  switch(param_3 & 0xff) {
  case 2:
  case 3:
  case 4:
    if ((local_50 == 0x441) || (uVar2 = Type::SlowIs((Type *)&local_50,0x441), (uVar2 & 1) != 0)) {
      pOVar3 = (Operator *)
               SimplifiedOperatorBuilder::ChangeInt31ToTaggedSigned
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
      goto LAB_017a30ac;
    }
    if ((local_50 != 1099) && (uVar2 = Type::SlowIs((Type *)&local_50,1099), (uVar2 & 1) == 0)) {
      if (((local_50 != 0x407) && (uVar2 = Type::SlowIs((Type *)&local_50,0x407), (uVar2 & 1) == 0))
         || (*(char *)(param_6 + 0xc) != '\x01')) goto LAB_017a2fe8;
LAB_017a3068:
      pOVar3 = (Operator *)
               SimplifiedOperatorBuilder::CheckedUint32ToTaggedSigned
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                          (FeedbackSource *)(param_6 + 0x10));
      goto LAB_017a30ac;
    }
    if (*(char *)(param_6 + 0xc) != '\x01') goto LAB_017a2fe8;
LAB_017a2f54:
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckedInt32ToTaggedSigned
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                        (FeedbackSource *)(param_6 + 0x10));
    goto LAB_017a30ac;
  case 5:
    if ((local_50 != 0x441) && (uVar2 = Type::SlowIs((Type *)&local_50,0x441), (uVar2 & 1) == 0)) {
      if (local_50 != 1099) {
        Type::SlowIs((Type *)&local_50,1099);
      }
      if (*(char *)(param_6 + 0xc) == '\x01') {
        if ((local_50 == *(ulong *)(*(long *)this + 0x1a8)) ||
           (uVar2 = Type::SlowIs((Type *)&local_50), (uVar2 & 1) != 0)) {
          pOVar3 = (Operator *)
                   SimplifiedOperatorBuilder::CheckedUint64ToTaggedSigned
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                              (FeedbackSource *)(param_6 + 0x10));
          goto LAB_017a30ac;
        }
        if ((local_50 == *(ulong *)(*(long *)this + 400)) ||
           (uVar2 = Type::SlowIs((Type *)&local_50), (uVar2 & 1) != 0)) {
          pOVar3 = (Operator *)
                   SimplifiedOperatorBuilder::CheckedInt64ToTaggedSigned
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                              (FeedbackSource *)(param_6 + 0x10));
          goto LAB_017a30ac;
        }
      }
      uVar5 = 5;
      goto LAB_017a3100;
    }
    pGVar6 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::TruncateInt64ToInt32
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    break;
  default:
    if ((param_3 - 7 & 0xff) < 2) {
      if (*(char *)(param_6 + 0xc) != '\x01') {
        uVar1 = BitsetType::SignedSmall();
        if ((local_50 == (uVar1 | 1)) || (uVar2 = Type::SlowIs((Type *)&local_50), (uVar2 & 1) != 0)
           ) {
          pOVar3 = (Operator *)
                   SimplifiedOperatorBuilder::ChangeTaggedToTaggedSigned
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
          goto LAB_017a30ac;
        }
LAB_017a2fe8:
        pNVar4 = (Node *)TypeError(this,param_1,param_3,local_50,6);
        return pNVar4;
      }
    }
    else {
      if ((param_3 & 0xff) != 1) goto LAB_017a2fe8;
      if (*(char *)(param_6 + 0xc) != '\x01') {
        uVar5 = 1;
        goto LAB_017a3100;
      }
      pGVar6 = (Graph *)**(undefined8 **)(this + 8);
      pOVar3 = (Operator *)
               SimplifiedOperatorBuilder::ChangeBitToTagged
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 8))[0x2f]);
      local_48 = param_1;
      param_1 = (Node *)Graph::NewNode(pGVar6,pOVar3,1,&local_48,false);
    }
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckedTaggedToTaggedSigned
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                        (FeedbackSource *)(param_6 + 0x10));
    goto LAB_017a30ac;
  case 0xb:
    if (*(char *)(param_6 + 0xc) != '\x01') {
      uVar5 = 0xb;
      goto LAB_017a3100;
    }
    pGVar6 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::ChangeFloat32ToFloat64
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_48 = param_1;
    param_1 = (Node *)Graph::NewNode(pGVar6,pOVar3,1,&local_48,false);
LAB_017a2e0c:
    uVar1 = Type::Maybe((Type *)&local_50,0x801);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckedFloat64ToInt32
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),~uVar1 & 1,
                        (FeedbackSource *)(param_6 + 0x10));
    param_1 = (Node *)InsertConversion(this,param_1,pOVar3,param_5);
    pOVar3 = (Operator *)
             SimplifiedOperatorBuilder::CheckedInt32ToTaggedSigned
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                        (FeedbackSource *)(param_6 + 0x10));
    goto LAB_017a30ac;
  case 0xc:
    if ((local_50 != 0x441) && (uVar2 = Type::SlowIs((Type *)&local_50,0x441), (uVar2 & 1) == 0)) {
      if ((local_50 == 1099) || (uVar2 = Type::SlowIs((Type *)&local_50,1099), (uVar2 & 1) != 0)) {
        pGVar6 = (Graph *)**(undefined8 **)(this + 8);
        pOVar3 = (Operator *)
                 MachineOperatorBuilder::ChangeFloat64ToInt32
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
        local_48 = param_1;
        param_1 = (Node *)Graph::NewNode(pGVar6,pOVar3,1,&local_48,false);
        if (*(char *)(param_6 + 0xc) == '\x01') goto LAB_017a2f54;
      }
      else if ((local_50 == 0x407) ||
              (uVar2 = Type::SlowIs((Type *)&local_50,0x407), (uVar2 & 1) != 0)) {
        if (*(char *)(param_6 + 0xc) == '\x01') {
          pGVar6 = (Graph *)**(undefined8 **)(this + 8);
          pOVar3 = (Operator *)
                   MachineOperatorBuilder::ChangeFloat64ToUint32
                             ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
          local_48 = param_1;
          param_1 = (Node *)Graph::NewNode(pGVar6,pOVar3,1,&local_48,false);
          goto LAB_017a3068;
        }
      }
      else if (*(char *)(param_6 + 0xc) == '\x01') goto LAB_017a2e0c;
      uVar5 = 0xc;
LAB_017a3100:
      pNVar4 = (Node *)TypeError(this,param_1,uVar5,local_50,6);
      return pNVar4;
    }
    pGVar6 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::ChangeFloat64ToInt32
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  }
  local_48 = param_1;
  param_1 = (Node *)Graph::NewNode(pGVar6,pOVar3,1,&local_48,false);
  pOVar3 = (Operator *)
           SimplifiedOperatorBuilder::ChangeInt31ToTaggedSigned
                     (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
LAB_017a30ac:
  pNVar4 = (Node *)InsertConversion(this,param_1,pOVar3,param_5);
  return pNVar4;
}

