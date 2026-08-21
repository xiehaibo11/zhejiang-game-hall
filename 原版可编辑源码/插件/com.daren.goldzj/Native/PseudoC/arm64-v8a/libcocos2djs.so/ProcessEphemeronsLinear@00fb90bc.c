
/* v8::internal::MarkCompactCollector::ProcessEphemeronsLinear() */

void __thiscall
v8::internal::MarkCompactCollector::ProcessEphemeronsLinear(MarkCompactCollector *this)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  uint uVar14;
  ulong uVar15;
  ulong *puVar16;
  MarkCompactCollector *pMVar17;
  ulong uVar18;
  MarkCompactCollector *pMVar19;
  ulong uVar20;
  ulong uVar21;
  void *pvVar22;
  long lVar23;
  long *plVar24;
  ulong *puVar25;
  undefined2 uVar26;
  byte **local_180;
  byte *local_178;
  undefined8 local_170;
  undefined8 local_168;
  Scope aSStack_160 [64];
  ulong local_120;
  ulong local_118;
  byte **local_110;
  byte *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  Scope aSStack_f0 [64];
  long *local_b0;
  long *local_a8;
  void *local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  GCTracer::Scope::Scope(aSStack_f0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x38);
  if (DAT_01d3f180 == (byte *)0x0) {
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f180 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
  }
  pbVar6 = DAT_01d3f180;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f180 & 5) != 0) {
    uVar9 = GCTracer::Scope::Name(0x38);
    local_b0 = (long *)0x0;
    local_a8 = (long *)0x0;
    plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar6,uVar9,0,0,0,0,0,0,0,&local_b0,0);
    plVar8 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_100 = GCTracer::Scope::Name(0x38);
    local_110 = &local_108;
    local_108 = pbVar6;
    local_f8 = uVar9;
  }
  uVar10 = ConcurrentMarking::IsStopped(*(ConcurrentMarking **)(*(long *)(this + 8) + 0x830));
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","heap()->concurrent_marking()->IsStopped()");
  }
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_88 = 0;
  local_90 = (undefined8 *)0x0;
  local_80 = 0x3f800000;
  local_120 = 0;
  local_118 = 0;
  uVar10 = (ulong)*(uint *)(this + 0x10a0);
  if (0 < (int)*(uint *)(this + 0x10a0)) {
    pMVar17 = this + 0xdf8;
    do {
      if ((*(long *)(*(long *)pMVar17 + 8) != 0) || (*(long *)(*(long *)(pMVar17 + -8) + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","AreLocalsEmpty()");
      }
      uVar10 = uVar10 - 1;
      pMVar17 = pMVar17 + 0x50;
    } while (uVar10 != 0);
  }
  uVar10 = (ulong)*(uint *)(this + 0x1358);
  if (0 < (int)*(uint *)(this + 0x1358)) {
    pMVar17 = this + 0x10b0;
    do {
      if ((*(long *)(*(long *)pMVar17 + 8) != 0) || (*(long *)(*(long *)(pMVar17 + -8) + 8) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","other.AreLocalsEmpty()");
      }
      uVar10 = uVar10 - 1;
      pMVar17 = pMVar17 + 0x50;
    } while (uVar10 != 0);
  }
  uVar9 = *(undefined8 *)(this + 0x1098);
  *(undefined8 *)(this + 0x1098) = *(undefined8 *)(this + 0x1350);
  *(undefined8 *)(this + 0x1350) = uVar9;
  while (uVar10 = Worklist<v8::internal::Ephemeron,64>::Pop
                            ((Worklist<v8::internal::Ephemeron,64> *)(this + 0xdf0),0,
                             (Ephemeron *)&local_120), (uVar10 & 1) != 0) {
    ProcessEphemeron(this,local_120,local_118);
    uVar18 = local_118;
    uVar10 = local_120;
    uVar15 = local_118 - (local_118 & 0xfffffffffffc0000);
    if ((*(uint *)(*(long *)((local_118 & 0xfffffffffffc0000) + 0x10) +
                  (uVar15 >> 7 & 0x1ffffff) * 4) >> (ulong)((uint)(uVar15 >> 2) & 0x1f) & 1) == 0) {
      puVar11 = operator_new(0x20);
      puVar11[2] = uVar10;
      puVar11[3] = uVar18;
      *puVar11 = 0;
      puVar11[1] = uVar10 & 0xffffffff;
      FUN_00fe8348(&local_a0,puVar11);
    }
  }
  pMVar17 = this + 0x2680;
  *(undefined8 *)(this + 0x2688) = local_88;
  do {
    PerformWrapperTracing(this);
    *pMVar17 = (MarkCompactCollector)0x0;
    *(undefined8 *)(this + 0x2670) = *(undefined8 *)(this + 0x2668);
    *(undefined8 *)(this + 0x2688) = local_88;
    GCTracer::Scope::Scope(aSStack_160,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x37);
    if (DAT_01d3f188 == (byte *)0x0) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3f188 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.gc");
    }
    pbVar6 = DAT_01d3f188;
    local_180 = (byte **)0x0;
    if ((*DAT_01d3f188 & 5) != 0) {
      uVar9 = GCTracer::Scope::Name(0x37);
      local_b0 = (long *)0x0;
      local_a8 = (long *)0x0;
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,0x58,pbVar6,uVar9,0,0,0,0,0,0,0,&local_b0,0);
      plVar8 = local_a8;
      local_a8 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      plVar8 = local_b0;
      local_b0 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      local_170 = GCTracer::Scope::Name(0x37);
      local_180 = &local_178;
      local_178 = pbVar6;
      local_168 = uVar9;
    }
    ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)1>
              (this,0);
    if ((local_180 != (byte **)0x0) && (*local_178 != 0)) {
      plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar8 + 0x28))(plVar8,local_178,local_170,local_168);
    }
    GCTracer::Scope::~Scope(aSStack_160);
    while (uVar10 = Worklist<v8::internal::Ephemeron,64>::Pop
                              ((Worklist<v8::internal::Ephemeron,64> *)(this + 0x1360),0,
                               (Ephemeron *)&local_120), (uVar10 & 1) != 0) {
      ProcessEphemeron(this,local_120,local_118);
      uVar18 = local_118;
      uVar10 = local_120;
      uVar15 = local_118 - (local_118 & 0xfffffffffffc0000);
      if ((*(uint *)(*(long *)((local_118 & 0xfffffffffffc0000) + 0x10) +
                    (uVar15 >> 7 & 0x1ffffff) * 4) >> (ulong)((uint)(uVar15 >> 2) & 0x1f) & 1) == 0)
      {
        puVar11 = operator_new(0x20);
        puVar11[2] = uVar10;
        puVar11[3] = uVar18;
        *puVar11 = 0;
        puVar11[1] = uVar10 & 0xffffffff;
        FUN_00fe8348(&local_a0,puVar11);
      }
    }
    if (*pMVar17 == (MarkCompactCollector)0x0) {
      puVar16 = *(ulong **)(this + 0x2670);
      for (puVar25 = *(ulong **)(this + 0x2668); puVar25 != puVar16; puVar25 = puVar25 + 1) {
        uVar10 = *puVar25;
        if (uStack_98 == 0) {
LAB_00fb9660:
          plVar8 = (long *)0x0;
        }
        else {
          uVar9 = CONCAT17(POPCOUNT((char)(uStack_98 >> 0x38)),
                           CONCAT16(POPCOUNT((char)(uStack_98 >> 0x30)),
                                    CONCAT15(POPCOUNT((char)(uStack_98 >> 0x28)),
                                             CONCAT14(POPCOUNT((char)(uStack_98 >> 0x20)),
                                                      CONCAT13(POPCOUNT((char)(uStack_98 >> 0x18)),
                                                               CONCAT12(POPCOUNT((char)(uStack_98 >>
                                                                                       0x10)),
                                                                        CONCAT11(POPCOUNT((char)(
                                                  uStack_98 >> 8)),POPCOUNT((char)uStack_98))))))));
          uVar26 = NEON_uaddlv(uVar9,1);
          uVar18 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar26) & 0xffffffff;
          uVar15 = uVar10 & 0xffffffff;
          if (uVar18 < 2) {
            uVar20 = (int)uStack_98 - 1 & uVar15;
          }
          else {
            uVar20 = uVar15;
            if (uStack_98 <= uVar15) {
              uVar20 = 0;
              if (uStack_98 != 0) {
                uVar20 = uVar15 / uStack_98;
              }
              uVar20 = uVar15 - uVar20 * uStack_98;
            }
          }
          plVar8 = *(long **)((long)local_a0 + uVar20 * 8);
          if (plVar8 == (long *)0x0) goto LAB_00fb9660;
          plVar8 = (long *)*plVar8;
          if (plVar8 != (long *)0x0) {
            do {
              uVar21 = plVar8[1];
              if (uVar21 == uVar15) {
                plVar24 = plVar8;
                if ((int)plVar8[2] == (int)uVar10) {
                  do {
                    plVar24 = (long *)*plVar24;
                    if (plVar24 == (long *)0x0) goto LAB_00fb9738;
                    if ((int)plVar24[2] != (int)uVar10) goto LAB_00fb9738;
                  } while( true );
                }
              }
              else {
                if (uVar18 < 2) {
                  uVar21 = uVar21 & uStack_98 - 1;
                }
                else if (uStack_98 <= uVar21) {
                  uVar4 = 0;
                  if (uStack_98 != 0) {
                    uVar4 = uVar21 / uStack_98;
                  }
                  uVar21 = uVar21 - uVar4 * uStack_98;
                }
                if (uVar21 != uVar20) goto LAB_00fb9660;
              }
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
        plVar24 = (long *)0x0;
        if (plVar8 != (long *)0x0) {
          do {
            uVar15 = plVar8[3];
            uVar18 = uVar15 - (uVar15 & 0xfffffffffffc0000);
            puVar1 = (uint *)(*(long *)((uVar15 & 0xfffffffffffc0000) + 0x10) +
                             (uVar18 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar7 = *puVar1;
              uVar14 = (uint)(1L << (uVar18 >> 2 & 0x1f));
              if ((uVar14 & (uVar7 ^ 0xffffffff)) == 0) break;
              while (*puVar1 == uVar7) {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar7 | uVar14;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  puVar11 = *(undefined8 **)(this + 0x58);
                  lVar23 = puVar11[1];
                  if (lVar23 == 0x40) {
                    base::Mutex::Lock((Mutex *)(this + 0x2d8));
                    *puVar11 = *(undefined8 *)(this + 0x300);
                    *(undefined8 **)(this + 0x300) = puVar11;
                    base::Mutex::Unlock((Mutex *)(this + 0x2d8));
                    puVar12 = operator_new(0x210);
                    puVar12[4] = 0;
                    puVar12[3] = 0;
                    puVar12[6] = 0;
                    puVar12[5] = 0;
                    puVar12[8] = 0;
                    puVar12[7] = 0;
                    puVar12[10] = 0;
                    puVar12[9] = 0;
                    puVar12[0xc] = 0;
                    puVar12[0xb] = 0;
                    puVar12[0xe] = 0;
                    puVar12[0xd] = 0;
                    puVar12[0x10] = 0;
                    puVar12[0xf] = 0;
                    puVar12[0x12] = 0;
                    puVar12[0x11] = 0;
                    puVar12[0x14] = 0;
                    puVar12[0x13] = 0;
                    puVar12[0x16] = 0;
                    puVar12[0x15] = 0;
                    puVar12[0x18] = 0;
                    puVar12[0x17] = 0;
                    puVar12[0x1a] = 0;
                    puVar12[0x19] = 0;
                    puVar12[0x1c] = 0;
                    puVar12[0x1b] = 0;
                    puVar12[0x1e] = 0;
                    puVar12[0x1d] = 0;
                    puVar12[0x20] = 0;
                    puVar12[0x1f] = 0;
                    puVar12[0x22] = 0;
                    puVar12[0x21] = 0;
                    puVar12[0x24] = 0;
                    puVar12[0x23] = 0;
                    puVar12[0x26] = 0;
                    puVar12[0x25] = 0;
                    puVar12[0x28] = 0;
                    puVar12[0x27] = 0;
                    puVar12[0x2a] = 0;
                    puVar12[0x29] = 0;
                    puVar12[0x2c] = 0;
                    puVar12[0x2b] = 0;
                    puVar12[0x2e] = 0;
                    puVar12[0x2d] = 0;
                    puVar12[0x30] = 0;
                    puVar12[0x2f] = 0;
                    puVar12[0x32] = 0;
                    puVar12[0x31] = 0;
                    puVar12[0x34] = 0;
                    puVar12[0x33] = 0;
                    puVar12[0x36] = 0;
                    puVar12[0x35] = 0;
                    puVar12[0x38] = 0;
                    puVar12[0x37] = 0;
                    puVar12[0x3a] = 0;
                    puVar12[0x39] = 0;
                    puVar12[0x3c] = 0;
                    puVar12[0x3b] = 0;
                    puVar12[0x3e] = 0;
                    puVar12[0x3d] = 0;
                    puVar12[0x40] = 0;
                    puVar12[0x3f] = 0;
                    puVar12[0x41] = 0;
                    *(undefined8 **)(this + 0x58) = puVar12;
                    puVar12[1] = 1;
                  }
                  else {
                    puVar12 = puVar11 + lVar23;
                    puVar11[1] = lVar23 + 1;
                  }
                  puVar12[2] = uVar15;
                  if (FLAG_track_retaining_path != '\0') {
                    Heap::AddRetainer(*(Heap **)(this + 8),uVar10,uVar15);
                  }
                  goto LAB_00fb9734;
                }
              }
              ClearExclusiveLocal();
            }
LAB_00fb9734:
            plVar8 = (long *)*plVar8;
LAB_00fb9738:
          } while (plVar8 != plVar24);
        }
      }
    }
    else {
      if (0 < *(int *)(this + 0x1358)) {
        lVar23 = 0;
        pMVar19 = this + 0x10b0;
        do {
          FUN_00fe8934(*(undefined8 *)pMVar19,this);
          FUN_00fe8934(*(undefined8 *)(pMVar19 + -8),this);
          lVar23 = lVar23 + 1;
          pMVar19 = pMVar19 + 0x50;
        } while (lVar23 < *(int *)(this + 0x1358));
      }
      base::Mutex::Lock((Mutex *)(this + 0x1328));
      for (plVar8 = *(long **)(this + 0x1350); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        FUN_00fe8934(plVar8,this);
      }
      base::Mutex::Unlock((Mutex *)(this + 0x1328));
    }
    if (*(long *)(*(long *)(this + 0x60) + 8) == 0) {
      if (((((*(long *)(*(long *)(this + 0x58) + 8) == 0) &&
            (*(long *)(*(long *)(this + 0x318) + 8) == 0)) &&
           (*(long *)(*(long *)(this + 0x310) + 8) == 0)) &&
          ((*(long *)(this + 0x300) == 0 && (*(long *)(this + 0x5b8) == 0)))) &&
         ((*(long *)(*(long *)(this + 0x5d0) + 8) == 0 &&
          ((*(long *)(*(long *)(this + 0x5c8) + 8) == 0 && (*(long *)(this + 0x870) == 0)))))) {
        uVar7 = LocalEmbedderHeapTracer::IsRemoteTracingDone
                          (*(LocalEmbedderHeapTracer **)(*(long *)(this + 8) + 0x870));
        uVar7 = uVar7 ^ 1;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 1;
    }
    uVar10 = (ulong)*(uint *)(this + 0x1610);
    pMVar19 = this + 0x1368;
    if (0 < (int)*(uint *)(this + 0x1610)) {
      do {
        if ((*(long *)(*(long *)pMVar19 + 8) != 0) || (*(long *)(*(long *)(pMVar19 + -8) + 8) != 0))
        goto LAB_00fb9994;
        uVar10 = uVar10 - 1;
        pMVar19 = pMVar19 + 0x50;
      } while (uVar10 != 0);
    }
    if (*(long *)(this + 0x1608) != 0) {
LAB_00fb9994:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","weak_objects_.discovered_ephemerons.IsEmpty()");
    }
    if ((uVar7 & 1) == 0) {
      *pMVar17 = (MarkCompactCollector)0x0;
      pvVar13 = *(void **)(this + 0x2668);
      *(void **)(this + 0x2670) = pvVar13;
      if (*(void **)(this + 0x2678) != pvVar13) {
        *(undefined8 *)(this + 0x2668) = 0;
        *(undefined8 *)(this + 0x2670) = 0;
        *(undefined8 *)(this + 0x2678) = 0;
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
      }
      if ((((*(long *)(*(long *)(this + 0x60) + 8) == 0) &&
           (*(long *)(*(long *)(this + 0x58) + 8) == 0)) &&
          (*(long *)(*(long *)(this + 0x318) + 8) == 0)) &&
         (((*(long *)(*(long *)(this + 0x310) + 8) == 0 && (*(long *)(this + 0x300) == 0)) &&
          (pvVar13 = local_a0, puVar11 = local_90, *(long *)(this + 0x5b8) == 0)))) {
        while (puVar11 != (void *)0x0) {
          pvVar22 = (void *)*puVar11;
          local_a0 = pvVar13;
          operator_delete(puVar11);
          pvVar13 = local_a0;
          puVar11 = pvVar22;
        }
        local_a0 = (void *)0x0;
        if (pvVar13 != (void *)0x0) {
          operator_delete(pvVar13);
        }
        if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
          plVar8 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar8 + 0x28))(plVar8,local_108,local_100,local_f8);
        }
        GCTracer::Scope::~Scope(aSStack_f0);
        if (*(long *)(lVar5 + 0x28) == local_70) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","marking_worklist()->IsEmpty()");
    }
  } while( true );
}

