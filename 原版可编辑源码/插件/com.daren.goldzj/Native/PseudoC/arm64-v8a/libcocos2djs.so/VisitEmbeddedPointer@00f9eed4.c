
/* v8::internal::SlotVerifyingVisitor::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::SlotVerifyingVisitor::VisitEmbeddedPointer
          (SlotVerifyingVisitor *this,undefined8 param_2,RelocInfo *param_3)

{
  Instruction IVar1;
  uint *puVar2;
  ulong uVar3;
  ulong *puVar4;
  Instruction *this_00;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  this_00 = *(Instruction **)param_3;
  if (param_3[8] == (RelocInfo)0x2) {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar6 = *(long *)(param_3 + 0x18);
    puVar2 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    puVar4 = (ulong *)(lVar6 - 1U & 0xffffffff00000000 | (ulong)*puVar2);
  }
  else {
    IVar1 = this_00[3];
    puVar4 = (ulong *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 == (Instruction)0x58) {
      puVar4 = (ulong *)*puVar4;
    }
  }
  uVar3 = (**(code **)(*(long *)this + 0x88))(this,param_2,puVar4);
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar5 = *(long **)(*(long *)(this + 0x10) + 8);
  if (plVar5 != (long *)0x0) {
    uVar3 = *(ulong *)param_3;
    plVar7 = plVar5;
    do {
      if ((int)plVar7[4] < 1) {
        if (-1 < (int)plVar7[4]) {
          if (uVar3 < (ulong)plVar7[5]) goto LAB_00f9ef7c;
          if (uVar3 <= (ulong)plVar7[5]) {
            return;
          }
        }
        plVar7 = plVar7 + 1;
      }
LAB_00f9ef7c:
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    do {
      if ((int)plVar5[4] < 2) {
        if ((int)plVar5[4] == 1) {
          if (uVar3 < (ulong)plVar5[5]) goto LAB_00f9efac;
          if (uVar3 <= (ulong)plVar5[5]) {
            return;
          }
        }
        plVar5 = plVar5 + 1;
      }
LAB_00f9efac:
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  uVar3 = RelocInfo::IsInConstantPool(param_3);
  if ((uVar3 & 1) != 0) {
    uVar3 = Instruction::ImmPCOffsetTarget(*(Instruction **)param_3);
    for (plVar5 = *(long **)(*(long *)(this + 0x10) + 8); plVar5 != (long *)0x0;
        plVar5 = (long *)*plVar5) {
      if (*(int *)(plVar5 + 4) < 3) {
        if (*(int *)(plVar5 + 4) == 2) {
          if (uVar3 < (ulong)plVar5[5]) goto LAB_00f9f000;
          if (uVar3 <= (ulong)plVar5[5]) {
            return;
          }
        }
        plVar5 = plVar5 + 1;
      }
LAB_00f9f000:
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "InTypedSet(FULL_EMBEDDED_OBJECT_SLOT, rinfo->pc()) || InTypedSet(COMPRESSED_EMBEDDED_OBJECT_SLOT, rinfo->pc()) || (rinfo->IsInConstantPool() && InTypedSet(OBJECT_SLOT, rinfo->constant_pool_entry_address()))"
          );
}

