
/* v8::internal::compiler::RepresentationChanger::GetTaggedPointerRepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type, v8::internal::compiler::Node*,
   v8::internal::compiler::UseInfo) */

Node * __thiscall
v8::internal::compiler::RepresentationChanger::GetTaggedPointerRepresentationFor
          (RepresentationChanger *this,Node *param_1,uint param_3,long param_4,Node *param_5,
          long param_6)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  Operator *pOVar4;
  Node *pNVar5;
  SimplifiedOperatorBuilder *this_00;
  undefined8 uVar6;
  undefined8 uVar7;
  Graph *pGVar8;
  long local_50;
  Node *local_48;
  
  uVar2 = (uint)*(ushort *)(*(long *)param_1 + 0x10);
  local_50 = param_4;
  if (*(ushort *)(*(long *)param_1 + 0x10) < 0x119) {
    if (uVar2 == 0x1e) {
      return param_1;
    }
    if ((uVar2 - 0x19 < 2) || (uVar2 == 0x17)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  else if (uVar2 == 0x119) {
    return param_1;
  }
  if ((param_4 == 1) || (uVar3 = Type::SlowIs((Type *)&local_50,1), (uVar3 & 1) != 0)) {
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    pOVar4 = (Operator *)
             CommonOperatorBuilder::DeadValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],7);
    local_48 = param_1;
    pNVar5 = (Node *)Graph::NewNode(pGVar8,pOVar4,1,&local_48,false);
    return pNVar5;
  }
  switch(param_3 & 0xff) {
  case 1:
    if ((local_50 != 0x201) && (uVar3 = Type::SlowIs((Type *)&local_50,0x201), (uVar3 & 1) == 0)) {
      uVar6 = 1;
      uVar7 = 8;
      goto LAB_017a34c8;
    }
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::ChangeBitToTagged
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    goto LAB_017a3434;
  case 2:
  case 3:
  case 4:
    if ((local_50 == 0x407) || (uVar3 = Type::SlowIs((Type *)&local_50,0x407), (uVar3 & 1) != 0)) {
      pGVar8 = (Graph *)**(undefined8 **)(this + 8);
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToFloat64
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    }
    else {
      if ((local_50 != 1099) && (uVar3 = Type::SlowIs((Type *)&local_50,1099), (uVar3 & 1) == 0))
      goto switchD_017a320c_caseD_9;
      pGVar8 = (Graph *)**(undefined8 **)(this + 8);
      pOVar4 = (Operator *)
               MachineOperatorBuilder::ChangeInt32ToFloat64
                         ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    }
    local_48 = param_1;
    param_1 = (Node *)Graph::NewNode(pGVar8,pOVar4,1,&local_48,false);
    break;
  case 5:
    if ((local_50 != *(long *)(*(long *)this + 400)) &&
       (uVar3 = Type::SlowIs((Type *)&local_50), (uVar3 & 1) == 0)) {
      if ((local_50 == 0x8000001) ||
         (uVar3 = Type::SlowIs((Type *)&local_50,0x8000001), (uVar3 & 1) != 0)) {
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::ChangeUint64ToBigInt
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
        goto LAB_017a3434;
      }
      uVar6 = 5;
LAB_017a34c4:
      uVar7 = 7;
LAB_017a34c8:
      pNVar5 = (Node *)TypeError(this,param_1,uVar6,local_50,uVar7);
      return pNVar5;
    }
    pOVar4 = (Operator *)
             MachineOperatorBuilder::ChangeInt64ToFloat64
                       (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    goto LAB_017a336c;
  case 6:
  case 8:
    cVar1 = *(char *)(param_6 + 0xc);
    if (cVar1 == '\x06') {
      uVar2 = BitsetType::SignedSmall();
      uVar3 = Type::Maybe((Type *)&local_50,uVar2 | 1);
      if ((uVar3 & 1) == 0) {
        return param_1;
      }
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::CheckedTaggedToTaggedPointer
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                          (FeedbackSource *)(param_6 + 0x10));
      goto LAB_017a3434;
    }
    goto LAB_017a32e8;
  case 7:
    cVar1 = *(char *)(param_6 + 0xc);
LAB_017a32e8:
    if (cVar1 != '\a') {
      if (local_50 == 0x8000001) {
        return param_1;
      }
      uVar3 = Type::SlowIs((Type *)&local_50,0x8000001);
      if ((uVar3 & 1) == 0) {
switchD_017a320c_caseD_9:
        pNVar5 = (Node *)TypeError(this,param_1,param_3,local_50,7);
        return pNVar5;
      }
    }
    if (local_50 == 0x8000001) {
      return param_1;
    }
    uVar3 = Type::SlowIs((Type *)&local_50,0x8000001);
    if ((uVar3 & 1) != 0) {
      return param_1;
    }
    pOVar4 = (Operator *)
             SimplifiedOperatorBuilder::CheckBigInt
                       (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                        (FeedbackSource *)(param_6 + 0x10));
    goto LAB_017a3434;
  default:
    goto switchD_017a320c_caseD_9;
  case 0xb:
    if ((local_50 != 0x1c5f) && (uVar3 = Type::SlowIs((Type *)&local_50,0x1c5f), (uVar3 & 1) == 0))
    {
      uVar6 = 0xb;
      goto LAB_017a34c4;
    }
    pGVar8 = (Graph *)**(undefined8 **)(this + 8);
    pOVar4 = (Operator *)
             MachineOperatorBuilder::ChangeFloat32ToFloat64
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
LAB_017a336c:
    local_48 = param_1;
    param_1 = (Node *)Graph::NewNode(pGVar8,pOVar4,1,&local_48,false);
    this_00 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
    goto LAB_017a3430;
  case 0xc:
    if ((local_50 != 0x1c5f) && (uVar3 = Type::SlowIs((Type *)&local_50,0x1c5f), (uVar3 & 1) == 0))
    {
      uVar6 = 0xc;
      goto LAB_017a34c4;
    }
  }
  this_00 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
LAB_017a3430:
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::ChangeFloat64ToTaggedPointer(this_00);
LAB_017a3434:
  pNVar5 = (Node *)InsertConversion(this,param_1,pOVar4,param_5);
  return pNVar5;
}

