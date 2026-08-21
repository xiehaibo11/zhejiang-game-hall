
/* v8::internal::compiler::CommonOperatorReducer::ReducePhi(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::ReducePhi(CommonOperatorReducer *this,Node *param_1)

{
  uint uVar1;
  Node *this_00;
  long lVar2;
  bool bVar3;
  Operator *pOVar4;
  Node *pNVar5;
  Node *pNVar6;
  uint uVar7;
  Node *pNVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  Node *pNVar14;
  long lVar15;
  Use *pUVar16;
  BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
  aBStack_d8 [16];
  float local_c8;
  int iStack_c4;
  char local_c0;
  undefined7 uStack_bf;
  Node *local_b8;
  BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
  aBStack_a0 [16];
  float local_90;
  undefined4 uStack_8c;
  char local_88;
  undefined7 uStack_87;
  Node *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pNVar14 = param_1 + 0x20;
  uVar7 = (byte)param_1[0x17] & 0xf;
  pNVar8 = pNVar14;
  if (uVar7 == 0xf) {
    uVar7 = *(uint *)(*(long *)pNVar14 + 8);
    pNVar8 = (Node *)(*(long *)pNVar14 + 0x10);
  }
  uVar7 = uVar7 - 1;
  lVar15 = *(long *)(pNVar8 + (long)(int)uVar7 * 8);
  if (uVar7 == 2) {
    plVar10 = (long *)(lVar15 + 0x20);
    if ((~*(uint *)(lVar15 + 0x14) & 0xf000000) == 0) {
      plVar10 = (long *)(*plVar10 + 0x10);
    }
    plVar9 = (long *)*plVar10;
    bVar3 = *(short *)(*plVar9 + 0x10) != 4;
    plVar13 = plVar9;
    if (bVar3) {
      plVar13 = (long *)plVar10[1];
    }
    this_00 = *(Node **)pNVar8;
    pNVar5 = *(Node **)(pNVar8 + 8);
    plVar10 = (long *)plVar10[1];
    if (bVar3) {
      this_00 = *(Node **)(pNVar8 + 8);
      pNVar5 = *(Node **)pNVar8;
      plVar10 = plVar9;
    }
    if ((*(short *)(*plVar13 + 0x10) == 4) && (*(short *)(*plVar10 + 0x10) == 5)) {
      plVar9 = plVar13 + 4;
      uVar1 = *(uint *)((long)plVar13 + 0x14) & 0xf000000;
      plVar13 = plVar9;
      if (uVar1 == 0xf000000) {
        plVar13 = (long *)(*plVar9 + 0x10);
      }
      plVar12 = plVar10 + 4;
      if ((~*(uint *)((long)plVar10 + 0x14) & 0xf000000) == 0) {
        plVar12 = (long *)(*plVar12 + 0x10);
      }
      if (*plVar13 == *plVar12) {
        if (uVar1 == 0xf000000) {
          plVar9 = (long *)(*plVar9 + 0x10);
        }
        plVar9 = (long *)*plVar9;
        if (*(short *)(*plVar9 + 0x10) != 2) {
LAB_0168bf00:
          param_1 = (Node *)0x0;
          goto LAB_0168bf20;
        }
        plVar10 = plVar9 + 4;
        if ((~*(uint *)((long)plVar9 + 0x14) & 0xf000000) == 0) {
          plVar10 = (long *)(*plVar10 + 0x10);
        }
        pNVar6 = (Node *)*plVar10;
        if (*(short *)(*(long *)pNVar6 + 0x10) == 0x159) {
          BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
          ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                          *)aBStack_a0,pNVar6);
          if (((((local_88 != '\0') && ((double)CONCAT44(uStack_8c,local_90) == 0.0)) &&
               (local_80 == this_00)) &&
              ((*(short *)(*(long *)pNVar5 + 0x10) == 0x16c &&
               (BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                                *)aBStack_d8,pNVar5), local_c0 != '\0')))) &&
             (((double)CONCAT44(iStack_c4,local_c8) == 0.0 &&
              ((-1 < iStack_c4 && (local_b8 == this_00)))))) {
            (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),lVar15);
            pOVar4 = (Operator *)
                     MachineOperatorBuilder::Float64Abs(*(MachineOperatorBuilder **)(this + 0x28));
LAB_0168c0c8:
            pNVar8 = pNVar14;
            if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar8 = (Node *)(*(long *)pNVar14 + 0x10);
            }
            pNVar5 = *(Node **)pNVar8;
            if (pNVar5 != this_00) {
              if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
                pUVar16 = (Use *)(*(long *)pNVar14 + -0x18);
              }
              else {
                pUVar16 = (Use *)(param_1 + -0x18);
              }
              if (pNVar5 != (Node *)0x0) {
                Node::RemoveUse(pNVar5,pUVar16);
              }
              *(Node **)pNVar8 = this_00;
              if (this_00 != (Node *)0x0) {
                Node::AppendUse(this_00,pUVar16);
              }
            }
            Node::TrimInputCount(param_1,1);
            NodeProperties::ChangeOp(param_1,pOVar4);
            goto LAB_0168bf20;
          }
        }
        else if (*(short *)(*(long *)pNVar6 + 0x10) == 0x156) {
          BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
          ::BinopMatcher(aBStack_a0,pNVar6);
          if (((((char)uStack_8c != '\0') && (local_90 == 0.0)) &&
              ((Node *)CONCAT71(uStack_87,local_88) == this_00)) &&
             (((*(short *)(*(long *)pNVar5 + 0x10) == 0x15c &&
               (BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
                ::BinopMatcher(aBStack_d8,pNVar5), (char)iStack_c4 != '\0')) &&
              ((local_c8 == 0.0 &&
               ((-1 < (int)local_c8 && ((Node *)CONCAT71(uStack_bf,local_c0) == this_00)))))))) {
            (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),lVar15);
            pOVar4 = (Operator *)
                     MachineOperatorBuilder::Float32Abs(*(MachineOperatorBuilder **)(this + 0x28));
            goto LAB_0168c0c8;
          }
        }
      }
    }
    pNVar14 = *(Node **)pNVar8;
LAB_0168bed0:
    lVar11 = (ulong)uVar7 - 1;
    do {
      pNVar8 = pNVar8 + 8;
      if ((*(Node **)pNVar8 != param_1) && (*(Node **)pNVar8 != pNVar14)) goto LAB_0168bf00;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    pNVar14 = *(Node **)pNVar8;
    if (1 < (int)uVar7) goto LAB_0168bed0;
  }
  param_1 = pNVar14;
  (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),lVar15);
LAB_0168bf20:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

