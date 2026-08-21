
/* v8::internal::compiler::InstructionSelector::AddOperandToStateValueDescriptor(v8::internal::compiler::StateValueList*,
   v8::internal::ZoneVector<v8::internal::compiler::InstructionOperand>*,
   v8::internal::compiler::OperandGenerator*, v8::internal::compiler::StateObjectDeduplicator*,
   v8::internal::compiler::Node*, v8::internal::MachineType,
   v8::internal::compiler::FrameStateInputKind, v8::internal::Zone*) */

long __thiscall
v8::internal::compiler::InstructionSelector::AddOperandToStateValueDescriptor
          (InstructionSelector *this,StateValueList *param_1,long *param_2,long *param_3,
          long *param_4,Node *param_5,ushort param_7,int param_8,Zone *param_9)

{
  ulong *puVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  Operator *pOVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  Zone *pZVar16;
  Node *pNVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  InstructionSequence *this_00;
  long lVar26;
  undefined8 uVar27;
  undefined1 local_70 [16];
  
  auVar3._8_8_ = local_70._8_8_;
  auVar3._0_8_ = local_70._0_8_;
  if (param_5 == (Node *)0x0) goto LAB_01634ae8;
  pOVar8 = *(Operator **)param_5;
  uVar2 = *(ushort *)(pOVar8 + 0x10);
  uVar12 = (ulong)uVar2;
  switch(uVar2) {
  case 0x2c:
    uVar4 = ArgumentsStateTypeOf(pOVar8);
    StateValueList::PushArgumentsElements(param_1,uVar4);
    puVar11 = (undefined8 *)param_4[1];
    if ((undefined8 *)param_4[2] != puVar11) {
      *puVar11 = param_5;
      param_4[1] = param_4[1] + 8;
      return 0;
    }
    lVar26 = (long)puVar11 - *param_4 >> 3;
    uVar12 = lVar26 + 1;
    if (uVar12 >> 0x1c == 0) {
      lVar15 = param_4[2] - *param_4;
      uVar9 = lVar15 >> 2;
      if (uVar12 <= uVar9) {
        uVar12 = uVar9;
      }
      if (0x7fffffe < (ulong)(lVar15 >> 3)) {
        uVar12 = 0xfffffff;
      }
      if (uVar12 == 0) {
        lVar15 = 0;
      }
      else {
        pZVar16 = (Zone *)param_4[3];
        uVar9 = uVar12 * 8;
        lVar15 = *(long *)(pZVar16 + 0x10);
        if (uVar9 < (ulong)(*(long *)(pZVar16 + 0x18) - lVar15) ||
            uVar9 - (*(long *)(pZVar16 + 0x18) - lVar15) == 0) {
          *(ulong *)(pZVar16 + 0x10) = lVar15 + uVar9;
        }
        else {
          lVar15 = Zone::NewExpand(pZVar16,uVar9);
        }
      }
      puVar11 = (undefined8 *)(lVar15 + lVar26 * 8);
      puVar19 = puVar11 + 1;
      *puVar11 = param_5;
      puVar13 = (undefined8 *)*param_4;
      puVar24 = (undefined8 *)param_4[1];
      while (puVar24 != puVar13) {
        puVar24 = puVar24 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar24;
      }
      *param_4 = (long)puVar11;
      param_4[1] = (long)puVar19;
      param_4[2] = lVar15 + uVar12 * 8;
      return 0;
    }
    goto LAB_01634b68;
  case 0x2d:
    uVar4 = ArgumentsStateTypeOf(pOVar8);
    StateValueList::PushArgumentsLength(param_1,uVar4);
    break;
  case 0x2e:
    goto switchD_016343a4_caseD_2e;
  case 0x2f:
  case 0x30:
    puVar11 = (undefined8 *)*param_4;
    puVar13 = (undefined8 *)param_4[1];
    if (puVar13 == puVar11) {
      uVar12 = 0xffffffffffffffff;
      puVar11 = puVar13;
    }
    else {
      uVar12 = 0;
      do {
        if ((Node *)puVar11[uVar12] == param_5) goto LAB_016344c4;
        pOVar8 = *(Operator **)puVar11[uVar12];
        if ((*(ushort *)(pOVar8 + 0x10) - 0x2f < 2) &&
           (*(ushort *)(*(long *)param_5 + 0x10) - 0x2f < 2)) {
          iVar5 = ObjectIdOf(pOVar8);
          iVar6 = ObjectIdOf(*(Operator **)param_5);
          puVar11 = (undefined8 *)*param_4;
          puVar13 = (undefined8 *)param_4[1];
          if (iVar5 == iVar6) goto LAB_016344c4;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < (ulong)((long)puVar13 - (long)puVar11 >> 3));
      uVar12 = 0xffffffffffffffff;
    }
LAB_016344c4:
    lVar26 = (long)puVar13 - (long)puVar11 >> 3;
    if ((undefined8 *)param_4[2] == puVar13) {
      uVar9 = lVar26 + 1;
      if (uVar9 >> 0x1c != 0) goto LAB_01634b68;
      lVar15 = param_4[2] - (long)puVar11;
      uVar23 = lVar15 >> 2;
      if (uVar9 <= uVar23) {
        uVar9 = uVar23;
      }
      if (0x7fffffe < (ulong)(lVar15 >> 3)) {
        uVar9 = 0xfffffff;
      }
      if (uVar9 == 0) {
        lVar15 = 0;
      }
      else {
        pZVar16 = (Zone *)param_4[3];
        uVar23 = uVar9 * 8;
        lVar15 = *(long *)(pZVar16 + 0x10);
        if (uVar23 < (ulong)(*(long *)(pZVar16 + 0x18) - lVar15) ||
            uVar23 - (*(long *)(pZVar16 + 0x18) - lVar15) == 0) {
          *(ulong *)(pZVar16 + 0x10) = lVar15 + uVar23;
        }
        else {
          lVar15 = Zone::NewExpand(pZVar16,uVar23);
        }
      }
      puVar11 = (undefined8 *)(lVar15 + lVar26 * 8);
      puVar19 = puVar11 + 1;
      *puVar11 = param_5;
      puVar13 = (undefined8 *)*param_4;
      puVar24 = (undefined8 *)param_4[1];
      while (puVar24 != puVar13) {
        puVar24 = puVar24 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar24;
      }
      *param_4 = (long)puVar11;
      param_4[1] = (long)puVar19;
      param_4[2] = lVar15 + uVar9 * 8;
    }
    else {
      *puVar13 = param_5;
      param_4[1] = param_4[1] + 8;
    }
    if (uVar12 == 0xffffffffffffffff) {
      puVar11 = *(undefined8 **)(param_1 + 8);
      if (puVar11 < *(undefined8 **)(param_1 + 0x10)) {
        *puVar11 = 0x70804;
        puVar11[1] = lVar26;
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x10;
      }
      else {
        lVar15 = (long)puVar11 - *(long *)param_1 >> 4;
        uVar12 = lVar15 + 1;
        if (uVar12 >> 0x1b != 0) goto LAB_01634b68;
        lVar14 = (long)*(undefined8 **)(param_1 + 0x10) - *(long *)param_1;
        uVar9 = lVar14 >> 3;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x3fffffe < (ulong)(lVar14 >> 4)) {
          uVar12 = 0x7ffffff;
        }
        if (uVar12 == 0) {
          lVar14 = 0;
        }
        else {
          pZVar16 = *(Zone **)(param_1 + 0x18);
          uVar9 = uVar12 * 0x10;
          lVar14 = *(long *)(pZVar16 + 0x10);
          if (uVar9 < (ulong)(*(long *)(pZVar16 + 0x18) - lVar14) ||
              uVar9 - (*(long *)(pZVar16 + 0x18) - lVar14) == 0) {
            *(ulong *)(pZVar16 + 0x10) = lVar14 + uVar9;
          }
          else {
            lVar14 = Zone::NewExpand(pZVar16,uVar9);
          }
        }
        puVar11 = (undefined8 *)(lVar14 + lVar15 * 0x10);
        *puVar11 = 0x70804;
        puVar11[1] = lVar26;
        lVar26 = *(long *)param_1;
        puVar13 = puVar11;
        for (lVar15 = *(long *)(param_1 + 8); lVar15 != lVar26; lVar15 = lVar15 + -0x10) {
          uVar27 = *(undefined8 *)(lVar15 + -0x10);
          puVar13[-1] = *(undefined8 *)(lVar15 + -8);
          puVar13[-2] = uVar27;
          puVar13 = puVar13 + -2;
        }
        *(undefined8 **)param_1 = puVar13;
        *(undefined8 **)(param_1 + 8) = puVar11 + 2;
        *(ulong *)(param_1 + 0x10) = lVar14 + uVar12 * 0x10;
      }
      puVar11 = *(undefined8 **)(param_9 + 0x10);
      if ((ulong)(*(long *)(param_9 + 0x18) - (long)puVar11) < 0x40) {
        puVar11 = (undefined8 *)Zone::NewExpand(param_9,0x40);
      }
      else {
        *(undefined8 **)(param_9 + 0x10) = puVar11 + 8;
      }
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = param_9;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[7] = param_9;
      puVar13 = *(undefined8 **)(param_1 + 0x28);
      if (puVar13 == *(undefined8 **)(param_1 + 0x30)) {
        lVar26 = (long)puVar13 - *(long *)(param_1 + 0x20) >> 3;
        uVar12 = lVar26 + 1;
        if (uVar12 >> 0x1c != 0) goto LAB_01634b68;
        lVar15 = (long)*(undefined8 **)(param_1 + 0x30) - *(long *)(param_1 + 0x20);
        uVar9 = lVar15 >> 2;
        if (uVar12 <= uVar9) {
          uVar12 = uVar9;
        }
        if (0x7fffffe < (ulong)(lVar15 >> 3)) {
          uVar12 = 0xfffffff;
        }
        if (uVar12 == 0) {
          lVar15 = 0;
        }
        else {
          pZVar16 = *(Zone **)(param_1 + 0x38);
          uVar9 = uVar12 * 8;
          lVar15 = *(long *)(pZVar16 + 0x10);
          if (uVar9 < (ulong)(*(long *)(pZVar16 + 0x18) - lVar15) ||
              uVar9 - (*(long *)(pZVar16 + 0x18) - lVar15) == 0) {
            *(ulong *)(pZVar16 + 0x10) = lVar15 + uVar9;
          }
          else {
            lVar15 = Zone::NewExpand(pZVar16,uVar9);
          }
        }
        puVar13 = (undefined8 *)(lVar15 + lVar26 * 8);
        puVar20 = puVar13 + 1;
        *puVar13 = puVar11;
        puVar24 = *(undefined8 **)(param_1 + 0x20);
        puVar19 = *(undefined8 **)(param_1 + 0x28);
        while (puVar19 != puVar24) {
          puVar19 = puVar19 + -1;
          puVar13 = puVar13 + -1;
          *puVar13 = *puVar19;
        }
        *(undefined8 **)(param_1 + 0x20) = puVar13;
        *(undefined8 **)(param_1 + 0x28) = puVar20;
        *(ulong *)(param_1 + 0x30) = lVar15 + uVar12 * 8;
      }
      else {
        *puVar13 = puVar11;
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
      }
      uVar7 = *(uint *)(*(Operator **)param_5 + 0x14);
      plVar10 = (long *)MachineTypesOf(*(Operator **)param_5);
      if (0 < (int)uVar7) {
        uVar12 = 0;
        lVar26 = 0;
        uVar9 = (ulong)uVar7;
        while( true ) {
          pNVar17 = param_5 + 0x20;
          if ((~*(uint *)(param_5 + 0x14) & 0xf000000) == 0) {
            pNVar17 = (Node *)(*(long *)(param_5 + 0x20) + 0x10);
          }
          if ((ulong)(plVar10[1] - *plVar10 >> 1) <= uVar12) break;
          uVar9 = uVar9 & 0xffffffffffff0000 | (ulong)*(ushort *)(*plVar10 + uVar12 * 2);
          lVar15 = AddOperandToStateValueDescriptor
                             (this,puVar11,param_2,param_3,param_4,
                              *(undefined8 *)(pNVar17 + uVar12 * 8),uVar9,param_8,param_9);
          uVar12 = uVar12 + 1;
          lVar26 = lVar15 + lVar26;
          if (uVar7 == uVar12) {
            return lVar26;
          }
        }
        goto LAB_01634b68;
      }
    }
    else {
      StateValueList::PushDuplicate(param_1,uVar12);
    }
    break;
  default:
    if ((param_7 & 0xff) == 0) {
      this_00 = *(InstructionSequence **)(*param_3 + 0x10);
      Constant::Constant((Constant *)local_70,0xdead);
LAB_016345c8:
      uVar9 = InstructionSequence::AddImmediate(this_00,(Constant *)local_70);
      uVar23 = uVar9 & 7;
joined_r0x01634ae4:
      if (uVar23 != 0) {
        puVar18 = (ulong *)param_2[1];
        if (puVar18 == (ulong *)param_2[2]) {
          lVar26 = (long)puVar18 - *param_2 >> 3;
          uVar12 = lVar26 + 1;
          if (uVar12 >> 0x1c != 0) {
LAB_01634b68:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar15 = param_2[2] - *param_2;
          uVar23 = lVar15 >> 2;
          if (uVar12 <= uVar23) {
            uVar12 = uVar23;
          }
          if (0x7fffffe < (ulong)(lVar15 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar15 = 0;
          }
          else {
            pZVar16 = (Zone *)param_2[3];
            uVar23 = uVar12 * 8;
            lVar15 = *(long *)(pZVar16 + 0x10);
            if (uVar23 < (ulong)(*(long *)(pZVar16 + 0x18) - lVar15) ||
                uVar23 - (*(long *)(pZVar16 + 0x18) - lVar15) == 0) {
              *(ulong *)(pZVar16 + 0x10) = lVar15 + uVar23;
            }
            else {
              lVar15 = Zone::NewExpand(pZVar16,uVar23);
            }
          }
          puVar18 = (ulong *)(lVar15 + lVar26 * 8);
          puVar21 = puVar18 + 1;
          *puVar18 = uVar9;
          puVar1 = (ulong *)*param_2;
          puVar25 = (ulong *)param_2[1];
          while (puVar25 != puVar1) {
            puVar25 = puVar25 + -1;
            puVar18 = puVar18 + -1;
            *puVar18 = *puVar25;
          }
          *param_2 = (long)puVar18;
          param_2[1] = (long)puVar21;
          param_2[2] = lVar15 + uVar12 * 8;
        }
        else {
          *puVar18 = uVar9;
          param_2[1] = param_2[1] + 8;
        }
        StateValueList::PushPlain(param_1,param_7);
        return 1;
      }
    }
    else {
      if (0x30 < uVar2) {
LAB_01634a18:
        if (uVar2 == 0x119) {
LAB_016344a4:
          this_00 = *(InstructionSequence **)(*param_3 + 0x10);
          local_70 = OperandGenerator::ToConstant(param_5);
          goto LAB_016345c8;
        }
        if (param_8 == 0) {
          lVar26 = *param_3;
          uVar12 = (ulong)*(uint *)(param_5 + 0x14) & 0xffffff;
          uVar7 = *(uint *)(*(long *)(lVar26 + 0x118) + uVar12 * 4);
          if (uVar7 == 0xffffffff) {
            uVar7 = InstructionSequence::NextVirtualRegister
                              (*(InstructionSequence **)(lVar26 + 0x10));
            *(uint *)(*(long *)(lVar26 + 0x118) + uVar12 * 4) = uVar7;
            lVar26 = *param_3;
            uVar12 = (ulong)*(uint *)(param_5 + 0x14) & 0xffffff;
          }
          lVar26 = *(long *)(lVar26 + 0xd8);
          uVar9 = 0x9800000001;
        }
        else {
          if (param_8 != 1) {
switchD_016343a4_caseD_2e:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          lVar26 = *param_3;
          uVar12 = (ulong)*(uint *)(param_5 + 0x14) & 0xffffff;
          uVar7 = *(uint *)(*(long *)(lVar26 + 0x118) + uVar12 * 4);
          if (uVar7 == 0xffffffff) {
            uVar7 = InstructionSequence::NextVirtualRegister
                              (*(InstructionSequence **)(lVar26 + 0x10));
            *(uint *)(*(long *)(lVar26 + 0x118) + uVar12 * 4) = uVar7;
            lVar26 = *param_3;
            uVar12 = (ulong)*(uint *)(param_5 + 0x14) & 0xffffff;
          }
          lVar26 = *(long *)(lVar26 + 0xd8);
          uVar9 = 0xe800000001;
        }
        uVar22 = uVar12 >> 3 & 0x1ffff8;
        uVar23 = uVar9 & 7;
        uVar9 = uVar9 & 0xfffffff800000000 | uVar23 | (ulong)uVar7 << 3;
        *(ulong *)(lVar26 + uVar22) = *(ulong *)(lVar26 + uVar22) | 1L << (uVar12 & 0x3f);
        goto joined_r0x01634ae4;
      }
      if ((1L << (uVar12 & 0x3f) & 0x17800000U) != 0) goto LAB_016344a4;
      if ((1L << (uVar12 & 0x3f) & 0xc0000000U) == 0) {
        if (uVar12 == 0x30) goto switchD_016343a4_caseD_2e;
        goto LAB_01634a18;
      }
      local_70 = auVar3;
      if ((param_7 - 7 & 0xff) < 4) {
        lVar26 = **(long **)(this + 0x10);
        uVar12 = HeapConstantOf(pOVar8);
        if (((lVar26 + 0x1010U <= uVar12) || (uVar9 = lVar26 + 0x80, uVar12 < uVar9)) ||
           (((uint)((int)uVar12 - (int)uVar9) >> 3 & 0xffff) != 0x22)) goto LAB_016344a4;
      }
    }
LAB_01634ae8:
    StateValueList::PushOptimizedOut(param_1);
  }
  return 0;
}

