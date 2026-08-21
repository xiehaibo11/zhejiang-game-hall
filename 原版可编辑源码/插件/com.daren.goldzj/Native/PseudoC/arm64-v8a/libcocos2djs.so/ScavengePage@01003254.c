
/* v8::internal::Scavenger::ScavengePage(v8::internal::MemoryChunk*) */

void __thiscall v8::internal::Scavenger::ScavengePage(Scavenger *this,MemoryChunk *param_1)

{
  uint *puVar1;
  Instruction *this_00;
  undefined8 uVar2;
  uint *puVar3;
  Instruction IVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  void *pvVar13;
  MemoryChunk *extraout_x1;
  MemoryChunk *extraout_x1_00;
  MemoryChunk *pMVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  Instruction *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
  a_Stack_88 [8];
  __tree_node *local_80;
  ulong local_70 [2];
  
  if ((*(char *)(*(long *)(param_1 + 0x18) + 0x168) == '\0') || (((byte)param_1[8] & 1) == 0)) {
    bVar8 = false;
    pMVar14 = param_1;
  }
  else {
    MemoryChunk::SetReadAndWritable(param_1);
    bVar8 = true;
    pMVar14 = extraout_x1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    InvalidatedSlotsFilter::OldToNew((InvalidatedSlotsFilter *)param_1,pMVar14);
    lVar19 = *(long *)(this + 0x10);
    uVar2 = *(undefined8 *)(this + 0x18);
    lVar15 = *(long *)(param_1 + 0x30);
    if ((lVar15 != 0) && (uVar16 = *(long *)param_1 + 0xfffU >> 0xc, uVar16 != 0)) {
      uVar21 = 0;
      bVar7 = false;
      do {
        lVar17 = *(long *)(lVar15 + uVar21 * 8);
        if (lVar17 != 0) {
          lVar31 = 0;
          lVar27 = 0;
          lVar30 = uVar21 << 10;
          do {
            puVar1 = (uint *)(lVar17 + lVar31 * 4);
            uVar11 = *puVar1;
            if (uVar11 != 0) {
              uVar26 = 0;
              uVar25 = uVar11;
              do {
                uVar9 = (uVar25 & 0xaaaaaaaa) >> 1 | (uVar25 & 0x55555555) << 1;
                uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
                uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
                uVar20 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
                uVar9 = 1;
                lVar18 = LZCOUNT(uVar20 >> 0x10 | uVar20 << 0x10);
                uVar20 = 1 << (ulong)((uint)lVar18 & 0x1f);
                pMVar14 = param_1 + (lVar30 + lVar18) * 4;
                uVar12 = InvalidatedSlotsFilter::IsValid
                                   ((InvalidatedSlotsFilter *)&local_b8,(ulong)pMVar14);
                if ((uVar12 & 1) != 0) {
                  uVar10 = *(uint *)pMVar14;
                  uVar9 = 1;
                  if ((uVar10 != 3) && ((uVar10 & 1) != 0)) {
                    uVar9 = (uint)*(undefined8 *)
                                   (((ulong)pMVar14 & 0xffffffff00000000 |
                                    (ulong)uVar10 & 0xfffffffffffc0000) + 8);
                    if ((uVar9 >> 3 & 1) == 0) {
                      uVar9 = (uVar9 >> 4 ^ 0xffffffff) & 1;
                    }
                    else {
                      uVar9 = ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                                        (this,pMVar14,
                                         (ulong)pMVar14 & 0xffffffff00000000 |
                                         (ulong)uVar10 & 0xfffffffffffffffd);
                    }
                  }
                }
                uVar10 = 0;
                if (uVar9 != 0) {
                  uVar10 = uVar20;
                }
                uVar25 = uVar20 ^ uVar25;
                uVar26 = uVar10 | uVar26;
                if (uVar9 == 0) {
                  lVar27 = lVar27 + 1;
                }
              } while (uVar25 != 0);
              if ((uVar26 & uVar11) != 0) {
                while (uVar11 = *puVar1, (uVar11 & uVar26) != 0) {
                  while (*puVar1 == uVar11) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar11 & ~uVar26;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_01003348;
                  }
                  ClearExclusiveLocal();
                }
              }
            }
LAB_01003348:
            lVar31 = lVar31 + 1;
            lVar30 = lVar30 + 0x20;
          } while (lVar31 != 0x20);
          if (lVar27 == 0) {
            *(undefined1 *)((lVar15 + -9) - uVar21) = 0;
            bVar7 = true;
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar16);
      if (bVar7) {
        puVar23 = (undefined8 *)(lVar19 + (long)(int)uVar2 * 0x50);
        puVar24 = (undefined8 *)*puVar23;
        lVar15 = puVar24[1];
        if (lVar15 == 0x40) {
          base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
          *puVar24 = *(undefined8 *)(lVar19 + 0x2a8);
          *(undefined8 **)(lVar19 + 0x2a8) = puVar24;
          base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
          pvVar13 = operator_new(0x210);
          *puVar23 = pvVar13;
          *(undefined8 *)((long)pvVar13 + 8) = 1;
          *(MemoryChunk **)((long)pvVar13 + 0x10) = param_1;
        }
        else {
          puVar24[1] = lVar15 + 1;
          puVar24[lVar15 + 2] = param_1;
        }
      }
    }
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy(a_Stack_88,local_80);
    pMVar14 = extraout_x1_00;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    InvalidatedSlotsFilter::OldToNew((InvalidatedSlotsFilter *)param_1,pMVar14);
    lVar19 = *(long *)(param_1 + 0x70);
    if ((lVar19 != 0) && (uVar16 = *(long *)param_1 + 0xfffU >> 0xc, uVar16 != 0)) {
      uVar21 = 0;
      do {
        lVar15 = *(long *)(lVar19 + uVar21 * 8);
        if (lVar15 != 0) {
          lVar17 = 0;
          lVar31 = uVar21 << 10;
          do {
            puVar1 = (uint *)(lVar15 + lVar17 * 4);
            uVar11 = *puVar1;
            if (uVar11 != 0) {
              uVar26 = 0;
              uVar25 = uVar11;
              do {
                uVar9 = (uVar25 & 0xaaaaaaaa) >> 1 | (uVar25 & 0x55555555) << 1;
                uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
                uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
                uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
                lVar30 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
                uVar9 = 1 << (ulong)((uint)lVar30 & 0x1f);
                pMVar14 = param_1 + (lVar31 + lVar30) * 4;
                uVar12 = InvalidatedSlotsFilter::IsValid
                                   ((InvalidatedSlotsFilter *)&local_b8,(ulong)pMVar14);
                uVar20 = uVar9;
                if ((uVar12 & 1) != 0) {
                  uVar10 = *(uint *)pMVar14;
                  if ((uVar10 != 3) && ((uVar10 & 1) != 0)) {
                    uVar20 = (uint)*(undefined8 *)
                                    (((ulong)pMVar14 & 0xffffffff00000000 |
                                     (ulong)uVar10 & 0xfffffffffffc0000) + 8);
                    if ((uVar20 >> 3 & 1) == 0) {
                      uVar10 = (uVar20 >> 4 ^ 0xffffffff) & 1;
                    }
                    else {
                      uVar10 = ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                                         (this,pMVar14,
                                          (ulong)pMVar14 & 0xffffffff00000000 |
                                          (ulong)uVar10 & 0xfffffffffffffffd);
                    }
                    uVar20 = 0;
                    if (uVar10 != 0) {
                      uVar20 = uVar9;
                    }
                  }
                }
                uVar25 = uVar9 ^ uVar25;
                uVar26 = uVar20 | uVar26;
              } while (uVar25 != 0);
              if ((uVar26 & uVar11) != 0) {
                while (uVar11 = *puVar1, (uVar11 & uVar26) != 0) {
                  while (*puVar1 == uVar11) {
                    cVar5 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar7) {
                      *puVar1 = uVar11 & ~uVar26;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_01003554;
                  }
                  ClearExclusiveLocal();
                }
              }
            }
LAB_01003554:
            lVar17 = lVar17 + 1;
            lVar31 = lVar31 + 0x20;
          } while (lVar17 != 0x20);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar16);
    }
    std::__ndk1::
    __tree<v8::internal::HeapObject,v8::internal::Object::Comparer,std::__ndk1::allocator<v8::internal::HeapObject>>
    ::destroy(a_Stack_88,local_80);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    MemoryChunk::ReleaseInvalidatedSlots<(v8::internal::RememberedSetType)0>(param_1);
  }
  lVar19 = *(long *)(param_1 + 0x78);
  if (lVar19 != 0) {
    plVar28 = *(long **)(lVar19 + 8);
    if (plVar28 != (long *)0x0) {
      iVar29 = 0;
      do {
        puVar3 = (uint *)plVar28[2];
        for (puVar1 = (uint *)plVar28[1]; puVar1 != puVar3; puVar1 = puVar1 + 1) {
          uVar11 = *puVar1 >> 0x1d;
          if (uVar11 == 5) goto LAB_010036b8;
          if (4 < uVar11) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          this_00 = (Instruction *)(*(long *)(lVar19 + 0x18) + ((ulong)*puVar1 & 0x1fffffff));
          switch(uVar11) {
          case 0:
            local_b0 = 3;
            goto LAB_0100381c;
          case 1:
            local_b0 = 2;
LAB_0100381c:
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            local_b8 = this_00;
            uVar11 = FUN_0100d3dc(*(undefined8 *)(this + 8),&local_b8);
            break;
          case 2:
            uVar16 = *(ulong *)this_00;
            if (((int)uVar16 != 3) && ((uVar16 & 1) != 0)) {
              uVar11 = (uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8);
              if ((uVar11 >> 3 & 1) == 0) {
                uVar11 = (uVar11 >> 4 ^ 0xffffffff) & 1;
              }
              else {
                uVar11 = ScavengeObject<v8::internal::FullHeapObjectSlot>
                                   (this,this_00,uVar16 & 0xfffffffffffffffd);
              }
              break;
            }
            goto LAB_010036b0;
          case 3:
            local_b0 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0;
            IVar4 = this_00[3];
            local_b8 = this_00;
            puVar23 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
            if (IVar4 == (Instruction)0x58) {
              puVar23 = (undefined8 *)*puVar23;
            }
            puVar24 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
            uVar16 = Isolate::CurrentEmbeddedBlobSize();
            if ((puVar24 <= puVar23) &&
               (puVar23 < (undefined8 *)((long)puVar24 + (uVar16 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","address < start || address >= end");
            }
            local_70[0] = (long)puVar23 - 0x3f;
            iVar22 = (int)local_70[0];
            uVar11 = 1;
            if ((iVar22 != 3) && ((local_70[0] & 1) != 0)) {
              uVar11 = (uint)*(undefined8 *)((local_70[0] & 0xfffffffffffc0000) + 8);
              if ((uVar11 >> 3 & 1) == 0) {
LAB_010037fc:
                uVar11 = (uVar11 >> 4 ^ 0xffffffff) & 1;
              }
              else {
                uVar11 = ScavengeObject<v8::internal::FullHeapObjectSlot>
                                   (this,local_70,local_70[0] & 0xfffffffffffffffd);
                if ((int)local_70[0] != iVar22) {
                  RelocInfo::set_target_address((RelocInfo *)&local_b8,local_70[0] + 0x3f,4,0);
                }
              }
            }
            break;
          case 4:
            uVar11 = 1;
            local_b8 = (Instruction *)(*(long *)this_00 + -0x3f);
            iVar22 = (int)local_b8;
            if ((iVar22 != 3) && (((ulong)local_b8 & 1) != 0)) {
              uVar11 = (uint)*(undefined8 *)(((ulong)local_b8 & 0xfffffffffffc0000) + 8);
              if ((uVar11 >> 3 & 1) == 0) goto LAB_010037fc;
              uVar11 = ScavengeObject<v8::internal::FullHeapObjectSlot>
                                 (this,&local_b8,(ulong)local_b8 & 0xfffffffffffffffd);
              if ((int)local_b8 != iVar22) {
                *(Instruction **)this_00 = local_b8 + 0x3f;
              }
            }
          }
          if (uVar11 == 0) {
            iVar29 = iVar29 + 1;
          }
          else {
LAB_010036b0:
            *puVar1 = 0xa0000000;
          }
LAB_010036b8:
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
      if (iVar29 != 0) goto LAB_010038a0;
    }
    MemoryChunk::ReleaseTypedSlotSet<(v8::internal::RememberedSetType)0>(param_1);
  }
LAB_010038a0:
  if (((((byte)param_1[10] >> 5 & 1) == 0) && (*(int *)(*(long *)(param_1 + 0x58) + 0x48) == 2)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    Sweeper::AddPage(*(Sweeper **)(*(long *)(*(long *)(this + 8) + 0x800) + 0x26f8),2,param_1,1);
  }
  if (bVar8) {
    if (FLAG_jitless == '\0') {
      MemoryChunk::SetReadAndExecutable(param_1);
    }
    else {
      MemoryChunk::SetReadable(param_1);
    }
  }
  return;
}

