
/* v8::internal::GCTracer::PrintNVP() const */

void __thiscall v8::internal::GCTracer::PrintNVP(GCTracer *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  GCTracer GVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  double dVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  double dVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  double dVar92;
  undefined8 in_stack_fffffffffffffb10;
  undefined4 uVar93;
  undefined8 in_stack_fffffffffffffb18;
  undefined4 uVar94;
  undefined8 in_stack_fffffffffffffb20;
  undefined4 uVar95;
  undefined8 in_stack_fffffffffffffb50;
  undefined4 uVar96;
  
  uVar93 = (undefined4)((ulong)in_stack_fffffffffffffb10 >> 0x20);
  uVar96 = (undefined4)((ulong)in_stack_fffffffffffffb50 >> 0x20);
  uVar94 = (undefined4)((ulong)in_stack_fffffffffffffb18 >> 0x20);
  uVar95 = (undefined4)((ulong)in_stack_fffffffffffffb20 >> 0x20);
  if (4 < *(uint *)(this + 8)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar17 = *(long *)(this + 0x30);
  lVar11 = *(long *)(this + 0x510);
  dVar18 = *(double *)(this + 0x20) - *(double *)(this + 0x18);
  dVar92 = *(double *)(this + 0x18) - *(double *)(this + 0x4f8);
  dVar69 = 0.0;
  switch(*(uint *)(this + 8)) {
  case 0:
    iVar14 = *(int *)(this + 0xbe4);
    lVar10 = *(long *)this;
    GVar6 = this[0x28];
    uVar19 = *(undefined8 *)(this + 0xf8);
    uVar27 = *(undefined8 *)(this + 0x100);
    uVar26 = *(undefined8 *)(this + 0xd8);
    uVar21 = *(undefined8 *)(this + 0xe0);
    uVar20 = *(undefined8 *)(this + 0xe8);
    uVar22 = *(undefined8 *)(this + 0xf0);
    uVar38 = *(undefined8 *)(this + 0x340);
    uVar39 = *(undefined8 *)(this + 0x350);
    uVar25 = *(undefined8 *)(this + 0x358);
    uVar28 = *(undefined8 *)(this + 0x348);
    uVar29 = *(undefined8 *)(this + 0x378);
    uVar30 = *(undefined8 *)(this + 0x388);
    uVar31 = *(undefined8 *)(this + 0x360);
    uVar32 = *(undefined8 *)(this + 0x368);
    uVar33 = *(undefined8 *)(this + 0x370);
    uVar34 = *(undefined8 *)(this + 0x380);
    uVar23 = *(undefined8 *)(this + 1000);
    uVar35 = *(undefined8 *)(this + 0x398);
    uVar36 = *(undefined8 *)(this + 0x3a0);
    uVar37 = *(undefined8 *)(this + 0x3a8);
    uVar4 = *(uint *)(this + 0x400);
    uVar24 = *(undefined8 *)(this + 0x80);
    dVar69 = 0.0;
    dVar73 = 0.0;
    if (0 < iVar14) {
      uVar12 = 0;
      dVar61 = 0.0;
      iVar7 = iVar14 + *(int *)(this + 0xbe0) + -1;
      iVar16 = iVar14 + *(int *)(this + 0xbe0) + -0xb;
      if (iVar7 < 10) {
        iVar16 = iVar7;
      }
      do {
        iVar7 = 9;
        if (iVar16 != 0) {
          iVar7 = iVar16 + -1;
        }
        iVar14 = iVar14 + -1;
        dVar61 = dVar61 + *(double *)(this + (long)iVar16 * 0x10 + 0xb48);
        uVar12 = *(long *)(this + (long)iVar16 * 0x10 + 0xb40) + uVar12;
        iVar16 = iVar7;
      } while (iVar14 != 0);
      dVar73 = 0.0;
      if ((dVar61 != 0.0) && (dVar73 = (double)uVar12 / dVar61, 1073741824.0 <= dVar73)) {
        dVar73 = 1073741824.0;
      }
    }
    uVar42 = *(undefined8 *)(this + 0x38);
    uVar40 = *(undefined8 *)(this + 0x50);
    uVar41 = *(undefined8 *)(this + 0x58);
    uVar43 = *(undefined8 *)(lVar10 + 0x7a0);
    uVar44 = *(undefined8 *)(lVar10 + 0x7b8);
    uVar1 = *(undefined4 *)(lVar10 + 2000);
    uVar2 = *(undefined4 *)(lVar10 + 0x7d4);
    uVar3 = *(undefined4 *)(lVar10 + 0x7d8);
    iVar14 = *(int *)(this + 0x112c);
    uVar45 = *(undefined8 *)(lVar10 + 0x7a8);
    if (iVar14 != 0) {
      if (iVar14 < 1) {
        dVar69 = 0.0;
      }
      else {
        dVar69 = 0.0;
        iVar7 = *(int *)(this + 0x1128) + iVar14 + -1;
        iVar15 = *(int *)(this + 0x1128) + iVar14 + -0xb;
        iVar16 = iVar14;
        if (iVar7 < 10) {
          iVar15 = iVar7;
        }
        do {
          iVar7 = 9;
          if (iVar15 != 0) {
            iVar7 = iVar15 + -1;
          }
          iVar16 = iVar16 + -1;
          dVar69 = dVar69 + *(double *)(this + (long)iVar15 * 8 + 0x10d8);
          iVar15 = iVar7;
        } while (iVar16 != 0);
      }
      dVar69 = dVar69 / (double)iVar14;
    }
    iVar14 = *(int *)(this + 0xf2c);
    uVar47 = *(undefined8 *)(lVar10 + 0x7b0);
    uVar46 = *(undefined8 *)(lVar10 + 0x7c8);
    uVar12 = *(ulong *)(this + 0xaf8);
    dVar61 = *(double *)(this + 0xaf0);
    if (0 < iVar14) {
      iVar7 = iVar14 + *(int *)(this + 0xf28) + -1;
      iVar16 = iVar14 + *(int *)(this + 0xf28) + -0xb;
      if (iVar7 < 10) {
        iVar16 = iVar7;
      }
      do {
        dVar61 = *(double *)(this + (long)iVar16 * 0x10 + 0xe90) + dVar61;
        iVar7 = 9;
        if (iVar16 != 0) {
          iVar7 = iVar16 + -1;
        }
        iVar14 = iVar14 + -1;
        uVar12 = *(long *)(this + (long)iVar16 * 0x10 + 0xe88) + uVar12;
        iVar16 = iVar7;
      } while (iVar14 != 0);
    }
    dVar74 = 0.0;
    dVar72 = 0.0;
    if ((dVar61 != 0.0) && (dVar72 = (double)uVar12 / dVar61, 1073741824.0 <= dVar72)) {
      dVar72 = 1073741824.0;
    }
    uVar9 = MemoryAllocator::Unmapper::NumberOfChunks
                      ((Unmapper *)(*(long *)(lVar10 + 0x820) + 0x88));
    if (9 < *(int *)(this + 0x10d4)) {
      dVar61 = (double)Heap::MonotonicallyIncreasingTimeInMs();
      iVar14 = *(int *)(this + 0x10d4);
      if (iVar14 < 1) {
        dVar74 = 0.0;
      }
      else {
        iVar16 = iVar14 + *(int *)(this + 0x10d0) + -1;
        iVar7 = iVar14 + *(int *)(this + 0x10d0) + -0xb;
        iVar15 = iVar14;
        if (iVar16 < 10) {
          iVar7 = iVar16;
        }
        do {
          iVar16 = iVar7;
          iVar7 = 9;
          if (iVar16 != 0) {
            iVar7 = iVar16 + -1;
          }
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
        dVar74 = *(double *)(this + (long)iVar16 * 8 + 0x1080);
      }
      dVar74 = (dVar61 - dVar74) / (double)iVar14;
    }
    auVar57._8_8_ = 0;
    auVar57._0_8_ = dVar92;
    Isolate::PrintWithTimestamp
              ((char *)(lVar10 + -0x8850),dVar18,auVar57,uVar27,uVar26,uVar21,uVar22,uVar20,uVar19,
               "pause=%.1f mutator=%.1f gc=%s reduce_memory=%d heap.prologue=%.2f heap.epilogue=%.2f heap.epilogue.reduce_new_space=%.2f heap.external.prologue=%.2f heap.external.epilogue=%.2f heap.external_weak_global_handles=%.2f fast_promote=%.2f scavenge=%.2f scavenge.process_array_buffers=%.2f scavenge.free_remembered_set=%.2f scavenge.roots=%.2f scavenge.weak=%.2f scavenge.weak_global_handles.identify=%.2f scavenge.weak_global_handles.process=%.2f scavenge.parallel=%.2f scavenge.update_refs=%.2f background.scavenge.parallel=%.2f background.array_buffer_free=%.2f background.store_buffer=%.2f background.unmapper=%.2f incremental.steps_count=%d incremental.steps_took=%.1f scavenge_throughput=%.f total_size_before=%zu total_size_after=%zu holes_size_before=%zu holes_size_after=%zu allocated=%zu promoted=%zu semi_space_copied=%zu nodes_died_in_new=%d nodes_copied_in_new=%d nodes_promoted=%d promotion_ratio=%.1f%% average_survival_ratio=%.1f%% promotion_rate=%.1f%% semi_space_copy_rate=%.1f%% new_space_allocation_throughput=%.1f unmapper_chunks=%d context_disposal_rate=%.1f\n"
               ,"s",(ulong)(byte)GVar6,(ulong)uVar4,lVar17,uVar42,uVar40,uVar38,uVar39,uVar25,uVar28
               ,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar23,uVar35,uVar36,uVar37,uVar24,dVar73,
               uVar41,lVar17 - lVar11,uVar43,uVar44,CONCAT44(uVar93,uVar1),CONCAT44(uVar94,uVar2),
               CONCAT44(uVar95,uVar3),uVar45,dVar69,uVar47,uVar46,dVar72,CONCAT44(uVar96,uVar9),
               dVar74);
    break;
  case 2:
    dVar69 = *(double *)(this + 0x20) - *(double *)(this + 0x9c8);
  case 1:
    GVar6 = this[0x28];
    uVar19 = *(undefined8 *)(this + 0x1d8);
    dVar73 = *(double *)(this + 0x9d0);
    lVar11 = *(long *)this;
    uVar62 = *(undefined8 *)(this + 0xd0);
    uVar63 = *(undefined8 *)(this + 0xd8);
    uVar64 = *(undefined8 *)(this + 0xe0);
    uVar65 = *(undefined8 *)(this + 0xe8);
    uVar66 = *(undefined8 *)(this + 0xf0);
    uVar78 = *(undefined8 *)(this + 0xf8);
    uVar77 = *(undefined8 *)(this + 0x100);
    uVar79 = *(undefined8 *)(this + 0x108);
    uVar81 = *(undefined8 *)(this + 0x158);
    uVar82 = *(undefined8 *)(this + 0x160);
    uVar83 = *(undefined8 *)(this + 0x168);
    uVar84 = *(undefined8 *)(this + 0x170);
    uVar85 = *(undefined8 *)(this + 0x178);
    uVar86 = *(undefined8 *)(this + 0x180);
    uVar88 = *(undefined8 *)(this + 0x110);
    uVar89 = *(undefined8 *)(this + 0x118);
    uVar87 = *(undefined8 *)(this + 0x188);
    uVar90 = *(undefined8 *)(this + 400);
    uVar91 = *(undefined8 *)(this + 0x198);
    uVar67 = *(undefined8 *)(this + 0x1a0);
    uVar70 = *(undefined8 *)(this + 0x1b0);
    uVar68 = *(undefined8 *)(this + 0x1b8);
    uVar71 = *(undefined8 *)(this + 0x1c0);
    uVar76 = *(undefined8 *)(this + 0x1c8);
    uVar20 = *(undefined8 *)(this + 0x1e0);
    uVar4 = *(uint *)(this + 0x490);
    uVar80 = *(undefined8 *)(this + 0x140);
    uVar21 = *(undefined8 *)(this + 0x1e8);
    uVar5 = *(uint *)(this + 0x400);
    uVar22 = *(undefined8 *)(this + 0x1f0);
    uVar23 = *(undefined8 *)(this + 0x120);
    uVar24 = *(undefined8 *)(this + 0x128);
    uVar25 = *(undefined8 *)(this + 0x210);
    uVar26 = *(undefined8 *)(this + 0x220);
    uVar27 = *(undefined8 *)(this + 0x218);
    uVar28 = *(undefined8 *)(this + 0x228);
    uVar29 = *(undefined8 *)(this + 0x230);
    uVar30 = *(undefined8 *)(this + 0x238);
    uVar31 = *(undefined8 *)(this + 0x240);
    uVar32 = *(undefined8 *)(this + 0x248);
    uVar33 = *(undefined8 *)(this + 0x250);
    uVar34 = *(undefined8 *)(this + 600);
    uVar35 = *(undefined8 *)(this + 0x1f8);
    uVar36 = *(undefined8 *)(this + 0x200);
    uVar37 = *(undefined8 *)(this + 0x130);
    uVar38 = *(undefined8 *)(this + 0x138);
    uVar39 = *(undefined8 *)(this + 0x260);
    uVar40 = *(undefined8 *)(this + 0x268);
    uVar41 = *(undefined8 *)(this + 0x270);
    uVar42 = *(undefined8 *)(this + 0xa0);
    uVar43 = *(undefined8 *)(this + 0xa8);
    uVar44 = *(undefined8 *)(this + 0x90);
    uVar45 = *(undefined8 *)(this + 0x98);
    uVar46 = *(undefined8 *)(this + 0xb0);
    uVar47 = *(undefined8 *)(this + 0xb8);
    uVar48 = *(undefined8 *)(this + 0xc0);
    uVar49 = *(undefined8 *)(this + 200);
    uVar50 = *(undefined8 *)(this + 0x80);
    uVar51 = *(undefined8 *)(this + 0x88);
    uVar52 = *(undefined8 *)(this + 0x428);
    uVar53 = *(undefined8 *)(this + 0x488);
    uVar54 = *(undefined8 *)(this + 0x3f8);
    if (dVar73 == 0.0) {
      if (*(double *)(this + 0x9c0) == 0.0) {
        dVar73 = 131072.0;
      }
      else {
        dVar73 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x9b8));
        dVar73 = dVar73 / *(double *)(this + 0x9c0);
      }
    }
    uVar58 = *(undefined8 *)(this + 0x3b0);
    uVar13 = *(undefined8 *)(this + 0x38);
    uVar75 = *(undefined8 *)(this + 0x3c0);
    uVar55 = *(undefined8 *)(this + 0x3c8);
    uVar59 = *(undefined8 *)(this + 0x3b8);
    uVar60 = *(undefined8 *)(this + 0x398);
    iVar14 = *(int *)(this + 0x112c);
    if ((iVar14 != 0) && (0 < iVar14)) {
      iVar7 = *(int *)(this + 0x1128) + iVar14 + -1;
      iVar16 = *(int *)(this + 0x1128) + iVar14 + -0xb;
      if (iVar7 < 10) {
        iVar16 = iVar7;
      }
      do {
        iVar7 = 9;
        if (iVar16 != 0) {
          iVar7 = iVar16 + -1;
        }
        iVar14 = iVar14 + -1;
        iVar16 = iVar7;
      } while (iVar14 != 0);
    }
    iVar14 = *(int *)(this + 0xf2c);
    if (0 < iVar14) {
      iVar7 = iVar14 + *(int *)(this + 0xf28) + -1;
      iVar16 = iVar14 + *(int *)(this + 0xf28) + -0xb;
      if (iVar7 < 10) {
        iVar16 = iVar7;
      }
      do {
        iVar7 = 9;
        if (iVar16 != 0) {
          iVar7 = iVar16 + -1;
        }
        iVar14 = iVar14 + -1;
        iVar16 = iVar7;
      } while (iVar14 != 0);
    }
    MemoryAllocator::Unmapper::NumberOfChunks((Unmapper *)(*(long *)(lVar11 + 0x820) + 0x88));
    if (9 < *(int *)(this + 0x10d4)) {
      Heap::MonotonicallyIncreasingTimeInMs();
      iVar14 = *(int *)(this + 0x10d4);
      if (0 < iVar14) {
        iVar7 = iVar14 + *(int *)(this + 0x10d0) + -1;
        iVar16 = iVar14 + *(int *)(this + 0x10d0) + -0xb;
        if (iVar7 < 10) {
          iVar16 = iVar7;
        }
        do {
          iVar7 = 9;
          if (iVar16 != 0) {
            iVar7 = iVar16 + -1;
          }
          iVar14 = iVar14 + -1;
          iVar16 = iVar7;
        } while (iVar14 != 0);
      }
    }
    iVar14 = *(int *)(this + 0xd34);
    if (0 < iVar14) {
      iVar7 = iVar14 + *(int *)(this + 0xd30) + -1;
      iVar16 = iVar14 + *(int *)(this + 0xd30) + -0xb;
      if (iVar7 < 10) {
        iVar16 = iVar7;
      }
      do {
        iVar7 = 9;
        if (iVar16 != 0) {
          iVar7 = iVar16 + -1;
        }
        iVar14 = iVar14 + -1;
        iVar16 = iVar7;
      } while (iVar14 != 0);
    }
    auVar56._8_8_ = 0;
    auVar56._0_8_ = dVar92;
    Isolate::PrintWithTimestamp
              ((char *)(lVar11 + -0x8850),dVar18,auVar56,uVar77,uVar62,uVar63,uVar64,uVar66,uVar65,
               "pause=%.1f mutator=%.1f gc=%s reduce_memory=%d heap.prologue=%.2f heap.embedder_tracing_epilogue=%.2f heap.epilogue=%.2f heap.epilogue.reduce_new_space=%.2f heap.external.prologue=%.1f heap.external.epilogue=%.1f heap.external.weak_global_handles=%.1f clear=%1.f clear.dependent_code=%.1f clear.maps=%.1f clear.slots_buffer=%.1f clear.store_buffer=%.1f clear.string_table=%.1f clear.weak_collections=%.1f clear.weak_lists=%.1f clear.weak_references=%.1f epilogue=%.1f evacuate=%.1f evacuate.candidates=%.1f evacuate.clean_up=%.1f evacuate.copy=%.1f evacuate.prologue=%.1f evacuate.epilogue=%.1f evacuate.rebalance=%.1f evacuate.update_pointers=%.1f evacuate.update_pointers.to_new_roots=%.1f evacuate.update_pointers.slots.main=%.1f evacuate.update_pointers.slots.map_space=%.1f evacuate.update_pointers.weak=%.1f finish=%.1f mark=%.1f mark.finish_incremental=%.1f mark.roots=%.1f mark.main=%.1f mark.weak_closure=%.1f mark.weak_closure.ephemeron=%.1f mark.weak_closure.ephemeron.marking=%.1f mark.weak_closure.ephemeron.linear=%.1f mark.weak_closure.weak_handles=%.1f mark.weak_closure.weak_roots=%.1f mark.weak_closure.harmony=%.1f mark.embedder_prologue=%.1f mark.embedder_tracing=%.1f prologue=%.1f sweep=%.1f sweep.code=%.1f sweep.map=%.1f sweep.old=%.1f incremental=%.1f incremental.finalize=%.1f incremental.finalize.body=%.1f incremental.finalize.external.prologue=%.1f incremental.finalize.external.epilogue=%.1f incremental.layout_change=%.1f incremental.start=%.1f incremental.sweeping=%.1f incremental.embedder_prologue=%.1f incremental.embedder_tracing=%.1f incremental_wrapper_tracing_longest_step=%.1f incremental_finalize_longest_step=%.1f incremental_finalize_steps_count=%d incremental_longest_step=%.1f incremental_steps_count=%d incremental_marking_throughput=%.f incremental_walltime_duration=%.f background.mark=%.1f background.sweep=%.1f background.evacuate.copy=%.1f background.evacuate.update_pointers=%.1f background.array_buffer_free=%.2f background.store_buffer=%.2f background.unmapper=%.1f total_size_before=%zu total_..." /* TRUNCATED STRING LITERAL */
               ,"ms",(ulong)(byte)GVar6,(ulong)uVar4,(ulong)uVar5,lVar17,uVar13,uVar78,uVar79,uVar80
               ,uVar81,uVar82,uVar83,uVar84,uVar85,uVar86,uVar87,uVar88,uVar89,uVar90,uVar91,uVar67,
               uVar68,uVar70,uVar71,uVar76,uVar21,uVar19,uVar20,uVar22,uVar23,uVar24,uVar25,uVar26,
               uVar27,uVar28,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,uVar38,
               uVar39,uVar40,uVar41,uVar50,uVar43,uVar46,uVar42,uVar45,uVar47,uVar48,uVar49,uVar51,
               uVar44,uVar52,uVar53,uVar54,dVar73,dVar69,uVar75,uVar55,uVar58,uVar59,uVar60);
    break;
  case 3:
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar92;
    Isolate::PrintWithTimestamp
              ((char *)(*(long *)this + -0x8850),dVar18,auVar8,*(undefined8 *)(this + 0x278),
               *(undefined8 *)(this + 0x338),*(undefined8 *)(this + 0x2f8),
               *(undefined8 *)(this + 0x310),*(undefined8 *)(this + 0x318),
               *(undefined8 *)(this + 800),
               "pause=%.1f mutator=%.1f gc=%s reduce_memory=%d minor_mc=%.2f finish_sweeping=%.2f mark=%.2f mark.seed=%.2f mark.roots=%.2f mark.weak=%.2f mark.global_handles=%.2f clear=%.2f clear.string_table=%.2f clear.weak_lists=%.2f evacuate=%.2f evacuate.copy=%.2f evacuate.update_pointers=%.2f evacuate.update_pointers.to_new_roots=%.2f evacuate.update_pointers.slots=%.2f background.mark=%.2f background.evacuate.copy=%.2f background.evacuate.update_pointers=%.2f background.array_buffer_free=%.2f background.store_buffer=%.2f background.unmapper=%.2f update_marking_deque=%.2f reset_liveness=%.2f\n"
               ,&DAT_019bf3c5,(ulong)(byte)this[0x28]);
  }
  return;
}

