
/* v8::internal::Heap::GarbageCollectionEpilogue() */

void __thiscall v8::internal::Heap::GarbageCollectionEpilogue(Heap *this)

{
  long lVar1;
  Isolate *pIVar2;
  Heap *pHVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 *puVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  MemoryChunk *this_00;
  SlotSet *pSVar26;
  Heap *pHVar27;
  Heap *pHVar28;
  double dVar29;
  byte **local_148;
  byte *local_140;
  undefined8 local_138;
  undefined8 local_130;
  Scope aSStack_128 [64];
  byte **local_e8;
  byte *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  Scope aSStack_c8 [64];
  long *local_88;
  long *local_80;
  
  GCTracer::Scope::Scope(aSStack_c8,*(undefined8 *)(this + 0x7f8),0xb);
  if (DAT_01d3f050 == (byte *)0x0) {
    plVar15 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f050 = (byte *)(**(code **)(*plVar15 + 0x10))(plVar15,"disabled-by-default-v8.gc");
  }
  pbVar6 = DAT_01d3f050;
  local_e8 = (byte **)0x0;
  if ((*DAT_01d3f050 & 5) != 0) {
    uVar16 = GCTracer::Scope::Name(0xb);
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    plVar15 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar16 = (**(code **)(*plVar15 + 0x18))(plVar15,0x58,pbVar6,uVar16,0,0,0,0,0,0,0,&local_88,0);
    plVar15 = local_80;
    local_80 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    plVar15 = local_88;
    local_88 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    local_d8 = GCTracer::Scope::Name(0xb);
    local_e8 = &local_e0;
    local_e0 = pbVar6;
    local_d0 = uVar16;
  }
  if (((FLAG_clear_free_memory != '\0' || FLAG_verify_heap != '\0') &&
      (*(char *)(*(long *)(this + 0xe8) + 0x1f8) != '\0')) &&
     (lVar25 = *(long *)(*(long *)(this + 0xe8) + 400), lVar25 != 0)) {
    do {
      uVar17 = 0xdeadbeedbeadbeef;
      if (FLAG_clear_free_memory != '\0') {
        uVar17 = 0;
      }
      MemoryAllocator::ZapBlock
                (*(MemoryAllocator **)(this + 0x820),*(ulong *)(lVar25 + 0x20),
                 (*(long *)(lVar25 + 0x98) + lVar25) - *(long *)(lVar25 + 0x20),uVar17);
      lVar25 = *(long *)(lVar25 + 0xe0);
    } while (lVar25 != 0);
  }
  if (FLAG_verify_heap != '\0') {
    Verify(this);
  }
  if ((*(long *)(this + 0xe8) != 0) &&
     (uVar17 = CommittedMemory(this), *(ulong *)(this + 0x90) < uVar17)) {
    *(ulong *)(this + 0x90) = uVar17;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  iVar7 = (**(code **)(**(long **)(this + 0x130) + 0x50))();
  iVar8 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
  iVar9 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
  iVar10 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
  iVar11 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
  iVar12 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
  iVar13 = (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
  if (*(char *)(lVar25 + 0x1858) == '\0') {
    *(char *)(lVar25 + 0x1858) = '\x01';
    piVar18 = (int *)StatsCounterBase::FindLocationInStatsTable
                               ((StatsCounterBase *)(lVar25 + 0x1840));
    *(int **)(lVar25 + 0x1850) = piVar18;
  }
  else {
    piVar18 = *(int **)(lVar25 + 0x1850);
  }
  if (piVar18 != (int *)0x0) {
    *piVar18 = iVar8 + iVar7 + iVar9 + iVar10 + iVar11 + iVar12 + iVar13;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  iVar7 = *(int *)(*(long *)(this + -0x7880) + 0xf);
  pIVar2 = (Isolate *)(this + -0x8850);
  if (*(char *)(lVar25 + 0x18b8) == '\0') {
    *(char *)(lVar25 + 0x18b8) = '\x01';
    piVar18 = (int *)StatsCounterBase::FindLocationInStatsTable
                               ((StatsCounterBase *)(lVar25 + 0x18a0));
    *(int **)(lVar25 + 0x18b0) = piVar18;
  }
  else {
    piVar18 = *(int **)(lVar25 + 0x18b0);
  }
  if (piVar18 != (int *)0x0) {
    *piVar18 = iVar7 >> 1;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  iVar7 = *(int *)(*(long *)(this + -0x7880) + 7);
  if (*(char *)(lVar25 + 0x18d8) == '\0') {
    *(char *)(lVar25 + 0x18d8) = '\x01';
    piVar18 = (int *)StatsCounterBase::FindLocationInStatsTable
                               ((StatsCounterBase *)(lVar25 + 0x18c0));
    *(int **)(lVar25 + 0x18d0) = piVar18;
  }
  else {
    piVar18 = *(int **)(lVar25 + 0x18d0);
  }
  if (piVar18 != (int *)0x0) {
    *piVar18 = iVar7 >> 1;
  }
  lVar25 = CommittedMemory(this);
  if (lVar25 != 0) {
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    (**(code **)(**(long **)(this + 0x130) + 0x50))();
    (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
    (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
    (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
    (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
    (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
    (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
    CommittedMemory(this);
    Histogram::AddSample((int)uVar16 + 0x15d0);
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    CommittedMemory(this);
    Histogram::AddSample((int)uVar16 + 0x1698);
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    (**(code **)(**(long **)(this + 0x130) + 0x50))();
    (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
    (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
    (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
    (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
    (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
    (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
    Histogram::AddSample((int)uVar16 + 0x16c0);
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    (**(code **)(**(long **)(this + 0x100) + 0x38))();
    Histogram::AddSample((int)uVar16 + 0x16e8);
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    (**(code **)(**(long **)(this + 0xf8) + 0x38))();
    Histogram::AddSample((int)uVar16 + 0x1710);
    Histogram::AddSample((int)*(undefined8 *)(*(long *)(this + 0x30) + 0x9520) + 0x1738);
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xe8) + 0x60))();
  if (*(char *)(lVar25 + 0x1cb8) == '\0') {
    *(char *)(lVar25 + 0x1cb8) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1ca0));
    *(undefined4 **)(lVar25 + 0x1cb0) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1cb0);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xe8) + 0x38))();
  if (*(char *)(lVar25 + 0x1cd8) == '\0') {
    *(char *)(lVar25 + 0x1cd8) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1cc0));
    *(undefined4 **)(lVar25 + 0x1cd0) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1cd0);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xe8) + 0x50))();
  if (*(char *)(lVar25 + 0x1cf8) == '\0') {
    *(char *)(lVar25 + 0x1cf8) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1ce0));
    *(undefined4 **)(lVar25 + 0x1cf0) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1cf0);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xf0) + 0x60))();
  if (*(char *)(lVar25 + 0x1d18) == '\0') {
    *(char *)(lVar25 + 0x1d18) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1d00));
    *(undefined4 **)(lVar25 + 0x1d10) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1d10);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xf0) + 0x38))();
  if (*(char *)(lVar25 + 0x1d38) == '\0') {
    *(char *)(lVar25 + 0x1d38) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1d20));
    *(undefined4 **)(lVar25 + 0x1d30) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1d30);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xf0) + 0x50))();
  if (*(char *)(lVar25 + 0x1d58) == '\0') {
    *(char *)(lVar25 + 0x1d58) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1d40));
    *(undefined4 **)(lVar25 + 0x1d50) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1d50);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = (**(code **)(**(long **)(this + 0xf0) + 0x38))();
  if (lVar25 != 0) {
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    uVar17 = (**(code **)(**(long **)(this + 0xf0) + 0x50))();
    (**(code **)(**(long **)(this + 0xf0) + 0x38))((double)uVar17,*(long **)(this + 0xf0));
    Histogram::AddSample((int)uVar16 + 0x15f8);
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xf8) + 0x60))();
  if (*(char *)(lVar25 + 0x1d78) == '\0') {
    *(char *)(lVar25 + 0x1d78) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1d60));
    *(undefined4 **)(lVar25 + 0x1d70) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1d70);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xf8) + 0x38))();
  if (*(char *)(lVar25 + 0x1d98) == '\0') {
    *(char *)(lVar25 + 0x1d98) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1d80));
    *(undefined4 **)(lVar25 + 0x1d90) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1d90);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0xf8) + 0x50))();
  if (*(char *)(lVar25 + 0x1db8) == '\0') {
    *(char *)(lVar25 + 0x1db8) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1da0));
    *(undefined4 **)(lVar25 + 0x1db0) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1db0);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = (**(code **)(**(long **)(this + 0xf8) + 0x38))();
  if (lVar25 != 0) {
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    uVar17 = (**(code **)(**(long **)(this + 0xf8) + 0x50))();
    (**(code **)(**(long **)(this + 0xf8) + 0x38))((double)uVar17,*(long **)(this + 0xf8));
    Histogram::AddSample((int)uVar16 + 0x1620);
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0x100) + 0x60))();
  if (*(char *)(lVar25 + 0x1dd8) == '\0') {
    *(char *)(lVar25 + 0x1dd8) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1dc0));
    *(undefined4 **)(lVar25 + 0x1dd0) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1dd0);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0x100) + 0x38))();
  if (*(char *)(lVar25 + 0x1df8) == '\0') {
    *(char *)(lVar25 + 0x1df8) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1de0));
    *(undefined4 **)(lVar25 + 0x1df0) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1df0);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0x100) + 0x50))();
  if (*(char *)(lVar25 + 0x1e18) == '\0') {
    *(char *)(lVar25 + 0x1e18) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1e00));
    *(undefined4 **)(lVar25 + 0x1e10) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1e10);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = (**(code **)(**(long **)(this + 0x100) + 0x38))();
  if (lVar25 != 0) {
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    uVar17 = (**(code **)(**(long **)(this + 0x100) + 0x50))();
    (**(code **)(**(long **)(this + 0x100) + 0x38))((double)uVar17,*(long **)(this + 0x100));
    Histogram::AddSample((int)uVar16 + 0x1648);
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0x108) + 0x60))();
  if (*(char *)(lVar25 + 0x1e38) == '\0') {
    *(char *)(lVar25 + 0x1e38) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1e20));
    *(undefined4 **)(lVar25 + 0x1e30) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1e30);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0x108) + 0x38))();
  if (*(char *)(lVar25 + 0x1e58) == '\0') {
    *(char *)(lVar25 + 0x1e58) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1e40));
    *(undefined4 **)(lVar25 + 0x1e50) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1e50);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = *(long *)(*(long *)(this + 0x30) + 0x9520);
  uVar14 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
  if (*(char *)(lVar25 + 0x1e78) == '\0') {
    *(char *)(lVar25 + 0x1e78) = '\x01';
    puVar19 = (undefined4 *)
              StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar25 + 0x1e60));
    *(undefined4 **)(lVar25 + 0x1e70) = puVar19;
  }
  else {
    puVar19 = *(undefined4 **)(lVar25 + 0x1e70);
  }
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = uVar14;
  }
  lVar25 = (**(code **)(**(long **)(this + 0x108) + 0x38))();
  if (lVar25 != 0) {
    uVar16 = *(undefined8 *)(*(long *)(this + 0x30) + 0x9520);
    uVar17 = (**(code **)(**(long **)(this + 0x108) + 0x50))();
    (**(code **)(**(long **)(this + 0x108) + 0x38))((double)uVar17,*(long **)(this + 0x108));
    Histogram::AddSample((int)uVar16 + 0x1670);
  }
  plVar15 = (long *)V8::GetCurrentPlatform();
  dVar29 = (double)(**(code **)(*plVar15 + 0x78))();
  *(double *)(this + 0x7f0) = dVar29 * 1000.0;
  GCTracer::Scope::Scope(aSStack_128,*(undefined8 *)(this + 0x7f8),0xc);
  if (DAT_01d3f058 == (byte *)0x0) {
    plVar15 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f058 = (byte *)(**(code **)(*plVar15 + 0x10))(plVar15,"disabled-by-default-v8.gc");
  }
  pbVar6 = DAT_01d3f058;
  local_148 = (byte **)0x0;
  if ((*DAT_01d3f058 & 5) != 0) {
    uVar16 = GCTracer::Scope::Name(0xc);
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    plVar15 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar16 = (**(code **)(*plVar15 + 0x18))(plVar15,0x58,pbVar6,uVar16,0,0,0,0,0,0,0,&local_88,0);
    plVar15 = local_80;
    local_80 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    plVar15 = local_88;
    local_88 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))();
    }
    local_138 = GCTracer::Scope::Name(0xc);
    local_148 = &local_140;
    local_140 = pbVar6;
    local_130 = uVar16;
  }
  ReduceNewSpaceSize(this);
  if ((local_148 != (byte **)0x0) && (*local_140 != 0)) {
    plVar15 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar15 + 0x28))(plVar15,local_140,local_138,local_130);
  }
  GCTracer::Scope::~Scope(aSStack_128);
  if (FLAG_harmony_weak_refs != '\0') {
    pHVar3 = this + 0xd50;
    lVar25 = *(long *)pHVar3;
    pHVar27 = this + 0xd58;
    lVar23 = *(long *)pHVar27;
    pHVar28 = this + 0xd60;
    *(int *)pHVar28 = *(int *)pHVar28 + 1;
    uVar17 = *(ulong *)(this + -0x78a8);
    while (((uVar17 & 1) == 0 || ((int)uVar17 != *(int *)(this + -0x87b0)))) {
      if (*(CanonicalHandleScope **)(this + 0xd68) == (CanonicalHandleScope *)0x0) {
        puVar20 = *(ulong **)pHVar3;
        if (puVar20 == *(ulong **)pHVar27) {
          puVar20 = (ulong *)HandleScope::Extend(pIVar2);
        }
        *(ulong **)pHVar3 = puVar20 + 1;
        *puVar20 = uVar17;
      }
      else {
        puVar20 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(this + 0xd68),uVar17);
        uVar17 = *puVar20;
      }
      uVar22 = *(ulong *)(this + -0x87b0);
      *(ulong *)(this + -0x78a8) = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + 0x1f);
      uVar17 = *puVar20;
      *(int *)(uVar17 + 0x1f) = (int)uVar22;
      if ((uVar22 & 1) != 0) {
        uVar24 = *(ulong *)((uVar22 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar17 + 0x1f;
        this_00 = (MemoryChunk *)(uVar17 & 0xfffffffffffc0000);
        if (((uint)uVar24 >> 0x12 & 1) != 0) {
          IncrementalMarking::RecordWriteSlow
                    (*(IncrementalMarking **)(*(long *)(this_00 + 0x18) + 0x828),uVar17,lVar1);
          uVar24 = *(ulong *)(uVar22 & 0xfffffffffffc0000 | 8);
          uVar17 = extraout_x1;
        }
        if (((uVar24 & 0x18) != 0) && ((*(byte *)((ulong)this_00 | 8) & 0x18) == 0)) {
          pSVar26 = *(SlotSet **)(this_00 + 0x30);
          if (pSVar26 == (SlotSet *)0x0) {
            pSVar26 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this_00);
            uVar17 = extraout_x1_00;
          }
          uVar22 = lVar1 - (long)this_00;
          puVar21 = *(undefined8 **)(pSVar26 + (uVar22 >> 0xc) * 8);
          uVar24 = uVar22 >> 7 & 0x1f;
          if (puVar21 == (undefined8 *)0x0) {
            puVar21 = Malloced::operator_new((Malloced *)0x80,uVar17);
            puVar21[1] = 0;
            *puVar21 = 0;
            puVar21[3] = 0;
            puVar21[2] = 0;
            puVar21[5] = 0;
            puVar21[4] = 0;
            puVar21[7] = 0;
            puVar21[6] = 0;
            puVar21[9] = 0;
            puVar21[8] = 0;
            puVar21[0xb] = 0;
            puVar21[10] = 0;
            puVar21[0xd] = 0;
            puVar21[0xc] = 0;
            puVar21[0xf] = 0;
            puVar21[0xe] = 0;
            *(undefined8 **)(pSVar26 + (uVar22 >> 0xc) * 8) = puVar21;
          }
          uVar4 = *(uint *)((long)puVar21 + uVar24 * 4);
          uVar5 = 1 << (ulong)((uint)uVar22 >> 2 & 0x1f);
          if ((uVar4 & uVar5) == 0) {
            *(uint *)((long)puVar21 + uVar24 * 4) = uVar4 | uVar5;
          }
        }
      }
      Isolate::RunHostCleanupFinalizationGroupCallback(pIVar2,puVar20);
      uVar17 = *(ulong *)(this + -0x78a8);
    }
    *(long *)pHVar3 = lVar25;
    *(int *)pHVar28 = *(int *)pHVar28 + -1;
    if (*(long *)pHVar27 != lVar23) {
      *(long *)pHVar27 = lVar23;
      HandleScope::DeleteExtensions(pIVar2);
    }
  }
  if ((local_e8 != (byte **)0x0) && (*local_e0 != 0)) {
    plVar15 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar15 + 0x28))(plVar15,local_e0,local_d8,local_d0);
  }
  GCTracer::Scope::~Scope(aSStack_c8);
  return;
}

