
/* WARNING: Removing unreachable block (ram,0x014f0e90) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x014f11c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::ConcurrentMarking::Run(int, v8::internal::ConcurrentMarking::TaskState*) */

void __thiscall
v8::internal::ConcurrentMarking::Run(ConcurrentMarking *this,int param_1,TaskState *param_2)

{
  int iVar1;
  uint *puVar2;
  ConcurrentMarking *pCVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  byte *pbVar11;
  long **pplVar12;
  byte **ppbVar13;
  bool bVar14;
  uint uVar15;
  int extraout_w0;
  WorkerThreadRuntimeCallStats *pWVar16;
  long *plVar17;
  undefined8 uVar18;
  ConcurrentMarkingVisitor *pCVar19;
  void *pvVar20;
  SlotSnapshot *pSVar21;
  ulong uVar22;
  uint uVar23;
  uint *puVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long **pplVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  Mutex *pMVar39;
  long lVar40;
  uint *puVar41;
  int iVar42;
  double dVar43;
  double dVar44;
  long **local_1188;
  undefined **local_1180;
  long local_1178;
  long local_1170;
  long lStack_1168;
  long local_1160;
  int local_1158;
  uint local_1154;
  uint local_1150;
  char local_114c;
  TaskState local_114b;
  TaskState *local_1148;
  TaskState *pTStack_1140;
  uint local_1138 [2];
  uint *local_1130;
  ulong auStack_1128 [509];
  byte **local_140;
  byte *local_138;
  undefined8 local_130;
  undefined8 local_128;
  BackgroundScope aBStack_120 [64];
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  byte **local_c8;
  byte *local_c0;
  char *local_b8;
  undefined8 local_b0;
  long **local_88 [3];
  
  pWVar16 = (WorkerThreadRuntimeCallStats *)
            GCTracer::worker_thread_runtime_call_stats(*(GCTracer **)(*(long *)this + 0x7f8));
  WorkerThreadRuntimeCallStatsScope::WorkerThreadRuntimeCallStatsScope
            ((WorkerThreadRuntimeCallStatsScope *)&local_e0,pWVar16);
  GCTracer::BackgroundScope::BackgroundScope
            (aBStack_120,*(undefined8 *)(*(long *)this + 0x7f8),5,local_e0);
  if (DAT_01d46bb8 == (byte *)0x0) {
    plVar17 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d46bb8 = (byte *)(**(code **)(*plVar17 + 0x10))(plVar17,"disabled-by-default-v8.gc");
  }
  pbVar11 = DAT_01d46bb8;
  local_140 = (byte **)0x0;
  if ((*DAT_01d46bb8 & 5) != 0) {
    uVar18 = GCTracer::BackgroundScope::Name(5);
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    plVar17 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar18 = (**(code **)(*plVar17 + 0x18))(plVar17,0x58,pbVar11,uVar18,0,0,0,0);
    plVar17 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = local_d8;
    local_d8 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    local_130 = GCTracer::BackgroundScope::Name(5);
    local_140 = &local_138;
    local_138 = pbVar11;
    local_128 = uVar18;
  }
  lVar25 = *(long *)this;
  local_1178 = *(long *)(this + 8);
  lStack_1168 = *(long *)(this + 0x20);
  local_1170 = *(long *)(this + 0x18);
  local_1154 = *(uint *)(param_2 + 0x38);
  local_114b = param_2[0x3c];
  local_1150 = (uint)(FLAG_flush_bytecode != '\0');
  if (FLAG_stress_flush_bytecode != '\0') {
    local_1150 = 2;
  }
  local_1180 = &PTR__ObjectVisitor_01cc6cf0;
  local_114c = *(long *)(*(long *)(lVar25 + 0x870) + 8) != 0;
  local_1148 = param_2 + 8;
  local_1138[0] = 0;
  local_1160 = lVar25;
  local_1158 = param_1;
  pTStack_1140 = local_1148;
  memset(&local_1130,0,0xff0);
  if (FLAG_trace_concurrent_marking != '\0') {
    Isolate::PrintWithTimestamp
              ((char *)(lVar25 + -0x8850),"Starting concurrent marking task %d\n",
               (ulong)(uint)param_1);
  }
  plVar17 = (long *)V8::GetCurrentPlatform();
  dVar43 = (double)(**(code **)(*plVar17 + 0x78))();
  local_c8 = (byte **)0x0;
  local_c0 = (byte *)0x0;
  uVar15 = Worklist<v8::internal::Ephemeron,64>::Pop
                     ((Worklist<v8::internal::Ephemeron,64> *)(*(long *)(this + 0x20) + 0x570),
                      param_1,(Ephemeron *)&local_c8);
  uVar32 = 0;
  while ((uVar15 & 1) != 0) {
    ConcurrentMarkingVisitor::ProcessEphemeron
              ((ConcurrentMarkingVisitor *)&local_1180,local_c8,local_c0);
    uVar32 = uVar32 | uVar15;
    uVar15 = Worklist<v8::internal::Ephemeron,64>::Pop
                       ((Worklist<v8::internal::Ephemeron,64> *)(*(long *)(this + 0x20) + 0x570),
                        param_1,(Ephemeron *)&local_c8);
  }
  uVar34 = 0;
  do {
    uVar35 = 0;
    uVar15 = 0;
    while( true ) {
      local_1188 = (long **)0x0;
      pCVar19 = (ConcurrentMarkingVisitor *)
                Worklist<v8::internal::HeapObject,64>::Pop
                          (*(Worklist<v8::internal::HeapObject,64> **)(this + 8),param_1,
                           (HeapObject *)&local_1188);
      pplVar12 = local_1188;
      if (((ulong)pCVar19 & 1) == 0) break;
      puVar24 = (uint *)((long)local_1188 + -1);
      if ((puVar24 == *(uint **)(*(long *)(*(long *)this + 0x118) + 0x80)) ||
         (*(uint **)(*(long *)(*(long *)this + 0xe8) + 0xc0) <= puVar24 &&
          puVar24 < *(uint **)(*(long *)(*(long *)this + 0xe8) + 200))) {
        lVar40 = *(long *)(this + 0x10);
        puVar38 = (undefined8 *)(lVar40 + (long)param_1 * 0x50);
        puVar33 = (undefined8 *)*puVar38;
        lVar25 = puVar33[1];
        if (lVar25 == 0x40) {
          base::Mutex::Lock((Mutex *)(lVar40 + 0x280));
          *puVar33 = *(undefined8 *)(lVar40 + 0x2a8);
          *(undefined8 **)(lVar40 + 0x2a8) = puVar33;
          base::Mutex::Unlock((Mutex *)(lVar40 + 0x280));
          pvVar20 = operator_new(0x210);
          *(undefined8 *)((long)pvVar20 + 0x20) = 0;
          *(undefined8 *)((long)pvVar20 + 0x18) = 0;
          *(undefined8 *)((long)pvVar20 + 0x30) = 0;
          *(undefined8 *)((long)pvVar20 + 0x28) = 0;
          *(undefined8 *)((long)pvVar20 + 0x40) = 0;
          *(undefined8 *)((long)pvVar20 + 0x38) = 0;
          *(undefined8 *)((long)pvVar20 + 0x50) = 0;
          *(undefined8 *)((long)pvVar20 + 0x48) = 0;
          *(undefined8 *)((long)pvVar20 + 0x60) = 0;
          *(undefined8 *)((long)pvVar20 + 0x58) = 0;
          *(undefined8 *)((long)pvVar20 + 0x70) = 0;
          *(undefined8 *)((long)pvVar20 + 0x68) = 0;
          *(undefined8 *)((long)pvVar20 + 0x80) = 0;
          *(undefined8 *)((long)pvVar20 + 0x78) = 0;
          *(undefined8 *)((long)pvVar20 + 0x90) = 0;
          *(undefined8 *)((long)pvVar20 + 0x88) = 0;
          *(undefined8 *)((long)pvVar20 + 0xa0) = 0;
          *(undefined8 *)((long)pvVar20 + 0x98) = 0;
          *(undefined8 *)((long)pvVar20 + 0xb0) = 0;
          *(undefined8 *)((long)pvVar20 + 0xa8) = 0;
          *(undefined8 *)((long)pvVar20 + 0xc0) = 0;
          *(undefined8 *)((long)pvVar20 + 0xb8) = 0;
          *(undefined8 *)((long)pvVar20 + 0xd0) = 0;
          *(undefined8 *)((long)pvVar20 + 200) = 0;
          *(undefined8 *)((long)pvVar20 + 0xe0) = 0;
          *(undefined8 *)((long)pvVar20 + 0xd8) = 0;
          *(undefined8 *)((long)pvVar20 + 0xf0) = 0;
          *(undefined8 *)((long)pvVar20 + 0xe8) = 0;
          *(undefined8 *)((long)pvVar20 + 0x100) = 0;
          *(undefined8 *)((long)pvVar20 + 0xf8) = 0;
          *(undefined8 *)((long)pvVar20 + 0x110) = 0;
          *(undefined8 *)((long)pvVar20 + 0x108) = 0;
          *(undefined8 *)((long)pvVar20 + 0x120) = 0;
          *(undefined8 *)((long)pvVar20 + 0x118) = 0;
          *(undefined8 *)((long)pvVar20 + 0x130) = 0;
          *(undefined8 *)((long)pvVar20 + 0x128) = 0;
          *(undefined8 *)((long)pvVar20 + 0x140) = 0;
          *(undefined8 *)((long)pvVar20 + 0x138) = 0;
          *(undefined8 *)((long)pvVar20 + 0x150) = 0;
          *(undefined8 *)((long)pvVar20 + 0x148) = 0;
          *(undefined8 *)((long)pvVar20 + 0x160) = 0;
          *(undefined8 *)((long)pvVar20 + 0x158) = 0;
          *(undefined8 *)((long)pvVar20 + 0x170) = 0;
          *(undefined8 *)((long)pvVar20 + 0x168) = 0;
          *(undefined8 *)((long)pvVar20 + 0x180) = 0;
          *(undefined8 *)((long)pvVar20 + 0x178) = 0;
          *(undefined8 *)((long)pvVar20 + 400) = 0;
          *(undefined8 *)((long)pvVar20 + 0x188) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1a0) = 0;
          *(undefined8 *)((long)pvVar20 + 0x198) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1b0) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1a8) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1c0) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1b8) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1d0) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1c8) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1e0) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1d8) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1f0) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1e8) = 0;
          *(undefined8 *)((long)pvVar20 + 0x200) = 0;
          *(undefined8 *)((long)pvVar20 + 0x1f8) = 0;
          *(undefined8 *)((long)pvVar20 + 0x208) = 0;
          *puVar38 = pvVar20;
          *(undefined8 *)((long)pvVar20 + 8) = 1;
          *(long ***)((long)pvVar20 + 0x10) = pplVar12;
        }
        else {
          puVar33[1] = lVar25 + 1;
          puVar33[lVar25 + 2] = local_1188;
        }
      }
      else {
        uVar37 = (ulong)local_1188 & 0xffffffff00000000 | (ulong)*puVar24;
        switch(*(undefined1 *)(uVar37 + 6)) {
        case 0:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          uVar36 = (*(uint *)((long)pplVar12 + 3U) & 0x3ffffffe) * 4 + 8;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
            } while (puVar24 < (uint *)((long)pplVar12 + 3U));
          }
          break;
        case 1:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          uVar36 = ((int)*(uint *)((long)pplVar12 + 3U) >> 1) + 0xbU & 0xfffffffc;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
            } while (puVar24 < (uint *)((long)pplVar12 + 3U));
          }
          break;
        case 2:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          uVar36 = (uint)*(byte *)(uVar37 + 3) << 2;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar23 = *puVar24;
            }
          }
          break;
        case 3:
          puVar24 = (uint *)((long)local_1188 + 3);
          uVar36 = *puVar24;
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          uVar36 = (uVar36 & 0x3ffffffe) * 4 + 8;
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          break;
        case 4:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar36 = *puVar24;
            while( true ) {
              if ((uVar36 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar36 = *puVar24;
            }
          }
          iVar42 = *(int *)((long)pplVar12 + 7);
LAB_014f2a28:
          uVar36 = iVar42 + 0xfU & 0xfffffffc;
          break;
        case 5:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) != 0) {
            puVar24 = (uint *)((long)pplVar12 + -1);
            if (puVar24 < (uint *)0xfffffffffffffffc) {
              uVar36 = *puVar24;
              while( true ) {
                if ((uVar36 & 1) != 0) {
                  MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                  ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                            ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                              *)&local_1180,pplVar12,puVar24,
                             (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
                }
                puVar24 = puVar24 + 1;
                if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
                uVar36 = *puVar24;
              }
            }
            iVar42 = *(int *)((long)pplVar12 + 7) << 1;
            goto LAB_014f2a28;
          }
LAB_014f2414:
          uVar36 = 0;
          break;
        default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        case 7:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          uVar36 = (uint)*(byte *)(uVar37 + 3) << 2;
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          for (; puVar24 < (uint *)((long)pplVar12 + 0xfU); puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          break;
        case 8:
          local_c8 = (byte **)local_1188;
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          ppbVar13 = local_c8;
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          iVar42 = *(int *)((long)pplVar12 + 3);
          puVar24 = (uint *)((long)local_c8 + -1);
          if ((uint *)0xfffffffffffffffb < puVar24) {
            puVar24 = (uint *)((long)local_c8 + 7);
            uVar36 = *puVar24;
            goto joined_r0x014f35cc;
          }
          puVar41 = (uint *)((long)local_c8 + 3);
          uVar36 = *puVar24;
          while( true ) {
            if ((uVar36 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,ppbVar13,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
            }
            puVar24 = puVar24 + 1;
            if (puVar41 <= puVar24) break;
            uVar36 = *puVar24;
          }
          puVar24 = (uint *)((long)ppbVar13 + 7);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            do {
              uVar36 = *puVar24;
joined_r0x014f35cc:
              if ((uVar36 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,ppbVar13,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
              }
              puVar24 = puVar24 + 1;
            } while (puVar24 < (uint *)((long)ppbVar13 + 0xb));
          }
          puVar41 = (uint *)((long)ppbVar13 + 0xb);
          puVar24 = (uint *)((long)ppbVar13 + 0xf);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,ppbVar13,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          uVar36 = (iVar42 >> 1) + 0x25U & 0xfffffffc;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,ppbVar13,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)ppbVar13 + 0x13U) <= puVar24) break;
              uVar23 = *puVar24;
            }
          }
          if (local_114b == (TaskState)0x0) {
            BytecodeArray::MakeOlder((BytecodeArray *)&local_c8);
          }
          break;
        case 9:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          if (puVar24 < (uint *)((long)pplVar12 + 7U)) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
              uVar36 = 8;
            } while (puVar24 < (uint *)((long)pplVar12 + 7U));
          }
          else {
            uVar36 = 8;
          }
          break;
        case 10:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          uVar36 = *(uint *)((long)pplVar12 + 0x13);
          if ((*(byte *)((long)pplVar12 + 0x17) & 1) != 0) {
            uVar37 = (long)(int)(uVar36 + 0x47) & 0xfffffffffffffff8;
            uVar36 = ((int)uVar37 + *(int *)((long)pplVar12 + (uVar37 - 1))) - 0x38;
          }
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          uVar36 = (uVar36 + 3 & 0xfffffffc) + 0x5f & 0xffffffe0;
          for (; puVar24 < (uint *)((long)pplVar12 + 0x13); puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          RelocIterator::RelocIterator((RelocIterator *)&local_c8,pplVar12,1999);
          ObjectVisitor::VisitRelocInfo((ObjectVisitor *)&local_1180,(RelocIterator *)&local_c8);
          break;
        case 0xb:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar36 = *puVar24;
            while( true ) {
              if ((uVar36 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
              }
              puVar24 = puVar24 + 1;
              uVar36 = 0xc;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar36 = *puVar24;
            }
          }
          else {
LAB_014f28b8:
            uVar36 = 0xc;
          }
          break;
        case 0xc:
        case 0x27:
          uVar36 = ConcurrentMarkingVisitor::VisitFullyWithSnapshot<v8::internal::ConsString>
                             ((ConcurrentMarkingVisitor *)&local_1180,uVar37,local_1188);
          break;
        case 0xd:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            puVar41 = puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar41 = puVar41 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar41) break;
              uVar23 = *puVar41;
            }
          }
          for (puVar41 = (uint *)((long)pplVar12 + 7);
              puVar41 < (uint *)((long)puVar24 + (long)(int)uVar36); puVar41 = puVar41 + 1) {
            if ((*puVar41 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar41,
                         (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
            }
          }
          break;
        case 0xe:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar41;
            puVar2 = puVar41;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar2,
                           (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar2 = puVar2 + 1;
              if (puVar24 <= puVar2) break;
              uVar23 = *puVar2;
            }
          }
          puVar2 = (uint *)((long)pplVar12 + 0xb);
          for (; puVar24 < puVar2; puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          for (; puVar2 < (uint *)((long)puVar41 + (long)(int)uVar36); puVar2 = puVar2 + 1) {
            uVar23 = *puVar2;
            uVar37 = (ulong)uVar23 & 3;
            if (uVar37 == 1) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar2);
            }
            else if ((uVar23 != 3) && (uVar37 == 3)) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar2,
                         (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar23 & 0xfffffffffffffffd);
            }
          }
          break;
        case 0xf:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar36 = *puVar24;
            while( true ) {
              if ((uVar36 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar36 = *puVar24;
            }
          }
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          for (puVar24 = (uint *)((long)pplVar12 + 0xb); puVar24 < (uint *)((long)pplVar12 + 0xfU);
              puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          sVar8 = *(short *)((long)pplVar12 + 5);
          local_c8 = (byte **)pplVar12;
          DescriptorArray::UpdateNumberOfMarkedDescriptors
                    ((DescriptorArray *)&local_c8,local_1154,sVar8);
          ppbVar13 = local_c8;
          iVar42 = (int)(short)(DescriptorArray *)&local_c8;
          if (iVar42 < sVar8) {
            puVar41 = (uint *)((long)local_c8 + (long)sVar8 * 0xc + 0xf);
            for (puVar24 = (uint *)((long)local_c8 + (long)iVar42 * 0xc + 0xf); puVar24 < puVar41;
                puVar24 = puVar24 + 1) {
              while( true ) {
                uVar23 = *puVar24;
                uVar37 = (ulong)uVar23 & 3;
                if (uVar37 == 1) break;
                if ((uVar23 != 3) && (uVar37 == 3)) {
                  MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                  ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                            ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                              *)&local_1180,ppbVar13,puVar24,
                             (ulong)puVar24 & 0xffffffff00000000 |
                             (ulong)uVar23 & 0xfffffffffffffffd);
                }
                puVar24 = puVar24 + 1;
                if (puVar41 <= puVar24) goto LAB_014f2418;
              }
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,ppbVar13,puVar24);
            }
          }
          break;
        case 0x10:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            puVar41 = puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar41 = puVar41 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar41) break;
              uVar23 = *puVar41;
            }
          }
          if (8 < (int)uVar36) {
            lVar25 = 8;
            do {
              puVar41 = (uint *)(lVar25 + (long)puVar24);
              if (puVar41 < (uint *)0xfffffffffffffffc) {
                puVar2 = puVar41 + 1;
                uVar23 = *puVar41;
                while( true ) {
                  if ((uVar23 & 1) != 0) {
                    MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                    ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                              ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                                *)&local_1180,pplVar12,puVar41,
                               (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar23);
                  }
                  puVar41 = puVar41 + 1;
                  if (puVar2 <= puVar41) break;
                  uVar23 = *puVar41;
                }
              }
              lVar25 = lVar25 + 8;
            } while ((int)lVar25 < (int)uVar36);
          }
          break;
        case 0x11:
          local_c8 = (byte **)local_1188;
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          lVar25 = lStack_1168;
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          lVar40 = lStack_1168 + (long)local_1158 * 0x50;
          puVar33 = *(undefined8 **)(lVar40 + 0x2b8);
          lVar30 = puVar33[1];
          if (lVar30 == 0x40) {
            pMVar39 = (Mutex *)(lStack_1168 + 0x538);
            base::Mutex::Lock(pMVar39);
            *puVar33 = *(undefined8 *)(lVar25 + 0x560);
            *(undefined8 **)(lVar25 + 0x560) = puVar33;
            base::Mutex::Unlock(pMVar39);
            puVar38 = operator_new(0x210);
            puVar38[4] = 0;
            puVar38[3] = 0;
            puVar38[0x22] = 0;
            puVar38[0x21] = 0;
            puVar38[0x24] = 0;
            puVar38[0x23] = 0;
            puVar38[0x26] = 0;
            puVar38[0x25] = 0;
            puVar38[0x28] = 0;
            puVar38[0x27] = 0;
            puVar38[0x2a] = 0;
            puVar38[0x29] = 0;
            puVar38[0x2c] = 0;
            puVar38[0x2b] = 0;
            puVar38[0x2e] = 0;
            puVar38[0x2d] = 0;
            puVar38[0x30] = 0;
            puVar38[0x2f] = 0;
            puVar38[0x32] = 0;
            puVar38[0x31] = 0;
            puVar38[0x34] = 0;
            puVar38[0x33] = 0;
            puVar38[0x36] = 0;
            puVar38[0x35] = 0;
            puVar38[0x38] = 0;
            puVar38[0x37] = 0;
            puVar38[0x3a] = 0;
            puVar38[0x39] = 0;
            puVar38[0x3c] = 0;
            puVar38[0x3b] = 0;
            puVar38[0x3e] = 0;
            puVar38[0x3d] = 0;
            puVar38[0x40] = 0;
            puVar38[0x3f] = 0;
            puVar38[0x41] = 0;
            puVar38[6] = 0;
            puVar38[5] = 0;
            puVar38[8] = 0;
            puVar38[7] = 0;
            puVar38[10] = 0;
            puVar38[9] = 0;
            puVar38[0xc] = 0;
            puVar38[0xb] = 0;
            puVar38[0xe] = 0;
            puVar38[0xd] = 0;
            puVar38[0x10] = 0;
            puVar38[0xf] = 0;
            puVar38[0x12] = 0;
            puVar38[0x11] = 0;
            puVar38[0x14] = 0;
            puVar38[0x13] = 0;
            puVar38[0x16] = 0;
            puVar38[0x15] = 0;
            puVar38[0x18] = 0;
            puVar38[0x17] = 0;
            puVar38[0x1a] = 0;
            puVar38[0x19] = 0;
            puVar38[0x1c] = 0;
            puVar38[0x1b] = 0;
            puVar38[0x1e] = 0;
            puVar38[0x1d] = 0;
            puVar38[0x20] = 0;
            puVar38[0x1f] = 0;
            *(undefined8 **)(lVar40 + 0x2b8) = puVar38;
            puVar38[1] = 1;
          }
          else {
            puVar38 = puVar33 + lVar30;
            puVar33[1] = lVar30 + 1;
          }
          puVar38[2] = pplVar12;
          uVar36 = *(uint *)((long)local_c8 + 0xf);
          if ((int)uVar36 >> 1 != 0) {
            lVar25 = 0;
            do {
              iVar1 = (int)lVar25 * 8;
              iVar42 = iVar1 + 0xc;
              uVar22 = (ulong)*(uint *)((long)local_c8 + (long)iVar42 + 7);
              uVar31 = (ulong)local_c8 & 0xffffffff00000000 | uVar22;
              uVar22 = (ulong)local_c8 & 0xffffffff00000000 | uVar22 & 0xfffffffffffc0000;
              if (((uint)*(undefined8 *)(uVar22 + 8) >> 6 & 1) != 0) {
                uVar27 = *(ulong *)((MemoryChunk *)((ulong)local_c8 & 0xfffffffffffc0000) + 8);
                if ((((uint)uVar27 >> 0xf & 1) != 0) || ((uVar27 & 0x58) == 0)) {
                  RememberedSet<(v8::internal::RememberedSetType)1>::
                  Insert<(v8::internal::AccessMode)0>
                            ((MemoryChunk *)((ulong)local_c8 & 0xfffffffffffc0000),
                             (long)local_c8 + (long)iVar42 + 7);
                }
              }
              ppbVar13 = local_c8;
              puVar24 = (uint *)((long)local_c8 + (long)(int)(iVar1 + 0x10U | 7));
              if ((*(uint *)(*(long *)(uVar22 + 0x10) + (uVar31 - uVar22 >> 7 & 0x1ffffff) * 4) >>
                   (ulong)((uint)(uVar31 - uVar22 >> 2) & 0x1f) & 1) == 0) {
                uVar22 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                         ::ValueAt((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                                    *)&local_c8,lVar25);
                if ((uVar22 & 1) != 0) {
                  uVar27 = uVar22 & 0xfffffffffffc0000;
                  if (((uint)*(undefined8 *)(uVar27 + 8) >> 6 & 1) != 0) {
                    uVar26 = *(ulong *)((MemoryChunk *)((ulong)local_c8 & 0xfffffffffffc0000) + 8);
                    if ((((uint)uVar26 >> 0xf & 1) != 0) || ((uVar26 & 0x58) == 0)) {
                      RememberedSet<(v8::internal::RememberedSetType)1>::
                      Insert<(v8::internal::AccessMode)0>
                                ((MemoryChunk *)((ulong)local_c8 & 0xfffffffffffc0000),
                                 (ulong)puVar24);
                    }
                  }
                  lVar40 = lStack_1168;
                  if ((*(uint *)(*(long *)(uVar27 + 0x10) + (uVar22 - uVar27 >> 7 & 0x1ffffff) * 4)
                       >> (ulong)((uint)(uVar22 - uVar27 >> 2) & 0x1f) & 1) == 0) {
                    lVar30 = lStack_1168 + (long)local_1158 * 0x50;
                    puVar33 = *(undefined8 **)(lVar30 + 0xae0);
                    lVar29 = puVar33[1];
                    if (lVar29 == 0x40) {
                      pMVar39 = (Mutex *)(lStack_1168 + 0xd60);
                      base::Mutex::Lock(pMVar39);
                      *puVar33 = *(undefined8 *)(lVar40 + 0xd88);
                      *(undefined8 **)(lVar40 + 0xd88) = puVar33;
                      base::Mutex::Unlock(pMVar39);
                      pvVar20 = operator_new(0x410);
                      memset((void *)((long)pvVar20 + 0x20),0,0x3f0);
                      *(void **)(lVar30 + 0xae0) = pvVar20;
                      *(undefined8 *)((long)pvVar20 + 8) = 1;
                      *(ulong *)((long)pvVar20 + 0x10) = uVar31;
                      *(ulong *)((long)pvVar20 + 0x18) = uVar22;
                    }
                    else {
                      puVar33[1] = lVar29 + 1;
                      puVar33[lVar29 * 2 + 2] = uVar31;
                      puVar33[lVar29 * 2 + 3] = uVar22;
                    }
                  }
                }
              }
              else if (puVar24 < (uint *)0xfffffffffffffffc) {
                puVar41 = puVar24 + 1;
                uVar23 = *puVar24;
                while( true ) {
                  if ((uVar23 & 1) != 0) {
                    MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                    ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                              ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                                *)&local_1180,ppbVar13,puVar24,
                               (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23);
                  }
                  puVar24 = puVar24 + 1;
                  if (puVar41 <= puVar24) break;
                  uVar23 = *puVar24;
                }
              }
              lVar25 = lVar25 + 1;
            } while (lVar25 != (long)((ulong)uVar36 << 0x20) >> 0x21);
          }
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          break;
        case 0x12:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          if ((uint *)((long)pplVar12 + 7U) <= puVar24) goto LAB_014f28b8;
          do {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
            puVar24 = puVar24 + 1;
            uVar36 = 0xc;
          } while (puVar24 < (uint *)((long)pplVar12 + 7U));
          break;
        case 0x13:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          uVar36 = *(int *)((long)pplVar12 + 0xf) * 4 + 0x20;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar23 = *puVar24;
            }
          }
          FeedbackVector::BodyDescriptor::IterateBody<v8::internal::ConcurrentMarkingVisitor>
                    (uVar37,pplVar12,uVar36,&local_1180);
          break;
        case 0x14:
          plVar17 = (long *)((ulong)local_1188 & 0xfffffffffffc0000);
          if (((uint)plVar17[1] >> 8 & 1) == 0) {
            uVar36 = ConcurrentMarkingVisitor::VisitLeftTrimmableArray<v8::internal::FixedArray>
                               ((ConcurrentMarkingVisitor *)&local_1180,uVar37,local_1188);
          }
          else {
            local_88[0] = local_1188;
            puVar24 = (uint *)(plVar17[2] +
                              ((long)local_1188 + ~(ulong)plVar17 >> 7 & 0x1ffffff) * 4);
            uVar36 = 1 << (ulong)((uint)((long)local_1188 + ~(ulong)plVar17 >> 2) & 0x1f);
            if ((*puVar24 & uVar36) != 0) {
              uVar36 = uVar36 * 2;
              bVar14 = uVar36 == 0;
              puVar41 = puVar24;
              if (bVar14) {
                uVar36 = 1;
                puVar41 = puVar24 + 1;
              }
              while (uVar23 = puVar24[bVar14], (uVar36 & (uVar23 ^ 0xffffffff)) != 0) {
                while (*puVar41 == uVar23) {
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar41,0x10);
                  if (bVar10) {
                    *puVar41 = uVar23 | uVar36;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  if (cVar9 == '\0') {
                    HeapObject::SizeFromMap
                              ((HeapObject *)local_88,
                               (ulong)local_1188 & 0xffffffff00000000 |
                               (ulong)*(uint *)((long)local_1188 + -1));
                    local_c8 = (byte **)&local_d8;
                    local_d8 = plVar17;
                    lVar25 = std::__ndk1::
                             __hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>>>
                             ::
                             __emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
                                       ((MemoryChunk **)local_1148,
                                        (piecewise_construct_t *)&local_d8,(tuple *)&DAT_01a495e9,
                                        (tuple *)&local_c8);
                    *(long *)(lVar25 + 0x18) =
                         *(long *)(lVar25 + 0x18) + (long)(int)(HeapObject *)local_88;
                    goto LAB_014f311c;
                  }
                }
                ClearExclusiveLocal();
              }
            }
LAB_014f311c:
            local_c8 = (byte **)pplVar12;
            HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
            extraout_w0 = (int)(HeapObject *)&local_c8;
            plVar17 = plVar17 + 0xc;
            lVar25 = *plVar17;
            iVar42 = (int)lVar25;
            if (iVar42 == 0) {
              puVar24 = (uint *)((long)pplVar12 + -1);
              if (puVar24 < (uint *)0xfffffffffffffffc) {
                uVar36 = *puVar24;
                while( true ) {
                  if ((uVar36 & 1) != 0) {
                    MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                    ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                              ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                                *)&local_1180,pplVar12,puVar24,
                               (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
                  }
                  puVar24 = puVar24 + 1;
                  if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
                  uVar36 = *puVar24;
                }
              }
              iVar42 = 8;
            }
            iVar1 = iVar42 + 0x20000;
            iVar5 = extraout_w0;
            if (iVar1 <= extraout_w0) {
              iVar5 = iVar1;
            }
            uVar36 = iVar5 - iVar42;
            if (uVar36 != 0 && iVar42 <= iVar5) {
              lVar40 = local_1178;
              for (puVar24 = (uint *)((long)pplVar12 + (long)iVar42 + -1); local_1178 = lVar40,
                  puVar24 < (uint *)((long)pplVar12 + (long)iVar5 + -1); puVar24 = puVar24 + 1) {
                if ((*puVar24 & 1) != 0) {
                  MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                  ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                            ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                              *)&local_1180,pplVar12,puVar24,
                             (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
                }
                lVar40 = local_1178;
              }
              do {
                if (*plVar17 != lVar25) {
                  ClearExclusiveLocal();
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.","success");
                }
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar14) {
                  *plVar17 = (long)iVar5;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (iVar1 < extraout_w0) {
                puVar33 = (undefined8 *)(lVar40 + (long)local_1158 * 0x50);
                puVar38 = (undefined8 *)*puVar33;
                lVar25 = puVar38[1];
                if (lVar25 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar40 + 0x280));
                  *puVar38 = *(undefined8 *)(lVar40 + 0x2a8);
                  *(undefined8 **)(lVar40 + 0x2a8) = puVar38;
                  base::Mutex::Unlock((Mutex *)(lVar40 + 0x280));
                  pvVar20 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar20 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar20 + 400) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar20 + 200) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar20 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar20 + 0xf8) = 0;
                  *puVar33 = pvVar20;
                  *(undefined8 *)((long)pvVar20 + 8) = 1;
                  *(long ***)((long)pvVar20 + 0x10) = pplVar12;
                }
                else {
                  puVar38[1] = lVar25 + 1;
                  puVar38[lVar25 + 2] = pplVar12;
                }
              }
            }
          }
          break;
        case 0x15:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
            } while (puVar24 < (uint *)((long)pplVar12 + 3U));
          }
          uVar36 = (int)*(uint *)((long)pplVar12 + 3U) >> 1;
          break;
        case 0x16:
          uVar36 = ConcurrentMarkingVisitor::
                   VisitJSObjectSubclass<v8::internal::JSObject,v8::internal::JSObject::BodyDescriptor>
                             ((ConcurrentMarkingVisitor *)&local_1180,uVar37,local_1188);
          lVar25 = local_1170;
          if ((uVar36 != 0) && (local_114c != '\0')) {
            puVar38 = (undefined8 *)(local_1170 + (long)local_1158 * 0x50);
            puVar33 = (undefined8 *)*puVar38;
            lVar40 = puVar33[1];
            if (lVar40 != 0x10) goto LAB_014f30b4;
            pMVar39 = (Mutex *)(local_1170 + 0x280);
            base::Mutex::Lock(pMVar39);
            *puVar33 = *(undefined8 *)(lVar25 + 0x2a8);
            *(undefined8 **)(lVar25 + 0x2a8) = puVar33;
            base::Mutex::Unlock(pMVar39);
            pvVar20 = operator_new(0x90);
            *(undefined8 *)((long)pvVar20 + 0x88) = 0;
            *(undefined8 *)((long)pvVar20 + 0x20) = 0;
            *(undefined8 *)((long)pvVar20 + 0x18) = 0;
            *(undefined8 *)((long)pvVar20 + 0x30) = 0;
            *(undefined8 *)((long)pvVar20 + 0x28) = 0;
            *(undefined8 *)((long)pvVar20 + 0x40) = 0;
            *(undefined8 *)((long)pvVar20 + 0x38) = 0;
            *(undefined8 *)((long)pvVar20 + 0x50) = 0;
            *(undefined8 *)((long)pvVar20 + 0x48) = 0;
            *(undefined8 *)((long)pvVar20 + 0x60) = 0;
            *(undefined8 *)((long)pvVar20 + 0x58) = 0;
            *(undefined8 *)((long)pvVar20 + 0x70) = 0;
            *(undefined8 *)((long)pvVar20 + 0x68) = 0;
            *(undefined8 *)((long)pvVar20 + 0x80) = 0;
            *(undefined8 *)((long)pvVar20 + 0x78) = 0;
            *puVar38 = pvVar20;
LAB_014f2690:
            *(undefined8 *)((long)pvVar20 + 8) = 1;
            *(long ***)((long)pvVar20 + 0x10) = pplVar12;
          }
          break;
        case 0x17:
          uVar36 = MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                   ::VisitEmbedderTracingSubclass<v8::internal::JSArrayBuffer>
                             ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                               *)&local_1180,uVar37,local_1188);
          break;
        case 0x18:
          uVar36 = MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                   ::VisitEmbedderTracingSubclass<v8::internal::JSDataView>
                             ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                               *)&local_1180,uVar37,local_1188);
          break;
        case 0x19:
          uVar36 = ConcurrentMarkingVisitor::
                   VisitJSObjectSubclass<v8::internal::JSFunction,v8::internal::JSObject::BodyDescriptor>
                             ((ConcurrentMarkingVisitor *)&local_1180,uVar37,local_1188);
          lVar25 = lStack_1168;
          if (local_1150 != 0) {
            if ((*(uint *)((long)pplVar12 + 0xb) & 1) != 0) {
              uVar37 = (ulong)pplVar12 & 0xffffffff00000000;
              uVar22 = uVar37 | *(uint *)((long)pplVar12 + 0xb);
              if ((((*(uint *)((long)pplVar12 + 0x17) & 1) != 0) &&
                  (uVar31 = uVar37 | 7, *(short *)(uVar31 + *(uint *)(uVar22 - 1)) == 0xa6)) &&
                 (uVar27 = uVar37 | *(uint *)((long)pplVar12 + 0x17),
                 *(short *)(uVar31 + *(uint *)(uVar27 - 1)) == 0x9a)) {
                uVar23 = *(uint *)(uVar22 + 3);
                if (((uVar23 == 0x84) ||
                    (((uVar23 & 1) != 0 &&
                     (*(ushort *)(uVar31 + *(uint *)((uVar37 | uVar23) - 1)) - 0x95 < 2)))) &&
                   (*(int *)(uVar27 + 0x27) != 0x42)) {
                  lVar40 = lStack_1168 + (long)local_1158 * 0x50;
                  puVar33 = *(undefined8 **)(lVar40 + 0x1b30);
                  lVar30 = puVar33[1];
                  if (lVar30 != 0x40) goto LAB_014f3b48;
                  pMVar39 = (Mutex *)(lStack_1168 + 0x1db0);
                  puVar38 = (undefined8 *)(lVar40 + 0x1b30);
                  base::Mutex::Lock(pMVar39);
                  *puVar33 = *(undefined8 *)(lVar25 + 0x1dd8);
                  *(undefined8 **)(lVar25 + 0x1dd8) = puVar33;
                  goto LAB_014f2610;
                }
              }
            }
          }
          break;
        case 0x1a:
          uVar36 = ConcurrentMarkingVisitor::
                   VisitJSObjectSubclass<v8::internal::JSObject,v8::internal::JSObject::BodyDescriptor>
                             ((ConcurrentMarkingVisitor *)&local_1180,uVar37,local_1188);
          break;
        case 0x1b:
          uVar36 = ConcurrentMarkingVisitor::
                   VisitJSObjectSubclass<v8::internal::JSObject,v8::internal::JSObject::FastBodyDescriptor>
                             ((ConcurrentMarkingVisitor *)&local_1180,uVar37,local_1188);
          break;
        case 0x1c:
          uVar36 = MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                   ::VisitEmbedderTracingSubclass<v8::internal::JSTypedArray>
                             ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                               *)&local_1180,uVar37,local_1188);
          break;
        case 0x1d:
          bVar7 = *(byte *)(uVar37 + 3);
          bVar6 = *(byte *)(uVar37 + 5);
          if (bVar6 < 3) {
            bVar6 = *(byte *)(uVar37 + 3);
          }
          pSVar21 = ConcurrentMarkingVisitor::
                    MakeSlotSnapshot<v8::internal::JSWeakRef,v8::internal::JSWeakRef::BodyDescriptor>
                              (pCVar19,uVar37,local_1188,(uint)bVar6 << 2);
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,pplVar12);
          if (((uVar37 & 1) == 0) ||
             (ConcurrentMarkingVisitor::VisitPointersInSnapshot
                        ((ConcurrentMarkingVisitor *)&local_1180,pplVar12,pSVar21),
             lVar25 = lStack_1168, bVar7 == 0)) goto LAB_014f2414;
          uVar23 = *(uint *)((long)pplVar12 + 0xb);
          uVar36 = (uint)bVar7 << 2;
          if ((uVar23 & 1) != 0) {
            uVar37 = (ulong)pplVar12 & 0xffffffff00000000 | (ulong)uVar23 & 0xfffffffffffc0000;
            uVar22 = uVar23 - uVar37;
            if ((*(uint *)(*(long *)(uVar37 + 0x10) + (uVar22 >> 7 & 0x1ffffff) * 4) >>
                 (ulong)((uint)(uVar22 >> 2) & 0x1f) & 1) == 0) {
              lVar40 = lStack_1168 + (long)local_1158 * 0x50;
              puVar33 = *(undefined8 **)(lVar40 + 0x1308);
              lVar30 = puVar33[1];
              if (lVar30 != 0x40) goto LAB_014f3b48;
              pMVar39 = (Mutex *)(lStack_1168 + 0x1588);
              puVar38 = (undefined8 *)(lVar40 + 0x1308);
              base::Mutex::Lock(pMVar39);
              *puVar33 = *(undefined8 *)(lVar25 + 0x15b0);
              *(undefined8 **)(lVar25 + 0x15b0) = puVar33;
              goto LAB_014f2610;
            }
            if (((uint)*(undefined8 *)(uVar37 + 8) >> 6 & 1) != 0) {
              uVar37 = *(ulong *)((MemoryChunk *)((ulong)pplVar12 & 0xfffffffffffc0000) + 8);
              if ((((uint)uVar37 >> 0xf & 1) != 0) || ((uVar37 & 0x58) == 0)) {
                RememberedSet<(v8::internal::RememberedSetType)1>::
                Insert<(v8::internal::AccessMode)0>
                          ((MemoryChunk *)((ulong)pplVar12 & 0xfffffffffffc0000),
                           (ulong)((long)pplVar12 + 0xb));
              }
            }
          }
          break;
        case 0x1e:
          uVar36 = ConcurrentMarkingVisitor::
                   VisitJSObjectSubclass<v8::internal::JSWeakCollection,v8::internal::JSWeakCollection::BodyDescriptorImpl>
                             ((ConcurrentMarkingVisitor *)&local_1180,uVar37,local_1188);
          break;
        case 0x1f:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          if (0xa9 < *(ushort *)((long)pplVar12 + 7)) {
            uVar37 = (ulong)pplVar12 & 0xffffffff00000000;
            pplVar28 = (long **)(uVar37 | *(uint *)((long)pplVar12 + 0x17));
            plVar17 = (long *)(uVar37 | (ulong)*(uint *)((long)pplVar12 + 0x17) & 0xfffffffffffc0000
                              );
            puVar24 = (uint *)(plVar17[2] +
                              ((ulong)((long)pplVar28 - (long)plVar17) >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar36 = *puVar24;
              uVar23 = (uint)(1L << ((ulong)((long)pplVar28 - (long)plVar17) >> 2 & 0x1f));
              if ((uVar23 & (uVar36 ^ 0xffffffff)) == 0) break;
              while (*puVar24 == uVar36) {
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(puVar24,0x10);
                if (bVar14) {
                  *puVar24 = uVar36 | uVar23;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') goto LAB_014f34f8;
              }
              ClearExclusiveLocal();
            }
LAB_014f34f8:
            puVar24 = (uint *)(plVar17[2] + ((long)pplVar28 + ~(ulong)plVar17 >> 7 & 0x1ffffff) * 4)
            ;
            uVar36 = 1 << (ulong)((uint)((long)pplVar28 + ~(ulong)plVar17 >> 2) & 0x1f);
            local_88[0] = pplVar28;
            if ((*puVar24 & uVar36) != 0) {
              uVar36 = uVar36 * 2;
              bVar14 = uVar36 == 0;
              puVar41 = puVar24;
              if (bVar14) {
                uVar36 = 1;
                puVar41 = puVar24 + 1;
              }
              while (uVar23 = puVar24[bVar14], (uVar36 & (uVar23 ^ 0xffffffff)) != 0) {
                while (*puVar41 == uVar23) {
                  cVar9 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(puVar41,0x10);
                  if (bVar10) {
                    *puVar41 = uVar23 | uVar36;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                  if (cVar9 == '\0') {
                    HeapObject::SizeFromMap
                              ((HeapObject *)local_88,uVar37 | *(uint *)((long)pplVar28 + -1));
                    local_c8 = (byte **)&local_d8;
                    local_d8 = plVar17;
                    lVar25 = std::__ndk1::
                             __hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>>>
                             ::
                             __emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
                                       ((MemoryChunk **)local_1148,
                                        (piecewise_construct_t *)&local_d8,(tuple *)&DAT_01a495e9,
                                        (tuple *)&local_c8);
                    puVar24 = (uint *)((long)pplVar28 + -1);
                    *(long *)(lVar25 + 0x18) =
                         *(long *)(lVar25 + 0x18) + (long)(int)(HeapObject *)local_88;
                    if (puVar24 < (uint *)0xfffffffffffffffc) {
                      uVar36 = *puVar24;
                      while( true ) {
                        if ((uVar36 & 1) != 0) {
                          MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                                    ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                                      *)&local_1180,pplVar28,puVar24,
                                     (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
                        }
                        puVar24 = puVar24 + 1;
                        if ((uint *)((long)pplVar28 + 3U) <= puVar24) break;
                        uVar36 = *puVar24;
                      }
                    }
                    for (puVar24 = (uint *)((long)pplVar28 + 0xb);
                        puVar24 < (uint *)((long)pplVar28 + 0xfU); puVar24 = puVar24 + 1) {
                      if ((*puVar24 & 1) != 0) {
                        MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                                  ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                                    *)&local_1180,pplVar28,puVar24,
                                   (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
                      }
                    }
                    goto LAB_014f3928;
                  }
                }
                ClearExclusiveLocal();
              }
            }
LAB_014f3928:
            uVar36 = *(uint *)((long)pplVar12 + 0xb) >> 10 & 0x3ff;
            if (uVar36 != 0) {
              uVar23 = (int)*(short *)((long)pplVar28 + 5);
              if ((int)uVar36 <= (int)*(short *)((long)pplVar28 + 5)) {
                uVar23 = uVar36;
              }
              local_c8 = (byte **)pplVar28;
              DescriptorArray::UpdateNumberOfMarkedDescriptors
                        ((DescriptorArray *)&local_c8,local_1154,(short)uVar23);
              ppbVar13 = local_c8;
              iVar42 = (int)(short)(DescriptorArray *)&local_c8;
              if (iVar42 < (int)uVar23) {
                puVar41 = (uint *)((long)local_c8 + (long)(int)(uVar23 * 0xc + 0xf));
                for (puVar24 = (uint *)((long)local_c8 + (long)(iVar42 * 0xc + 0xf));
                    puVar24 < puVar41; puVar24 = puVar24 + 1) {
                  uVar36 = *puVar24;
                  uVar37 = (ulong)uVar36 & 3;
                  if (uVar37 == 1) {
                    MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                    ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                              ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                                *)&local_1180,ppbVar13,puVar24);
                  }
                  else if ((uVar36 != 3) && (uVar37 == 3)) {
                    MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                    ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                              ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                                *)&local_1180,ppbVar13,puVar24,
                               (ulong)puVar24 & 0xffffffff00000000 |
                               (ulong)uVar36 & 0xfffffffffffffffd);
                  }
                }
              }
            }
          }
          puVar41 = (uint *)((long)pplVar12 + 0x23);
          for (puVar24 = (uint *)((long)pplVar12 + 0xf); puVar24 < puVar41; puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              uVar36 = *puVar41;
              uVar37 = (ulong)uVar36 & 3;
              if (uVar37 == 1) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41);
              }
              else if ((uVar36 != 3) && (uVar37 == 3)) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar36 & 0xfffffffffffffffd)
                ;
              }
              puVar41 = puVar41 + 1;
              uVar36 = 0x28;
            } while (puVar41 < (uint *)((long)pplVar12 + 0x27U));
          }
          else {
            uVar36 = 0x28;
          }
          break;
        case 0x20:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          if (puVar24 < (uint *)((long)pplVar12 + 0x417U)) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
              uVar36 = 0x42c;
            } while (puVar24 < (uint *)((long)pplVar12 + 0x417U));
          }
          else {
            uVar36 = 0x42c;
          }
          break;
        case 0x21:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar36 = *puVar24;
            while( true ) {
              if ((uVar36 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar36 = *puVar24;
            }
          }
          puVar24 = (uint *)((long)pplVar12 + 0xb);
          if (puVar24 < (uint *)((long)pplVar12 + 0x1bU)) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
              uVar36 = 0x1c;
            } while (puVar24 < (uint *)((long)pplVar12 + 0x1bU));
          }
          else {
            uVar36 = 0x1c;
          }
          break;
        case 0x22:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          uVar4 = *(uint *)((long)pplVar12 + 3) + 0xf & 0xfffffffc;
          puVar24 = (uint *)((long)pplVar12 + -1);
          uVar36 = uVar4 + *(int *)((long)pplVar12 + 7) * 4;
          uVar23 = uVar36;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            puVar41 = puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar41 = puVar41 + 1;
              if ((uint *)((long)pplVar12 + 3) <= puVar41) break;
              uVar23 = *puVar41;
            }
            uVar4 = *(int *)((long)pplVar12 + 3) + 0xfU & 0xfffffffc;
            uVar23 = uVar4 + *(int *)((long)pplVar12 + 7) * 4;
          }
          for (puVar41 = (uint *)((long)puVar24 + (long)(int)uVar4);
              puVar41 < (uint *)((long)puVar24 + (long)(int)uVar23); puVar41 = puVar41 + 1) {
            if ((*puVar41 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar41,
                         (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
            }
          }
          break;
        case 0x23:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            puVar41 = puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar41 = puVar41 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar41) break;
              uVar23 = *puVar41;
            }
          }
          for (puVar41 = (uint *)((long)pplVar12 + 7);
              puVar41 < (uint *)((long)puVar24 + (long)(int)uVar36); puVar41 = puVar41 + 1) {
            if ((*puVar41 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar41,
                         (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
            }
          }
          break;
        case 0x24:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          if (puVar24 < (uint *)((long)pplVar12 + 0x13U)) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
              uVar36 = 0x14;
            } while (puVar24 < (uint *)((long)pplVar12 + 0x13U));
          }
          else {
LAB_014f3034:
            uVar36 = 0x14;
          }
          break;
        case 0x25:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar23 = *puVar24;
            }
          }
          PrototypeInfo::BodyDescriptor::IterateBody<v8::internal::ConcurrentMarkingVisitor>
                    (uVar37,pplVar12,uVar36,&local_1180);
          break;
        case 0x26:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          bVar7 = *(byte *)(uVar37 + 3);
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          uVar36 = (uint)bVar7 << 2;
          (*(code *)local_1180[7])(&local_1180,pplVar12,puVar24);
          puVar41 = (uint *)((long)pplVar12 + 7);
          if (puVar41 < (uint *)((long)pplVar12 + 0x13U)) {
            uVar23 = *puVar41;
            puVar2 = puVar41;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar2,
                           (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar2 = puVar2 + 1;
              if ((uint *)((long)pplVar12 + 0x13U) <= puVar2) break;
              uVar23 = *puVar2;
            }
          }
          if (((((local_1150 == 0) ||
                (uVar23 = *(uint *)((long)pplVar12 + 0x1b) & 0x1f, uVar23 - 10 < 7)) ||
               (uVar23 - 1 < 2)) ||
              (((*(uint *)((long)pplVar12 + 0x1b) >> 0xc & 1) == 0 ||
               ((*(uint *)((long)pplVar12 + 3) & 1) == 0)))) ||
             ((pplVar28 = (long **)((ulong)pplVar12 & 0xffffffff00000000 |
                                   (ulong)*(uint *)((long)pplVar12 + 3)),
              *(short *)(((ulong)pplVar12 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)((long)pplVar28 + -1)) != 0x86 ||
              ((local_1150 != 2 &&
               (local_c8 = (byte **)pplVar28,
               uVar37 = BytecodeArray::IsOld((BytecodeArray *)&local_c8), (uVar37 & 1) == 0)))))) {
            if (puVar24 < (uint *)0xfffffffffffffffc) {
              do {
                if ((*puVar24 & 1) != 0) {
                  MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                  ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                            ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                              *)&local_1180,pplVar12,puVar24,
                             (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
                }
                puVar24 = puVar24 + 1;
              } while (puVar24 < puVar41);
            }
          }
          else {
            lVar25 = lStack_1168;
            lVar40 = lStack_1168 + (long)local_1158 * 0x50;
            puVar33 = *(undefined8 **)(lVar40 + 0x1878);
            lVar30 = puVar33[1];
            if (lVar30 == 0x40) {
              pMVar39 = (Mutex *)(lStack_1168 + 0x1af8);
              puVar38 = (undefined8 *)(lVar40 + 0x1878);
              base::Mutex::Lock(pMVar39);
              *puVar33 = *(undefined8 *)(lVar25 + 0x1b20);
              *(undefined8 **)(lVar25 + 0x1b20) = puVar33;
              goto LAB_014f2610;
            }
LAB_014f3b48:
            puVar33[1] = lVar30 + 1;
            puVar33[lVar30 + 2] = pplVar12;
          }
          break;
        case 0x28:
          uVar36 = ConcurrentMarkingVisitor::VisitFullyWithSnapshot<v8::internal::SlicedString>
                             ((ConcurrentMarkingVisitor *)&local_1180,uVar37,local_1188);
          break;
        case 0x29:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          bVar7 = *(byte *)((long)pplVar12 + 5);
          puVar24 = (uint *)((long)pplVar12 + -1);
          uVar36 = (uint)bVar7 + (uint)bVar7 * 0x12 + 0xb & 0x3ffc;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            puVar41 = puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar41 = puVar41 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar41) break;
              uVar23 = *puVar41;
            }
            bVar7 = *(byte *)((long)pplVar12 + 5);
          }
          for (puVar41 = (uint *)((long)pplVar12 + 7);
              puVar41 < (uint *)(((ulong)bVar7 << 4 | 8) + (long)puVar24); puVar41 = puVar41 + 1) {
            if ((*puVar41 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar41,
                         (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
            }
          }
          break;
        case 0x2a:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          bVar7 = *(byte *)((long)pplVar12 + 5);
          puVar24 = (uint *)((long)pplVar12 + -1);
          uVar36 = (uint)bVar7 + (uint)bVar7 * 10 + 0xb & 0x1ffc;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar23 = *puVar24;
            }
            bVar7 = *(byte *)((long)pplVar12 + 5);
          }
          puVar41 = (uint *)((long)pplVar12 + 7);
          puVar24 = puVar41 + (ulong)bVar7 * 2;
          for (; puVar41 < puVar24; puVar41 = puVar41 + 1) {
            if ((*puVar41 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar41,
                         (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
            }
          }
          break;
        case 0x2b:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          bVar7 = *(byte *)((long)pplVar12 + 9);
          puVar24 = (uint *)((long)pplVar12 + -1);
          uVar36 = (uint)bVar7 + (uint)bVar7 * 0x1a + 0xf & 0x3ffc;
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar23 = *puVar24;
            }
            bVar7 = *(byte *)((long)pplVar12 + 9);
          }
          puVar24 = (uint *)((long)pplVar12 + 0xb);
          puVar41 = puVar24 + (ulong)bVar7 * 6;
          for (; puVar24 < puVar41; puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          break;
        case 0x2c:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          puVar41 = (uint *)((long)pplVar12 + 0x17);
          for (; puVar24 < puVar41; puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          if (puVar41 < (uint *)((long)pplVar12 + 0x47U)) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
              uVar36 = 0x48;
            } while (puVar41 < (uint *)((long)pplVar12 + 0x47U));
          }
          else {
            uVar36 = 0x48;
          }
          break;
        case 0x2d:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          bVar7 = *(byte *)(uVar37 + 3);
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          uVar36 = (uint)bVar7 * 4;
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar41;
            puVar2 = puVar41;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar2,
                           (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar2 = puVar2 + 1;
              if (puVar24 <= puVar2) break;
              uVar23 = *puVar2;
            }
          }
          for (; puVar24 < puVar41 + bVar7; puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          break;
        case 0x2e:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar36 = *puVar24;
            while( true ) {
              if ((uVar36 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar24) break;
              uVar36 = *puVar24;
            }
          }
          puVar24 = (uint *)((long)pplVar12 + 0xb);
          if (puVar24 < (uint *)((long)pplVar12 + 0xfU)) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
              uVar36 = 0x10;
            } while (puVar24 < (uint *)((long)pplVar12 + 0xfU));
          }
          else {
LAB_014f2b30:
            uVar36 = 0x10;
          }
          break;
        case 0x2f:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          for (; puVar24 < (uint *)((long)pplVar12 + 0x17U); puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          puVar24 = (uint *)((long)pplVar12 + 0x1b);
          if (puVar24 < (uint *)((long)pplVar12 + 0x23U)) {
            do {
              if ((*puVar24 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
              }
              puVar24 = puVar24 + 1;
              uVar36 = 0x24;
            } while (puVar24 < (uint *)((long)pplVar12 + 0x23U));
          }
          else {
            uVar36 = 0x24;
          }
          break;
        case 0x30:
          puVar24 = (uint *)((long)local_1188 + -1);
          bVar14 = puVar24 < (uint *)((long)local_1188 + 3U);
          if (bVar14) {
            auStack_1128[0] = (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24;
            local_1130 = puVar24;
          }
          local_1138[0] = (uint)bVar14;
          puVar24 = (uint *)((long)local_1188 + 0xb);
          if (puVar24 < (uint *)((long)local_1188 + 0xfU)) {
            uVar36 = *puVar24;
            local_1138[0] = bVar14 + 1;
            auStack_1128[(ulong)bVar14 * 2 + -1] = (ulong)puVar24;
            auStack_1128[(ulong)bVar14 * 2] = (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar36;
          }
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          ConcurrentMarkingVisitor::VisitPointersInSnapshot
                    ((ConcurrentMarkingVisitor *)&local_1180,pplVar12,local_1138);
          uVar36 = 0x10;
          break;
        case 0x31:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            uVar36 = *puVar41;
            puVar2 = puVar41;
            while( true ) {
              if ((uVar36 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar2,
                           (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar36);
              }
              puVar2 = puVar2 + 1;
              if (puVar24 <= puVar2) break;
              uVar36 = *puVar2;
            }
          }
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          for (; puVar24 < (uint *)((long)puVar41 + (long)(int)uVar36); puVar24 = puVar24 + 1) {
            while( true ) {
              uVar23 = *puVar24;
              uVar37 = (ulong)uVar23 & 3;
              if (uVar37 == 1) break;
              if ((uVar23 != 3) && (uVar37 == 3)) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23 & 0xfffffffffffffffd)
                ;
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)puVar41 + (long)(int)uVar36) <= puVar24) goto LAB_014f25d8;
            }
            MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                        *)&local_1180,pplVar12,puVar24);
          }
LAB_014f25d8:
          lVar25 = lStack_1168;
          puVar38 = (undefined8 *)(lStack_1168 + (long)local_1158 * 0x50);
          puVar33 = (undefined8 *)*puVar38;
          lVar40 = puVar33[1];
          if (lVar40 == 0x40) {
            pMVar39 = (Mutex *)(lStack_1168 + 0x280);
            base::Mutex::Lock(pMVar39);
            *puVar33 = *(undefined8 *)(lVar25 + 0x2a8);
            *(undefined8 **)(lVar25 + 0x2a8) = puVar33;
LAB_014f2610:
            base::Mutex::Unlock(pMVar39);
            pvVar20 = operator_new(0x210);
            *(undefined8 *)((long)pvVar20 + 0x20) = 0;
            *(undefined8 *)((long)pvVar20 + 0x18) = 0;
            *(undefined8 *)((long)pvVar20 + 0x110) = 0;
            *(undefined8 *)((long)pvVar20 + 0x108) = 0;
            *(undefined8 *)((long)pvVar20 + 0x120) = 0;
            *(undefined8 *)((long)pvVar20 + 0x118) = 0;
            *(undefined8 *)((long)pvVar20 + 0x130) = 0;
            *(undefined8 *)((long)pvVar20 + 0x128) = 0;
            *(undefined8 *)((long)pvVar20 + 0x140) = 0;
            *(undefined8 *)((long)pvVar20 + 0x138) = 0;
            *(undefined8 *)((long)pvVar20 + 0x150) = 0;
            *(undefined8 *)((long)pvVar20 + 0x148) = 0;
            *(undefined8 *)((long)pvVar20 + 0x160) = 0;
            *(undefined8 *)((long)pvVar20 + 0x158) = 0;
            *(undefined8 *)((long)pvVar20 + 0x170) = 0;
            *(undefined8 *)((long)pvVar20 + 0x168) = 0;
            *(undefined8 *)((long)pvVar20 + 0x180) = 0;
            *(undefined8 *)((long)pvVar20 + 0x178) = 0;
            *(undefined8 *)((long)pvVar20 + 400) = 0;
            *(undefined8 *)((long)pvVar20 + 0x188) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1a0) = 0;
            *(undefined8 *)((long)pvVar20 + 0x198) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1b0) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1a8) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1c0) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1b8) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1d0) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1c8) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1e0) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1d8) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1f0) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1e8) = 0;
            *(undefined8 *)((long)pvVar20 + 0x200) = 0;
            *(undefined8 *)((long)pvVar20 + 0x1f8) = 0;
            *(undefined8 *)((long)pvVar20 + 0x208) = 0;
            *(undefined8 *)((long)pvVar20 + 0x30) = 0;
            *(undefined8 *)((long)pvVar20 + 0x28) = 0;
            *(undefined8 *)((long)pvVar20 + 0x40) = 0;
            *(undefined8 *)((long)pvVar20 + 0x38) = 0;
            *(undefined8 *)((long)pvVar20 + 0x50) = 0;
            *(undefined8 *)((long)pvVar20 + 0x48) = 0;
            *(undefined8 *)((long)pvVar20 + 0x60) = 0;
            *(undefined8 *)((long)pvVar20 + 0x58) = 0;
            *(undefined8 *)((long)pvVar20 + 0x70) = 0;
            *(undefined8 *)((long)pvVar20 + 0x68) = 0;
            *(undefined8 *)((long)pvVar20 + 0x80) = 0;
            *(undefined8 *)((long)pvVar20 + 0x78) = 0;
            *(undefined8 *)((long)pvVar20 + 0x90) = 0;
            *(undefined8 *)((long)pvVar20 + 0x88) = 0;
            *(undefined8 *)((long)pvVar20 + 0xa0) = 0;
            *(undefined8 *)((long)pvVar20 + 0x98) = 0;
            *(undefined8 *)((long)pvVar20 + 0xb0) = 0;
            *(undefined8 *)((long)pvVar20 + 0xa8) = 0;
            *(undefined8 *)((long)pvVar20 + 0xc0) = 0;
            *(undefined8 *)((long)pvVar20 + 0xb8) = 0;
            *(undefined8 *)((long)pvVar20 + 0xd0) = 0;
            *(undefined8 *)((long)pvVar20 + 200) = 0;
            *(undefined8 *)((long)pvVar20 + 0xe0) = 0;
            *(undefined8 *)((long)pvVar20 + 0xd8) = 0;
            *(undefined8 *)((long)pvVar20 + 0xf0) = 0;
            *(undefined8 *)((long)pvVar20 + 0xe8) = 0;
            *(undefined8 *)((long)pvVar20 + 0x100) = 0;
            *(undefined8 *)((long)pvVar20 + 0xf8) = 0;
            *puVar38 = pvVar20;
            goto LAB_014f2690;
          }
LAB_014f30b4:
          puVar33[1] = lVar40 + 1;
          puVar33[lVar40 + 2] = pplVar12;
          break;
        case 0x32:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          if ((uint *)((long)pplVar12 + 7U) <= puVar24) goto LAB_014f2b30;
          do {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
            puVar24 = puVar24 + 1;
            uVar36 = 0x10;
          } while (puVar24 < (uint *)((long)pplVar12 + 7U));
          break;
        case 0x33:
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            do {
              if ((*puVar41 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
              }
              puVar41 = puVar41 + 1;
            } while (puVar41 < puVar24);
          }
          for (; puVar24 < (uint *)((long)pplVar12 + 7U); puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          puVar24 = (uint *)((long)pplVar12 + 0xf);
          if ((uint *)((long)pplVar12 + 0x13U) <= puVar24) goto LAB_014f3034;
          do {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
            puVar24 = puVar24 + 1;
            uVar36 = 0x14;
          } while (puVar24 < (uint *)((long)pplVar12 + 0x13U));
          break;
        case 0x34:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            puVar41 = puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar41 = puVar41 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar41) break;
              uVar23 = *puVar41;
            }
          }
          for (puVar41 = (uint *)((long)pplVar12 + 0xb);
              puVar41 < (uint *)((long)puVar24 + (long)(int)uVar36); puVar41 = puVar41 + 1) {
            if ((*puVar41 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar41,
                         (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
            }
          }
          break;
        case 0x35:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          puVar24 = (uint *)((long)pplVar12 + -1);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar24;
            puVar41 = puVar24;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar41,
                           (ulong)puVar41 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar41 = puVar41 + 1;
              if ((uint *)((long)pplVar12 + 3U) <= puVar41) break;
              uVar23 = *puVar41;
            }
          }
          for (puVar41 = (uint *)((long)pplVar12 + 0x17);
              puVar41 < (uint *)((long)puVar24 + (long)(int)uVar36); puVar41 = puVar41 + 1) {
            if ((*puVar41 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar41,
                         (ulong)puVar41 & 0xffffffff00000000 | (ulong)*puVar41);
            }
          }
          break;
        case 0x36:
          bVar7 = *(byte *)(uVar37 + 3);
          bVar6 = *(byte *)(uVar37 + 5);
          if (bVar6 < 3) {
            bVar6 = *(byte *)(uVar37 + 3);
          }
          pSVar21 = ConcurrentMarkingVisitor::
                    MakeSlotSnapshot<v8::internal::WasmInstanceObject,v8::internal::WasmInstanceObject::BodyDescriptor>
                              (pCVar19,uVar37,local_1188,(uint)bVar6 << 2);
          uVar37 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,pplVar12);
          if ((uVar37 & 1) == 0) goto LAB_014f2414;
          uVar36 = (uint)bVar7 << 2;
          ConcurrentMarkingVisitor::VisitPointersInSnapshot
                    ((ConcurrentMarkingVisitor *)&local_1180,pplVar12,pSVar21);
          break;
        case 0x37:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          local_c8 = (byte **)pplVar12;
          uVar36 = HeapObject::SizeFromMap((HeapObject *)&local_c8,uVar37);
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            uVar23 = *puVar41;
            puVar2 = puVar41;
            while( true ) {
              if ((uVar23 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar2,
                           (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar23);
              }
              puVar2 = puVar2 + 1;
              if (puVar24 <= puVar2) break;
              uVar23 = *puVar2;
            }
          }
          for (; puVar24 < (uint *)((long)puVar41 + (long)(int)uVar36); puVar24 = puVar24 + 1) {
            while( true ) {
              uVar23 = *puVar24;
              uVar37 = (ulong)uVar23 & 3;
              if (uVar37 == 1) break;
              if ((uVar23 != 3) && (uVar37 == 3)) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar23 & 0xfffffffffffffffd)
                ;
              }
              puVar24 = puVar24 + 1;
              if ((uint *)((long)puVar41 + (long)(int)uVar36) <= puVar24) goto LAB_014f2418;
            }
            MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                        *)&local_1180,pplVar12,puVar24);
          }
          break;
        case 0x38:
          uVar22 = ConcurrentMarkingVisitor::ShouldVisit
                             ((ConcurrentMarkingVisitor *)&local_1180,local_1188);
          if ((uVar22 & 1) == 0) goto LAB_014f2414;
          bVar7 = *(byte *)(uVar37 + 3);
          puVar41 = (uint *)((long)pplVar12 + -1);
          puVar24 = (uint *)((long)pplVar12 + 3);
          if (puVar41 < (uint *)0xfffffffffffffffc) {
            uVar36 = *puVar41;
            puVar2 = puVar41;
            while( true ) {
              if ((uVar36 & 1) != 0) {
                MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                            *)&local_1180,pplVar12,puVar2,
                           (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar36);
              }
              puVar2 = puVar2 + 1;
              if (puVar24 <= puVar2) break;
              uVar36 = *puVar2;
            }
          }
          puVar2 = (uint *)((long)pplVar12 + 7);
          uVar36 = (uint)bVar7 * 4;
          for (; puVar24 < puVar2; puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          (*(code *)local_1180[7])(&local_1180,pplVar12,puVar2);
          lVar25 = lStack_1168;
          for (puVar24 = (uint *)((long)pplVar12 + 0xb); lStack_1168 = lVar25,
              puVar24 < puVar41 + bVar7; puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                          *)&local_1180,pplVar12,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
            lVar25 = lStack_1168;
          }
          uVar23 = *(uint *)((long)pplVar12 + 7);
          if ((uVar23 & 1) != 0) {
            uVar37 = (ulong)pplVar12 & 0xffffffff00000000 | (ulong)uVar23 & 0xfffffffffffc0000;
            uVar22 = uVar23 - uVar37;
            if ((*(uint *)(*(long *)(uVar37 + 0x10) + (uVar22 >> 7 & 0x1ffffff) * 4) >>
                 (ulong)((uint)(uVar22 >> 2) & 0x1f) & 1) == 0) {
              lVar40 = lVar25 + (long)local_1158 * 0x50;
              puVar33 = *(undefined8 **)(lVar40 + 0x15c0);
              lVar30 = puVar33[1];
              if (lVar30 != 0x40) goto LAB_014f3b48;
              pMVar39 = (Mutex *)(lVar25 + 0x1840);
              puVar38 = (undefined8 *)(lVar40 + 0x15c0);
              base::Mutex::Lock(pMVar39);
              *puVar33 = *(undefined8 *)(lVar25 + 0x1868);
              *(undefined8 **)(lVar25 + 0x1868) = puVar33;
              goto LAB_014f2610;
            }
            if (((uint)*(undefined8 *)(uVar37 + 8) >> 6 & 1) != 0) {
              uVar37 = *(ulong *)((MemoryChunk *)((ulong)pplVar12 & 0xfffffffffffc0000) + 8);
              if ((((uint)uVar37 >> 0xf & 1) != 0) || ((uVar37 & 0x58) == 0)) {
                RememberedSet<(v8::internal::RememberedSetType)1>::
                Insert<(v8::internal::AccessMode)0>
                          ((MemoryChunk *)((ulong)pplVar12 & 0xfffffffffffc0000),(ulong)puVar2);
              }
            }
          }
        }
LAB_014f2418:
        uVar35 = uVar35 + (long)(int)uVar36;
      }
      uVar15 = uVar15 + 1;
      bVar14 = false;
      if ((999 < uVar15) || (0xffff < uVar35)) goto LAB_014f0e98;
    }
    bVar14 = true;
LAB_014f0e98:
    uVar34 = uVar35 + uVar34;
    *(ulong *)(param_2 + 0x30) = uVar34;
    if (((byte)*param_2 & 1) != 0) {
      if (DAT_01d46bc0 == (byte *)0x0) {
        plVar17 = (long *)tracing::TraceEventHelper::GetTracingController();
        DAT_01d46bc0 = (byte *)(**(code **)(*plVar17 + 0x10))(plVar17,"disabled-by-default-v8.gc");
      }
      pbVar11 = DAT_01d46bc0;
      local_c8 = (byte **)0x0;
      if ((*DAT_01d46bc0 & 5) != 0) {
        local_d8 = (long *)0x0;
        local_d0 = (long *)0x0;
        plVar17 = (long *)tracing::TraceEventHelper::GetTracingController();
        uVar18 = (**(code **)(*plVar17 + 0x18))
                           (plVar17,0x58,pbVar11,"ConcurrentMarking::Run Preempted",0,0,0,0);
        plVar17 = local_d0;
        local_d0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        plVar17 = local_d8;
        local_d8 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 8))();
        }
        local_c8 = &local_c0;
        local_b8 = "ConcurrentMarking::Run Preempted";
        local_c0 = pbVar11;
        local_b0 = uVar18;
        if (*pbVar11 != 0) {
          plVar17 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar17 + 0x28))(plVar17,local_c0,local_b8,local_b0);
        }
      }
      if (!bVar14) goto LAB_014f3cbc;
      goto LAB_014f3c5c;
    }
    if (bVar14) {
LAB_014f3c5c:
      local_c8 = (byte **)0x0;
      local_c0 = (byte *)0x0;
      uVar15 = Worklist<v8::internal::Ephemeron,64>::Pop
                         ((Worklist<v8::internal::Ephemeron,64> *)(*(long *)(this + 0x20) + 0xae0),
                          param_1,(Ephemeron *)&local_c8);
      while ((uVar15 & 1) != 0) {
        ConcurrentMarkingVisitor::ProcessEphemeron
                  ((ConcurrentMarkingVisitor *)&local_1180,local_c8,local_c0);
        uVar32 = uVar32 | uVar15;
        uVar15 = Worklist<v8::internal::Ephemeron,64>::Pop
                           ((Worklist<v8::internal::Ephemeron,64> *)(*(long *)(this + 0x20) + 0xae0)
                            ,param_1,(Ephemeron *)&local_c8);
      }
LAB_014f3cbc:
      Worklist<v8::internal::HeapObject,64>::FlushToGlobal
                (*(Worklist<v8::internal::HeapObject,64> **)(this + 8),param_1);
      Worklist<v8::internal::HeapObject,64>::FlushToGlobal
                (*(Worklist<v8::internal::HeapObject,64> **)(this + 0x10),param_1);
      Worklist<v8::internal::HeapObject,16>::FlushToGlobal
                (*(Worklist<v8::internal::HeapObject,16> **)(this + 0x18),param_1);
      Worklist<v8::internal::TransitionArray,64>::FlushToGlobal
                (*(Worklist<v8::internal::TransitionArray,64> **)(this + 0x20),param_1);
      Worklist<v8::internal::EphemeronHashTable,64>::FlushToGlobal
                ((Worklist<v8::internal::EphemeronHashTable,64> *)(*(long *)(this + 0x20) + 0x2b8),
                 param_1);
      Worklist<v8::internal::Ephemeron,64>::FlushToGlobal
                ((Worklist<v8::internal::Ephemeron,64> *)(*(long *)(this + 0x20) + 0x570),param_1);
      Worklist<v8::internal::Ephemeron,64>::FlushToGlobal
                ((Worklist<v8::internal::Ephemeron,64> *)(*(long *)(this + 0x20) + 0x828),param_1);
      Worklist<v8::internal::Ephemeron,64>::FlushToGlobal
                ((Worklist<v8::internal::Ephemeron,64> *)(*(long *)(this + 0x20) + 0xae0),param_1);
      Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
      ::FlushToGlobal((Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::CompressedHeapObjectSlot>,64>
                       *)(*(long *)(this + 0x20) + 0xd98),param_1);
      Worklist<v8::internal::JSWeakRef,64>::FlushToGlobal
                ((Worklist<v8::internal::JSWeakRef,64> *)(*(long *)(this + 0x20) + 0x1308),param_1);
      Worklist<v8::internal::WeakCell,64>::FlushToGlobal
                ((Worklist<v8::internal::WeakCell,64> *)(*(long *)(this + 0x20) + 0x15c0),param_1);
      Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Code>,64>::FlushToGlobal
                ((Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Code>,64> *)
                 (*(long *)(this + 0x20) + 0x1050),param_1);
      Worklist<v8::internal::SharedFunctionInfo,64>::FlushToGlobal
                ((Worklist<v8::internal::SharedFunctionInfo,64> *)(*(long *)(this + 0x20) + 0x1878),
                 param_1);
      Worklist<v8::internal::JSFunction,64>::FlushToGlobal
                ((Worklist<v8::internal::JSFunction,64> *)(*(long *)(this + 0x20) + 0x1b30),param_1)
      ;
      pCVar3 = this + 0x428;
      *(undefined8 *)(param_2 + 0x30) = 0;
      do {
        cVar9 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pCVar3,0x10);
        if (bVar14) {
          *(ulong *)pCVar3 = *(long *)pCVar3 + uVar34;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((uVar32 & 1) != 0) {
        *(undefined4 *)(this + 0x430) = 1;
      }
      base::Mutex::Lock((Mutex *)(this + 0x434));
      this[(long)param_1 + 0x490] = (ConcurrentMarking)0x0;
      *(int *)(this + 0x48c) = *(int *)(this + 0x48c) + -1;
      base::ConditionVariable::NotifyAll((ConditionVariable *)(this + 0x45c));
      base::Mutex::Unlock((Mutex *)(this + 0x434));
      plVar17 = (long *)V8::GetCurrentPlatform();
      dVar44 = (double)(**(code **)(*plVar17 + 0x78))();
      if (FLAG_trace_concurrent_marking != '\0') {
        Isolate::PrintWithTimestamp
                  ((char *)(*(long *)this + -0x8850),dVar44 * 1000.0 - dVar43 * 1000.0,
                   "Task %d concurrently marked %dKB in %.2fms\n",(ulong)(uint)param_1,uVar34 >> 10)
        ;
      }
      if ((local_140 != (byte **)0x0) && (*local_138 != 0)) {
        plVar17 = (long *)tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar17 + 0x28))(plVar17,local_138,local_130,local_128);
      }
      GCTracer::BackgroundScope::~BackgroundScope(aBStack_120);
      WorkerThreadRuntimeCallStatsScope::~WorkerThreadRuntimeCallStatsScope
                ((WorkerThreadRuntimeCallStatsScope *)&local_e0);
      return;
    }
  } while( true );
}

