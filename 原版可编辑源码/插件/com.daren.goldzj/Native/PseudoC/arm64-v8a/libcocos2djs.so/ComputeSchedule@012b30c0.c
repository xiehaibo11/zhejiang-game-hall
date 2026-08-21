
/* v8::internal::compiler::Scheduler::ComputeSchedule(v8::internal::Zone*,
   v8::internal::compiler::Graph*, v8::base::Flags<v8::internal::compiler::Scheduler::Flag, int>,
   v8::internal::TickCounter*) */

Schedule *
v8::internal::compiler::Scheduler::ComputeSchedule
          (Zone *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  BasicBlock *pBVar2;
  Schedule *this;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  Zone *this_00;
  long *plVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  Zone *local_140 [2];
  Schedule *local_130;
  undefined8 *local_120;
  undefined8 *local_118;
  long *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  long local_c8;
  long local_b8;
  long local_98;
  long local_90;
  long local_88;
  SpecialRPONumberer *local_68;
  
  this_00 = param_1;
  if ((param_3 >> 2 & 1) == 0) {
    this_00 = (Zone *)*param_2;
  }
  this = *(Schedule **)(this_00 + 0x10);
  fVar10 = 1.0;
  if ((param_3 & 2) != 0) {
    fVar10 = 1.1;
  }
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)((long)param_2 + 0x1c));
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this) < 0x78) {
    this = (Schedule *)Zone::NewExpand(this_00,0x78);
  }
  else {
    *(Schedule **)(this_00 + 0x10) = this + 0x78;
  }
  Schedule::Schedule(this,this_00,(long)(fVar10 * fVar9));
  Scheduler((Scheduler *)local_140,param_1,param_2,this,param_3,(long)(fVar10 * fVar9),param_4);
  BuildCFG((Scheduler *)local_140);
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- COMPUTING SPECIAL RPO ----------------------------------\n");
  }
  local_68 = *(SpecialRPONumberer **)(local_140[0] + 0x10);
  if ((ulong)(*(long *)(local_140[0] + 0x18) - (long)local_68) < 0xa8) {
    local_68 = (SpecialRPONumberer *)Zone::NewExpand(local_140[0],0xa8);
  }
  else {
    *(SpecialRPONumberer **)(local_140[0] + 0x10) = local_68 + 0xa8;
  }
  *(undefined8 *)(local_68 + 0x30) = 0;
  *(Zone **)(local_68 + 0x38) = local_140[0];
  *(undefined8 *)(local_68 + 0x40) = 0;
  *(undefined8 *)(local_68 + 0x48) = 0;
  *(undefined8 *)(local_68 + 0x50) = 0;
  *(Zone **)(local_68 + 0x58) = local_140[0];
  *(undefined8 *)(local_68 + 0x60) = 0;
  *(undefined8 *)(local_68 + 0x68) = 0;
  *(undefined8 *)(local_68 + 0x70) = 0;
  *(Zone **)(local_68 + 0x78) = local_140[0];
  *(Zone **)(local_68 + 0xa0) = local_140[0];
  *(undefined8 *)(local_68 + 0x18) = 0;
  *(undefined8 *)(local_68 + 0x10) = 0;
  *(undefined8 *)(local_68 + 0x28) = 0;
  *(undefined8 *)(local_68 + 0x20) = 0;
  *(undefined8 *)(local_68 + 0x88) = 0;
  *(undefined8 *)(local_68 + 0x80) = 0;
  *(undefined8 *)(local_68 + 0x98) = 0;
  *(undefined8 *)(local_68 + 0x90) = 0;
  *(Zone **)local_68 = local_140[0];
  *(Schedule **)(local_68 + 8) = local_130;
  SpecialRPONumberer::ComputeAndInsertSpecialRPO
            (local_68,*(BasicBlock **)(*(long *)(local_68 + 8) + 0x68),
             *(BasicBlock **)(*(long *)(local_68 + 8) + 0x70));
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- IMMEDIATE BLOCK DOMINATORS -----------------------------\n");
  }
  *(undefined4 *)(*(long *)(local_130 + 0x68) + 0xc) = 0;
  PropagateImmediateDominators(*(BasicBlock **)(*(long *)(local_130 + 0x68) + 0x18));
  PrepareUses((Scheduler *)local_140);
  ScheduleEarly((Scheduler *)local_140);
  ScheduleLate((Scheduler *)local_140);
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- SEAL FINAL SCHEDULE ------------------------------------\n");
  }
  SpecialRPONumberer::SerializeRPOIntoSchedule(local_68);
  if (local_120 != local_118) {
    puVar5 = local_120;
    lVar6 = 0;
    do {
      plVar7 = (long *)*puVar5;
      pBVar2 = (BasicBlock *)Schedule::GetBlockById(local_130,lVar6);
      if (plVar7 != (long *)0x0) {
        puVar1 = (undefined8 *)*plVar7;
        puVar8 = (undefined8 *)plVar7[1];
        while (puVar8 != puVar1) {
          puVar8 = puVar8 + -1;
          Schedule::AddNode(local_130,pBVar2,(Node *)*puVar8);
        }
      }
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (puVar5 != local_118);
  }
  if (local_90 != 0) {
    local_88 = local_90;
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_e0);
  if (local_d8 == local_d0) {
LAB_012b3334:
    if (((local_e0 != (long *)0x0) && (0xf < (ulong)(local_c8 - (long)local_e0))) &&
       ((uVar3 = local_c8 - (long)local_e0 >> 3, local_b8 == 0 ||
        (*(ulong *)(local_b8 + 8) <= uVar3)))) {
      local_e0[1] = uVar3;
      *local_e0 = local_b8;
    }
    return this;
  }
  plVar4 = (long *)*local_d8;
  plVar7 = (long *)local_98;
  if (local_98 != 0) goto LAB_012b3304;
  do {
    plVar7 = plVar4;
    plVar7[1] = 0x200;
    *plVar7 = local_98;
    local_98 = (long)plVar7;
    do {
      local_d8 = local_d8 + 1;
      if (local_d0 == local_d8) goto LAB_012b3334;
      plVar4 = (long *)*local_d8;
      if (plVar7 == (long *)0x0) break;
LAB_012b3304:
    } while (0x200 < *(ulong *)((long)plVar7 + 8));
  } while( true );
}

