
/* void 
   v8::internal::LiveObjectVisitor::RecomputeLiveBytes<v8::internal::MajorNonAtomicMarkingState>(v8::internal::MemoryChunk*,
   v8::internal::MajorNonAtomicMarkingState*) */

void v8::internal::LiveObjectVisitor::RecomputeLiveBytes<v8::internal::MajorNonAtomicMarkingState>
               (MemoryChunk *param_1,MajorNonAtomicMarkingState *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  MemoryChunk *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  MemoryChunk *local_e8;
  long lStack_e0;
  uint local_d8;
  uint local_d4;
  MemoryChunk *local_d0;
  MemoryChunk *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  MemoryChunk *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  MemoryChunk *pMStack_88;
  long local_80;
  uint local_78;
  uint local_74;
  MemoryChunk *local_70;
  MemoryChunk *local_68;
  undefined4 local_60;
  undefined8 local_58;
  int local_50;
  long local_48;
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x28);
  uStack_98 = *(undefined8 *)(lVar3 + -0x87c0);
  local_a0 = *(undefined8 *)(lVar3 + -0x87c8);
  local_90 = *(undefined8 *)(lVar3 + -0x87d0);
  uVar8 = (ulong)(lVar1 - (long)param_1) >> 7 & 0x1ffffff;
  uVar5 = (ulong)(*(long *)(param_1 + 0x20) - (long)param_1) >> 7 & 0x1ffffff;
  uVar7 = (uint)uVar8;
  local_74 = 0;
  local_58 = 0;
  uVar4 = (uint)uVar5;
  local_70 = param_1;
  if (uVar4 != 0) {
    local_70 = param_1 + (*(long *)(param_1 + 0x20) - (long)param_1 & 0xffffff80);
    local_74 = uVar4;
  }
  local_d8 = uVar7;
  local_a8 = param_1;
  pMStack_88 = param_1;
  local_80 = lVar6;
  local_78 = uVar7;
  if (uVar4 < uVar7) {
    local_60 = *(undefined4 *)(lVar6 + uVar5 * 4);
    local_68 = local_70;
    auVar9 = LiveObjectRange<(v8::internal::LiveObjectIterationMode)2>::iterator::
             AdvanceToNextValidObject((iterator *)&local_a8);
    lVar3 = *(long *)(param_1 + 0x18);
    local_d8 = (uint)(*(int *)(param_1 + 0x28) - (int)param_1) >> 7;
  }
  uStack_f8 = *(undefined8 *)(lVar3 + -0x87c0);
  local_100 = *(undefined8 *)(lVar3 + -0x87c8);
  local_f0 = *(undefined8 *)(lVar3 + -0x87d0);
  local_d4 = 0;
  local_b8 = 0;
  local_108 = param_1;
  local_e8 = param_1;
  lStack_e0 = lVar6;
  if (uVar7 == 0) {
    local_d0 = param_1;
    if (local_d8 == 0) goto LAB_00fcba78;
  }
  else {
    local_d0 = param_1 + (lVar1 - (long)param_1 & 0xffffff80);
    local_d4 = uVar7;
    if (local_d8 <= uVar7) {
LAB_00fcba78:
      local_b8._0_4_ = 0;
      goto LAB_00fcba7c;
    }
  }
  local_c0 = *(undefined4 *)(lVar6 + uVar8 * 4);
  local_c8 = local_d0;
  auVar9 = LiveObjectRange<(v8::internal::LiveObjectIterationMode)2>::iterator::
           AdvanceToNextValidObject((iterator *)&local_108);
LAB_00fcba7c:
  if ((int)local_b8 == (int)local_58) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar6 = (long)local_50 + (long)(int)lVar6;
      auVar9 = LiveObjectRange<(v8::internal::LiveObjectIterationMode)2>::iterator::
               AdvanceToNextValidObject((iterator *)&local_a8);
    } while ((int)local_58 != (int)local_b8);
  }
  *(long *)(param_1 + 0x68) = lVar6;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(auVar9._0_8_,auVar9._8_8_);
  }
  return;
}

