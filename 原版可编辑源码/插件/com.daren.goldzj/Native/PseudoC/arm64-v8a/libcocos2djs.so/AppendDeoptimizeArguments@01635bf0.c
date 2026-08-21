
/* v8::internal::compiler::InstructionSelector::AppendDeoptimizeArguments(v8::internal::ZoneVector<v8::internal::compiler::InstructionOperand>*,
   v8::internal::DeoptimizeKind, v8::internal::DeoptimizeReason,
   v8::internal::compiler::FeedbackSource const&, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::AppendDeoptimizeArguments
          (InstructionSelector *this,long *param_1,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  Zone *this_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  InstructionSequence *this_01;
  long lVar11;
  long local_70 [4];
  InstructionSelector *local_38;
  
  local_38 = this;
  lVar4 = FUN_01641618(*(undefined8 *)(*(long *)(this + 0x10) + 8),param_6);
  uVar9 = **(ulong **)(this + 0x1b0);
  uVar1 = *(ulong *)(lVar4 + 0x28);
  if (*(ulong *)(lVar4 + 0x28) <= uVar9) {
    uVar1 = uVar9;
  }
  **(ulong **)(this + 0x1b0) = uVar1;
  iVar3 = InstructionSequence::AddDeoptimizationEntry
                    (*(InstructionSequence **)(this + 0x10),lVar4,param_3,param_4,param_5);
  this_01 = *(InstructionSequence **)(this + 0x10);
  Constant::Constant((Constant *)local_70,iVar3);
  uVar5 = InstructionSequence::AddImmediate(this_01,(Constant *)local_70);
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    *puVar7 = uVar5;
    param_1[1] = param_1[1] + 8;
  }
  else {
    lVar11 = (long)puVar7 - *param_1 >> 3;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_1[2] - *param_1;
    uVar9 = lVar6 >> 2;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar6 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      this_00 = (Zone *)param_1[3];
      uVar9 = uVar1 * 8;
      lVar6 = *(long *)(this_00 + 0x10);
      if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
          uVar9 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar6 + uVar9;
      }
      else {
        lVar6 = Zone::NewExpand(this_00,uVar9);
      }
    }
    puVar7 = (undefined8 *)(lVar6 + lVar11 * 8);
    puVar8 = puVar7 + 1;
    *puVar7 = uVar5;
    puVar2 = (undefined8 *)*param_1;
    puVar10 = (undefined8 *)param_1[1];
    while (puVar10 != puVar2) {
      puVar10 = puVar10 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar10;
    }
    *param_1 = (long)puVar7;
    param_1[1] = (long)puVar8;
    param_1[2] = lVar6 + uVar1 * 8;
  }
  local_70[3] = *(undefined8 *)(*(long *)(this + 0x10) + 8);
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[2] = 0;
  AddInputsToFrameStateDescriptor(this,lVar4,param_6,&local_38,local_70,param_1,0);
  return;
}

