
/* v8::internal::compiler::InstructionScheduler::AddTerminator(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::InstructionScheduler::AddTerminator
          (InstructionScheduler *this,Instruction *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
  pZVar3 = *(Zone **)this;
  puVar4 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x68) {
    puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x68);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 0xd;
  }
  uVar5 = *(undefined8 *)this;
  *puVar4 = param_1;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[4] = 0;
  puVar4[3] = 0;
  puVar4[5] = uVar5;
  puVar4[6] = 0;
  puVar4[9] = uVar5;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  uVar2 = GetInstructionLatency(param_1);
  *(undefined4 *)((long)puVar4 + 0x5c) = uVar2;
  puVar4[0xc] = 0xffffffffffffffff;
  plVar13 = *(long **)(this + 0x10);
  plVar11 = *(long **)(this + 0x18);
  if (plVar13 != plVar11) {
    do {
      lVar14 = *plVar13;
      lVar12 = *(long *)(lVar14 + 0x10);
      lVar6 = *(long *)(lVar14 + 0x18) - lVar12;
      uVar1 = 0;
      if (lVar6 != 0) {
        uVar1 = lVar6 * 0x40 - 1;
      }
      uVar9 = *(long *)(lVar14 + 0x40) + *(long *)(lVar14 + 0x38);
      if (uVar1 == uVar9) {
        std::__ndk1::
        deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::InstructionScheduler::ScheduleGraphNode*>>
                    *)(lVar14 + 8));
        lVar12 = *(long *)(lVar14 + 0x10);
        uVar9 = *(long *)(lVar14 + 0x38) + *(long *)(lVar14 + 0x40);
      }
      plVar13 = plVar13 + 1;
      *(undefined8 **)(*(long *)(lVar12 + (uVar9 >> 6 & 0x3fffffffffffff8)) + (uVar9 & 0x1ff) * 8) =
           puVar4;
      *(long *)(lVar14 + 0x40) = *(long *)(lVar14 + 0x40) + 1;
      *(int *)(puVar4 + 0xb) = *(int *)(puVar4 + 0xb) + 1;
    } while (plVar11 != plVar13);
    plVar11 = *(long **)(this + 0x18);
    plVar13 = plVar11;
  }
  if (plVar13 == *(long **)(this + 0x20)) {
    lVar12 = (long)plVar11 - *(long *)(this + 0x10) >> 3;
    uVar1 = lVar12 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)*(long **)(this + 0x20) - *(long *)(this + 0x10);
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
      pZVar3 = *(Zone **)(this + 0x28);
      uVar9 = uVar1 * 8;
      lVar6 = *(long *)(pZVar3 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar3 + 0x18) - lVar6) ||
          uVar9 - (*(long *)(pZVar3 + 0x18) - lVar6) == 0) {
        *(ulong *)(pZVar3 + 0x10) = lVar6 + uVar9;
      }
      else {
        lVar6 = Zone::NewExpand(pZVar3,uVar9);
      }
    }
    puVar7 = (undefined8 *)(lVar6 + lVar12 * 8);
    puVar8 = puVar7 + 1;
    *puVar7 = puVar4;
    puVar4 = *(undefined8 **)(this + 0x10);
    puVar10 = *(undefined8 **)(this + 0x18);
    while (puVar10 != puVar4) {
      puVar10 = puVar10 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar10;
    }
    *(undefined8 **)(this + 0x10) = puVar7;
    *(undefined8 **)(this + 0x18) = puVar8;
    *(ulong *)(this + 0x20) = lVar6 + uVar1 * 8;
  }
  else {
    *plVar13 = (long)puVar4;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 8;
  }
  return;
}

