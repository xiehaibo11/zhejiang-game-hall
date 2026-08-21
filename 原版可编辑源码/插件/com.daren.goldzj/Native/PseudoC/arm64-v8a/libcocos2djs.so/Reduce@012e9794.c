
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::SimplifiedOperatorReducer::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::SimplifiedOperatorReducer::Reduce
          (SimplifiedOperatorReducer *this,Node *param_1)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  Node *this_00;
  Operator *pOVar6;
  JSGraph *this_01;
  Node *pNVar7;
  Node *pNVar8;
  MachineGraph *this_02;
  double dVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  Use *pUVar14;
  Node *pNVar15;
  Node *pNVar16;
  ObjectRef local_80 [8];
  long local_78;
  long local_60;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pNVar7 = (Node *)0x0;
  switch(*(undefined2 *)(*(long *)param_1 + 0x10)) {
  case 0x3f:
  case 0x41:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    uVar2 = *(ushort *)(*plVar13 + 0x10);
    if (uVar2 - 0x46 < 2) {
LAB_012e9ee8:
      uVar5 = *(uint *)((long)plVar13 + 0x14);
joined_r0x012ea024:
      plVar13 = plVar13 + 4;
      if ((~uVar5 & 0xf000000) == 0) {
        plVar13 = (long *)(*plVar13 + 0x10);
      }
      pNVar7 = (Node *)*plVar13;
      goto switchD_012e97ec_caseD_40;
    }
    if (uVar2 - 0x4b < 2) {
      pOVar6 = (Operator *)
               MachineOperatorBuilder::ChangeFloat64ToInt32
                         (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
      goto LAB_012e9ff8;
    }
    if (uVar2 != 0x1c) break;
    dVar9 = *(double *)(*plVar13 + 0x30);
    if ((((dVar9 < -2147483648.0) || (2147483647.0 < dVar9)) || (ABS(dVar9) == INFINITY)) ||
       (NAN(ABS(dVar9)))) {
LAB_012ea14c:
      uVar5 = 0xfffffbce;
      if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
        uVar5 = ((uint)((ulong)dVar9 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar5 < 0) {
        if ((int)uVar5 < -0x34) goto LAB_012ea198;
        uVar11 = (ulong)dVar9 & 0xfffffffffffff;
        if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
          uVar11 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar10 = (uint)(uVar11 >> ((ulong)-uVar5 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar5) {
LAB_012ea198:
          uVar5 = 0;
          goto LAB_012ea2e8;
        }
        uVar11 = (ulong)dVar9 & 0xfffffffffffff;
        if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
          uVar11 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar10 = (uint)(uVar11 << ((ulong)uVar5 & 0x3f));
      }
      uVar5 = -uVar10;
      if (-1 < (long)dVar9) {
        uVar5 = uVar10;
      }
    }
    else {
LAB_012ea13c:
      uVar5 = (int)dVar9;
      if ((double)(int)dVar9 != dVar9) goto LAB_012ea14c;
    }
LAB_012ea2e8:
    this_02 = *(MachineGraph **)(this + 0x10);
    goto LAB_012ea2ec;
  default:
    goto switchD_012e97ec_caseD_40;
  case 0x43:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    uVar2 = *(ushort *)(*plVar13 + 0x10);
    if (1 < uVar2 - 0x4b) {
      if (uVar2 == 0x49) goto LAB_012e9ee8;
      if (uVar2 == 0x1c) {
        dVar9 = *(double *)(*plVar13 + 0x30);
joined_r0x012ea108:
        if (((-2147483648.0 <= dVar9) && (dVar9 <= 2147483647.0)) &&
           ((ABS(dVar9) != INFINITY && (!NAN(ABS(dVar9)))))) goto LAB_012ea13c;
        goto LAB_012ea14c;
      }
      break;
    }
    pOVar6 = (Operator *)
             MachineOperatorBuilder::ChangeFloat64ToUint32
                       (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
LAB_012e9ff8:
    uVar5 = *(uint *)((long)plVar13 + 0x14);
    goto joined_r0x012ea04c;
  case 0x44:
  case 0x52:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    pNVar7 = (Node *)0x0;
    switch(*(undefined2 *)(*plVar13 + 0x10)) {
    case 0x1c:
      pNVar7 = (Node *)MachineGraph::Float64Constant
                                 (*(MachineGraph **)(this + 0x10),*(double *)(*plVar13 + 0x30));
    default:
      goto switchD_012e97ec_caseD_40;
    case 0x46:
    case 0x47:
      pOVar6 = (Operator *)
               MachineOperatorBuilder::ChangeInt32ToFloat64
                         (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
      break;
    case 0x49:
      pOVar6 = (Operator *)
               MachineOperatorBuilder::ChangeUint32ToFloat64
                         (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
      break;
    case 0x4b:
    case 0x4c:
switchD_012e98f8_caseD_4b:
      uVar5 = *(uint *)((long)plVar13 + 0x14);
      goto joined_r0x012ea024;
    }
LAB_012ea038:
    uVar5 = *(uint *)((long)plVar13 + 0x14);
joined_r0x012ea04c:
    plVar13 = plVar13 + 4;
    if ((~uVar5 & 0xf000000) == 0) {
      plVar13 = (long *)(*plVar13 + 0x10);
    }
    pNVar15 = param_1 + 0x20;
    pNVar16 = (Node *)*plVar13;
    pNVar7 = pNVar15;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar15 + 0x10);
    }
    pNVar8 = *(Node **)pNVar7;
    if (pNVar8 != pNVar16) {
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pUVar14 = (Use *)(*(long *)pNVar15 + -0x18);
      }
      else {
        pUVar14 = (Use *)(param_1 + -0x18);
      }
      if (pNVar8 != (Node *)0x0) {
        Node::RemoveUse(pNVar8,pUVar14);
      }
      *(Node **)pNVar7 = pNVar16;
      if (pNVar16 != (Node *)0x0) {
        Node::AppendUse(pNVar16,pUVar14);
      }
    }
    NodeProperties::ChangeOp(param_1,pOVar6);
    pNVar7 = param_1;
    goto switchD_012e97ec_caseD_40;
  case 0x46:
  case 0x47:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    sVar3 = *(short *)(*plVar13 + 0x10);
    if ((sVar3 == 0x41) || (sVar3 == 0x3f)) {
LAB_012e9e58:
      uVar5 = *(uint *)((long)plVar13 + 0x14);
      goto joined_r0x012ea024;
    }
    if (sVar3 == 0x17) {
      pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),
                                         (double)(long)*(int *)(*plVar13 + 0x2c));
      goto switchD_012e97ec_caseD_40;
    }
    break;
  case 0x49:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    if (*(short *)(**(long **)pNVar7 + 0x10) == 0x17) {
      dVar9 = (double)NEON_ucvtf((ulong)*(uint *)(**(long **)pNVar7 + 0x2c));
      pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),dVar9);
      goto switchD_012e97ec_caseD_40;
    }
    break;
  case 0x4b:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    sVar3 = *(short *)(*plVar13 + 0x10);
    if (sVar3 == 0x44) goto LAB_012e9e58;
    if (sVar3 == 0x1a) {
      pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),*(double *)(*plVar13 + 0x30));
      goto switchD_012e97ec_caseD_40;
    }
    break;
  case 0x4d:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    sVar3 = *(short *)(*plVar13 + 0x10);
    if (sVar3 == 0x4e) goto LAB_012e9e58;
    if (sVar3 != 0x1e) break;
    ObjectRef::ObjectRef(local_80,*(undefined8 *)(this + 0x18),*(undefined8 *)(*plVar13 + 0x30),0);
    uVar11 = ObjectRef::IsHeapObject(local_80);
    if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar5 = ObjectRef::BooleanValue(local_80);
    this_02 = *(MachineGraph **)(this + 0x10);
    uVar5 = uVar5 & 1;
LAB_012ea2ec:
    pNVar7 = (Node *)MachineGraph::Int32Constant(this_02,uVar5);
    goto switchD_012e97ec_caseD_40;
  case 0x4e:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    sVar3 = *(short *)(*plVar13 + 0x10);
    if (sVar3 == 0x4d) goto LAB_012e9e58;
    if (sVar3 == 0x17) {
      iVar1 = *(int *)(*plVar13 + 0x2c);
      if (iVar1 == 1) goto LAB_012e9edc;
      if (iVar1 == 0) goto LAB_012e9fcc;
    }
    break;
  case 0x51:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    uVar5 = *(ushort *)(*plVar13 + 0x10) - 0x1c;
    uVar11 = (ulong)uVar5;
    pNVar7 = (Node *)0x0;
    if (0x30 < uVar5) goto switchD_012e97ec_caseD_40;
    if ((1L << (uVar11 & 0x3f) & 0x2c0000000000U) != 0) goto switchD_012e98f8_caseD_4b;
    if ((1L << (uVar11 & 0x3f) & 0x1800000000000U) == 0) {
      if (uVar11 != 0) goto switchD_012e97ec_caseD_40;
      dVar9 = *(double *)(*plVar13 + 0x30);
      goto joined_r0x012ea108;
    }
    pOVar6 = (Operator *)
             MachineOperatorBuilder::TruncateFloat64ToWord32
                       (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
    goto LAB_012ea038;
  case 0x65:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    if (*(short *)(**(long **)pNVar7 + 0x10) == 0x1a) {
      dVar9 = *(double *)(**(long **)pNVar7 + 0x30);
      pNVar7 = (Node *)0x0;
      if (((dVar9 == -0.0) || (2147483647.0 < dVar9)) || (dVar9 < -2147483648.0))
      goto switchD_012e97ec_caseD_40;
      if ((double)(int)dVar9 == dVar9) {
        pNVar7 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),(int)dVar9);
        (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar7,0,0);
        goto switchD_012e97ec_caseD_40;
      }
    }
    break;
  case 0x67:
  case 0x68:
  case 0x69:
  case 0xd7:
    pNVar7 = param_1 + 0x20;
    uVar5 = *(uint *)(param_1 + 0x14) & 0xf000000;
    if (uVar5 == 0xf000000) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    if (*(short *)(*plVar13 + 0x10) == 0xe5) {
      uVar10 = *(uint *)((long)plVar13 + 0x14);
      pNVar16 = (Node *)(plVar13 + 4);
joined_r0x012e9f80:
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
      }
      pNVar8 = param_1 + 0x20;
      pNVar16 = *(Node **)pNVar16;
      pNVar15 = pNVar8;
      if (uVar5 == 0xf000000) {
        pNVar15 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      this_00 = *(Node **)pNVar15;
      pNVar7 = param_1;
      if (this_00 != pNVar16) {
        if (uVar5 == 0xf000000) {
          pUVar14 = (Use *)(*(long *)pNVar8 + -0x18);
        }
        else {
          pUVar14 = (Use *)(param_1 + -0x18);
        }
        if (this_00 != (Node *)0x0) {
          Node::RemoveUse(this_00,pUVar14);
        }
        *(Node **)pNVar15 = pNVar16;
        if (pNVar16 != (Node *)0x0) {
          Node::AppendUse(pNVar16,pUVar14);
        }
      }
      goto switchD_012e97ec_caseD_40;
    }
    break;
  case 0x75:
    BinopMatcher<v8::internal::compiler::HeapObjectMatcherImpl<(v8::internal::compiler::IrOpcode::Value)30>,v8::internal::compiler::HeapObjectMatcherImpl<(v8::internal::compiler::IrOpcode::Value)30>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::HeapObjectMatcherImpl<(v8::internal::compiler::IrOpcode::Value)30>,v8::internal::compiler::HeapObjectMatcherImpl<(v8::internal::compiler::IrOpcode::Value)30>>
                    *)local_80,param_1);
    if (local_78 == local_60) {
LAB_012e9edc:
      this_01 = *(JSGraph **)(this + 0x10);
LAB_012e9ee0:
      pNVar7 = (Node *)JSGraph::TrueConstant(this_01);
      goto switchD_012e97ec_caseD_40;
    }
    break;
  case 0x9b:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    if (*(short *)(**(long **)pNVar7 + 0x10) == 0x1c) {
      pNVar7 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),
                                         ABS(*(double *)(**(long **)pNVar7 + 0x30)));
      goto switchD_012e97ec_caseD_40;
    }
    break;
  case 199:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    plVar13 = *(long **)pNVar7;
    sVar3 = *(short *)(*plVar13 + 0x10);
    if (sVar3 == 199) {
      uVar5 = *(uint *)((long)plVar13 + 0x14);
      goto joined_r0x012ea024;
    }
    if (sVar3 == 0x1e) {
      this_01 = *(JSGraph **)(this + 0x10);
      lVar12 = *(long *)(*plVar13 + 0x30);
      if (lVar12 == *(long *)(this_01 + 0x168) + 0xb8) {
        pNVar7 = (Node *)JSGraph::FalseConstant(this_01);
        goto switchD_012e97ec_caseD_40;
      }
      if (lVar12 == *(long *)(this_01 + 0x168) + 0xc0) goto LAB_012e9ee0;
    }
    break;
  case 0xd5:
    pNVar7 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar7 = (Node *)(*(long *)pNVar7 + 0x10);
    }
    sVar3 = *(short *)(**(long **)pNVar7 + 0x10);
    if (sVar3 == 0x1e) {
      lVar12 = *(long *)(**(long **)pNVar7 + 0x30);
    }
    else {
      lVar12 = 0;
    }
    pNVar7 = (Node *)0x0;
    if ((sVar3 == 0x1e) && (lVar12 == *(long *)(*(long *)(this + 0x10) + 0x168) + 0xb8)) {
      pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    }
    goto switchD_012e97ec_caseD_40;
  case 0xdd:
    pNVar16 = param_1 + 0x20;
    uVar5 = *(uint *)(param_1 + 0x14) & 0xf000000;
    if (uVar5 == 0xf000000) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    uVar2 = *(ushort *)(*(long *)pNVar16 + 0x10);
    pNVar7 = (Node *)0x0;
    if (uVar2 < 0xdd) {
      if (uVar2 == 0x1c) {
        dVar9 = *(double *)(*(long *)pNVar16 + 0x30);
        pNVar7 = (Node *)0x0;
        if (((dVar9 == -0.0) || (1073741823.0 < dVar9)) || (dVar9 < -1073741824.0))
        goto switchD_012e97ec_caseD_40;
        if ((double)(int)dVar9 != dVar9) break;
      }
      else if (uVar2 != 0x46) goto switchD_012e97ec_caseD_40;
    }
    else if (uVar2 != 0xdd) {
      if (uVar2 != 0xe5) goto switchD_012e97ec_caseD_40;
      uVar10 = *(uint *)(pNVar16 + 0x14);
      pNVar16 = pNVar16 + 0x20;
      goto joined_r0x012e9f80;
    }
    goto LAB_012ea29c;
  case 0xde:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    pNVar16 = *(Node **)pNVar16;
    uVar2 = *(ushort *)(*(long *)pNVar16 + 0x10);
    pNVar7 = (Node *)0x0;
    if (uVar2 < 0x4e) {
      if (uVar2 == 0x1c) {
        dVar9 = *(double *)(*(long *)pNVar16 + 0x30);
        if (((dVar9 != -0.0) && (dVar9 <= 1073741823.0)) &&
           ((-1073741824.0 <= dVar9 && ((double)(int)dVar9 == dVar9)))) break;
      }
      else if (uVar2 != 0x1e) goto switchD_012e97ec_caseD_40;
    }
    else if (((uVar2 != 0x4e) && (uVar2 != 0xde)) && (uVar2 != 0xe7))
    goto switchD_012e97ec_caseD_40;
LAB_012ea29c:
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar16,0,0);
    pNVar7 = pNVar16;
    goto switchD_012e97ec_caseD_40;
  case 0x10f:
    pNVar16 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar16 = (Node *)(*(long *)pNVar16 + 0x10);
    }
    uVar2 = *(ushort *)(**(long **)pNVar16 + 0x10);
    pNVar7 = (Node *)0x0;
    if (uVar2 < 0x46) {
      if (uVar2 == 0x1c) {
        dVar9 = *(double *)(**(long **)pNVar16 + 0x30);
        if ((((dVar9 != -0.0) && (dVar9 <= 1073741823.0)) && (-1073741824.0 <= dVar9)) &&
           ((double)(int)dVar9 == dVar9)) goto LAB_012e9edc;
      }
      else if (uVar2 != 0x1e) goto switchD_012e97ec_caseD_40;
    }
    else {
      if (uVar2 == 0x46) goto LAB_012e9edc;
      if ((uVar2 != 0x4e) && (uVar2 != 0xe7)) goto switchD_012e97ec_caseD_40;
    }
LAB_012e9fcc:
    pNVar7 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    goto switchD_012e97ec_caseD_40;
  }
  pNVar7 = (Node *)0x0;
switchD_012e97ec_caseD_40:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return pNVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

