
/* v8::internal::compiler::Verifier::Visitor::Check(v8::internal::compiler::Node*,
   v8::internal::compiler::AllNodes const&) */

void __thiscall
v8::internal::compiler::Verifier::Visitor::Check(Visitor *this,Node *param_1,AllNodes *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  Node *pNVar11;
  Operator *pOVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *local_80;
  long local_68;
  
  iVar3 = *(int *)(*(Operator **)param_1 + 0x14);
  uVar7 = OperatorProperties::HasContextInput(*(Operator **)param_1);
  uVar8 = OperatorProperties::HasFrameStateInput(*(Operator **)param_1);
  lVar17 = *(long *)param_1;
  iVar16 = *(int *)(lVar17 + 0x18);
  uVar10 = *(uint *)(lVar17 + 0x1c);
  iVar9 = uVar10 + iVar16;
  if (*(int *)(this + 0xc) != 1) {
    iVar9 = 0;
  }
  uVar2 = iVar3 + (uVar7 & 1) + (uVar8 & 1) + iVar9;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    uVar19 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    uVar19 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
  }
  if (uVar2 != uVar19) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","input_count == node->InputCount()");
  }
  if ((*(int *)(this + 0x10) != 1) && (*(char *)(lVar17 + 0x24) != '\0')) {
    plVar24 = (long *)*(long *)(param_1 + 0x18);
    while (plVar22 = plVar24, plVar22 != (long *)0x0) {
      uVar19 = *(uint *)(plVar22 + 2);
      plVar24 = (long *)*plVar22;
      puVar1 = plVar22 + (ulong)(uVar19 >> 1) * 3 + 3;
      lVar17 = 0x10;
      if ((uVar19 & 1) != 0) {
        lVar17 = 0x20;
      }
      puVar20 = puVar1;
      if ((uVar19 & 1) == 0) {
        puVar20 = (undefined8 *)*puVar1;
      }
      if (param_2[0x40] != (AllNodes)0x1) goto LAB_0130e5c8;
      if (puVar20 != (undefined8 *)0x0) {
        uVar21 = (ulong)*(uint *)((long)puVar20 + 0x14) & 0xffffff;
        if ((uVar21 < *(ulong *)(param_2 + 0x28)) &&
           ((*(ulong *)(*(long *)(param_2 + 0x20) + (uVar21 >> 3 & 0x1ffff8)) >>
             ((ulong)*(uint *)((long)puVar20 + 0x14) & 0x3f) & 1) != 0)) {
          NodeProperties::IsEffectEdge(plVar22,(long)puVar1 + (ulong)(uVar19 >> 1) * 8 + lVar17);
        }
      }
    }
  }
  if ((uVar8 & 1) != 0) {
    plVar24 = (long *)NodeProperties::GetFrameStateInput(param_1);
    if ((*(short *)(*plVar24 + 0x10) != 0x29) &&
       ((*(short *)(*plVar24 + 0x10) != 0 || (*(short *)(*(long *)param_1 + 0x10) != 0x29)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "frame_state->opcode() == IrOpcode::kFrameState || (node->opcode() == IrOpcode::kFrameState && frame_state->opcode() == IrOpcode::kStart)"
              );
    }
  }
  if (0 < iVar3) {
    iVar9 = 0;
    do {
      pNVar11 = (Node *)NodeProperties::GetValueInput(param_1,iVar9);
      CheckOutput(this,pNVar11,param_1,*(int *)(*(long *)pNVar11 + 0x20),"value");
      if (((*(short *)(*(long *)param_1 + 0x10) != 0x32) &&
          (*(short *)(*(long *)param_1 + 0x10) != 0x37)) && (1 < *(int *)(*(long *)pNVar11 + 0x20)))
      {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "node->opcode() == IrOpcode::kParameter || node->opcode() == IrOpcode::kProjection || value->op()->ValueOutputCount() <= 1"
                );
      }
      iVar9 = iVar9 + 1;
    } while (iVar3 != iVar9);
  }
  if ((uVar7 & 1) != 0) {
    pNVar11 = (Node *)NodeProperties::GetContextInput(param_1);
    CheckOutput(this,pNVar11,param_1,*(int *)(*(long *)pNVar11 + 0x20),"context");
  }
  if (*(int *)(this + 0xc) == 1) {
    iVar9 = iVar16;
    if (0 < iVar16) {
      do {
        pNVar11 = (Node *)NodeProperties::GetEffectInput(param_1,0);
        CheckOutput(this,pNVar11,param_1,(uint)*(byte *)(*(long *)pNVar11 + 0x24),"effect");
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (0 < (int)uVar10) {
      uVar7 = 0;
      do {
        pNVar11 = (Node *)NodeProperties::GetControlInput(param_1,uVar7);
        CheckOutput(this,pNVar11,param_1,*(int *)(*(long *)pNVar11 + 0x28),"control");
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
    }
    if ((*(byte *)(*(long *)param_1 + 0x12) >> 5 & 1) == 0) {
      if (*(long **)(param_1 + 0x18) == (long *)0x0) {
        bVar6 = false;
        local_80 = (long *)0x0;
        bVar5 = false;
      }
      else {
        plVar24 = (long *)0x0;
        plVar22 = (long *)0x0;
        iVar9 = 0;
        local_80 = (long *)0x0;
        plVar23 = *(long **)(param_1 + 0x18);
        do {
          plVar25 = (long *)*plVar23;
          lVar17 = 0x10;
          if ((*(uint *)(plVar23 + 2) & 1) != 0) {
            lVar17 = 0x20;
          }
          uVar21 = NodeProperties::IsControlEdge
                             (plVar23,(long)plVar23 +
                                      lVar17 + (ulong)(*(uint *)(plVar23 + 2) >> 1) * 0x20 + 0x18);
          plVar18 = local_80;
          if ((uVar21 & 1) != 0) {
            iVar9 = iVar9 + 1;
            plVar18 = plVar23 + (ulong)(*(uint *)(plVar23 + 2) >> 1) * 3 + 3;
            if ((*(uint *)(plVar23 + 2) & 1) == 0) {
              plVar18 = (long *)*plVar18;
            }
            if (*(short *)(*plVar18 + 0x10) == 7) {
              bVar5 = plVar24 != (long *)0x0;
              plVar24 = plVar18;
              plVar18 = local_80;
              if (bVar5) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","(discovered_if_exception) == nullptr");
              }
            }
            else if ((*(short *)(*plVar18 + 0x10) == 6) &&
                    (bVar5 = plVar22 != (long *)0x0, plVar22 = plVar18, plVar18 = local_80, bVar5))
            {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","(discovered_if_success) == nullptr");
            }
          }
          local_80 = plVar18;
          plVar23 = plVar25;
        } while (plVar25 != (long *)0x0);
        bVar5 = plVar24 != (long *)0x0;
        if ((plVar22 != (long *)0x0) && (plVar24 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("#%d:%s should be followed by IfSuccess/IfException, but is only followed by single #%d:%s"
                   ,(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                   *(undefined8 *)(*(long *)param_1 + 8),
                   (ulong)(*(uint *)((long)plVar22 + 0x14) & 0xffffff),*(undefined8 *)(*plVar22 + 8)
                  );
        }
        bVar6 = plVar22 != (long *)0x0;
        if ((plVar22 == (long *)0x0) && (plVar24 != (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("#%d:%s should be followed by IfSuccess/IfException, but is only followed by single #%d:%s"
                   ,(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                   *(undefined8 *)(*(long *)param_1 + 8),
                   (ulong)(*(uint *)((long)plVar24 + 0x14) & 0xffffff),*(undefined8 *)(*plVar24 + 8)
                  );
        }
        if (iVar9 == 2) goto LAB_0130d254;
      }
      if (bVar6 || bVar5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("#%d:%s if followed by IfSuccess/IfException, there should be no direct control uses, but direct use #%d:%s was found"
                 ,(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
                 *(undefined8 *)(*(long *)param_1 + 8),
                 (ulong)(*(uint *)((long)local_80 + 0x14) & 0xffffff),*(undefined8 *)(*local_80 + 8)
                );
      }
    }
  }
LAB_0130d254:
  pOVar12 = *(Operator **)param_1;
  switch(*(undefined2 *)(pOVar12 + 0x10)) {
  case 0:
    if (uVar2 != 0) {
LAB_0130e6b8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == input_count");
    }
    pcVar14 = (char *)0x3800001;
    break;
  case 1:
    if (uVar10 == uVar2) {
      CheckNotTyped(this,param_1);
      plVar24 = *(long **)(param_1 + 0x18);
      if (plVar24 != (long *)0x0) {
        do {
          plVar22 = plVar24 + (ulong)(*(uint *)(plVar24 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar24 + 2) & 1) == 0) {
            plVar22 = (long *)*plVar22;
          }
          if (param_2[0x40] != (AllNodes)0x1) goto LAB_0130e5c8;
          if (plVar22 != (long *)0x0) {
            uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14) & 0xffffff;
            if (((uVar21 < *(ulong *)(param_2 + 0x28)) &&
                ((*(ulong *)(*(long *)(param_2 + 0x20) + (uVar21 >> 3 & 0x1ffff8)) >>
                  ((ulong)*(uint *)((long)plVar22 + 0x14) & 0x3f) & 1) != 0)) &&
               (*(short *)(*plVar22 + 0x10) == 0x12)) {
              return;
            }
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","has_terminate");
    }
    goto LAB_0130e758;
  case 2:
    plVar24 = *(long **)(param_1 + 0x18);
    if (plVar24 == (long *)0x0) {
LAB_0130e76c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","1 == count_true");
    }
    iVar9 = 0;
    iVar16 = 0;
    do {
      plVar22 = plVar24 + (ulong)(*(uint *)(plVar24 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar24 + 2) & 1) == 0) {
        plVar22 = (long *)*plVar22;
      }
      if (param_2[0x40] != (AllNodes)0x1) goto LAB_0130e5c8;
      if (plVar22 == (long *)0x0) {
LAB_0130e64c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "all.IsLive(use) && (use->opcode() == IrOpcode::kIfTrue || use->opcode() == IrOpcode::kIfFalse)"
                );
      }
      uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14) & 0xffffff;
      if (((*(ulong *)(param_2 + 0x28) <= uVar21) ||
          ((*(ulong *)(*(long *)(param_2 + 0x20) + (uVar21 >> 3 & 0x1ffff8)) >>
            ((ulong)*(uint *)((long)plVar22 + 0x14) & 0x3f) & 1) == 0)) ||
         (uVar4 = *(ushort *)(*plVar22 + 0x10), (uVar4 & 0xfffe) != 4)) goto LAB_0130e64c;
      plVar24 = (long *)*plVar24;
      if (uVar4 == 4) {
        iVar9 = iVar9 + 1;
      }
      if (uVar4 == 5) {
        iVar16 = iVar16 + 1;
      }
    } while (plVar24 != (long *)0x0);
    if (iVar9 != 1) goto LAB_0130e76c;
    if (iVar16 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","1 == count_false");
    }
  case 0xd5:
    uVar13 = 0x201;
LAB_0130e56c:
    uVar15 = 0;
LAB_0130e578:
    CheckValueInputIs(this,param_1,uVar15,uVar13);
switchD_0130d27c_caseD_c:
    CheckNotTyped(this,param_1);
    return;
  case 3:
    CheckSwitch(this,param_1,param_2);
    return;
  case 4:
  case 5:
    plVar24 = (long *)NodeProperties::GetControlInput(param_1,0);
    if (*(short *)(*plVar24 + 0x10) != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IrOpcode::kBranch == control->opcode()");
    }
    goto switchD_0130d27c_caseD_c;
  case 6:
    plVar24 = (long *)NodeProperties::GetControlInput(param_1,0);
    if ((*(byte *)(*plVar24 + 0x12) >> 5 & 1) != 0) {
LAB_0130dbe4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!input->op()->HasProperty(Operator::kNoThrow)");
    }
    goto switchD_0130d27c_caseD_c;
  case 7:
    plVar24 = (long *)NodeProperties::GetControlInput(param_1,0);
    if ((*(byte *)(*plVar24 + 0x12) >> 5 & 1) != 0) goto LAB_0130dbe4;
    goto switchD_0130d27c_caseD_2ea;
  case 8:
  case 9:
    plVar24 = (long *)NodeProperties::GetControlInput(param_1,0);
    if (*(short *)(*plVar24 + 0x10) != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "IrOpcode::kSwitch == NodeProperties::GetControlInput(node)->opcode()");
    }
    goto switchD_0130d27c_caseD_c;
  case 10:
    if (uVar10 == uVar2) goto switchD_0130d27c_caseD_c;
LAB_0130e758:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","control_count == input_count");
  case 0xb:
  case 0x10:
  case 0x15:
    plVar24 = *(long **)(param_1 + 0x18);
    if (plVar24 != (long *)0x0) {
      do {
        plVar22 = plVar24 + (ulong)(*(uint *)(plVar24 + 2) >> 1) * 3 + 3;
        if ((*(uint *)(plVar24 + 2) & 1) == 0) {
          plVar22 = (long *)*plVar22;
        }
        if (param_2[0x40] != (AllNodes)0x1) goto LAB_0130e5c8;
        if (plVar22 != (long *)0x0) {
          uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14) & 0xffffff;
          if (((uVar21 < *(ulong *)(param_2 + 0x28)) &&
              ((*(ulong *)(*(long *)(param_2 + 0x20) + (uVar21 >> 3 & 0x1ffff8)) >>
                ((ulong)*(uint *)((long)plVar22 + 0x14) & 0x3f) & 1) != 0)) &&
             (*(short *)(*plVar22 + 0x10) != 0x16)) {
LAB_0130e07c:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IrOpcode::kEnd == use->opcode()");
          }
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x26:
  case 0x38:
  case 0x39:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0x120:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1f7:
  case 0x2ed:
  case 0x2f7:
  case 0x30f:
  case 0x310:
  case 0x31a:
  case 0x31d:
    goto switchD_0130d27c_caseD_c;
  default:
    goto switchD_0130d27c_caseD_11;
  case 0x12:
    if (uVar10 != 1) goto LAB_0130e6cc;
    if (iVar16 != 1) {
LAB_0130e6e0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","1 == effect_count");
    }
    if (uVar2 != 2) {
LAB_0130e6f4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","2 == input_count");
    }
    plVar24 = (long *)NodeProperties::GetControlInput(param_1,0);
    if (*(short *)(*plVar24 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "IrOpcode::kLoop == NodeProperties::GetControlInput(node)->opcode()");
    }
    plVar24 = *(long **)(param_1 + 0x18);
    if (plVar24 != (long *)0x0) {
      do {
        plVar22 = plVar24 + (ulong)(*(uint *)(plVar24 + 2) >> 1) * 3 + 3;
        if ((*(uint *)(plVar24 + 2) & 1) == 0) {
          plVar22 = (long *)*plVar22;
        }
        if (param_2[0x40] != (AllNodes)0x1) goto LAB_0130e5c8;
        if (plVar22 != (long *)0x0) {
          uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14) & 0xffffff;
          if (((uVar21 < *(ulong *)(param_2 + 0x28)) &&
              ((*(ulong *)(*(long *)(param_2 + 0x20) + (uVar21 >> 3 & 0x1ffff8)) >>
                ((ulong)*(uint *)((long)plVar22 + 0x14) & 0x3f) & 1) != 0)) &&
             (*(short *)(*plVar22 + 0x10) != 0x16)) goto LAB_0130e07c;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
    }
    goto switchD_0130d27c_caseD_c;
  case 0x13:
  case 0x14:
    if (uVar10 != 1) goto LAB_0130e6cc;
    if (iVar16 != 1) goto LAB_0130e6e0;
    if (uVar2 != 2) goto LAB_0130e6f4;
    goto switchD_0130d27c_caseD_c;
  case 0x16:
    if (*(int *)(pOVar12 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == node->op()->ValueOutputCount()");
    }
    if (pOVar12[0x24] != (Operator)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == node->op()->EffectOutputCount()");
    }
    if (*(int *)(pOVar12 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == node->op()->ControlOutputCount()");
    }
    uVar10 = (byte)param_1[0x17] & 0xf;
    pNVar11 = param_1 + 0x20;
    if (uVar10 == 0xf) {
      uVar10 = *(uint *)(*(long *)pNVar11 + 8);
      pNVar11 = (Node *)(*(long *)pNVar11 + 0x10);
    }
    if (uVar10 != 0) {
      lVar17 = (long)(int)uVar10 << 3;
      do {
        if (0x15 < *(ushort *)(**(long **)pNVar11 + 0x10) ||
            (1 << (ulong)(*(ushort *)(**(long **)pNVar11 + 0x10) & 0x1f) & 0x270800U) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IrOpcode::IsGraphTerminator(input->opcode())");
        }
        lVar17 = lVar17 + -8;
        pNVar11 = pNVar11 + 8;
      } while (lVar17 != 0);
    }
    goto switchD_0130d27c_caseD_c;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x20:
  case 0x21:
    if (uVar2 != 0) goto LAB_0130e6b8;
    goto switchD_0130d27c_caseD_c;
  case 0x1b:
  case 0x1d:
    if (uVar2 != 0) goto LAB_0130e6b8;
  case 0x113:
    pcVar14 = (char *)0x2000001;
    break;
  case 0x1c:
    if (uVar2 != 0) goto LAB_0130e6b8;
    goto switchD_0130d27c_caseD_8e;
  case 0x1e:
  case 0x1f:
    if (uVar2 != 0) goto LAB_0130e6b8;
    goto switchD_0130d27c_caseD_2ea;
  case 0x22:
    if (iVar16 != 0) goto LAB_0130e708;
    if (uVar10 != 0) goto LAB_0130e730;
    if (iVar3 != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","3 == value_count");
    }
    uVar15 = 0x201;
    goto LAB_0130db78;
  case 0x23:
    if (iVar16 != 0) goto LAB_0130e708;
    if (uVar10 == 1) {
      plVar24 = (long *)NodeProperties::GetControlInput(param_1,0);
      if (iVar3 != *(int *)(*plVar24 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","value_count == control->op()->ControlInputCount()");
      }
      if (uVar2 == iVar3 + 1U) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","input_count == 1 + value_count");
    }
    goto LAB_0130e6cc;
  case 0x24:
    if (iVar3 != 0) {
LAB_0130e744:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == value_count");
    }
    if (uVar10 == 1) {
      plVar24 = (long *)NodeProperties::GetControlInput(param_1,0);
      if (iVar16 != *(int *)(*plVar24 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","effect_count == control->op()->ControlInputCount()");
      }
      if (uVar2 != iVar16 + 1U) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","input_count == 1 + effect_count");
      }
      if (*(short *)(*plVar24 + 0x10) != 10) {
        return;
      }
      plVar24 = (long *)plVar24[3];
      if (plVar24 != (long *)0x0) {
        bVar5 = false;
        do {
          plVar22 = plVar24 + (ulong)(*(uint *)(plVar24 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar24 + 2) & 1) == 0) {
            plVar22 = (long *)*plVar22;
          }
          if (param_2[0x40] != (AllNodes)0x1) goto LAB_0130e5c8;
          if (plVar22 != (long *)0x0) {
            uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14) & 0xffffff;
            if (((uVar21 < *(ulong *)(param_2 + 0x28)) &&
                ((*(ulong *)(*(long *)(param_2 + 0x20) + (uVar21 >> 3 & 0x1ffff8)) >>
                  ((ulong)*(uint *)((long)plVar22 + 0x14) & 0x3f) & 1) != 0)) &&
               (*(short *)(*plVar22 + 0x10) != 0x24)) {
              bVar5 = (bool)(bVar5 | *(short *)(*plVar22 + 0x10) != 0x23);
            }
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
        if (bVar5) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","non_phi_use_found");
    }
    goto LAB_0130e6cc;
  case 0x25:
  case 0x3d:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x28:
    if (*(int *)(this + 8) != 0) {
      return;
    }
    lVar17 = NodeProperties::GetValueInput(param_1,0);
    local_68 = *(long *)(lVar17 + 8);
    if (local_68 == *(long *)(param_1 + 8)) {
      return;
    }
    uVar21 = Type::SlowIs((Type *)&local_68);
    if ((uVar21 & 1) != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","NodeProperties::GetType(val).Is(NodeProperties::GetType(node))");
  case 0x29:
    if (iVar3 != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","5 == value_count");
    }
    if (uVar10 != 0) {
LAB_0130e730:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == control_count");
    }
    if (iVar16 == 0) {
      if (uVar2 != 6) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","6 == input_count");
      }
      plVar24 = (long *)NodeProperties::GetValueInput(param_1,0);
      if ((*(short *)(*plVar24 + 0x10) == 0x2a) ||
         (plVar24 = (long *)NodeProperties::GetValueInput(param_1,0),
         *(short *)(*plVar24 + 0x10) == 0x2b)) {
        plVar24 = (long *)NodeProperties::GetValueInput(param_1,1);
        if (*(short *)(*plVar24 + 0x10) == 0x2a) {
          return;
        }
        plVar24 = (long *)NodeProperties::GetValueInput(param_1,1);
        if (*(short *)(*plVar24 + 0x10) == 0x2b) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "NodeProperties::GetValueInput(node, i)->opcode() == IrOpcode::kStateValues || NodeProperties::GetValueInput(node, i)->opcode() == IrOpcode::kTypedStateValues"
              );
    }
LAB_0130e708:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == effect_count");
  case 0x2f:
  case 0x2d3:
    pcVar14 = (char *)0x4670001;
    break;
  case 0x32:
    if (uVar2 != 1) {
LAB_0130ddec:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","1 == input_count");
    }
    iVar9 = ParameterIndexOf(pOVar12);
    plVar24 = (long *)NodeProperties::GetValueInput(param_1,0);
    if (*(short *)(*plVar24 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IrOpcode::kStart == start->opcode()");
    }
    if (iVar9 < -1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","-1 <= index");
    }
    if (*(int *)(*plVar24 + 0x20) <= iVar9 + 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","index + 1 < start->op()->ValueOutputCount()");
    }
    goto switchD_0130d27c_caseD_2ea;
  case 0x33:
    if (uVar10 != 1) goto LAB_0130e6cc;
    if (uVar2 != 1) goto LAB_0130ddec;
    goto switchD_0130d27c_caseD_2ea;
  case 0x34:
    if (uVar10 != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","2 == control_count");
    }
    plVar24 = (long *)NodeProperties::GetControlInput(param_1,1);
    if (*(short *)(*plVar24 + 0x10) == 1) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IrOpcode::kLoop == loop->opcode()");
  case 0x35:
  case 0x36:
    if (uVar10 == 1) {
      plVar24 = (long *)NodeProperties::GetControlInput(param_1,0);
      if (*(short *)(*plVar24 + 0x10) == 0x34) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IrOpcode::kLoopExit == loop_exit->opcode()");
    }
LAB_0130e6cc:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","1 == control_count");
  case 0x37:
    iVar9 = ProjectionIndexOf(pOVar12);
    plVar24 = (long *)NodeProperties::GetValueInput(param_1,0);
    if (*(int *)(*plVar24 + 0x20) <= iVar9) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","input->op()->ValueOutputCount() > index");
    }
    goto switchD_0130d27c_caseD_2ea;
  case 0x3a:
    pcVar14 = (char *)TypeGuardTypeOf(pOVar12);
    break;
  case 0x3b:
    CheckTypeIs(this,param_1,1);
    plVar24 = (long *)*(long *)(param_1 + 0x18);
    while( true ) {
      do {
        if (plVar24 == (long *)0x0) {
          return;
        }
        uVar10 = *(uint *)(plVar24 + 2);
        plVar23 = (long *)*plVar24;
        plVar22 = plVar24 + (ulong)(uVar10 >> 1) * 3 + 3;
        lVar17 = 0x10;
        if ((uVar10 & 1) != 0) {
          lVar17 = 0x20;
        }
        lVar17 = (long)plVar22 + (ulong)(uVar10 >> 1) * 8 + lVar17;
        if ((uVar10 & 1) == 0) {
          plVar22 = (long *)*plVar22;
        }
        uVar21 = NodeProperties::IsValueEdge(plVar24,lVar17);
        plVar24 = plVar23;
      } while ((uVar21 & 1) == 0);
      if (param_2[0x40] != (AllNodes)0x1) break;
      if (plVar22 != (long *)0x0) {
        uVar21 = (ulong)*(uint *)((long)plVar22 + 0x14) & 0xffffff;
        if (((uVar21 < *(ulong *)(param_2 + 0x28)) &&
            ((*(ulong *)(*(long *)(param_2 + 0x20) + (uVar21 >> 3 & 0x1ffff8)) >>
              ((ulong)*(uint *)((long)plVar22 + 0x14) & 0x3f) & 1) != 0)) &&
           (*(short *)(*plVar22 + 0x10) != 0x3c)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IrOpcode::kDeadValue == use->opcode()");
        }
      }
    }
LAB_0130e5c8:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","only_inputs_");
  case 0x3c:
    CheckValueInputIs(this,param_1,0,1);
    pcVar14 = (char *)0x1;
    break;
  case 0x4f:
  case 0x50:
  case 0xbd:
  case 0xbe:
    uVar15 = 0x8000001;
    goto LAB_0130d850;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x78:
    CheckValueInputIs(this,param_1,0,0x1c5f);
    uVar15 = 0x1c5f;
    goto LAB_0130dd4c;
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0xfb:
  case 0x2b1:
  case 0x2b2:
  case 0x2b3:
  case 0x2b4:
  case 0x2b5:
  case 0x2b6:
  case 0x2c3:
  case 0x2c4:
  case 0x2c5:
  case 0x2f2:
  case 0x2f3:
  case 0x2f5:
    goto switchD_0130d27c_caseD_72;
  case 0x76:
  case 0x77:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    uVar15 = 0xffffffff;
    goto LAB_0130dd4c;
  case 0x79:
  case 0x7a:
  case 0x7b:
    uVar15 = 0x4021;
    goto LAB_0130dd34;
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x87:
  case 0x89:
  case 0x8a:
  case 0x8b:
    CheckValueInputIs(this,param_1,0,0x1c5f);
    uVar15 = 0x1c5f;
    goto LAB_0130d2c4;
  case 0x81:
  case 0x82:
  case 0x83:
    CheckValueInputIs(this,param_1,0,1099);
    uVar13 = 1099;
    goto LAB_0130de1c;
  case 0x84:
  case 0x85:
    uVar15 = 1099;
    goto LAB_0130de04;
  case 0x86:
    CheckValueInputIs(this,param_1,0,0x407);
    uVar13 = 1;
    uVar15 = 0x407;
    goto LAB_0130d6f0;
  case 0x88:
    uVar15 = 0x407;
LAB_0130de04:
    CheckValueInputIs(this,param_1,0,uVar15);
    uVar13 = 0x407;
LAB_0130de1c:
    uVar15 = 1;
LAB_0130de24:
    CheckValueInputIs(this,param_1,uVar15,uVar13);
switchD_0130d27c_caseD_93:
    pcVar14 = (char *)0x44b;
    break;
  case 0x8c:
  case 0x8d:
    CheckValueInputIs(this,param_1,0,0x8000001);
    uVar13 = 1;
    uVar15 = 0x8000001;
    goto LAB_0130d85c;
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x99:
  case 0x9a:
  case 0x2c8:
  case 0x2c9:
    goto switchD_0130d27c_caseD_8e;
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
    goto switchD_0130d27c_caseD_93;
  case 0x98:
    goto switchD_0130d27c_caseD_98;
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xbc:
    uVar15 = 0x1c5f;
    goto LAB_0130d284;
  case 0xa4:
  case 0x11f:
    uVar15 = 0x407;
    goto LAB_0130d614;
  case 0xb7:
  case 0xfd:
  case 0xff:
  case 0x101:
  case 0x109:
  case 0x10b:
    uVar15 = 0x1c5f;
    goto LAB_0130d2e8;
  case 0xb8:
    uVar13 = 0x1c5f;
    uVar15 = 0;
    goto LAB_0130de24;
  case 0xb9:
  case 0xcc:
  case 0xcd:
    uVar10 = 0x1c5f;
    goto LAB_0130d814;
  case 0xba:
  case 0xbb:
    uVar15 = 0x1c5f;
LAB_0130d614:
    uVar13 = 0;
LAB_0130d6f0:
    CheckValueInputIs(this,param_1,uVar13,uVar15);
switchD_0130d27c_caseD_98:
    pcVar14 = (char *)0x407;
    break;
  case 0xbf:
    uVar15 = 0xffffffff;
LAB_0130d850:
    uVar13 = 0;
LAB_0130d85c:
    CheckValueInputIs(this,param_1,uVar13,uVar15);
switchD_0130d27c_caseD_c1:
    pcVar14 = (char *)0x8000001;
    break;
  case 0xc0:
  case 0xd7:
    uVar15 = 0xffffffff;
    goto LAB_0130d284;
  case 0xc1:
  case 0xc2:
  case 0xc3:
    goto switchD_0130d27c_caseD_c1;
  case 0xc4:
  case 0xc6:
    uVar15 = 0x5fff;
    goto LAB_0130d284;
  case 0xc5:
    CheckValueInputIs(this,param_1,0,0x5fff);
    pcVar14 = (char *)0x44f;
    break;
  case 199:
    uVar15 = 0x201;
    goto LAB_0130d2e8;
  case 200:
  case 0x118:
    lVar17 = TypeCache::Get();
    CheckValueInputIs(this,param_1,0,*(undefined8 *)(lVar17 + 0x1e8));
    CheckValueInputIs(this,param_1,1,0x4021);
    uVar15 = 2;
    uVar10 = 0x4021;
    goto LAB_0130ddcc;
  case 0xc9:
    uVar15 = 0x4021;
LAB_0130d284:
    uVar13 = 0;
LAB_0130d2cc:
    CheckValueInputIs(this,param_1,uVar13,uVar15);
    pcVar14 = (char *)0x1c5f;
    break;
  case 0xca:
  case 0xcb:
    CheckValueInputIs(this,param_1,0,0x4021);
    CheckValueInputIs(this,param_1,1,0x407);
    uVar10 = BitsetType::UnsignedSmall();
    pcVar14 = (char *)(ulong)(uVar10 | 1);
    break;
  case 0xce:
    CheckValueInputIs(this,param_1,0,0x4021);
    uVar15 = 1;
    uVar10 = 0x407;
    goto LAB_0130ddcc;
  case 0xcf:
    CheckValueInputIs(this,param_1,0,0x4021);
    CheckValueInputIs(this,param_1,1,0x4021);
    uVar10 = BitsetType::SignedSmall();
    uVar10 = uVar10 | 1;
    uVar15 = 2;
    goto LAB_0130e16c;
  case 0xd0:
    CheckValueInputIs(this,param_1,0,0x4021);
    lVar17 = TypeCache::Get();
    pcVar14 = *(char **)(lVar17 + 0x1e8);
    break;
  case 0xd1:
  case 0xd2:
    uVar10 = 0x4021;
    goto LAB_0130d814;
  case 0xd3:
    CheckValueInputIs(this,param_1,0,0x4021);
    uVar10 = BitsetType::SignedSmall();
    CheckValueInputIs(this,param_1,1,uVar10 | 1);
    uVar10 = BitsetType::SignedSmall();
    uVar10 = uVar10 | 1;
    uVar15 = 2;
    goto LAB_0130ddcc;
  case 0xd4:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    lVar17 = TypeCache::Get();
    CheckValueInputIs(this,param_1,1,*(undefined8 *)(lVar17 + 0x1a8));
    lVar17 = TypeCache::Get();
    pcVar14 = *(char **)(lVar17 + 0x1a8);
    break;
  case 0xd6:
  case 0x11c:
    uVar13 = 0xffffffff;
    goto LAB_0130e56c;
  case 0xd8:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    pcVar14 = (char *)0x4001;
    break;
  case 0xd9:
    uVar15 = 0;
    goto LAB_0130dccc;
  case 0xda:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    pcVar14 = (char *)0x47f0181;
    break;
  case 0xdb:
    uVar10 = 0xffffffff;
LAB_0130d814:
    uVar15 = 0;
LAB_0130ddcc:
    CheckValueInputIs(this,param_1,uVar15,uVar10);
switchD_0130d27c_caseD_119:
    pcVar14 = (char *)0x4021;
    break;
  case 0xdc:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    pcVar14 = (char *)0x2001;
    break;
  case 0xdd:
  case 0xde:
    uVar15 = 0xffffffff;
    goto LAB_0130da54;
  case 0xdf:
    CheckValueInputIs(this,param_1,0,0x801c5f);
    pcVar14 = (char *)0x1d5f;
    break;
  case 0xe0:
  case 0xe5:
    uVar10 = 0xffffffff;
    uVar15 = 0;
    goto LAB_0130dfb4;
  case 0xe1:
    uVar15 = 0x4001;
    goto LAB_0130d930;
  case 0xe2:
    uVar15 = 0x2001;
LAB_0130d930:
    CheckValueInputIs(this,param_1,0,uVar15);
    uVar15 = 1;
    uVar13 = 0xffffffff;
    goto LAB_0130e578;
  case 0xe3:
  case 0xfe:
  case 0x100:
  case 0x102:
  case 0x103:
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x10a:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x31b:
    uVar15 = 0xffffffff;
    goto LAB_0130d2e8;
  case 0xe4:
  case 0x317:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    uVar15 = 1;
    goto LAB_0130dccc;
  case 0xe6:
    pcVar14 = (char *)0x4001;
    break;
  case 0xe7:
    uVar15 = 0x45f;
LAB_0130da54:
    CheckValueInputIs(this,param_1,0,uVar15);
    return;
  case 0xe9:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    uVar10 = BitsetType::SignedSmall();
    uVar10 = uVar10 | 1;
    uVar15 = 1;
LAB_0130dfb4:
    CheckValueInputIs(this,param_1,uVar15,uVar10);
    pcVar14 = (char *)0xc7f7fff;
    break;
  case 0xfc:
    uVar15 = 0x801c5f;
LAB_0130d2e8:
    uVar13 = 0;
LAB_0130dd54:
    CheckValueInputIs(this,param_1,uVar13,uVar15);
switchD_0130d27c_caseD_72:
    pcVar14 = (char *)0x201;
    break;
  case 0x114:
    CheckValueInputIs(this,param_1,0,0x2000001);
    lVar17 = TypeCache::Get();
    pcVar14 = *(char **)(lVar17 + 0x238);
    break;
  case 0x115:
  case 0x116:
    uVar15 = Type::Range(0.0,134217725.0,*(Zone **)this);
    goto LAB_0130dcf8;
  case 0x117:
    CheckValueInputIs(this,param_1,0,0x2000001);
    uVar15 = Type::Range(0.0,134217725.0,*(Zone **)this);
    uVar13 = 1;
    goto LAB_0130dd04;
  case 0x119:
  case 0x2cc:
    goto switchD_0130d27c_caseD_119;
  case 0x11a:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    uVar13 = 0x3800001;
    uVar15 = 1;
    goto LAB_0130e24c;
  case 0x11b:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    CheckValueInputIs(this,param_1,1,0x3800001);
    CheckValueInputIs(this,param_1,2,0x403);
    uVar15 = 3;
    uVar13 = 0x403;
LAB_0130e24c:
    pcVar14 = (char *)0x3800001;
    CheckValueInputIs(this,param_1,uVar15,uVar13);
    break;
  case 0x11d:
    uVar10 = 0xffffffff;
    uVar15 = 0;
    goto LAB_0130e16c;
  case 0x11e:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    uVar15 = 1;
    uVar10 = 1099;
LAB_0130e16c:
    CheckValueInputIs(this,param_1,uVar15,uVar10);
switchD_0130d27c_caseD_311:
    uVar10 = BitsetType::SignedSmall();
    pcVar14 = (char *)(ulong)(uVar10 | 1);
    break;
  case 0x122:
    if (iVar3 != 0) goto LAB_0130e744;
switchD_0130d27c_caseD_8e:
    pcVar14 = (char *)0x1c5f;
    break;
  case 0x2b7:
  case 0x2b8:
  case 0x2b9:
  case 0x2ba:
  case 699:
  case 700:
  case 0x2be:
  case 0x2bf:
  case 0x2c0:
  case 0x2c1:
  case 0x2c2:
  case 0x2ca:
  case 0x2ce:
  case 0x2cf:
  case 0x2d0:
  case 0x2d1:
    pcVar14 = (char *)0x8001c5f;
    break;
  case 0x2bd:
    pcVar14 = (char *)0x8005c7f;
    break;
  case 0x2c6:
    pcVar14 = (char *)Type::Range(0.0,9007199254740991.0,*(Zone **)this);
    break;
  case 0x2c7:
    pcVar14 = (char *)0x6021;
    break;
  case 0x2cb:
  case 0x300:
  case 0x301:
  case 0x302:
  case 0x303:
    goto switchD_0130d27c_caseD_2cb;
  case 0x2cd:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    uVar15 = 0xffffffff;
LAB_0130d2c4:
    uVar13 = 1;
    goto LAB_0130d2cc;
  case 0x2d2:
  case 0x2d7:
  case 0x2d8:
  case 0x2db:
  case 0x2dd:
  case 0x2de:
  case 0x2df:
  case 0x2e0:
  case 0x2e2:
  case 0x2e3:
  case 0x2e4:
  case 0x2e5:
  case 0x2e6:
  case 0x2e7:
    goto switchD_0130d27c_caseD_2d2;
  case 0x2d4:
    pcVar14 = (char *)0x4020001;
    break;
  case 0x2d5:
  case 0x2d6:
  case 0x2dc:
  case 0x2e1:
  case 0x2e8:
    pcVar14 = (char *)0x4000001;
    break;
  case 0x2d9:
    pcVar14 = "S0_6HandleIS2_EENS5_INS0_6ObjectEEES8_";
    break;
  case 0x2da:
    pcVar14 = "";
    break;
  case 0x2e9:
    CheckTypeIs(this,param_1,0xffffffff);
    goto LAB_0130de98;
  case 0x2ea:
  case 0x2f6:
  case 0x2fc:
  case 0x2fd:
  case 0x2fe:
  case 0x2ff:
  case 0x307:
  case 0x30a:
  case 0x30e:
  case 0x312:
  case 0x313:
  case 0x314:
    goto switchD_0130d27c_caseD_2ea;
  case 0x2eb:
    CheckTypeIs(this,param_1,0xffffffff);
    lVar17 = LoadGlobalParametersOf(*(Operator **)param_1);
    if ((*(long *)(lVar17 + 8) != 0) && (*(int *)(lVar17 + 0x10) != -1)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","LoadGlobalParametersOf(node->op()).feedback().IsValid()");
  case 0x2ec:
    CheckNotTyped(this,param_1);
LAB_0130de98:
    plVar24 = (long *)PropertyAccessOf(*(Operator **)param_1);
    if ((*plVar24 != 0) && ((int)plVar24[1] != -1)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","PropertyAccessOf(node->op()).feedback().IsValid()");
  case 0x2ee:
    CheckNotTyped(this,param_1);
    lVar17 = StoreNamedOwnParametersOf(*(Operator **)param_1);
    if ((*(long *)(lVar17 + 8) != 0) && (*(int *)(lVar17 + 0x10) != -1)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","StoreNamedOwnParametersOf(node->op()).feedback().IsValid()");
  case 0x2ef:
    CheckNotTyped(this,param_1);
    lVar17 = StoreGlobalParametersOf(*(Operator **)param_1);
    if ((*(long *)(lVar17 + 0x10) != 0) && (*(int *)(lVar17 + 0x18) != -1)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","StoreGlobalParametersOf(node->op()).feedback().IsValid()");
  case 0x2f0:
  case 0x2f1:
    CheckNotTyped(this,param_1);
    plVar24 = (long *)FeedbackParameterOf(*(Operator **)param_1);
    if ((*plVar24 == 0) || ((int)plVar24[1] == -1)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","FeedbackParameterOf(node->op()).feedback().IsValid()");
    }
switchD_0130d27c_caseD_11:
    return;
  case 0x2f4:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    pcVar14 = (char *)0x6d0001;
    break;
  case 0x2f8:
  case 0x2f9:
  case 0x2fa:
  case 0x2fb:
    uVar15 = NodeProperties::GetContextInput(param_1);
    CheckTypeMaybe(this,uVar15,0x1000001);
    goto LAB_0130dd08;
  case 0x304:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    uVar15 = 1;
    uVar13 = 0xffffffff;
    goto LAB_0130da38;
  case 0x305:
  case 0x306:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    CheckValueInputIs(this,param_1,1,0xffffffff);
    uVar15 = 2;
    uVar13 = 0x201;
LAB_0130da38:
    CheckValueInputIs(this,param_1,uVar15,uVar13);
switchD_0130d27c_caseD_2d2:
    pcVar14 = (char *)0x20001;
    break;
  case 0x308:
    uVar15 = 0xffffffff;
LAB_0130dcf8:
    uVar13 = 0;
LAB_0130dd04:
    CheckValueInputIs(this,param_1,uVar13,uVar15);
LAB_0130dd08:
    pcVar14 = "a";
    break;
  case 0x309:
    pcVar14 = (char *)Type::Union(0x6021,0x101,*(undefined8 *)this);
    break;
  case 0x30b:
    uVar15 = 0xffffffff;
LAB_0130db78:
    CheckValueInputIs(this,param_1,0,uVar15);
    goto switchD_0130d27c_caseD_2ea;
  case 0x311:
    goto switchD_0130d27c_caseD_311;
  case 0x315:
  case 0x319:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    uVar15 = 1;
    goto LAB_0130dc68;
  case 0x316:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    CheckValueInputIs(this,param_1,1,0xffffffff);
    CheckValueInputIs(this,param_1,2,0xffffffff);
    uVar15 = 3;
LAB_0130dccc:
    CheckValueInputIs(this,param_1,uVar15,0xffffffff);
switchD_0130d27c_caseD_2cb:
    pcVar14 = (char *)0x47f0001;
    break;
  case 0x318:
    CheckValueInputIs(this,param_1,0,0xffffffff);
    CheckValueInputIs(this,param_1,1,0xffffffff);
    uVar15 = 2;
LAB_0130dc68:
    CheckValueInputIs(this,param_1,uVar15,0xffffffff);
    pcVar14 = (char *)0x101;
    break;
  case 0x31c:
    uVar15 = 0xffffffff;
LAB_0130dd34:
    CheckValueInputIs(this,param_1,0,uVar15);
    uVar15 = 0x4021;
LAB_0130dd4c:
    uVar13 = 1;
    goto LAB_0130dd54;
  }
LAB_0130e274:
  CheckTypeIs(this,param_1,pcVar14);
  return;
switchD_0130d27c_caseD_2ea:
  pcVar14 = (char *)0xffffffff;
  goto LAB_0130e274;
}

