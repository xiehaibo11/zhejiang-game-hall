
/* v8::internal::compiler::RepresentationChanger::GetFloat32RepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type,
   v8::internal::compiler::Truncation) */

void __thiscall
v8::internal::compiler::RepresentationChanger::GetFloat32RepresentationFor
          (RepresentationChanger *this,Node *param_1,uint param_3,long param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  Operator *pOVar4;
  Graph *this_00;
  SimplifiedOperatorBuilder *this_01;
  float fVar5;
  double dVar6;
  long local_40;
  Node *local_38;
  
  uVar2 = *(ushort *)(*(long *)param_1 + 0x10);
  local_40 = param_4;
  if (uVar2 == 0x1c) {
    dVar6 = *(double *)(*(long *)param_1 + 0x30);
    if (dVar6 <= 3.4028234663852886e+38) {
      if (-3.4028234663852886e+38 <= dVar6) {
        fVar5 = (float)dVar6;
      }
      else if (-3.4028235677973362e+38 <= dVar6) {
        fVar5 = -3.4028235e+38;
      }
      else {
        fVar5 = -INFINITY;
      }
    }
    else if (dVar6 <= 3.4028235677973362e+38) {
      fVar5 = 3.4028235e+38;
    }
    else {
      fVar5 = INFINITY;
    }
    MachineGraph::Float32Constant(*(MachineGraph **)(this + 8),fVar5);
    return;
  }
  if ((uVar2 - 0x19 < 2) || (uVar2 == 0x17)) {
LAB_017a3d84:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if ((param_4 == 1) || (uVar3 = Type::SlowIs((Type *)&local_40,1), (uVar3 & 1) != 0)) {
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar4 = (Operator *)
             CommonOperatorBuilder::DeadValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],0xb);
    local_38 = param_1;
LAB_017a3b04:
    Graph::NewNode(this_00,pOVar4,1,&local_38,false);
  }
  else {
    if ((param_3 - 2 & 0xff) < 3) {
      if ((local_40 == 1099) || (uVar3 = Type::SlowIs((Type *)&local_40,1099), (uVar3 & 1) != 0)) {
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::ChangeInt32ToFloat64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      }
      else {
        if ((local_40 != 0x407) && (uVar3 = Type::SlowIs((Type *)&local_40,0x407), (uVar3 & 1) == 0)
           ) {
          if (5 < (param_5 & 0xff)) goto LAB_017a3d84;
          if ((1 << (ulong)(param_5 & 0x1f) & 0x3aU) != 0) goto LAB_017a3d68;
        }
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::ChangeUint32ToFloat64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      }
LAB_017a3d18:
      local_38 = param_1;
      param_1 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar4,1,&local_38,false
                                      );
LAB_017a3d3c:
      pOVar4 = (Operator *)
               MachineOperatorBuilder::TruncateFloat64ToFloat32
                         (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      if (pOVar4 != (Operator *)0x0) {
        this_00 = (Graph *)**(undefined8 **)(this + 8);
        local_38 = param_1;
        goto LAB_017a3b04;
      }
    }
    else {
      uVar1 = param_3 & 0xff;
      if (uVar1 - 6 < 3) {
        if (local_40 == 0x801fdf) {
LAB_017a3c64:
          uVar3 = Type::SlowIs((Type *)&local_40,0x1c5f);
          this_01 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
          if ((uVar3 & 1) == 0) {
            pOVar4 = (Operator *)SimplifiedOperatorBuilder::TruncateTaggedToFloat64(this_01);
            goto LAB_017a3d18;
          }
        }
        else {
          uVar3 = Type::SlowIs((Type *)&local_40,0x801fdf);
          if ((uVar3 & 1) == 0) goto LAB_017a3d68;
          if (local_40 != 0x1c5f) goto LAB_017a3c64;
          this_01 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
        }
        pOVar4 = (Operator *)SimplifiedOperatorBuilder::ChangeTaggedToFloat64(this_01);
        goto LAB_017a3d18;
      }
      if (uVar1 != 5) {
        if (uVar1 != 0xc) goto LAB_017a3d68;
        goto LAB_017a3d3c;
      }
      if ((local_40 == *(long *)(*(long *)this + 400)) ||
         (uVar3 = Type::SlowIs((Type *)&local_40), (uVar3 & 1) != 0)) {
        pOVar4 = (Operator *)
                 MachineOperatorBuilder::ChangeInt64ToFloat64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
        goto LAB_017a3d18;
      }
    }
LAB_017a3d68:
    TypeError(this,param_1,param_3,local_40,0xb);
  }
  return;
}

