
/* v8::internal::Heap::IdleNotification(double) */

uint __thiscall v8::internal::Heap::IdleNotification(Heap *this,double param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  GCTracer *this_00;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  Heap *pHVar22;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  long local_e8;
  undefined1 local_e0;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  long local_c8;
  undefined1 local_c0;
  byte **local_b8;
  byte *local_b0;
  char *local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  
  if (*(long *)(this + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HasBeenSetUp()");
  }
  lVar16 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  TimedHistogram::Start
            ((TimedHistogram *)(lVar16 + 0x900),(ElapsedTimer *)(lVar16 + 0x930),
             *(Isolate **)(*(long *)(lVar16 + 0x920) + 0x10));
  if (DAT_01d3f0f0 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0f0 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,&DAT_019c38f7);
  }
  pbVar2 = DAT_01d3f0f0;
  local_b8 = (byte **)0x0;
  if ((*DAT_01d3f0f0 & 5) != 0) {
    local_98 = (long *)0x0;
    local_90 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar2,"V8.GCIdleNotification",0,0,0,0,0,0,0,&local_98,0);
    plVar6 = local_90;
    local_90 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_98;
    local_98 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_b8 = &local_b0;
    local_a8 = "V8.GCIdleNotification";
    local_b0 = pbVar2;
    local_a0 = uVar7;
  }
  plVar6 = (long *)V8::GetCurrentPlatform();
  dVar20 = (double)(**(code **)(*plVar6 + 0x78))();
  lVar15 = *(long *)(this + 0xe8);
  this_00 = *(GCTracer **)(this + 0x7f8);
  lVar14 = *(long *)(this + 0x880);
  lVar11 = *(long *)(lVar15 + 0x150);
  lVar10 = *(long *)(lVar15 + 0x68);
  uVar12 = lVar11 - 4U & 0xfffffffffffc0000;
  uVar13 = lVar10 - 4U & 0xfffffffffffc0000;
  if (uVar12 != uVar13) {
    uVar18 = *(ulong *)(uVar12 + 0xe0);
    lVar17 = *(long *)(uVar12 + 0x28) - lVar11;
    if (uVar18 != uVar13) {
      do {
        lVar10 = MemoryChunkLayout::AllocatableMemoryInDataPage();
        uVar18 = *(ulong *)(uVar18 + 0xe0);
        lVar17 = lVar10 + lVar17;
      } while (uVar18 != uVar13);
      lVar10 = *(long *)(lVar15 + 0x68);
    }
    lVar11 = *(long *)(uVar13 + 0x20);
    lVar10 = lVar17 + lVar10;
  }
  plVar6 = *(long **)(this + 0xf0);
  lVar17 = *(long *)(this + 0x888);
  lVar15 = 0;
  if (plVar6 != (long *)0x0) {
    iVar19 = 3;
LAB_00f94c68:
    do {
      lVar8 = (**(code **)(*plVar6 + 0x50))();
      lVar15 = lVar8 + lVar15;
      switch(iVar19) {
      case 0:
      case 1:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 2:
        plVar6 = *(long **)(this + 0xf0);
        iVar19 = iVar19 + 1;
        if (plVar6 == (long *)0x0) goto switchD_00f94c90_default;
        goto LAB_00f94c68;
      case 3:
        plVar6 = *(long **)(this + 0xf8);
        break;
      case 4:
        plVar6 = *(long **)(this + 0x100);
        break;
      default:
        goto switchD_00f94c90_default;
      }
      iVar19 = iVar19 + 1;
    } while (plVar6 != (long *)0x0);
  }
switchD_00f94c90_default:
  dVar21 = param_1 * 1000.0;
  pHVar22 = (Heap *)(dVar20 * 1000.0);
  lVar8 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  if (*(long *)(this + 0x870) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(ulong *)(*(long *)(this + 0x870) + 0x28);
  }
  GCTracer::SampleAllocation
            (this_00,(double)pHVar22,(lVar10 - lVar11) + lVar14,
             (lVar15 + lVar17 + lVar8) - *(long *)(this + 0x890),uVar12);
  uVar1 = *(undefined4 *)(this + 0xe0);
  uVar7 = GCTracer::ContextDisposalRateInMilliseconds(*(GCTracer **)(this + 0x7f8));
  lVar11 = (**(code **)(**(long **)(this + 0x130) + 0x50))();
  lVar14 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
  lVar15 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
  lVar17 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
  lVar8 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
  lVar9 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
  lVar10 = (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
  lVar10 = lVar14 + lVar11 + lVar15 + lVar17 + lVar8 + lVar9 + lVar10;
  bVar3 = *(int *)(*(long *)(this + 0x828) + 0x58) == 0;
  local_d8[0] = uVar1;
  local_d0 = uVar7;
  local_c8 = lVar10;
  local_c0 = bVar3;
  uVar4 = GCIdleTimeHandler::Compute
                    ((GCIdleTimeHandler *)(dVar21 - (double)pHVar22),*(undefined8 *)(this + 0x838),
                     local_d8);
  uVar5 = PerformIdleTimeAction(dVar21,this,uVar4);
  local_f8[0] = uVar1;
  local_f0 = uVar7;
  local_e8 = lVar10;
  local_e0 = bVar3;
  IdleNotificationEpilogue(pHVar22,dVar21,this,uVar4,local_f8);
  if ((local_b8 != (byte **)0x0) && (*local_b0 != 0)) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_b0,local_a8,local_a0);
  }
  TimedHistogram::Stop
            ((TimedHistogram *)(lVar16 + 0x900),(ElapsedTimer *)(lVar16 + 0x930),
             *(Isolate **)(*(long *)(lVar16 + 0x920) + 0x10));
  return uVar5 & 1;
}

