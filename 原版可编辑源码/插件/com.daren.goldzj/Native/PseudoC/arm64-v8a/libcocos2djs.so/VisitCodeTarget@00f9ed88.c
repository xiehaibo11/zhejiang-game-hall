
/* v8::internal::SlotVerifyingVisitor::VisitCodeTarget(v8::internal::Code, v8::internal::RelocInfo*)
    */

void __thiscall
v8::internal::SlotVerifyingVisitor::VisitCodeTarget
          (SlotVerifyingVisitor *this,undefined8 param_2,RelocInfo *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  
  IVar1 = (*(Instruction **)param_3)[3];
  puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  puVar3 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar4 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar3 <= puVar2) && (puVar2 < (undefined8 *)((long)puVar3 + (uVar4 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  uVar4 = (**(code **)(*(long *)this + 0x88))(this,param_2,(long)puVar2 + -0x3f);
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar5 = *(long **)(*(long *)(this + 0x10) + 8);
  if (plVar5 != (long *)0x0) {
    do {
      if ((int)plVar5[4] < 4) {
        if ((int)plVar5[4] == 3) {
          if (*(ulong *)param_3 < (ulong)plVar5[5]) goto LAB_00f9ee1c;
          if (*(ulong *)param_3 <= (ulong)plVar5[5]) {
            return;
          }
        }
        plVar5 = plVar5 + 1;
      }
LAB_00f9ee1c:
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  uVar4 = RelocInfo::IsInConstantPool(param_3);
  if ((uVar4 & 1) != 0) {
    uVar4 = Instruction::ImmPCOffsetTarget(*(Instruction **)param_3);
    for (plVar5 = *(long **)(*(long *)(this + 0x10) + 8); plVar5 != (long *)0x0;
        plVar5 = (long *)*plVar5) {
      if (*(int *)(plVar5 + 4) < 5) {
        if (*(int *)(plVar5 + 4) == 4) {
          if (uVar4 < (ulong)plVar5[5]) goto LAB_00f9ee70;
          if (uVar4 <= (ulong)plVar5[5]) {
            return;
          }
        }
        plVar5 = plVar5 + 1;
      }
LAB_00f9ee70:
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "InTypedSet(CODE_TARGET_SLOT, rinfo->pc()) || (rinfo->IsInConstantPool() && InTypedSet(CODE_ENTRY_SLOT, rinfo->constant_pool_entry_address()))"
          );
}

