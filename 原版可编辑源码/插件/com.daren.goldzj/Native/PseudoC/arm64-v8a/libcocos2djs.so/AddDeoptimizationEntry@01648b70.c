
/* v8::internal::compiler::InstructionSequence::AddDeoptimizationEntry(v8::internal::compiler::FrameStateDescriptor*,
   v8::internal::DeoptimizeKind, v8::internal::DeoptimizeReason,
   v8::internal::compiler::FeedbackSource const&) */

ulong __thiscall
v8::internal::compiler::InstructionSequence::AddDeoptimizationEntry
          (InstructionSequence *this,undefined8 param_1,undefined1 param_3,undefined1 param_4,
          undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  Zone *this_00;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  uVar12 = param_5[1];
  puVar3 = *(undefined8 **)(this + 0x158);
  uStack_62 = (undefined2)uVar12;
  local_6a = (undefined2)*param_5;
  uStack_68 = (undefined6)((ulong)*param_5 >> 0x10);
  uVar10 = (long)puVar3 - *(long *)(this + 0x150);
  if (puVar3 < *(undefined8 **)(this + 0x160)) {
    *puVar3 = param_1;
    *(undefined1 *)(puVar3 + 1) = param_3;
    *(undefined1 *)((long)puVar3 + 9) = param_4;
    puVar3[3] = uVar12;
    *(ulong *)((long)puVar3 + 0x12) = CONCAT26(uStack_62,uStack_68);
    *(ulong *)((long)puVar3 + 10) = CONCAT26(local_6a,uStack_70);
    *(long *)(this + 0x158) = *(long *)(this + 0x158) + 0x20;
  }
  else {
    lVar11 = (long)uVar10 >> 5;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x1a != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = (long)*(undefined8 **)(this + 0x160) - *(long *)(this + 0x150);
    uVar9 = lVar8 >> 4;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x1fffffe < (ulong)(lVar8 >> 5)) {
      uVar1 = 0x3ffffff;
    }
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x168);
      uVar9 = uVar1 * 0x20;
      lVar8 = *(long *)(this_00 + 0x10);
      if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - lVar8) ||
          uVar9 - (*(long *)(this_00 + 0x18) - lVar8) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar8 + uVar9;
      }
      else {
        lVar8 = Zone::NewExpand(this_00,uVar9);
      }
    }
    puVar3 = (undefined8 *)(lVar8 + lVar11 * 0x20);
    *puVar3 = param_1;
    *(undefined1 *)(puVar3 + 1) = param_3;
    *(undefined1 *)((long)puVar3 + 9) = param_4;
    puVar3[3] = uVar12;
    *(ulong *)((long)puVar3 + 0x12) = CONCAT26(uStack_62,uStack_68);
    *(ulong *)((long)puVar3 + 10) = CONCAT26(local_6a,uStack_70);
    puVar2 = *(undefined8 **)(this + 0x150);
    puVar5 = puVar3;
    puVar6 = *(undefined8 **)(this + 0x158);
    while (puVar6 != puVar2) {
      uVar12 = puVar6[-4];
      uVar14 = puVar6[-1];
      uVar13 = puVar6[-2];
      puVar5[-3] = puVar6[-3];
      puVar5[-4] = uVar12;
      puVar5[-1] = uVar14;
      puVar5[-2] = uVar13;
      puVar5 = puVar5 + -4;
      puVar6 = puVar6 + -4;
    }
    *(undefined8 **)(this + 0x150) = puVar5;
    *(undefined8 **)(this + 0x158) = puVar3 + 4;
    *(ulong *)(this + 0x160) = lVar8 + uVar1 * 0x20;
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
    return uVar10 >> 5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

