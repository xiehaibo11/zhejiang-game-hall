
/* v8::internal::compiler::CommonOperatorReducer::ReduceSelect(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CommonOperatorReducer::ReduceSelect
          (CommonOperatorReducer *this,Node *param_1)

{
  Node *pNVar1;
  Node *this_00;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  Node *pNVar7;
  Node *pNVar8;
  long lVar9;
  Use *pUVar10;
  BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
  aBStack_c8 [16];
  float local_b8;
  int iStack_b4;
  char local_b0;
  undefined7 uStack_af;
  Node *local_a8;
  ObjectRef local_90 [16];
  float local_80;
  undefined4 uStack_7c;
  char local_78;
  undefined7 uStack_77;
  Node *local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pNVar1 = param_1 + 0x20;
  pNVar8 = pNVar1;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  this_00 = *(Node **)(pNVar8 + 8);
  pNVar7 = *(Node **)(pNVar8 + 0x10);
  pNVar6 = this_00;
  if (this_00 == pNVar7) goto LAB_0168c5d4;
  pNVar8 = *(Node **)pNVar8;
  lVar9 = *(long *)pNVar8;
  uVar2 = *(ushort *)(lVar9 + 0x10);
  if (uVar2 < 0x156) {
    if (uVar2 == 0x17) {
      if (*(int *)(lVar9 + 0x2c) != 0) goto LAB_0168c5d4;
    }
    else {
      pNVar6 = (Node *)0x0;
      if (uVar2 != 0x1e) goto LAB_0168c5d4;
      ObjectRef::ObjectRef(local_90,*(undefined8 *)(this + 0x18),*(undefined8 *)(lVar9 + 0x30),0);
      uVar4 = ObjectRef::IsHeapObject(local_90);
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      uVar4 = ObjectRef::BooleanValue(local_90);
      pNVar6 = this_00;
      if ((uVar4 & 1) != 0) goto LAB_0168c5d4;
    }
    pNVar6 = pNVar7;
    goto LAB_0168c5d4;
  }
  if (uVar2 == 0x156) {
    BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
                    *)local_90,pNVar8);
    if ((((((char)uStack_7c != '\0') && (local_80 == 0.0)) &&
         ((Node *)CONCAT71(uStack_77,local_78) == this_00)) &&
        ((*(short *)(*(long *)pNVar7 + 0x10) == 0x15c &&
         (BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
          ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>,v8::internal::compiler::FloatMatcher<float,(v8::internal::compiler::IrOpcode::Value)25>>
                          *)aBStack_c8,pNVar7), (char)iStack_b4 != '\0')))) &&
       ((local_b8 == 0.0 &&
        ((-1 < (int)local_b8 && ((Node *)CONCAT71(uStack_af,local_b0) == this_00)))))) {
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Float32Abs(*(MachineOperatorBuilder **)(this + 0x28));
LAB_0168c608:
      pNVar8 = pNVar1;
      if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
        pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
      }
      pNVar7 = *(Node **)pNVar8;
      if (pNVar7 != this_00) {
        if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
          pUVar10 = (Use *)(*(long *)pNVar1 + -0x18);
        }
        else {
          pUVar10 = (Use *)(param_1 + -0x18);
        }
        if (pNVar7 != (Node *)0x0) {
          Node::RemoveUse(pNVar7,pUVar10);
        }
        *(Node **)pNVar8 = this_00;
        if (this_00 != (Node *)0x0) {
          Node::AppendUse(this_00,pUVar10);
        }
      }
      Node::TrimInputCount(param_1,1);
      NodeProperties::ChangeOp(param_1,pOVar5);
      pNVar6 = param_1;
      goto LAB_0168c5d4;
    }
  }
  else {
    pNVar6 = (Node *)0x0;
    if (uVar2 != 0x159) goto LAB_0168c5d4;
    BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
    ::BinopMatcher((BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
                    *)local_90,pNVar8);
    if ((((local_78 != '\0') && ((double)CONCAT44(uStack_7c,local_80) == 0.0)) &&
        (local_70 == this_00)) &&
       (((*(short *)(*(long *)pNVar7 + 0x10) == 0x16c &&
         (BinopMatcher<v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>,v8::internal::compiler::FloatMatcher<double,(v8::internal::compiler::IrOpcode::Value)26>>
          ::BinopMatcher(aBStack_c8,pNVar7), local_b0 != '\0')) &&
        (((double)CONCAT44(iStack_b4,local_b8) == 0.0 && ((-1 < iStack_b4 && (local_a8 == this_00)))
         ))))) {
      pOVar5 = (Operator *)
               MachineOperatorBuilder::Float64Abs(*(MachineOperatorBuilder **)(this + 0x28));
      goto LAB_0168c608;
    }
  }
  pNVar6 = (Node *)0x0;
LAB_0168c5d4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pNVar6);
}

