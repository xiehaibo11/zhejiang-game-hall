
/* v8::internal::compiler::RepresentationChanger::GetBitRepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::RepresentationChanger::GetBitRepresentationFor
          (RepresentationChanger *this,Node *param_1,uint param_3,long param_4)

{
  uint uVar1;
  MachineGraph *this_00;
  ulong uVar2;
  Operator *pOVar3;
  Graph *pGVar4;
  Node *pNVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  SimplifiedOperatorBuilder *this_01;
  long local_48;
  Node *local_40;
  undefined8 uStack_38;
  
  local_48 = param_4;
  if (*(short *)(*(long *)param_1 + 0x10) == 0x1e) {
    lVar8 = *(long *)(*(long *)param_1 + 0x30);
    if (lVar8 == **(long **)(this + 0x10) + 0xc0) {
      this_00 = *(MachineGraph **)(this + 8);
      iVar7 = 0;
LAB_017a42ac:
      MachineGraph::Int32Constant(this_00,iVar7);
      return;
    }
    if (lVar8 == **(long **)(this + 0x10) + 0xb8) {
      this_00 = *(MachineGraph **)(this + 8);
      iVar7 = 1;
      goto LAB_017a42ac;
    }
  }
  local_40 = param_1;
  if ((param_4 == 1) || (uVar2 = Type::SlowIs((Type *)&local_48,1), (uVar2 & 1) != 0)) {
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::DeadValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],1);
    iVar7 = 1;
    goto LAB_017a42fc;
  }
  if ((param_3 - 7 & 0xff) < 2) {
    if ((local_48 == 0x381) || (uVar2 = Type::SlowIs((Type *)&local_48,0x381), (uVar2 & 1) != 0)) {
      pOVar3 = (Operator *)
               SimplifiedOperatorBuilder::ChangeTaggedToBit
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    }
    else {
      if ((param_3 & 0xff) == 8) {
        uVar1 = BitsetType::SignedSmall();
        uVar2 = Type::Maybe((Type *)&local_48,uVar1 | 1);
        this_01 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
        if ((uVar2 & 1) != 0) {
          pOVar3 = (Operator *)SimplifiedOperatorBuilder::TruncateTaggedToBit(this_01);
          goto LAB_017a4350;
        }
      }
      else {
        this_01 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
      }
      pOVar3 = (Operator *)SimplifiedOperatorBuilder::TruncateTaggedPointerToBit(this_01);
    }
LAB_017a4350:
    iVar7 = 1;
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    goto LAB_017a42fc;
  }
  switch(param_3 & 0xff) {
  case 2:
  case 3:
  case 4:
  case 6:
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    goto LAB_017a43b8;
  case 5:
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word64Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    uStack_38 = MachineGraph::Int64Constant(*(MachineGraph **)(this + 8),0);
LAB_017a43b8:
    pNVar5 = (Node *)Graph::NewNode(pGVar4,pOVar3,2,&local_40,false);
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Word32Equal
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    uStack_38 = MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
    local_40 = pNVar5;
    break;
  default:
    TypeError(this,param_1,param_3,local_48,1);
    return;
  case 0xb:
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Float32Abs
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    uVar6 = Graph::NewNode(pGVar4,pOVar3,1,&local_40,false);
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Float32LessThan
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_40 = (Node *)MachineGraph::Float32Constant(*(MachineGraph **)(this + 8),0.0);
    uStack_38 = uVar6;
    break;
  case 0xc:
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Float64Abs
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    uVar6 = Graph::NewNode(pGVar4,pOVar3,1,&local_40,false);
    pGVar4 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             MachineOperatorBuilder::Float64LessThan
                       ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
    local_40 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)(this + 8),0.0);
    uStack_38 = uVar6;
  }
  iVar7 = 2;
LAB_017a42fc:
  Graph::NewNode(pGVar4,pOVar3,iVar7,&local_40,false);
  return;
}

