
/* v8::internal::compiler::RepresentationChanger::GetFloat64RepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type, v8::internal::compiler::Node*,
   v8::internal::compiler::UseInfo) */

void __thiscall
v8::internal::compiler::RepresentationChanger::GetFloat64RepresentationFor
          (RepresentationChanger *this,Node *param_1,uint param_3,long param_4,Node *param_5,
          long param_6)

{
  uint uVar1;
  ulong uVar2;
  Operator *pOVar3;
  MachineOperatorBuilder *this_00;
  Node *pNVar4;
  undefined8 uVar5;
  long lVar6;
  Graph *pGVar7;
  long local_50;
  Node *local_48;
  
  local_50 = param_4;
  if (((*(short *)(*(long *)param_1 + 0x10) == 0x1c) && (*(byte *)(param_6 + 0xc) < 6)) &&
     ((1 << (ulong)(*(byte *)(param_6 + 0xc) & 0x1f) & 0x31U) != 0)) {
    MachineGraph::Float64Constant(*(MachineGraph **)(this + 8),*(double *)(*(long *)param_1 + 0x30))
    ;
    return;
  }
  if ((param_4 == 1) || (uVar2 = Type::SlowIs((Type *)&local_50,1), (uVar2 & 1) != 0)) {
    pGVar7 = (Graph *)**(undefined8 **)(this + 8);
    pOVar3 = (Operator *)
             CommonOperatorBuilder::DeadValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],0xc);
    local_48 = param_1;
LAB_017a3e40:
    Graph::NewNode(pGVar7,pOVar3,1,&local_48,false);
  }
  else {
    if ((param_3 & 0xff) - 2 < 3) {
      if (((local_50 == 1099) || (uVar2 = Type::SlowIs((Type *)&local_50,1099), (uVar2 & 1) != 0))
         || (((local_50 == 0xc4b ||
              (uVar2 = Type::SlowIs((Type *)&local_50,0xc4b), (uVar2 & 1) != 0)) &&
             (*(int *)(param_6 + 8) == 0)))) {
        this_00 = *(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10);
LAB_017a3ec4:
        pOVar3 = (Operator *)MachineOperatorBuilder::ChangeInt32ToFloat64(this_00);
        goto joined_r0x017a418c;
      }
      if ((local_50 != 0x407) && (uVar2 = Type::SlowIs((Type *)&local_50,0x407), (uVar2 & 1) == 0))
      {
        if ((local_50 == 0xc07) || (uVar2 = Type::SlowIs((Type *)&local_50,0xc07), (uVar2 & 1) != 0)
           ) {
          uVar2 = *(ulong *)(param_6 + 4);
          if (uVar2 >> 0x20 == 0) goto LAB_017a40ec;
        }
        else {
          uVar2 = *(ulong *)(param_6 + 4);
        }
        if (5 < ((uint)uVar2 & 0xff)) {
LAB_017a420c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        if ((1 << (ulong)((uint)uVar2 & 0x1f) & 0x3aU) != 0) goto LAB_017a4190;
      }
LAB_017a40ec:
      pOVar3 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToFloat64
                         (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
joined_r0x017a418c:
      if (pOVar3 != (Operator *)0x0) {
        InsertConversion(this,param_1,pOVar3,param_5);
        return;
      }
    }
    else {
      if ((param_3 & 0xff) == 1) {
        if ((local_50 != 0x201) && (uVar2 = Type::SlowIs((Type *)&local_50,0x201), (uVar2 & 1) == 0)
           ) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","output_type.Is(Type::Boolean())");
        }
        if (5 < *(byte *)(param_6 + 4)) goto LAB_017a420c;
        if (((1 << (ulong)(*(byte *)(param_6 + 4) & 0x1f) & 0x1dU) != 0) ||
           (*(char *)(param_6 + 0xc) == '\x05')) goto LAB_017a40ec;
        if (*(char *)(param_6 + 0xc) == '\0') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","use_info.type_check() != TypeCheckKind::kNone");
        }
        pNVar4 = (Node *)InsertUnconditionalDeopt(this,param_5,0x15);
        pGVar7 = (Graph *)**(undefined8 **)(this + 8);
        pOVar3 = (Operator *)
                 CommonOperatorBuilder::DeadValue
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],0xc);
        local_48 = pNVar4;
        goto LAB_017a3e40;
      }
      uVar1 = param_3 & 0xff;
      if (uVar1 - 6 < 3) {
        if ((local_50 == 0x101) || (uVar2 = Type::SlowIs((Type *)&local_50,0x101), (uVar2 & 1) != 0)
           ) {
          MachineGraph::Float64Constant(*(MachineGraph **)(this + 8),NAN);
          return;
        }
        if ((param_3 & 0xff) == 6) {
          pGVar7 = (Graph *)**(undefined8 **)(this + 8);
          pOVar3 = (Operator *)
                   SimplifiedOperatorBuilder::ChangeTaggedSignedToInt32
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 8))[0x2f]);
          local_48 = param_1;
          param_1 = (Node *)Graph::NewNode(pGVar7,pOVar3,1,&local_48,false);
          this_00 = *(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10);
          goto LAB_017a3ec4;
        }
        if ((local_50 == 0x1c5f) ||
           (uVar2 = Type::SlowIs((Type *)&local_50,0x1c5f), (uVar2 & 1) != 0)) {
          pOVar3 = (Operator *)
                   SimplifiedOperatorBuilder::ChangeTaggedToFloat64
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
          goto joined_r0x017a418c;
        }
        if ((local_50 == 0x801fdf) ||
           (uVar2 = Type::SlowIs((Type *)&local_50,0x801fdf), (uVar2 & 1) != 0)) {
          if (5 < *(byte *)(param_6 + 4)) goto LAB_017a420c;
          if ((1 << (ulong)(*(byte *)(param_6 + 4) & 0x1f) & 0x1dU) == 0) goto LAB_017a415c;
        }
        else {
LAB_017a415c:
          if ((local_50 != 0x801c5f) &&
             (uVar2 = Type::SlowIs((Type *)&local_50,0x801c5f), (uVar2 & 1) == 0)) {
            if (*(char *)(param_6 + 0xc) == '\x04') {
LAB_017a41ec:
              lVar6 = *(long *)(this + 8);
              uVar5 = 0;
            }
            else {
              if (*(char *)(param_6 + 0xc) != '\x05') goto LAB_017a4190;
              uVar2 = Type::Maybe((Type *)&local_50,0x1edf);
              if ((uVar2 & 1) == 0) goto LAB_017a41ec;
              if (*(char *)(param_6 + 0xc) != '\x05') goto LAB_017a4190;
              lVar6 = *(long *)(this + 8);
              uVar5 = 1;
            }
            pOVar3 = (Operator *)
                     SimplifiedOperatorBuilder::CheckedTaggedToFloat64
                               (*(SimplifiedOperatorBuilder **)(lVar6 + 0x178),uVar5,param_6 + 0x10)
            ;
            goto joined_r0x017a418c;
          }
        }
        pOVar3 = (Operator *)
                 SimplifiedOperatorBuilder::TruncateTaggedToFloat64
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
        goto joined_r0x017a418c;
      }
      if (uVar1 == 5) {
        if ((local_50 == *(long *)(*(long *)this + 400)) ||
           (uVar2 = Type::SlowIs((Type *)&local_50), (uVar2 & 1) != 0)) {
          pOVar3 = (Operator *)
                   MachineOperatorBuilder::ChangeInt64ToFloat64
                             (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
          goto joined_r0x017a418c;
        }
      }
      else if (uVar1 == 0xb) {
        pOVar3 = (Operator *)
                 MachineOperatorBuilder::ChangeFloat32ToFloat64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
        goto joined_r0x017a418c;
      }
    }
LAB_017a4190:
    TypeError(this,param_1,param_3,local_50,0xc);
  }
  return;
}

