
/* v8::internal::compiler::RepresentationChanger::GetWord64RepresentationFor(v8::internal::compiler::Node*,
   v8::internal::MachineRepresentation, v8::internal::compiler::Type, v8::internal::compiler::Node*,
   v8::internal::compiler::UseInfo) */

void __thiscall
v8::internal::compiler::RepresentationChanger::GetWord64RepresentationFor
          (RepresentationChanger *this,Node *param_1,uint param_3,ulong param_4,Node *param_5,
          undefined8 *param_6)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  MachineOperatorBuilder *this_00;
  long lVar8;
  MachineGraph *this_01;
  Graph *pGVar9;
  SimplifiedOperatorBuilder *pSVar10;
  undefined8 uVar11;
  double dVar12;
  Node *local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)param_1;
  uVar1 = *(ushort *)(lVar8 + 0x10);
  local_98 = param_4;
  if (uVar1 == 0x1c) {
    dVar12 = *(double *)(lVar8 + 0x30);
    if (((dVar12 <= 9.223372036854776e+18) && (-9.223372036854776e+18 <= dVar12)) &&
       (lVar8 = (long)dVar12, dVar12 == (double)lVar8)) {
      this_01 = *(MachineGraph **)(this + 8);
LAB_017a4fcc:
      MachineGraph::Int64Constant(this_01,lVar8);
      goto LAB_017a501c;
    }
LAB_017a4fd4:
    if (local_98 == 1) goto LAB_017a4ff0;
LAB_017a4fe0:
    uVar5 = Type::SlowIs((Type *)&local_98,1);
    if ((uVar5 & 1) != 0) goto LAB_017a4ff0;
    switch(param_3 & 0xff) {
    case 1:
      if ((local_98 != 0x201) && (uVar5 = Type::SlowIs((Type *)&local_98,0x201), (uVar5 & 1) == 0))
      {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","output_type.Is(Type::Boolean())");
      }
      if (*(char *)((long)param_6 + 0xc) == '\x05') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","use_info.type_check() != TypeCheckKind::kNumberOrOddball");
      }
      if (*(char *)((long)param_6 + 0xc) == '\0') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","use_info.type_check() != TypeCheckKind::kNone");
      }
      pNVar7 = (Node *)InsertUnconditionalDeopt(this,param_5,0x1a);
      pGVar9 = (Graph *)**(undefined8 **)(this + 8);
      pOVar6 = (Operator *)
               CommonOperatorBuilder::DeadValue
                         ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],5);
      local_90._0_8_ = pNVar7;
      goto LAB_017a5008;
    case 2:
    case 3:
    case 4:
      if ((local_98 == 0xc07) || (uVar5 = Type::SlowIs((Type *)&local_98,0xc07), (uVar5 & 1) != 0))
      {
        uVar5 = Type::Maybe((Type *)&local_98,0x801);
        if (((uVar5 & 1) != 0) && (*(int *)(param_6 + 1) != 0)) {
LAB_017a5538:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "output_type.Maybe(Type::MinusZero()) implies use_info.truncation().IdentifiesZeroAndMinusZero()"
                  );
        }
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::ChangeUint32ToUint64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      }
      else {
        if ((local_98 != 0xc4b) && (uVar5 = Type::SlowIs((Type *)&local_98,0xc4b), (uVar5 & 1) == 0)
           ) goto LAB_017a53e8;
        uVar5 = Type::Maybe((Type *)&local_98,0x801);
        if (((uVar5 & 1) != 0) && (*(int *)(param_6 + 1) != 0)) goto LAB_017a5538;
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::ChangeInt32ToInt64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      }
      break;
    default:
      if (1 < (param_3 - 7 & 0xff)) {
LAB_017a53e8:
        TypeError(this,param_1,param_3,local_98,5);
        goto LAB_017a501c;
      }
      if (5 < *(byte *)((long)param_6 + 4)) {
LAB_017a5514:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (((1 << (ulong)(*(byte *)((long)param_6 + 4) & 0x1f) & 0xdU) == 0) ||
         (((*(char *)((long)param_6 + 0xc) != '\a' && (local_98 != 0x8000001)) &&
          (uVar5 = Type::SlowIs((Type *)&local_98,0x8000001), (uVar5 & 1) == 0)))) {
        if ((local_98 == *(ulong *)(*(long *)this + 0xa0)) ||
           (uVar5 = Type::SlowIs((Type *)&local_98), (uVar5 & 1) != 0)) {
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::ChangeTaggedToInt64
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
        }
        else if (*(char *)((long)param_6 + 0xc) == '\b') {
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::CheckedTaggedToArrayIndex
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178),
                              (FeedbackSource *)(param_6 + 2));
        }
        else {
          if (*(char *)((long)param_6 + 0xc) != '\x03') goto LAB_017a53e8;
          pSVar10 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
          uVar5 = Type::Maybe((Type *)&local_98,0x801);
          if ((uVar5 & 1) == 0) {
            bVar3 = true;
          }
          else {
            bVar3 = *(int *)(param_6 + 1) == 0;
          }
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::CheckedTaggedToInt64(pSVar10,bVar3,param_6 + 2);
        }
      }
      else {
        uStack_78 = param_6[1];
        local_80 = *param_6;
        uStack_68 = param_6[3];
        uStack_70 = param_6[2];
        param_1 = (Node *)GetTaggedPointerRepresentationFor
                                    (this,param_1,param_3,local_98,param_5,&local_80);
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::TruncateBigIntToUint64
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
      }
      break;
    case 6:
      uVar4 = BitsetType::SignedSmall();
      if ((local_98 != (uVar4 | 1)) && (uVar5 = Type::SlowIs((Type *)&local_98), (uVar5 & 1) == 0))
      {
        uVar11 = 6;
LAB_017a5398:
        TypeError(this,param_1,uVar11,local_98,5);
        goto LAB_017a501c;
      }
      pOVar6 = (Operator *)
               SimplifiedOperatorBuilder::ChangeTaggedSignedToInt64
                         (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
      break;
    case 0xb:
      if ((local_98 == *(ulong *)(*(long *)this + 0xa0)) ||
         (uVar5 = Type::SlowIs((Type *)&local_98), (uVar5 & 1) != 0)) {
        pGVar9 = (Graph *)**(undefined8 **)(this + 8);
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::ChangeFloat32ToFloat64
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
        local_90._0_8_ = param_1;
        param_1 = (Node *)Graph::NewNode(pGVar9,pOVar6,1,(Node **)local_90,false);
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::ChangeFloat64ToInt64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      }
      else if ((local_98 == *(ulong *)(*(long *)this + 0xa8)) ||
              (uVar5 = Type::SlowIs((Type *)&local_98), (uVar5 & 1) != 0)) {
        pGVar9 = (Graph *)**(undefined8 **)(this + 8);
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::ChangeFloat32ToFloat64
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
        local_90._0_8_ = param_1;
        param_1 = (Node *)Graph::NewNode(pGVar9,pOVar6,1,(Node **)local_90,false);
        this_00 = *(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10);
LAB_017a5374:
        pOVar6 = (Operator *)MachineOperatorBuilder::ChangeFloat64ToUint64(this_00);
      }
      else {
        if ((*(char *)((long)param_6 + 0xc) != '\b') && (*(char *)((long)param_6 + 0xc) != '\x03'))
        {
          uVar11 = 0xb;
          goto LAB_017a5398;
        }
        pGVar9 = (Graph *)**(undefined8 **)(this + 8);
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::ChangeFloat32ToFloat64
                           ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
        bVar3 = true;
        local_90._0_8_ = param_1;
        param_1 = (Node *)Graph::NewNode(pGVar9,pOVar6,1,(Node **)local_90,false);
        pSVar10 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
        uVar5 = Type::Maybe((Type *)&local_98,0x801);
        if ((uVar5 & 1) != 0) {
          bVar3 = *(int *)(param_6 + 1) == 0;
        }
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::CheckedFloat64ToInt64(pSVar10,bVar3,param_6 + 2);
      }
      break;
    case 0xc:
      if ((local_98 == *(ulong *)(*(long *)this + 0xa0)) ||
         (uVar5 = Type::SlowIs((Type *)&local_98), (uVar5 & 1) != 0)) {
        pOVar6 = (Operator *)
                 MachineOperatorBuilder::ChangeFloat64ToInt64
                           (*(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10));
      }
      else {
        if ((local_98 == *(ulong *)(*(long *)this + 0xa8)) ||
           (uVar5 = Type::SlowIs((Type *)&local_98), (uVar5 & 1) != 0)) {
          this_00 = *(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10);
          goto LAB_017a5374;
        }
        if ((*(char *)((long)param_6 + 0xc) != '\b') && (*(char *)((long)param_6 + 0xc) != '\x03'))
        {
          uVar11 = 0xc;
          goto LAB_017a5398;
        }
        pSVar10 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178);
        uVar5 = Type::Maybe((Type *)&local_98,0x801);
        if ((uVar5 & 1) == 0) {
          bVar3 = true;
        }
        else {
          bVar3 = *(int *)(param_6 + 1) == 0;
        }
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::CheckedFloat64ToInt64(pSVar10,bVar3,param_6 + 2);
      }
    }
    InsertConversion(this,param_1,pOVar6,param_5);
  }
  else {
    if (uVar1 == 0x1e) {
      uVar11 = *(undefined8 *)(lVar8 + 0x30);
      ObjectRef::ObjectRef((ObjectRef *)local_90,*(undefined8 *)(this + 0x10),uVar11,0);
      uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_90);
      if ((uVar5 & 1) == 0) {
LAB_017a5524:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      local_a8 = (Node *)local_90._0_8_;
      uStack_a0 = local_90._8_8_;
      uVar5 = ObjectRef::IsBigInt((ObjectRef *)&local_a8);
      if ((uVar5 & 1) != 0) {
        if (5 < *(byte *)((long)param_6 + 4)) goto LAB_017a5514;
        if ((1 << (ulong)(*(byte *)((long)param_6 + 4) & 0x1f) & 0xdU) != 0) {
          ObjectRef::ObjectRef((ObjectRef *)local_90,*(undefined8 *)(this + 0x10),uVar11,0);
          uVar5 = ObjectRef::IsHeapObject((ObjectRef *)local_90);
          if ((uVar5 & 1) == 0) goto LAB_017a5524;
          local_a8 = (Node *)local_90._0_8_;
          uStack_a0 = local_90._8_8_;
          local_90 = ObjectRef::AsBigInt((ObjectRef *)&local_a8);
          this_01 = *(MachineGraph **)(this + 8);
          lVar8 = BigIntRef::AsUint64((BigIntRef *)local_90);
          goto LAB_017a4fcc;
        }
      }
      goto LAB_017a4fd4;
    }
    if (uVar1 - 0x17 < 4) goto LAB_017a5514;
    if (param_4 != 1) goto LAB_017a4fe0;
LAB_017a4ff0:
    pGVar9 = (Graph *)**(undefined8 **)(this + 8);
    pOVar6 = (Operator *)
             CommonOperatorBuilder::DeadValue
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],5);
    local_90._0_8_ = param_1;
LAB_017a5008:
    Graph::NewNode(pGVar9,pOVar6,1,(Node **)local_90,false);
  }
LAB_017a501c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

