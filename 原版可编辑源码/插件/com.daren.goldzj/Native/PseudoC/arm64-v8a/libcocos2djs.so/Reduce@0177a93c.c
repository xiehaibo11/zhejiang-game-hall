
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::MachineOperatorReducer::Reduce(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MachineOperatorReducer::Reduce(MachineOperatorReducer *this,Node *param_1)

{
  short sVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  Node *pNVar9;
  MachineGraph *this_00;
  CommonOperatorBuilder *pCVar10;
  Node *pNVar11;
  Node *pNVar12;
  Node *pNVar13;
  Operator *pOVar14;
  uint uVar15;
  int iVar16;
  Operator *extraout_x1;
  Operator *extraout_x1_00;
  Node **ppNVar17;
  int iVar18;
  undefined4 uVar19;
  long lVar20;
  long *plVar21;
  double dVar22;
  long *plVar23;
  Node *pNVar24;
  uint uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  Graph *pGVar28;
  Use *pUVar29;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_b0_07;
  undefined1 extraout_b0_08;
  undefined1 extraout_b0_09;
  undefined1 extraout_b0_10;
  undefined1 extraout_b0_11;
  undefined1 extraout_b0_12;
  undefined1 uVar30;
  undefined1 extraout_b0_13;
  undefined1 extraout_b0_14;
  undefined1 extraout_b0_15;
  undefined1 extraout_b0_16;
  undefined1 extraout_b0_17;
  undefined1 extraout_b0_18;
  undefined1 extraout_b0_19;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 uVar31;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 uVar32;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  undefined1 extraout_var_44;
  undefined1 extraout_var_45;
  undefined1 extraout_var_46;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  undefined1 extraout_var_50;
  undefined1 extraout_var_51;
  undefined1 extraout_var_52;
  undefined1 extraout_var_53;
  undefined1 extraout_var_54;
  undefined1 uVar33;
  undefined1 extraout_var_55;
  undefined1 extraout_var_56;
  undefined1 extraout_var_57;
  undefined1 extraout_var_58;
  undefined1 extraout_var_59;
  undefined1 extraout_var_60;
  undefined1 extraout_var_61;
  char cVar34;
  undefined1 extraout_var_62;
  undefined1 extraout_var_63;
  undefined1 extraout_var_64;
  undefined1 extraout_var_65;
  undefined1 uVar35;
  undefined1 extraout_var_66;
  undefined1 extraout_var_67;
  undefined1 extraout_var_68;
  undefined1 extraout_var_69;
  undefined1 extraout_var_70;
  undefined1 extraout_var_71;
  undefined1 extraout_var_72;
  undefined1 extraout_var_73;
  undefined1 extraout_var_74;
  undefined1 extraout_var_75;
  undefined1 extraout_var_76;
  undefined1 extraout_var_77;
  undefined1 extraout_var_78;
  undefined1 extraout_var_79;
  undefined1 extraout_var_80;
  undefined1 extraout_var_81;
  undefined1 extraout_var_82;
  undefined1 extraout_var_83;
  undefined1 extraout_var_84;
  undefined1 extraout_var_85;
  undefined1 extraout_var_86;
  undefined1 uVar36;
  undefined1 extraout_var_87;
  undefined1 extraout_var_88;
  undefined1 extraout_var_89;
  undefined1 extraout_var_90;
  undefined1 extraout_var_91;
  undefined1 extraout_var_92;
  undefined1 extraout_var_93;
  undefined1 extraout_var_94;
  undefined1 extraout_var_95;
  undefined1 extraout_var_96;
  undefined1 extraout_var_97;
  undefined1 extraout_var_98;
  undefined1 extraout_var_99;
  undefined1 extraout_var_x00100;
  undefined1 extraout_var_x00101;
  undefined1 extraout_var_x00102;
  undefined1 extraout_var_x00103;
  undefined1 extraout_var_x00104;
  undefined1 extraout_var_x00105;
  undefined1 extraout_var_x00106;
  undefined1 extraout_var_x00107;
  undefined1 uVar37;
  undefined1 extraout_var_x00108;
  undefined1 extraout_var_x00109;
  undefined1 extraout_var_x00110;
  undefined1 extraout_var_x00111;
  undefined1 extraout_var_x00112;
  undefined1 extraout_var_x00113;
  undefined1 extraout_var_x00114;
  undefined1 extraout_var_x00115;
  undefined1 extraout_var_x00116;
  undefined1 extraout_var_x00117;
  undefined1 extraout_var_x00118;
  undefined1 extraout_var_x00119;
  undefined1 extraout_var_x00120;
  undefined1 extraout_var_x00121;
  undefined1 extraout_var_x00122;
  undefined1 extraout_var_x00123;
  undefined1 extraout_var_x00124;
  undefined1 extraout_var_x00125;
  undefined1 extraout_var_x00126;
  undefined1 extraout_var_x00127;
  undefined1 extraout_var_x00128;
  undefined1 uVar38;
  undefined1 extraout_var_x00129;
  undefined1 extraout_var_x00130;
  undefined1 extraout_var_x00131;
  undefined1 extraout_var_x00132;
  undefined1 extraout_var_x00133;
  undefined1 extraout_var_x00134;
  undefined1 extraout_var_x00135;
  undefined1 extraout_var_x00136;
  undefined1 extraout_var_x00137;
  undefined1 extraout_var_x00138;
  undefined1 extraout_var_x00139;
  undefined1 extraout_var_x00140;
  undefined1 extraout_var_x00141;
  undefined1 extraout_var_x00142;
  undefined1 extraout_var_x00143;
  undefined1 extraout_var_x00144;
  undefined1 extraout_var_x00145;
  undefined2 uVar39;
  uint7 uVar40;
  double dVar41;
  Node *local_d8;
  float local_cc;
  Node *local_c8;
  Node *local_c0;
  float local_b8;
  int iStack_b4;
  char local_b0;
  undefined7 uStack_af;
  uint local_a8;
  undefined4 uStack_a4;
  Node *local_90;
  Node *local_88;
  float local_80;
  uint uStack_7c;
  char local_78;
  undefined7 uStack_77;
  float local_70;
  uint uStack_6c;
  double local_68;
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pNVar9 = (Node *)0x0;
  switch(*(undefined2 *)(*(Operator **)param_1 + 0x10)) {
  case 0x37:
    uVar27 = ProjectionIndexOf(*(Operator **)param_1);
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    pNVar9 = (Node *)ReduceProjection(this,uVar27,*(Node **)pNVar9);
  default:
    goto switchD_0177a998_caseD_38;
  case 0x128:
    pNVar9 = (Node *)ReduceWord32And(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x129:
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if ((char)uStack_6c != '\0') {
      if (local_70 == -NAN) {
LAB_0177afc0:
        pNVar9 = (Node *)CONCAT71(uStack_77,local_78);
        goto switchD_0177a998_caseD_38;
      }
      pNVar9 = local_88;
      if (local_70 == 0.0) goto switchD_0177a998_caseD_38;
      if ((char)uStack_7c != '\0') {
        pNVar9 = (Node *)MachineGraph::Int32Constant
                                   (*(MachineGraph **)(this + 0x10),(uint)local_70 | (uint)local_80)
        ;
        goto switchD_0177a998_caseD_38;
      }
    }
    pNVar9 = local_88;
    if (local_88 != (Node *)CONCAT71(uStack_77,local_78)) {
      pNVar9 = (Node *)TryMatchWord32Ror(this,param_1);
    }
    goto switchD_0177a998_caseD_38;
  case 0x12a:
    pNVar9 = (Node *)ReduceWord32Xor(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 299:
    pNVar9 = (Node *)ReduceWord32Shl(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 300:
    pNVar9 = (Node *)ReduceWord32Shr(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x12d:
    pNVar9 = (Node *)ReduceWord32Sar(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x12e:
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if (((uStack_6c & 0xff) != 0) && (pNVar9 = local_88, local_70 == 0.0))
    goto switchD_0177a998_caseD_38;
    if (((char)uStack_7c != '\0') && ((uStack_6c & 0xff) != 0)) {
      pNVar9 = (Node *)MachineGraph::Int32Constant
                                 (*(MachineGraph **)(this + 0x10),
                                  (uint)local_80 >> ((uint)local_70 & 0x1f) |
                                  (int)local_80 << 0x20 - ((uint)local_70 & 0x1f));
      goto switchD_0177a998_caseD_38;
    }
    break;
  case 0x12f:
    pNVar9 = (Node *)ReduceInt32Add(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x131:
    pNVar9 = (Node *)ReduceInt32Sub(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x133:
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if ((uStack_6c & 0xff) != 0) {
      pNVar9 = local_88;
      if (local_70 == 1.4013e-45) goto switchD_0177a998_caseD_38;
      if (local_70 == 0.0) goto LAB_0177afc0;
    }
    if ((char)uStack_7c == '\0') {
      if ((uStack_6c & 0xff) != 0) {
        if (local_70 == -NAN) {
          pNVar12 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
          pNVar9 = param_1 + 0x20;
          pNVar24 = pNVar9;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          pNVar13 = *(Node **)pNVar24;
          if (pNVar13 != pNVar12) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar29 = (Use *)(*(long *)pNVar9 + -0x18);
            }
            else {
              pUVar29 = (Use *)(param_1 + -0x18);
            }
            if (pNVar13 != (Node *)0x0) {
              Node::RemoveUse(pNVar13,pUVar29);
            }
            *(Node **)pNVar24 = pNVar12;
            if (pNVar12 != (Node *)0x0) {
              Node::AppendUse(pNVar12,pUVar29);
            }
          }
          pNVar24 = pNVar9;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          pNVar12 = *(Node **)(pNVar24 + 8);
          if (pNVar12 != local_88) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar29 = (Use *)(*(long *)pNVar9 + -0x30);
            }
            else {
              pUVar29 = (Use *)(param_1 + -0x30);
            }
            if (pNVar12 != (Node *)0x0) {
              Node::RemoveUse(pNVar12,pUVar29);
            }
            *(Node **)(pNVar24 + 8) = local_88;
            if (local_88 != (Node *)0x0) {
              Node::AppendUse(local_88,pUVar29);
            }
          }
          pOVar14 = (Operator *)
                    MachineOperatorBuilder::Int32Sub
                              (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          goto LAB_0177cb8c;
        }
        if ((0 < (int)local_70) &&
           (cVar8 = POPCOUNT((char)((uint)local_70 >> 0x10)),
           cVar34 = POPCOUNT((char)((uint)local_70 >> 0x18)),
           uVar39 = NEON_uaddlv((ulong)CONCAT13(cVar34,CONCAT12(cVar8,CONCAT11(POPCOUNT((char)((uint
                                                  )local_70 >> 8)),POPCOUNT(SUB41(local_70,0))))),1)
           , CONCAT13(cVar34,CONCAT12(cVar8,uVar39)) < 2)) {
          uVar15 = ((uint)local_70 & 0xaaaaaaaa) >> 1 | ((uint)local_70 & 0x55555555) << 1;
          uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
          pNVar12 = (Node *)MachineGraph::Int32Constant
                                      (*(MachineGraph **)(this + 0x10),
                                       (int)LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10));
          pNVar9 = param_1 + 0x20;
          pNVar24 = pNVar9;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          pNVar13 = *(Node **)(pNVar24 + 8);
          if (pNVar13 != pNVar12) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar29 = (Use *)(*(long *)pNVar9 + -0x30);
            }
            else {
              pUVar29 = (Use *)(param_1 + -0x30);
            }
            if (pNVar13 != (Node *)0x0) {
              Node::RemoveUse(pNVar13,pUVar29);
            }
            *(Node **)(pNVar24 + 8) = pNVar12;
            if (pNVar12 != (Node *)0x0) {
              Node::AppendUse(pNVar12,pUVar29);
            }
          }
          pOVar14 = (Operator *)
                    MachineOperatorBuilder::Word32Shl
                              (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          NodeProperties::ChangeOp(param_1,pOVar14);
          pNVar24 = (Node *)ReduceWord32Shl(this,param_1);
          pNVar9 = param_1;
          if (pNVar24 != (Node *)0x0) {
            pNVar9 = pNVar24;
          }
          goto switchD_0177a998_caseD_38;
        }
      }
    }
    else if ((char)uStack_6c != '\0') {
      pNVar9 = (Node *)MachineGraph::Int32Constant
                                 (*(MachineGraph **)(this + 0x10),(int)local_70 * (int)local_80);
      goto switchD_0177a998_caseD_38;
    }
    break;
  case 0x134:
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if ((char)uStack_6c != '\0') {
      if (local_70 == -NAN) {
        pNVar12 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
        pNVar9 = param_1 + 0x20;
        pNVar24 = pNVar9;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        pNVar13 = *(Node **)pNVar24;
        if (pNVar13 != pNVar12) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar29 = (Use *)(*(long *)pNVar9 + -0x18);
          }
          else {
            pUVar29 = (Use *)(param_1 + -0x18);
          }
          if (pNVar13 != (Node *)0x0) {
            Node::RemoveUse(pNVar13,pUVar29);
          }
          *(Node **)pNVar24 = pNVar12;
          if (pNVar12 != (Node *)0x0) {
            Node::AppendUse(pNVar12,pUVar29);
          }
        }
        pNVar24 = pNVar9;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        pNVar12 = *(Node **)(pNVar24 + 8);
        if (pNVar12 != local_88) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar29 = (Use *)(*(long *)pNVar9 + -0x30);
          }
          else {
            pUVar29 = (Use *)(param_1 + -0x30);
          }
          if (pNVar12 != (Node *)0x0) {
            Node::RemoveUse(pNVar12,pUVar29);
          }
          *(Node **)(pNVar24 + 8) = local_88;
          if (local_88 != (Node *)0x0) {
            Node::AppendUse(local_88,pUVar29);
          }
        }
        pOVar14 = (Operator *)
                  MachineOperatorBuilder::Int32SubWithOverflow
                            (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
      }
      else {
        if (local_70 != 2.8026e-45) break;
        pNVar9 = param_1 + 0x20;
        pNVar24 = pNVar9;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        pNVar12 = *(Node **)(pNVar24 + 8);
        if (pNVar12 != local_88) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar29 = (Use *)(*(long *)pNVar9 + -0x30);
          }
          else {
            pUVar29 = (Use *)(param_1 + -0x30);
          }
          if (pNVar12 != (Node *)0x0) {
            Node::RemoveUse(pNVar12,pUVar29);
          }
          *(Node **)(pNVar24 + 8) = local_88;
          if (local_88 != (Node *)0x0) {
            Node::AppendUse(local_88,pUVar29);
          }
        }
        pOVar14 = (Operator *)
                  MachineOperatorBuilder::Int32AddWithOverflow
                            (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
      }
      goto LAB_0177cb8c;
    }
    break;
  case 0x136:
    pNVar9 = (Node *)ReduceInt32Div(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x137:
    pNVar9 = (Node *)ReduceInt32Mod(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x138:
    pNVar9 = (Node *)ReduceUint32Div(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x139:
    pNVar9 = (Node *)ReduceUint32Mod(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x13e:
    BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                    *)&local_90,param_1);
    if (local_60 != '\0') {
      pNVar9 = local_88;
      if (local_68 == 0.0) goto switchD_0177a998_caseD_38;
      if (local_78 == '\0') break;
      pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
      pCVar10 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
      uVar27 = CONCAT44(uStack_7c,local_80) << ((ulong)local_68 & 0x3f);
LAB_0177b478:
      pOVar14 = (Operator *)CommonOperatorBuilder::Int64Constant(pCVar10,uVar27);
      goto LAB_0177c154;
    }
    break;
  case 0x13f:
    BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<unsigned_long,(v8::internal::compiler::IrOpcode::Value)24>>
                    *)&local_90,param_1);
    if (local_60 != '\0') {
      pNVar9 = local_88;
      if (local_68 == 0.0) goto switchD_0177a998_caseD_38;
      if (local_78 != '\0') {
        pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
        pCVar10 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
        uVar27 = CONCAT44(uStack_7c,local_80) >> ((ulong)local_68 & 0x3f);
        goto LAB_0177b478;
      }
    }
    break;
  case 0x140:
    BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                    *)&local_90,param_1);
    if (local_60 != '\0') {
      pNVar9 = local_88;
      if (local_68 == 0.0) goto switchD_0177a998_caseD_38;
      if (local_78 != '\0') {
        pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
        pCVar10 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
        uVar27 = CONCAT44(uStack_7c,local_80) >> ((ulong)local_68 & 0x3f);
        goto LAB_0177b478;
      }
    }
    break;
  case 0x142:
    pNVar9 = (Node *)ReduceInt64Add(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x144:
    pNVar9 = (Node *)ReduceInt64Sub(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x146:
    pNVar9 = (Node *)ReduceInt64Mul(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x14b:
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if (((char)uStack_7c != '\0') && ((char)uStack_6c != '\0')) {
      this_00 = *(MachineGraph **)(this + 0x10);
      bVar6 = local_80 == local_70;
LAB_0177b124:
      pNVar9 = (Node *)MachineGraph::Int32Constant(this_00,(uint)bVar6);
      goto switchD_0177a998_caseD_38;
    }
    if (((*(short *)(*(long *)local_88 + 0x10) == 0x131) && ((char)uStack_6c != '\0')) &&
       (local_70 == 0.0)) {
      BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
      ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                      *)&local_c8,local_88);
      pNVar12 = local_c0;
      pNVar9 = param_1 + 0x20;
      pNVar24 = pNVar9;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
      }
      pNVar13 = *(Node **)pNVar24;
      if (pNVar13 != local_c0) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar29 = (Use *)(*(long *)pNVar9 + -0x18);
        }
        else {
          pUVar29 = (Use *)(param_1 + -0x18);
        }
        if (pNVar13 != (Node *)0x0) {
          Node::RemoveUse(pNVar13,pUVar29);
        }
        *(Node **)pNVar24 = pNVar12;
        if (pNVar12 != (Node *)0x0) {
          Node::AppendUse(pNVar12,pUVar29);
        }
      }
      uVar15 = *(uint *)(param_1 + 0x14);
      pNVar13 = (Node *)CONCAT71(uStack_af,local_b0);
LAB_0177c874:
      pNVar12 = param_1 + 0x20;
      pNVar24 = pNVar12;
      if ((uVar15 & 0xf000000) == 0xf000000) {
        pNVar24 = (Node *)(*(long *)pNVar12 + 0x10);
      }
      pNVar11 = *(Node **)(pNVar24 + 8);
      pNVar9 = param_1;
      if (pNVar11 == pNVar13) goto switchD_0177a998_caseD_38;
      if ((uVar15 & 0xf000000) == 0xf000000) {
        pUVar29 = (Use *)(*(long *)pNVar12 + -0x30);
      }
      else {
        pUVar29 = (Use *)(param_1 + -0x30);
      }
      if (pNVar11 != (Node *)0x0) {
        Node::RemoveUse(pNVar11,pUVar29);
      }
      *(Node **)(pNVar24 + 8) = pNVar13;
joined_r0x0177c114:
      pNVar9 = param_1;
      if (pNVar13 != (Node *)0x0) {
        Node::AppendUse(pNVar13,pUVar29);
      }
      goto switchD_0177a998_caseD_38;
    }
    if (local_88 == (Node *)CONCAT71(uStack_77,local_78)) {
LAB_0177baac:
      pNVar9 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),1);
      goto switchD_0177a998_caseD_38;
    }
    break;
  case 0x14c:
    BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                    *)&local_90,param_1);
    if ((local_78 != '\0') && (local_60 != '\0')) {
      this_00 = *(MachineGraph **)(this + 0x10);
      bVar6 = (double)CONCAT44(uStack_7c,local_80) == local_68;
      goto LAB_0177b124;
    }
    if (((*(short *)(*(long *)local_88 + 0x10) == 0x144) && (local_60 != '\0')) && (local_68 == 0.0)
       ) {
      BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
      ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                      *)&local_c8,local_88);
      pNVar12 = local_c0;
      pNVar9 = param_1 + 0x20;
      pNVar24 = pNVar9;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
      }
      pNVar13 = *(Node **)pNVar24;
      if (pNVar13 != local_c0) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar29 = (Use *)(*(long *)pNVar9 + -0x18);
        }
        else {
          pUVar29 = (Use *)(param_1 + -0x18);
        }
        if (pNVar13 != (Node *)0x0) {
          Node::RemoveUse(pNVar13,pUVar29);
        }
        *(Node **)pNVar24 = pNVar12;
        if (pNVar12 != (Node *)0x0) {
          Node::AppendUse(pNVar12,pUVar29);
        }
      }
      uVar15 = *(uint *)(param_1 + 0x14);
      pNVar13 = (Node *)CONCAT44(uStack_a4,local_a8);
      goto LAB_0177c874;
    }
    if (local_88 == (Node *)CONCAT44(uStack_6c,local_70)) goto LAB_0177baac;
    break;
  case 0x14d:
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if (((char)uStack_7c != '\0') && ((char)uStack_6c != '\0')) {
      pNVar9 = (Node *)MachineGraph::Int32Constant
                                 (*(MachineGraph **)(this + 0x10),
                                  (uint)((int)local_80 < (int)local_70));
      goto switchD_0177a998_caseD_38;
    }
    if (local_88 == (Node *)CONCAT71(uStack_77,local_78)) goto LAB_0177c11c;
    if ((((*(short *)(*(long *)local_88 + 0x10) == 0x129) && ((char)uStack_6c != '\0')) &&
        (local_70 == 0.0)) &&
       (((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
          ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                          *)&local_c8,local_88), (char)iStack_b4 != '\0' && ((int)local_b8 < 0)) ||
        (((char)uStack_a4 != '\0' && ((int)local_a8 < 0)))))) goto LAB_0177baac;
    break;
  case 0x14e:
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if (((char)uStack_7c != '\0') && ((char)uStack_6c != '\0')) {
      uVar15 = (uint)((int)local_80 <= (int)local_70);
      goto LAB_0177c754;
    }
LAB_0177ba18:
    if (local_88 == (Node *)CONCAT71(uStack_77,local_78)) goto LAB_0177ba28;
    break;
  case 0x14f:
    BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if (((uStack_7c & 0xff) == 0) || (local_80 != -NAN)) {
      if (((uStack_6c & 0xff) == 0) || (local_70 != 0.0)) {
        if (((uStack_7c & 0xff) != 0) && ((uStack_6c & 0xff) != 0)) {
          pNVar9 = (Node *)MachineGraph::Int32Constant
                                     (*(MachineGraph **)(this + 0x10),
                                      (uint)((uint)local_80 < (uint)local_70));
          goto switchD_0177a998_caseD_38;
        }
        if (local_88 != (Node *)CONCAT71(uStack_77,local_78)) {
          if ((((*(short *)(*(long *)local_88 + 0x10) != 0x12d) || ((char)uStack_6c == '\0')) ||
              (BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
               ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                               *)&local_c8,local_88), pNVar9 = local_c0, (char)uStack_a4 == '\0'))
             || (0x7fffffffU >> (ulong)(local_a8 & 0x1f) <= (uint)local_70)) break;
          pNVar24 = param_1 + 0x20;
          pNVar12 = pNVar24;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar12 = (Node *)(*(long *)pNVar24 + 0x10);
          }
          pNVar13 = *(Node **)pNVar12;
          if (pNVar13 != local_c0) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar29 = (Use *)(*(long *)pNVar24 + -0x18);
            }
            else {
              pUVar29 = (Use *)(param_1 + -0x18);
            }
            if (pNVar13 != (Node *)0x0) {
              Node::RemoveUse(pNVar13,pUVar29);
            }
            *(Node **)pNVar12 = pNVar9;
            if (pNVar9 != (Node *)0x0) {
              Node::AppendUse(pNVar9,pUVar29);
            }
          }
          pNVar13 = (Node *)MachineGraph::Int32Constant
                                      (*(MachineGraph **)(this + 0x10),
                                       (int)local_70 << (ulong)(local_a8 & 0x1f));
          pNVar12 = pNVar24;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar12 = (Node *)(*(long *)pNVar24 + 0x10);
          }
          pNVar11 = *(Node **)(pNVar12 + 8);
          pNVar9 = param_1;
          if (pNVar11 == pNVar13) goto switchD_0177a998_caseD_38;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar29 = (Use *)(*(long *)pNVar24 + -0x30);
          }
          else {
            pUVar29 = (Use *)(param_1 + -0x30);
          }
          if (pNVar11 != (Node *)0x0) {
            Node::RemoveUse(pNVar11,pUVar29);
          }
          *(Node **)(pNVar12 + 8) = pNVar13;
          goto joined_r0x0177c114;
        }
      }
    }
LAB_0177c11c:
    pNVar9 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),0);
    goto switchD_0177a998_caseD_38;
  case 0x150:
    BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<unsigned_int,(v8::internal::compiler::IrOpcode::Value)23>>
                    *)&local_90,param_1);
    if ((((uStack_7c & 0xff) == 0) || (local_80 != 0.0)) &&
       (((uStack_6c & 0xff) == 0 || (local_70 != -NAN)))) {
      if (((uStack_7c & 0xff) == 0) || ((uStack_6c & 0xff) == 0)) goto LAB_0177ba18;
      uVar15 = (uint)((uint)local_80 <= (uint)local_70);
    }
    else {
LAB_0177ba28:
      uVar15 = 1;
    }
LAB_0177c754:
    pNVar9 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),uVar15);
    goto switchD_0177a998_caseD_38;
  case 0x158:
  case 0x159:
  case 0x15a:
    pNVar9 = (Node *)ReduceFloat64Compare(this,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x15c:
    BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
                    *)&local_90,param_1);
    if (this[0x18] == (MachineOperatorReducer)0x0) {
      if ((uStack_6c & 0xff) != 0) goto LAB_0177bd68;
LAB_0177bde4:
      bVar6 = true;
joined_r0x0177bdec:
      if ((char)uStack_7c == '\0') break;
      uVar30 = SUB41(local_80,0);
      uVar31 = (undefined1)((uint)local_80 >> 8);
      uVar32 = (undefined1)((uint)local_80 >> 0x10);
      uVar33 = (undefined1)((uint)local_80 >> 0x18);
      if (NAN(local_80)) goto LAB_0177ccbc;
      if (bVar6) {
        if ((((this[0x18] != (MachineOperatorReducer)0x0) && ((char)uStack_7c != '\0')) &&
            (local_80 == 0.0)) && ((int)local_80 < 0)) {
          cVar8 = MachineOperatorBuilder::Float32RoundUp
                            (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          if ((cVar8 != '\0') &&
             (plVar21 = (long *)CONCAT71(uStack_77,local_78), *(short *)(*plVar21 + 0x10) == 0x163))
          {
            plVar23 = plVar21 + 4;
            uVar15 = *(uint *)((long)plVar21 + 0x14) & 0xf000000;
            plVar21 = plVar23;
            if (uVar15 == 0xf000000) {
              plVar21 = (long *)(*plVar23 + 0x10);
            }
            if (*(short *)(*(long *)*plVar21 + 0x10) == 0x15c) {
              if (uVar15 == 0xf000000) {
                plVar23 = (long *)(*plVar23 + 0x10);
              }
              BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
              ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
                              *)&local_c8,(Node *)*plVar23);
              if ((((char)iStack_b4 != '\0') && (local_b8 == 0.0)) && ((int)local_b8 < 0)) {
                pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
                MachineOperatorBuilder::Float32RoundUp
                          ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
                local_d8 = (Node *)CONCAT71(uStack_af,local_b0);
                pOVar14 = extraout_x1;
                goto LAB_0177bfd8;
              }
            }
          }
          Node::RemoveInput(param_1,0);
          pOVar14 = (Operator *)
                    MachineOperatorBuilder::Float32Neg
                              (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          goto LAB_0177cb8c;
        }
        break;
      }
      local_80 = local_80 - local_70;
      uVar30 = SUB41(local_80,0);
      uVar31 = (undefined1)((uint)local_80 >> 8);
      uVar32 = (undefined1)((uint)local_80 >> 0x10);
      uVar33 = (undefined1)((uint)local_80 >> 0x18);
    }
    else {
      if ((uStack_6c & 0xff) == 0) goto LAB_0177bde4;
      if ((local_70 == 0.0) &&
         (pNVar9 = local_88,
         0.0 < (double)((ulong)(double)local_70 & 0x8000000000000000 ^ 0x3ff0000000000000)))
      goto switchD_0177a998_caseD_38;
LAB_0177bd68:
      uVar30 = SUB41(local_70,0);
      uVar31 = (undefined1)((uint)local_70 >> 8);
      uVar32 = (undefined1)((uint)local_70 >> 0x10);
      uVar33 = (undefined1)((uint)local_70 >> 0x18);
      if (!NAN(local_70)) {
        bVar6 = false;
        goto joined_r0x0177bdec;
      }
LAB_0177ccbc:
      fVar3 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))) -
              (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
      uVar30 = SUB41(fVar3,0);
      uVar31 = (undefined1)((uint)fVar3 >> 8);
      uVar32 = (undefined1)((uint)fVar3 >> 0x10);
      uVar33 = (undefined1)((uint)fVar3 >> 0x18);
    }
    local_cc = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
    local_d8 = (Node *)CONCAT44(local_d8._4_4_,local_cc);
    pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar14 = (Operator *)
              CommonOperatorBuilder::Float32Constant
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],local_cc);
LAB_0177c154:
    local_c8 = (Node *)0x0;
    ppNVar17 = &local_c8;
    goto LAB_0177c954;
  case 0x168:
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)&local_90,param_1);
    if ((local_60 != '\0') && (NAN(local_68))) {
LAB_0177ccc4:
      pNVar9 = (Node *)CONCAT44(uStack_6c,local_70);
      goto switchD_0177a998_caseD_38;
    }
    if (local_78 != '\0') {
      pNVar9 = local_88;
      if (NAN((double)CONCAT44(uStack_7c,local_80))) goto switchD_0177a998_caseD_38;
      if (local_60 != '\0') {
        base::ieee754::atan2((double)CONCAT44(uStack_7c,local_80),local_68);
        uVar30 = extraout_b0_03;
        uVar31 = extraout_var_03;
        uVar32 = extraout_var_24;
        uVar33 = extraout_var_45;
        uVar35 = extraout_var_66;
        uVar36 = extraout_var_87;
        uVar37 = extraout_var_x00108;
        uVar38 = extraout_var_x00129;
        goto LAB_0177c250;
      }
    }
    break;
  case 0x16b:
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)&local_90,param_1);
    if ((local_78 != '\0') && (local_60 != '\0')) {
      local_68 = (double)CONCAT44(uStack_7c,local_80) + local_68;
      uVar30 = SUB81(local_68,0);
      uVar31 = (undefined1)((ulong)local_68 >> 8);
      uVar32 = (undefined1)((ulong)local_68 >> 0x10);
      uVar33 = (undefined1)((ulong)local_68 >> 0x18);
      uVar35 = (undefined1)((ulong)local_68 >> 0x20);
      uVar36 = (undefined1)((ulong)local_68 >> 0x28);
      uVar37 = (undefined1)((ulong)local_68 >> 0x30);
      uVar38 = (undefined1)((ulong)local_68 >> 0x38);
LAB_0177c250:
      local_d8 = (Node *)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                 ));
LAB_0177c254:
      local_c8 = local_d8;
      pNVar9 = (Node *)MachineGraph::Float64Constant
                                 (*(MachineGraph **)(this + 0x10),(double)local_d8);
      goto switchD_0177a998_caseD_38;
    }
    break;
  case 0x16c:
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)&local_90,param_1);
    if (this[0x18] == (MachineOperatorReducer)0x0) {
      if (local_60 != '\0') goto LAB_0177bed4;
LAB_0177bef0:
      bVar6 = true;
    }
    else {
      if (local_60 == '\0') goto LAB_0177bef0;
      if ((local_68 == 0.0) && (pNVar9 = local_88, -1 < (long)local_68))
      goto switchD_0177a998_caseD_38;
LAB_0177bed4:
      uVar30 = SUB81(local_68,0);
      uVar31 = (undefined1)((ulong)local_68 >> 8);
      uVar32 = (undefined1)((ulong)local_68 >> 0x10);
      uVar33 = (undefined1)((ulong)local_68 >> 0x18);
      uVar35 = (undefined1)((ulong)local_68 >> 0x20);
      uVar36 = (undefined1)((ulong)local_68 >> 0x28);
      uVar37 = (undefined1)((ulong)local_68 >> 0x30);
      uVar38 = (undefined1)((ulong)local_68 >> 0x38);
      if (NAN(local_68)) goto LAB_0177ccb4;
      bVar6 = false;
    }
    if (local_78 == '\0') break;
    uVar30 = SUB41(local_80,0);
    uVar31 = (undefined1)((uint)local_80 >> 8);
    uVar32 = (undefined1)((uint)local_80 >> 0x10);
    uVar33 = (undefined1)((uint)local_80 >> 0x18);
    uVar35 = (undefined1)uStack_7c;
    uVar36 = (undefined1)(uStack_7c >> 8);
    uVar37 = (undefined1)(uStack_7c >> 0x10);
    uVar38 = (undefined1)(uStack_7c >> 0x18);
    if (NAN((double)CONCAT44(uStack_7c,local_80))) goto LAB_0177ccb4;
    if (!bVar6) {
      local_68 = (double)CONCAT44(uStack_7c,local_80) - local_68;
      uVar30 = SUB81(local_68,0);
      uVar31 = (undefined1)((ulong)local_68 >> 8);
      uVar32 = (undefined1)((ulong)local_68 >> 0x10);
      uVar33 = (undefined1)((ulong)local_68 >> 0x18);
      uVar35 = (undefined1)((ulong)local_68 >> 0x20);
      uVar36 = (undefined1)((ulong)local_68 >> 0x28);
      uVar37 = (undefined1)((ulong)local_68 >> 0x30);
      uVar38 = (undefined1)((ulong)local_68 >> 0x38);
      goto LAB_0177c250;
    }
    if ((((this[0x18] == (MachineOperatorReducer)0x0) || (local_78 == '\0')) ||
        ((double)CONCAT44(uStack_7c,local_80) != 0.0)) || (-1 < (int)uStack_7c)) break;
    cVar8 = MachineOperatorBuilder::Float64RoundUp
                      (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
    if ((cVar8 == '\0') ||
       (plVar21 = (long *)CONCAT44(uStack_6c,local_70), *(short *)(*plVar21 + 0x10) != 0x182)) {
LAB_0177c968:
      iVar16 = 0;
      goto LAB_0177c970;
    }
    plVar23 = plVar21 + 4;
    uVar15 = *(uint *)((long)plVar21 + 0x14) & 0xf000000;
    plVar21 = plVar23;
    if (uVar15 == 0xf000000) {
      plVar21 = (long *)(*plVar23 + 0x10);
    }
    if (*(short *)(*(long *)*plVar21 + 0x10) != 0x16c) goto LAB_0177c968;
    if (uVar15 == 0xf000000) {
      plVar23 = (long *)(*plVar23 + 0x10);
    }
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)&local_c8,(Node *)*plVar23);
    if (((local_b0 == '\0') || ((double)CONCAT44(iStack_b4,local_b8) != 0.0)) || (-1 < iStack_b4))
    goto LAB_0177c968;
    pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
    MachineOperatorBuilder::Float64RoundUp
              ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
    local_d8 = (Node *)CONCAT44(uStack_a4,local_a8);
    pOVar14 = extraout_x1_00;
LAB_0177bfd8:
    ppNVar17 = &local_d8;
    iVar16 = 1;
    goto LAB_0177c95c;
  case 0x16d:
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)&local_90,param_1);
    if (this[0x18] == (MachineOperatorReducer)0x0) {
      if (local_60 != '\0') goto LAB_0177bc28;
LAB_0177bd84:
      bVar6 = true;
    }
    else {
      if (local_60 == '\0') goto LAB_0177bd84;
      pNVar9 = local_88;
      if (local_68 == 1.0) goto switchD_0177a998_caseD_38;
LAB_0177bc28:
      uVar30 = SUB81(local_68,0);
      uVar31 = (undefined1)((ulong)local_68 >> 8);
      uVar32 = (undefined1)((ulong)local_68 >> 0x10);
      uVar33 = (undefined1)((ulong)local_68 >> 0x18);
      uVar35 = (undefined1)((ulong)local_68 >> 0x20);
      uVar36 = (undefined1)((ulong)local_68 >> 0x28);
      uVar37 = (undefined1)((ulong)local_68 >> 0x30);
      uVar38 = (undefined1)((ulong)local_68 >> 0x38);
      if (local_68 == -1.0) {
        local_c8 = (Node *)0x8000000000000000;
        pNVar12 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)(this + 0x10),-0.0);
        pNVar9 = param_1 + 0x20;
        pNVar24 = pNVar9;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        pNVar13 = *(Node **)pNVar24;
        if (pNVar13 != pNVar12) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar29 = (Use *)(*(long *)pNVar9 + -0x18);
          }
          else {
            pUVar29 = (Use *)(param_1 + -0x18);
          }
          if (pNVar13 != (Node *)0x0) {
            Node::RemoveUse(pNVar13,pUVar29);
          }
          *(Node **)pNVar24 = pNVar12;
          if (pNVar12 != (Node *)0x0) {
            Node::AppendUse(pNVar12,pUVar29);
          }
        }
        pNVar24 = pNVar9;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        pNVar12 = *(Node **)(pNVar24 + 8);
        if (pNVar12 != local_88) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar29 = (Use *)(*(long *)pNVar9 + -0x30);
          }
          else {
            pUVar29 = (Use *)(param_1 + -0x30);
          }
          if (pNVar12 != (Node *)0x0) {
            Node::RemoveUse(pNVar12,pUVar29);
          }
          *(Node **)(pNVar24 + 8) = local_88;
          if (local_88 != (Node *)0x0) {
            Node::AppendUse(local_88,pUVar29);
          }
        }
        pOVar14 = (Operator *)
                  MachineOperatorBuilder::Float64Sub
                            (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        goto LAB_0177cb8c;
      }
      if (NAN(local_68)) goto LAB_0177ccb4;
      bVar6 = false;
    }
    if (local_78 == '\0') {
      if ((!bVar6) && (local_68 == 2.0)) {
        pNVar9 = param_1 + 0x20;
        pNVar24 = pNVar9;
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
        }
        pNVar12 = *(Node **)(pNVar24 + 8);
        if (pNVar12 != local_88) {
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pUVar29 = (Use *)(*(long *)pNVar9 + -0x30);
          }
          else {
            pUVar29 = (Use *)(param_1 + -0x30);
          }
          if (pNVar12 != (Node *)0x0) {
            Node::RemoveUse(pNVar12,pUVar29);
          }
          *(Node **)(pNVar24 + 8) = local_88;
          if (local_88 != (Node *)0x0) {
            Node::AppendUse(local_88,pUVar29);
          }
        }
        pOVar14 = (Operator *)
                  MachineOperatorBuilder::Float64Add
                            (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        goto LAB_0177cb8c;
      }
    }
    else if (!bVar6) {
      local_68 = (double)CONCAT44(uStack_7c,local_80) * local_68;
      uVar30 = SUB81(local_68,0);
      uVar31 = (undefined1)((ulong)local_68 >> 8);
      uVar32 = (undefined1)((ulong)local_68 >> 0x10);
      uVar33 = (undefined1)((ulong)local_68 >> 0x18);
      uVar35 = (undefined1)((ulong)local_68 >> 0x20);
      uVar36 = (undefined1)((ulong)local_68 >> 0x28);
      uVar37 = (undefined1)((ulong)local_68 >> 0x30);
      uVar38 = (undefined1)((ulong)local_68 >> 0x38);
      goto LAB_0177c250;
    }
    break;
  case 0x16e:
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)&local_90,param_1);
    uVar30 = SUB81(local_68,0);
    uVar31 = (undefined1)((ulong)local_68 >> 8);
    uVar32 = (undefined1)((ulong)local_68 >> 0x10);
    uVar33 = (undefined1)((ulong)local_68 >> 0x18);
    uVar35 = (undefined1)((ulong)local_68 >> 0x20);
    uVar36 = (undefined1)((ulong)local_68 >> 0x28);
    uVar37 = (undefined1)((ulong)local_68 >> 0x30);
    uVar38 = (undefined1)((ulong)local_68 >> 0x38);
    if (this[0x18] != (MachineOperatorReducer)0x0) {
      if (local_60 == '\0') goto LAB_0177bda4;
      pNVar9 = local_88;
      if (local_68 == 1.0) goto switchD_0177a998_caseD_38;
LAB_0177bd2c:
      if (!NAN(local_68)) {
        bVar6 = false;
        goto joined_r0x0177bdac;
      }
LAB_0177ccb4:
      dVar22 = (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                               )) -
               (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                               ));
      uVar30 = SUB81(dVar22,0);
      uVar31 = (undefined1)((ulong)dVar22 >> 8);
      uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
      uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
      goto LAB_0177c250;
    }
    if (local_60 != '\0') goto LAB_0177bd2c;
LAB_0177bda4:
    bVar6 = true;
joined_r0x0177bdac:
    if (local_78 != '\0') {
      uVar30 = SUB41(local_80,0);
      uVar31 = (undefined1)((uint)local_80 >> 8);
      uVar32 = (undefined1)((uint)local_80 >> 0x10);
      uVar33 = (undefined1)((uint)local_80 >> 0x18);
      uVar35 = (undefined1)uStack_7c;
      uVar36 = (undefined1)(uStack_7c >> 8);
      uVar37 = (undefined1)(uStack_7c >> 0x10);
      uVar38 = (undefined1)(uStack_7c >> 0x18);
      if (NAN((double)CONCAT44(uStack_7c,local_80))) goto LAB_0177ccb4;
      if (!bVar6) {
        dVar22 = (double)CONCAT44(uStack_7c,local_80);
        if (local_68 == 0.0) {
          local_d8 = (Node *)0x7ff8000000000000;
          if ((dVar22 != 0.0) && (!NAN(dVar22))) {
            local_d8 = (Node *)0x7ff0000000000000;
            if (0.0 <= dVar22 == (long)local_68 < 0) {
              local_d8 = (Node *)0xfff0000000000000;
            }
          }
        }
        else {
          local_d8 = (Node *)(dVar22 / local_68);
        }
        goto LAB_0177c254;
      }
    }
    if (this[0x18] == (MachineOperatorReducer)0x0) {
      if (!bVar6) {
LAB_0177c448:
        if (((local_68 != 0.0) && (2.2250738585072014e-308 <= ABS(local_68))) &&
           ((!NAN(local_68) && !NAN(local_68) &&
            ((ABS(local_68) < INFINITY && (ABS(local_68) != INFINITY)))))) {
          uVar27 = (ulong)local_68 & 0xfffffffffffff;
          if (((ulong)local_68 & 0x7ff0000000000000) != 0) {
            uVar27 = (ulong)local_68 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar40 = CONCAT16(POPCOUNT((char)(uVar27 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(uVar27 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(uVar27 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(uVar27 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(uVar27 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(uVar27 >> 8
                                                                                        )),
                                                                         POPCOUNT((char)uVar27))))))
                           );
          uVar39 = NEON_uaddlv((ulong)uVar40,1);
          if (((ulong)CONCAT52((int5)(uVar40 >> 0x10),uVar39) & 0xffffffff) == 1) {
            local_c8 = (Node *)(1.0 / local_68);
            local_88 = (Node *)MachineGraph::Float64Constant
                                         (*(MachineGraph **)(this + 0x10),(double)local_c8);
            uVar15 = *(uint *)(param_1 + 0x14);
            goto LAB_0177ca98;
          }
        }
      }
      break;
    }
    if (bVar6) break;
    if (local_68 != -1.0) goto LAB_0177c448;
    iVar16 = 1;
LAB_0177c970:
    Node::RemoveInput(param_1,iVar16);
    pOVar14 = (Operator *)
              MachineOperatorBuilder::Float64Neg
                        (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
LAB_0177cb8c:
    NodeProperties::ChangeOp(param_1,pOVar14);
    pNVar9 = param_1;
    goto switchD_0177a998_caseD_38;
  case 0x16f:
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)&local_90,param_1);
    if (local_60 != '\0') {
      if (local_68 != 0.0) {
        if (NAN(local_68)) goto LAB_0177ccc4;
        goto LAB_0177c22c;
      }
      local_d8 = (Node *)0x7ff8000000000000;
      goto LAB_0177c254;
    }
LAB_0177c22c:
    if (local_78 != '\0') {
      pNVar9 = local_88;
      if (NAN((double)CONCAT44(uStack_7c,local_80))) goto switchD_0177a998_caseD_38;
      if (local_60 != '\0') {
        dVar22 = fmod((double)CONCAT44(uStack_7c,local_80),local_68);
        uVar30 = SUB81(dVar22,0);
        uVar31 = (undefined1)((ulong)dVar22 >> 8);
        uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
        uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
        uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
        uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
        uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
        uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
        goto LAB_0177c250;
      }
    }
    break;
  case 0x170:
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)&local_90,param_1);
    if (local_78 == '\0') {
      if (local_60 != '\0') {
        if (local_68 == 0.0) {
          local_d8 = (Node *)0x3ff0000000000000;
          goto LAB_0177c254;
        }
        if (local_68 == -2.0) {
          local_c8 = (Node *)0x3ff0000000000000;
          pNVar12 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)(this + 0x10),1.0);
          pNVar9 = param_1 + 0x20;
          pNVar24 = pNVar9;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          pNVar13 = *(Node **)pNVar24;
          if (pNVar13 != pNVar12) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar29 = (Use *)(*(long *)pNVar9 + -0x18);
            }
            else {
              pUVar29 = (Use *)(param_1 + -0x18);
            }
            if (pNVar13 != (Node *)0x0) {
              Node::RemoveUse(pNVar13,pUVar29);
            }
            *(Node **)pNVar24 = pNVar12;
            if (pNVar12 != (Node *)0x0) {
              Node::AppendUse(pNVar12,pUVar29);
            }
          }
          pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar14 = (Operator *)
                    MachineOperatorBuilder::Float64Mul
                              ((MachineOperatorBuilder *)(*(undefined8 **)(this + 0x10))[2]);
          local_c8 = local_88;
          local_c0 = local_88;
          pNVar9 = (Node *)Graph::NewNode(pGVar28,pOVar14,2,&local_c8,false);
LAB_0177c6dc:
          pNVar12 = param_1 + 0x20;
          pNVar24 = pNVar12;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar24 = (Node *)(*(long *)pNVar12 + 0x10);
          }
          pNVar13 = *(Node **)(pNVar24 + 8);
          if (pNVar13 != pNVar9) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar29 = (Use *)(*(long *)pNVar12 + -0x30);
            }
            else {
              pUVar29 = (Use *)(param_1 + -0x30);
            }
            if (pNVar13 != (Node *)0x0) {
              Node::RemoveUse(pNVar13,pUVar29);
            }
            *(Node **)(pNVar24 + 8) = pNVar9;
            if (pNVar9 != (Node *)0x0) {
              Node::AppendUse(pNVar9,pUVar29);
            }
          }
          pOVar14 = (Operator *)
                    MachineOperatorBuilder::Float64Div
                              (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
          goto LAB_0177cb8c;
        }
        if (local_68 != 2.0) {
          if (local_68 != -0.5) {
            if (local_68 == 0.5) {
              pNVar9 = (Node *)Float64PowHalf(this,local_88);
              goto switchD_0177a998_caseD_38;
            }
            break;
          }
          local_c8 = (Node *)0x3ff0000000000000;
          pNVar12 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)(this + 0x10),1.0);
          pNVar9 = param_1 + 0x20;
          pNVar24 = pNVar9;
          if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar24 = (Node *)(*(long *)pNVar9 + 0x10);
          }
          pNVar13 = *(Node **)pNVar24;
          if (pNVar13 != pNVar12) {
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar29 = (Use *)(*(long *)pNVar9 + -0x18);
            }
            else {
              pUVar29 = (Use *)(param_1 + -0x18);
            }
            if (pNVar13 != (Node *)0x0) {
              Node::RemoveUse(pNVar13,pUVar29);
            }
            *(Node **)pNVar24 = pNVar12;
            if (pNVar12 != (Node *)0x0) {
              Node::AppendUse(pNVar12,pUVar29);
            }
          }
          pNVar9 = (Node *)Float64PowHalf(this,local_88);
          goto LAB_0177c6dc;
        }
        uVar15 = *(uint *)(param_1 + 0x14);
LAB_0177ca98:
        pNVar24 = param_1 + 0x20;
        pNVar9 = pNVar24;
        if ((uVar15 & 0xf000000) == 0xf000000) {
          pNVar9 = (Node *)(*(long *)pNVar24 + 0x10);
        }
        pNVar12 = *(Node **)(pNVar9 + 8);
        if (pNVar12 != local_88) {
          if ((uVar15 & 0xf000000) == 0xf000000) {
            pUVar29 = (Use *)(*(long *)pNVar24 + -0x30);
          }
          else {
            pUVar29 = (Use *)(param_1 + -0x30);
          }
          if (pNVar12 != (Node *)0x0) {
            Node::RemoveUse(pNVar12,pUVar29);
          }
          *(Node **)(pNVar9 + 8) = local_88;
          if (local_88 != (Node *)0x0) {
            Node::AppendUse(local_88,pUVar29);
          }
        }
        pOVar14 = (Operator *)
                  MachineOperatorBuilder::Float64Mul
                            (*(MachineOperatorBuilder **)(*(long *)(this + 0x10) + 0x10));
        goto LAB_0177cb8c;
      }
    }
    else if (local_60 != '\0') {
      base::ieee754::pow((double)CONCAT44(uStack_7c,local_80),local_68);
      uVar30 = extraout_b0_04;
      uVar31 = extraout_var_04;
      uVar32 = extraout_var_25;
      uVar33 = extraout_var_46;
      uVar35 = extraout_var_67;
      uVar36 = extraout_var_88;
      uVar37 = extraout_var_x00109;
      uVar38 = extraout_var_x00130;
      goto LAB_0177c250;
    }
    break;
  case 0x172:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::acos(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_05;
      uVar31 = extraout_var_05;
      uVar32 = extraout_var_26;
      uVar33 = extraout_var_47;
      uVar35 = extraout_var_68;
      uVar36 = extraout_var_89;
      uVar37 = extraout_var_x00110;
      uVar38 = extraout_var_x00131;
LAB_0177c18c:
      local_c8 = (Node *)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                 ));
      goto LAB_0177c190;
    }
    break;
  case 0x173:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::acosh(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_08;
      uVar31 = extraout_var_08;
      uVar32 = extraout_var_29;
      uVar33 = extraout_var_50;
      uVar35 = extraout_var_71;
      uVar36 = extraout_var_92;
      uVar37 = extraout_var_x00113;
      uVar38 = extraout_var_x00134;
      goto LAB_0177c18c;
    }
    break;
  case 0x174:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::asin(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_09;
      uVar31 = extraout_var_09;
      uVar32 = extraout_var_30;
      uVar33 = extraout_var_51;
      uVar35 = extraout_var_72;
      uVar36 = extraout_var_93;
      uVar37 = extraout_var_x00114;
      uVar38 = extraout_var_x00135;
      goto LAB_0177c18c;
    }
    break;
  case 0x175:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::asinh(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_13;
      uVar31 = extraout_var_13;
      uVar32 = extraout_var_34;
      uVar33 = extraout_var_55;
      uVar35 = extraout_var_76;
      uVar36 = extraout_var_97;
      uVar37 = extraout_var_x00118;
      uVar38 = extraout_var_x00139;
      goto LAB_0177c18c;
    }
    break;
  case 0x176:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::atan(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0;
      uVar31 = extraout_var;
      uVar32 = extraout_var_20;
      uVar33 = extraout_var_41;
      uVar35 = extraout_var_62;
      uVar36 = extraout_var_83;
      uVar37 = extraout_var_x00104;
      uVar38 = extraout_var_x00125;
      goto LAB_0177c18c;
    }
    break;
  case 0x177:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::atanh(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_06;
      uVar31 = extraout_var_06;
      uVar32 = extraout_var_27;
      uVar33 = extraout_var_48;
      uVar35 = extraout_var_69;
      uVar36 = extraout_var_90;
      uVar37 = extraout_var_x00111;
      uVar38 = extraout_var_x00132;
      goto LAB_0177c18c;
    }
    break;
  case 0x178:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::cbrt(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_10;
      uVar31 = extraout_var_10;
      uVar32 = extraout_var_31;
      uVar33 = extraout_var_52;
      uVar35 = extraout_var_73;
      uVar36 = extraout_var_94;
      uVar37 = extraout_var_x00115;
      uVar38 = extraout_var_x00136;
      goto LAB_0177c18c;
    }
    break;
  case 0x179:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::cos(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_11;
      uVar31 = extraout_var_11;
      uVar32 = extraout_var_32;
      uVar33 = extraout_var_53;
      uVar35 = extraout_var_74;
      uVar36 = extraout_var_95;
      uVar37 = extraout_var_x00116;
      uVar38 = extraout_var_x00137;
      goto LAB_0177c18c;
    }
    break;
  case 0x17a:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::cosh(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_17;
      uVar31 = extraout_var_17;
      uVar32 = extraout_var_38;
      uVar33 = extraout_var_59;
      uVar35 = extraout_var_80;
      uVar36 = extraout_var_x00101;
      uVar37 = extraout_var_x00122;
      uVar38 = extraout_var_x00143;
      goto LAB_0177c18c;
    }
    break;
  case 0x17b:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::exp(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_12;
      uVar31 = extraout_var_12;
      uVar32 = extraout_var_33;
      uVar33 = extraout_var_54;
      uVar35 = extraout_var_75;
      uVar36 = extraout_var_96;
      uVar37 = extraout_var_x00117;
      uVar38 = extraout_var_x00138;
      goto LAB_0177c18c;
    }
    break;
  case 0x17c:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::expm1(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_07;
      uVar31 = extraout_var_07;
      uVar32 = extraout_var_28;
      uVar33 = extraout_var_49;
      uVar35 = extraout_var_70;
      uVar36 = extraout_var_91;
      uVar37 = extraout_var_x00112;
      uVar38 = extraout_var_x00133;
      goto LAB_0177c18c;
    }
    break;
  case 0x17d:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::log(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_00;
      uVar31 = extraout_var_00;
      uVar32 = extraout_var_21;
      uVar33 = extraout_var_42;
      uVar35 = extraout_var_63;
      uVar36 = extraout_var_84;
      uVar37 = extraout_var_x00105;
      uVar38 = extraout_var_x00126;
      goto LAB_0177c18c;
    }
    break;
  case 0x17e:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::log1p(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_19;
      uVar31 = extraout_var_19;
      uVar32 = extraout_var_40;
      uVar33 = extraout_var_61;
      uVar35 = extraout_var_82;
      uVar36 = extraout_var_x00103;
      uVar37 = extraout_var_x00124;
      uVar38 = extraout_var_x00145;
      goto LAB_0177c18c;
    }
    break;
  case 0x17f:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::log10(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_18;
      uVar31 = extraout_var_18;
      uVar32 = extraout_var_39;
      uVar33 = extraout_var_60;
      uVar35 = extraout_var_81;
      uVar36 = extraout_var_x00102;
      uVar37 = extraout_var_x00123;
      uVar38 = extraout_var_x00144;
      goto LAB_0177c18c;
    }
    break;
  case 0x180:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::log2(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_01;
      uVar31 = extraout_var_01;
      uVar32 = extraout_var_22;
      uVar33 = extraout_var_43;
      uVar35 = extraout_var_64;
      uVar36 = extraout_var_85;
      uVar37 = extraout_var_x00106;
      uVar38 = extraout_var_x00127;
      goto LAB_0177c18c;
    }
    break;
  case 0x182:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      lVar20 = (long)*(double *)(**(long **)pNVar9 + 0x30);
      uVar30 = (undefined1)lVar20;
      uVar31 = (undefined1)((ulong)lVar20 >> 8);
      uVar32 = (undefined1)((ulong)lVar20 >> 0x10);
      uVar33 = (undefined1)((ulong)lVar20 >> 0x18);
      uVar35 = (undefined1)((ulong)lVar20 >> 0x20);
      uVar36 = (undefined1)((ulong)lVar20 >> 0x28);
      uVar37 = (undefined1)((ulong)lVar20 >> 0x30);
      uVar38 = (undefined1)((ulong)lVar20 >> 0x38);
      goto LAB_0177c18c;
    }
    break;
  case 0x187:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::sin(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_14;
      uVar31 = extraout_var_14;
      uVar32 = extraout_var_35;
      uVar33 = extraout_var_56;
      uVar35 = extraout_var_77;
      uVar36 = extraout_var_98;
      uVar37 = extraout_var_x00119;
      uVar38 = extraout_var_x00140;
      goto LAB_0177c18c;
    }
    break;
  case 0x188:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::sinh(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_02;
      uVar31 = extraout_var_02;
      uVar32 = extraout_var_23;
      uVar33 = extraout_var_44;
      uVar35 = extraout_var_65;
      uVar36 = extraout_var_86;
      uVar37 = extraout_var_x00107;
      uVar38 = extraout_var_x00128;
      goto LAB_0177c18c;
    }
    break;
  case 0x18a:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::tan(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_15;
      uVar31 = extraout_var_15;
      uVar32 = extraout_var_36;
      uVar33 = extraout_var_57;
      uVar35 = extraout_var_78;
      uVar36 = extraout_var_99;
      uVar37 = extraout_var_x00120;
      uVar38 = extraout_var_x00141;
      goto LAB_0177c18c;
    }
    break;
  case 0x18b:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x1a) {
      base::ieee754::tanh(*(double *)(**(long **)pNVar9 + 0x30));
      uVar30 = extraout_b0_16;
      uVar31 = extraout_var_16;
      uVar32 = extraout_var_37;
      uVar33 = extraout_var_58;
      uVar35 = extraout_var_79;
      uVar36 = extraout_var_x00100;
      uVar37 = extraout_var_x00121;
      uVar38 = extraout_var_x00142;
      goto LAB_0177c18c;
    }
    break;
  case 0x1ac:
  case 0x1e8:
    pNVar9 = (Node *)ReduceStore((MachineOperatorReducer *)0x0,param_1);
    goto switchD_0177a998_caseD_38;
  case 0x1b6:
  case 0x1b7:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    if (*(short *)(*plVar21 + 0x10) != 0x1b9) break;
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
    uVar15 = *(uint *)((long)plVar21 + 0x14);
    goto joined_r0x0177ba40;
  case 0x1ba:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    sVar1 = *(short *)(*plVar21 + 0x10);
    if (sVar1 == 0x1c9) {
LAB_0177bbe0:
      uVar15 = *(uint *)((long)plVar21 + 0x14);
      goto joined_r0x0177ba40;
    }
    if (sVar1 == 0x1a) {
      dVar22 = *(double *)(*plVar21 + 0x30);
      uVar30 = SUB81(dVar22,0);
      uVar31 = (undefined1)((ulong)dVar22 >> 8);
      uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
      uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
joined_r0x0177b990:
      if ((((-2147483648.0 <= dVar22) && (dVar22 <= 2147483647.0)) && (ABS(dVar22) != INFINITY)) &&
         (!NAN(ABS(dVar22)))) {
        uVar15 = (uint)(double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30)))))));
        dVar41 = (double)(int)uVar15;
        bVar6 = false;
        if (!NAN(dVar41) &&
            !NAN((double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                 )))) {
          bVar6 = dVar41 == (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30)))))));
        }
        if (bVar6) goto LAB_0177c754;
      }
      uVar15 = 0xfffffbce;
      if (((ulong)dVar22 & 0x7ff0000000000000) != 0) {
        uVar15 = ((uint)((ulong)dVar22 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar15 < 0) {
        if ((int)uVar15 < -0x34) goto LAB_0177c438;
        uVar27 = (ulong)dVar22 & 0xfffffffffffff;
        if (((ulong)dVar22 & 0x7ff0000000000000) != 0) {
          uVar27 = (ulong)dVar22 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar25 = (uint)(uVar27 >> ((ulong)-uVar15 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar15) {
LAB_0177c438:
          uVar15 = 0;
          goto LAB_0177c754;
        }
        uVar27 = (ulong)dVar22 & 0xfffffffffffff;
        if (((ulong)dVar22 & 0x7ff0000000000000) != 0) {
          uVar27 = (ulong)dVar22 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar25 = (uint)(uVar27 << ((ulong)uVar15 & 0x3f));
      }
      uVar15 = -uVar25;
      if (-1 < (long)dVar22) {
        uVar15 = uVar25;
      }
      goto LAB_0177c754;
    }
    break;
  case 0x1bb:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x19) {
      fVar3 = *(float *)(**(long **)pNVar9 + 0x2c);
      uVar30 = SUB41(fVar3,0);
      uVar31 = (undefined1)((uint)fVar3 >> 8);
      uVar32 = (undefined1)((uint)fVar3 >> 0x10);
      uVar33 = (undefined1)((uint)fVar3 >> 0x18);
      if ((this[0x18] == (MachineOperatorReducer)0x0) && (NAN(fVar3))) {
        fVar3 = fVar3 + fVar3;
        uVar30 = SUB41(fVar3,0);
        uVar31 = (undefined1)((uint)fVar3 >> 8);
        uVar32 = (undefined1)((uint)fVar3 >> 0x10);
        uVar33 = (undefined1)((uint)fVar3 >> 0x18);
      }
      dVar22 = (double)(float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
      uVar30 = SUB81(dVar22,0);
      uVar31 = (undefined1)((ulong)dVar22 >> 8);
      uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
      uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
      goto LAB_0177c18c;
    }
    break;
  case 0x1bc:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    sVar1 = *(short *)(*plVar21 + 0x10);
    if (sVar1 == 0x1c9) goto LAB_0177bbe0;
    if (sVar1 == 0x1a) {
      dVar22 = *(double *)(*plVar21 + 0x30);
      if (-2147483648.0 <= dVar22) {
        if (dVar22 <= 2147483647.0) {
          uVar15 = (int)dVar22;
        }
        else {
          uVar15 = 0x7fffffff;
        }
      }
      else {
        uVar15 = 0x80000000;
      }
      goto LAB_0177c754;
    }
    break;
  case 0x1bd:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    sVar1 = *(short *)(*plVar21 + 0x10);
    if (sVar1 == 0x1cc) goto LAB_0177ba30;
    if (sVar1 != 0x1a) break;
    pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
    pCVar10 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1];
    uVar27 = (ulong)*(double *)(*plVar21 + 0x30);
LAB_0177b3c4:
    pOVar14 = (Operator *)CommonOperatorBuilder::Int64Constant(pCVar10,uVar27);
    goto LAB_0177c948;
  case 0x1be:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    sVar1 = *(short *)(*plVar21 + 0x10);
    if (sVar1 == 0x1cd) goto LAB_0177bbe0;
    if (sVar1 == 0x1a) {
      dVar22 = *(double *)(*plVar21 + 0x30);
      dVar41 = -dVar22;
      uVar30 = SUB81(dVar41,0);
      uVar31 = (undefined1)((ulong)dVar41 >> 8);
      uVar32 = (undefined1)((ulong)dVar41 >> 0x10);
      uVar33 = (undefined1)((ulong)dVar41 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar41 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar41 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar41 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar41 >> 0x38);
      if (0.0 <= dVar22) {
        uVar30 = SUB81(dVar22,0);
        uVar31 = (undefined1)((ulong)dVar22 >> 8);
        uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
        uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
        uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
        uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
        uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
        uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
      }
      iVar18 = SUB84((double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30))))))) + 4503599627370496.0,0);
      iVar16 = -iVar18;
      if (0.0 <= dVar22) {
        iVar16 = iVar18;
      }
      bVar6 = false;
      if (!NAN((double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                               )))) {
        bVar6 = (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                )) < 4503599627370496.0;
      }
      if (!bVar6) {
        iVar16 = -0x80000000;
      }
      pNVar9 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar16);
      goto switchD_0177a998_caseD_38;
    }
    break;
  case 0x1c9:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x17) {
      iVar16 = *(int *)(**(long **)pNVar9 + 0x2c);
      cVar8 = (char)(iVar16 >> 0x1f);
      dVar22 = (double)CONCAT17(cVar8,CONCAT16(cVar8,CONCAT15(cVar8,(int5)iVar16)));
      uVar30 = SUB81(dVar22,0);
      uVar31 = (undefined1)((ulong)dVar22 >> 8);
      uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
      uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
      goto LAB_0177c18c;
    }
    break;
  case 0x1ca:
  case 0x1cb:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x17) {
      puVar26 = *(undefined8 **)(this + 0x10);
      uVar27 = (ulong)*(int *)(**(long **)pNVar9 + 0x2c);
LAB_0177b3c0:
      pGVar28 = (Graph *)*puVar26;
      pCVar10 = (CommonOperatorBuilder *)puVar26[1];
      goto LAB_0177b3c4;
    }
    break;
  case 0x1cc:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    lVar20 = *plVar21;
    sVar1 = *(short *)(lVar20 + 0x10);
    if (sVar1 != 0x1bd) {
      if (sVar1 == 0x18) {
        lVar20 = *(long *)(lVar20 + 0x30);
      }
      else {
        if (sVar1 != 0x17) break;
        lVar20 = (long)*(int *)(lVar20 + 0x2c);
      }
      dVar22 = (double)lVar20;
      uVar30 = SUB81(dVar22,0);
      uVar31 = (undefined1)((ulong)dVar22 >> 8);
      uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
      uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
      goto LAB_0177c18c;
    }
    goto LAB_0177ba30;
  case 0x1cd:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x17) {
      uVar4 = NEON_ucvtf((ulong)*(uint *)(**(long **)pNVar9 + 0x2c));
      uVar30 = (undefined1)uVar4;
      uVar31 = (undefined1)((ulong)uVar4 >> 8);
      uVar32 = (undefined1)((ulong)uVar4 >> 0x10);
      uVar33 = (undefined1)((ulong)uVar4 >> 0x18);
      uVar35 = (undefined1)((ulong)uVar4 >> 0x20);
      uVar36 = (undefined1)((ulong)uVar4 >> 0x28);
      uVar37 = (undefined1)((ulong)uVar4 >> 0x30);
      uVar38 = (undefined1)((ulong)uVar4 >> 0x38);
      goto LAB_0177c18c;
    }
    break;
  case 0x1ce:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    if (*(short *)(**(long **)pNVar9 + 0x10) == 0x17) {
      puVar26 = *(undefined8 **)(this + 0x10);
      uVar27 = (ulong)*(uint *)(**(long **)pNVar9 + 0x2c);
      goto LAB_0177b3c0;
    }
    break;
  case 0x1d0:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    sVar1 = *(short *)(*plVar21 + 0x10);
    if (sVar1 != 0x1a) {
      pNVar9 = (Node *)0x0;
      if ((sVar1 != 0x1bb) || (this[0x18] == (MachineOperatorReducer)0x0))
      goto switchD_0177a998_caseD_38;
      goto LAB_0177bbe0;
    }
    dVar22 = *(double *)(*plVar21 + 0x30);
    uVar30 = SUB81(dVar22,0);
    uVar31 = (undefined1)((ulong)dVar22 >> 8);
    uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
    uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
    uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
    uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
    uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
    uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
    if ((this[0x18] == (MachineOperatorReducer)0x0) && (NAN(dVar22))) {
      dVar22 = dVar22 + dVar22;
      uVar30 = SUB81(dVar22,0);
      uVar31 = (undefined1)((ulong)dVar22 >> 8);
      uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
      uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
    }
    bVar5 = false;
    bVar7 = false;
    bVar6 = NAN((double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                )));
    if (!bVar6) {
      bVar5 = (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                              )) < 3.4028234663852886e+38;
      bVar7 = (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                              )) == 3.4028234663852886e+38;
    }
    if (bVar7 || bVar5 != bVar6) {
      bVar6 = false;
      if (!NAN((double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                               )))) {
        bVar6 = (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                )) < -3.4028234663852886e+38;
      }
      if (bVar6) {
        bVar5 = false;
        bVar6 = NAN((double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13
                                                  (uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30))))
                                                  ))));
        if (!bVar6) {
          bVar5 = (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                  )) < -3.4028235677973362e+38;
        }
        if (bVar5 == bVar6) {
          uVar19 = 0xff7fffff;
        }
        else {
          uVar19 = 0xff800000;
        }
        goto LAB_0177c928;
      }
      fVar3 = (float)(double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30)))))));
      uVar30 = SUB41(fVar3,0);
      uVar31 = (undefined1)((uint)fVar3 >> 8);
      uVar32 = (undefined1)((uint)fVar3 >> 0x10);
      uVar33 = (undefined1)((uint)fVar3 >> 0x18);
    }
    else {
      bVar6 = false;
      bVar5 = true;
      if (!NAN((double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                               )))) {
        bVar6 = (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                )) == 3.4028235677973362e+38;
        bVar5 = 3.4028235677973362e+38 <=
                (double)CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)))))
                                                ));
      }
      if (!bVar5 || bVar6) {
        uVar19 = 0x7f7fffff;
      }
      else {
        uVar19 = 0x7f800000;
      }
LAB_0177c928:
      uVar30 = (undefined1)uVar19;
      uVar31 = (undefined1)((uint)uVar19 >> 8);
      uVar32 = (undefined1)((uint)uVar19 >> 0x10);
      uVar33 = (undefined1)((uint)uVar19 >> 0x18);
    }
    fVar3 = (float)CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,uVar30)));
    local_d8 = (Node *)CONCAT44(local_d8._4_4_,fVar3);
    local_c8 = (Node *)CONCAT44(local_c8._4_4_,fVar3);
    pGVar28 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar14 = (Operator *)
              CommonOperatorBuilder::Float32Constant
                        ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],fVar3);
LAB_0177c948:
    ppNVar17 = &local_90;
    local_90 = (Node *)0x0;
LAB_0177c954:
    iVar16 = 0;
LAB_0177c95c:
    pNVar9 = (Node *)Graph::NewNode(pGVar28,pOVar14,iVar16,ppNVar17,false);
    goto switchD_0177a998_caseD_38;
  case 0x1d1:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    lVar20 = *plVar21;
    sVar1 = *(short *)(lVar20 + 0x10);
    if (sVar1 != 0x1cb) {
      if (sVar1 == 0x18) {
        iVar16 = (int)*(undefined8 *)(lVar20 + 0x30);
      }
      else {
        if (sVar1 != 0x17) break;
        iVar16 = *(int *)(lVar20 + 0x2c);
      }
      pNVar9 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 0x10),iVar16);
      goto switchD_0177a998_caseD_38;
    }
LAB_0177ba30:
    uVar15 = *(uint *)((long)plVar21 + 0x14);
joined_r0x0177ba40:
    plVar21 = plVar21 + 4;
    if ((~uVar15 & 0xf000000) == 0) {
      plVar21 = (long *)(*plVar21 + 0x10);
    }
    pNVar9 = (Node *)*plVar21;
    goto switchD_0177a998_caseD_38;
  case 0x1d2:
    pNVar9 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    plVar21 = *(long **)pNVar9;
    sVar1 = *(short *)(*plVar21 + 0x10);
    if (sVar1 == 0x1c9) goto LAB_0177bbe0;
    if (sVar1 == 0x1a) {
      dVar22 = *(double *)(*plVar21 + 0x30);
      uVar30 = SUB81(dVar22,0);
      uVar31 = (undefined1)((ulong)dVar22 >> 8);
      uVar32 = (undefined1)((ulong)dVar22 >> 0x10);
      uVar33 = (undefined1)((ulong)dVar22 >> 0x18);
      uVar35 = (undefined1)((ulong)dVar22 >> 0x20);
      uVar36 = (undefined1)((ulong)dVar22 >> 0x28);
      uVar37 = (undefined1)((ulong)dVar22 >> 0x30);
      uVar38 = (undefined1)((ulong)dVar22 >> 0x38);
      goto joined_r0x0177b990;
    }
    break;
  case 0x1df:
    pNVar24 = param_1 + 0x20;
    pNVar9 = pNVar24;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar9 = (Node *)(*(long *)pNVar24 + 0x10);
    }
    sVar1 = *(short *)(**(long **)pNVar9 + 0x10);
    if (sVar1 == 0x1a) {
      uVar27 = (ulong)*(uint *)(**(long **)pNVar9 + 0x34) << 0x20;
    }
    else {
      uVar27 = 0;
    }
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar24 = (Node *)(*(long *)pNVar24 + 0x10);
    }
    pNVar9 = (Node *)0x0;
    if ((*(short *)(**(long **)(pNVar24 + 8) + 0x10) != 0x17) || (sVar1 != 0x1a))
    goto switchD_0177a998_caseD_38;
    local_c8 = (Node *)(uVar27 | *(uint *)(**(long **)(pNVar24 + 8) + 0x2c));
    goto LAB_0177c190;
  case 0x1e0:
    pNVar24 = param_1 + 0x20;
    pNVar9 = pNVar24;
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar9 = (Node *)(*(long *)pNVar24 + 0x10);
    }
    sVar1 = *(short *)(**(long **)pNVar9 + 0x10);
    if (sVar1 == 0x1a) {
      uVar27 = (ulong)*(uint *)(**(long **)pNVar9 + 0x30);
    }
    else {
      uVar27 = 0;
    }
    if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
      pNVar24 = (Node *)(*(long *)pNVar24 + 0x10);
    }
    pNVar9 = (Node *)0x0;
    if ((*(short *)(**(long **)(pNVar24 + 8) + 0x10) != 0x17) || (sVar1 != 0x1a))
    goto switchD_0177a998_caseD_38;
    local_c8 = (Node *)(uVar27 | (ulong)*(uint *)(**(long **)(pNVar24 + 8) + 0x2c) << 0x20);
LAB_0177c190:
    local_90 = local_c8;
    pNVar9 = (Node *)MachineGraph::Float64Constant(*(MachineGraph **)(this + 0x10),(double)local_c8)
    ;
    goto switchD_0177a998_caseD_38;
  }
  pNVar9 = (Node *)0x0;
switchD_0177a998_caseD_38:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pNVar9);
  }
  return;
}

