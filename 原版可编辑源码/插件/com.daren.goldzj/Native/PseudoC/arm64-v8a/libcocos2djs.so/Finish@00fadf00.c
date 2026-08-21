
/* v8::internal::MarkCompactCollector::Finish() */

void __thiscall v8::internal::MarkCompactCollector::Finish(MarkCompactCollector *this)

{
  MarkCompactCollector *pMVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  MarkCompactCollector *pMVar8;
  void *pvVar9;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Scope aSStack_80 [64];
  long *local_40;
  long *local_38;
  
  GCTracer::Scope::Scope(aSStack_80,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x14);
  if (DAT_01d3f170 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f170 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar3 = DAT_01d3f170;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f170 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x14);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar3,uVar5,0,0,0,0,0,0,0,&local_40,0);
    plVar4 = local_38;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_90 = GCTracer::Scope::Name(0x14);
    local_a0 = &local_98;
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  uVar6 = (ulong)*(uint *)(this + 0x10a0);
  if (0 < (int)*(uint *)(this + 0x10a0)) {
    pMVar8 = this + 0xdf8;
    do {
      if ((*(long *)(*(long *)pMVar8 + 8) != 0) || (*(long *)(*(long *)(pMVar8 + -8) + 8) != 0))
      goto LAB_00fae1b0;
      uVar6 = uVar6 - 1;
      pMVar8 = pMVar8 + 0x50;
    } while (uVar6 != 0);
  }
  if (*(long *)(this + 0x1098) != 0) {
LAB_00fae1b0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","weak_objects_.current_ephemerons.IsEmpty()");
  }
  uVar6 = (ulong)*(uint *)(this + 0x1610);
  if (0 < (int)*(uint *)(this + 0x1610)) {
    pMVar8 = this + 0x1368;
    do {
      if ((*(long *)(*(long *)pMVar8 + 8) != 0) || (*(long *)(*(long *)(pMVar8 + -8) + 8) != 0))
      goto LAB_00fae1c4;
      uVar6 = uVar6 - 1;
      pMVar8 = pMVar8 + 0x50;
    } while (uVar6 != 0);
  }
  if (*(long *)(this + 0x1608) == 0) {
    if (0 < *(int *)(this + 0x1358)) {
      lVar7 = 0;
      pMVar8 = this + 0x10b0;
      do {
        lVar7 = lVar7 + 1;
        *(undefined8 *)(*(long *)pMVar8 + 8) = 0;
        pMVar1 = pMVar8 + -8;
        pMVar8 = pMVar8 + 0x50;
        *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
      } while (lVar7 < *(int *)(this + 0x1358));
    }
    base::Mutex::Lock((Mutex *)(this + 0x1328));
    puVar2 = *(void **)(this + 0x1350);
    while (puVar2 != (void *)0x0) {
      pvVar9 = (void *)*puVar2;
      operator_delete(puVar2);
      puVar2 = pvVar9;
    }
    *(undefined8 *)(this + 0x1350) = 0;
    base::Mutex::Unlock((Mutex *)(this + 0x1328));
    Sweeper::StartSweeperTasks(*(Sweeper **)(this + 0x26f8));
    Sweeper::StartIterabilityTasks(*(Sweeper **)(this + 0x26f8));
    OldLargeObjectSpace::ClearMarkingStateOfLiveObjects();
    OldLargeObjectSpace::ClearMarkingStateOfLiveObjects();
    memset((void *)(*(long *)(*(long *)(this + 8) + 0xd88) + 8),0,0xa000);
    StubCache::Clear(*(StubCache **)(*(long *)(this + 8) + 0xd10));
    StubCache::Clear(*(StubCache **)(*(long *)(this + 8) + 0xd18));
    if (this[0x50] != (MarkCompactCollector)0x0) {
      Deoptimizer::DeoptimizeMarkedCode((Isolate *)(*(long *)(this + 8) + -0x8850));
      this[0x50] = (MarkCompactCollector)0x0;
    }
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
    }
    GCTracer::Scope::~Scope(aSStack_80);
    return;
  }
LAB_00fae1c4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","weak_objects_.discovered_ephemerons.IsEmpty()");
}

