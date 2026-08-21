
/* v8::internal::compiler::InstructionSelector::AddInputsToFrameStateDescriptor(v8::internal::compiler::FrameStateDescriptor*,
   v8::internal::compiler::Node*, v8::internal::compiler::OperandGenerator*,
   v8::internal::compiler::StateObjectDeduplicator*,
   v8::internal::ZoneVector<v8::internal::compiler::InstructionOperand>*,
   v8::internal::compiler::FrameStateInputKind, v8::internal::Zone*) */

long __thiscall
v8::internal::compiler::InstructionSelector::AddInputsToFrameStateDescriptor
          (InstructionSelector *this,FrameStateDescriptor *param_1,long param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5,undefined4 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  long lVar12;
  long lVar13;
  Zone *this_00;
  long lVar14;
  long lVar15;
  FrameStateDescriptor *pFVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  iterator aiStack_200 [192];
  undefined4 local_140;
  iterator aiStack_138 [200];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0x78) == 0) {
    lVar5 = 0;
  }
  else {
    plVar17 = (long *)(param_2 + 0x20);
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      plVar17 = (long *)(*plVar17 + 0x10);
    }
    lVar5 = AddInputsToFrameStateDescriptor
                      (this,*(long *)(param_1 + 0x78),plVar17[5],param_3,param_4,param_5,param_7,
                       param_8);
  }
  plVar17 = (long *)(param_2 + 0x20);
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    plVar17 = (long *)(*plVar17 + 0x10);
  }
  pNVar9 = (Node *)*plVar17;
  pNVar10 = (Node *)plVar17[1];
  pNVar11 = (Node *)plVar17[2];
  lVar12 = plVar17[3];
  lVar13 = plVar17[4];
  plVar6 = (long *)FrameStateDescriptor::GetSize(param_1);
  pFVar16 = param_1 + 0x30;
  lVar14 = *(long *)pFVar16;
  if ((long *)(*(long *)(param_1 + 0x40) - lVar14 >> 4) < plVar6) {
    this_00 = *(Zone **)(param_1 + 0x48);
    lVar15 = *(long *)(param_1 + 0x38);
    lVar7 = *(long *)(this_00 + 0x10);
    uVar8 = (long)plVar6 * 0x10;
    if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar7) ||
        uVar8 - (*(long *)(this_00 + 0x18) - lVar7) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar7 + uVar8;
    }
    else {
      lVar7 = Zone::NewExpand(this_00,uVar8);
    }
    lVar1 = *(long *)(param_1 + 0x30);
    lVar14 = lVar7 + (lVar15 - lVar14 >> 4) * 0x10;
    lVar4 = lVar14;
    for (lVar15 = *(long *)(param_1 + 0x38); lVar15 != lVar1; lVar15 = lVar15 + -0x10) {
      uVar18 = *(undefined8 *)(lVar15 + -0x10);
      *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar15 + -8);
      *(undefined8 *)(lVar4 + -0x10) = uVar18;
      lVar4 = lVar4 + -0x10;
    }
    *(long *)(param_1 + 0x30) = lVar4;
    *(long *)(param_1 + 0x38) = lVar14;
    *(long *)(param_1 + 0x40) = lVar7 + (long)plVar6 * 0x10;
    plVar17 = plVar6;
  }
  lVar13 = AddOperandToStateValueDescriptor
                     (this,pFVar16,param_5,param_3,param_4,lVar13,0x708,1,param_8);
  lVar13 = lVar13 + lVar5;
  StateValuesAccess::iterator::iterator(aiStack_138,pNVar9);
  local_140 = 0xffffffff;
  uVar8 = StateValuesAccess::iterator::operator!=(aiStack_138,aiStack_200);
  while ((uVar8 & 1) != 0) {
    auVar19 = StateValuesAccess::iterator::operator*(aiStack_138);
    plVar17 = (long *)((ulong)plVar17 & 0xffffffffffff0000 | auVar19._8_8_ & 0xffff);
    lVar5 = AddOperandToStateValueDescriptor
                      (this,pFVar16,param_5,param_3,param_4,auVar19._0_8_,plVar17,param_7,param_8);
    lVar13 = lVar5 + lVar13;
    StateValuesAccess::iterator::operator++(aiStack_138);
    uVar8 = StateValuesAccess::iterator::operator!=(aiStack_138,aiStack_200);
  }
  uVar2 = *(uint *)param_1;
  if (((uVar2 < 6) && ((1 << (ulong)(uVar2 & 0x1f) & 0x31U) != 0)) || ((uVar2 | 1) == 3)) {
    lVar5 = AddOperandToStateValueDescriptor
                      (this,pFVar16,param_5,param_3,param_4,lVar12,0x708,1,param_8);
    lVar13 = lVar5 + lVar13;
  }
  StateValuesAccess::iterator::iterator(aiStack_138,pNVar10);
  local_140 = 0xffffffff;
  uVar8 = StateValuesAccess::iterator::operator!=(aiStack_138,aiStack_200);
  while ((uVar8 & 1) != 0) {
    auVar19 = StateValuesAccess::iterator::operator*(aiStack_138);
    plVar17 = (long *)((ulong)plVar17 & 0xffffffffffff0000 | auVar19._8_8_ & 0xffff);
    lVar5 = AddOperandToStateValueDescriptor
                      (this,pFVar16,param_5,param_3,param_4,auVar19._0_8_,plVar17,param_7,param_8);
    lVar13 = lVar5 + lVar13;
    StateValuesAccess::iterator::operator++(aiStack_138);
    uVar8 = StateValuesAccess::iterator::operator!=(aiStack_138,aiStack_200);
  }
  StateValuesAccess::iterator::iterator(aiStack_138,pNVar11);
  local_140 = 0xffffffff;
  uVar8 = StateValuesAccess::iterator::operator!=(aiStack_138,aiStack_200);
  while ((uVar8 & 1) != 0) {
    auVar19 = StateValuesAccess::iterator::operator*(aiStack_138);
    plVar17 = (long *)((ulong)plVar17 & 0xffffffffffff0000 | auVar19._8_8_ & 0xffff);
    lVar5 = AddOperandToStateValueDescriptor
                      (this,pFVar16,param_5,param_3,param_4,auVar19._0_8_,plVar17,param_7,param_8);
    lVar13 = lVar5 + lVar13;
    StateValuesAccess::iterator::operator++(aiStack_138);
    uVar8 = StateValuesAccess::iterator::operator!=(aiStack_138,aiStack_200);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar13;
}

