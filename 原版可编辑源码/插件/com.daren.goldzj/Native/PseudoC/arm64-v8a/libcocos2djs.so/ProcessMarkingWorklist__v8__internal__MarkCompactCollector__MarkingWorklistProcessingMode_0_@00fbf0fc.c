
/* unsigned long
   v8::internal::MarkCompactCollector::ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>(unsigned
   long) */

ulong __thiscall
v8::internal::MarkCompactCollector::
ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)0>
          (MarkCompactCollector *this,ulong param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  void *pvVar13;
  Mutex *pMVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ushort *puVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ObjectVisitor *this_00;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  MemoryChunk *pMVar30;
  ulong uVar31;
  uint *puVar32;
  ulong uVar33;
  ulong local_a8 [8];
  ulong local_68;
  
  uVar25 = 0;
  do {
    do {
      local_a8[0] = 0;
      uVar12 = Worklist<v8::internal::HeapObject,64>::Pop
                         ((Worklist<v8::internal::HeapObject,64> *)(this + 0x58),0,
                          (HeapObject *)local_a8);
      if ((uVar12 & 1) == 0) {
        uVar23 = Worklist<v8::internal::HeapObject,64>::Pop
                           ((Worklist<v8::internal::HeapObject,64> *)(this + 0x310),0,
                            (HeapObject *)local_a8);
        uVar12 = local_a8[0];
        if ((uVar23 & 1) == 0) {
          uVar12 = 0;
        }
        iVar10 = (int)uVar12;
      }
      else {
        iVar10 = (int)local_a8[0];
        uVar12 = local_a8[0];
      }
      if (iVar10 == 0) {
        return uVar25;
      }
      uVar23 = uVar12 & 0xffffffff00000000;
      uVar33 = uVar23 | 7;
    } while ((*(ushort *)(uVar33 + *(uint *)(uVar12 - 1)) | 1) == 0xa1);
    puVar27 = (uint *)(uVar12 - 1);
    this_00 = *(ObjectVisitor **)(this + 0x2690);
    uVar31 = uVar23 | *puVar27;
    switch(*(undefined1 *)(uVar31 + 6)) {
    case 0:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc15c4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc15c4:
      uVar29 = (*(uint *)(uVar12 + 3) & 0x3ffffffe) * 4 + 8;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < (uint *)(uVar12 + 3));
      }
      break;
    case 1:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1a20;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1a20:
      uVar29 = ((int)*(uint *)(uVar12 + 3) >> 1) + 0xbU & 0xfffffffc;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < (uint *)(uVar12 + 3));
      }
      break;
    case 2:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc2934;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc2934:
      uVar29 = (uint)*(byte *)(uVar31 + 3) << 2;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar15 = *puVar27;
        }
      }
      break;
    case 3:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1a78;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1a78:
      uVar29 = (*(uint *)(uVar12 + 3) & 0x3ffffffe) * 4 + 8;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < (uint *)(uVar12 + 3));
      }
      break;
    case 4:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc298c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc298c:
      uVar29 = *(int *)(uVar12 + 7) + 0xfU & 0xfffffffc;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar15 = *puVar27;
        }
      }
      break;
    case 5:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc29e8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc29e8:
      uVar29 = *(int *)(uVar12 + 7) * 2 + 0xfU & 0xfffffffc;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar15 = *puVar27;
        }
      }
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 7:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1ad0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1ad0:
      puVar28 = (uint *)(uVar12 + 3);
      uVar29 = (uint)*(byte *)(uVar31 + 3) << 2;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      for (; puVar28 < (uint *)(uVar12 + 0xf); puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 8:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar27 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar27 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar28 = puVar27;
        if (bVar7) {
          uVar29 = 1;
          puVar28 = puVar27 + 1;
        }
        while (uVar15 = puVar27[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar28 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar6) {
              *puVar28 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              local_68 = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc2a48;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      local_68 = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc2a48:
      uVar12 = local_68;
      iVar10 = *(int *)(local_68 + 3);
      puVar27 = (uint *)(local_68 - 1);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        puVar28 = (uint *)(local_68 + 3);
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          if (puVar28 <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      uVar12 = local_68;
      puVar27 = (uint *)(local_68 + 7);
      puVar28 = (uint *)(local_68 + 0xb);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      puVar27 = (uint *)(uVar12 + 0xf);
      if (puVar28 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar28 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,
                       (ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28);
          }
          puVar28 = puVar28 + 1;
        } while (puVar28 < puVar27);
      }
      uVar29 = (iVar10 >> 1) + 0x25U & 0xfffffffc;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 0x13) <= puVar27) break;
          uVar15 = *puVar27;
        }
      }
      if (this_00[0x35] == (ObjectVisitor)0x0) {
        BytecodeArray::MakeOlder((BytecodeArray *)&local_68);
      }
      break;
    case 9:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1b64;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1b64:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      if (puVar28 < (uint *)(uVar12 + 7)) {
        do {
          if ((*puVar28 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,
                       (ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28);
          }
          puVar28 = puVar28 + 1;
          uVar29 = 8;
        } while (puVar28 < (uint *)(uVar12 + 7));
      }
      else {
        uVar29 = 8;
      }
      break;
    case 10:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1bf4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1bf4:
      uVar29 = *(uint *)(uVar12 + 0x13);
      if ((*(byte *)(uVar12 + 0x17) & 1) != 0) {
        uVar23 = (long)(int)(uVar29 + 0x47) & 0xfffffffffffffff8;
        uVar29 = ((int)uVar23 + *(int *)((long)puVar27 + uVar23)) - 0x38;
      }
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      uVar29 = (uVar29 + 3 & 0xfffffffc) + 0x5f & 0xffffffe0;
      for (; puVar28 < (uint *)(uVar12 + 0x13); puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      RelocIterator::RelocIterator((RelocIterator *)local_a8,uVar12,1999);
      ObjectVisitor::VisitRelocInfo(this_00,(RelocIterator *)local_a8);
      break;
    case 0xb:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto joined_r0x00fc126c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
joined_r0x00fc126c:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          uVar29 = 0xc;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      else {
LAB_00fc30a0:
        uVar29 = 0xc;
      }
      break;
    case 0xc:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto joined_r0x00fc119c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
joined_r0x00fc119c:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      puVar27 = (uint *)(uVar12 + 0xb);
      if (puVar27 < (uint *)(uVar12 + 0x13)) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
          uVar29 = 0x14;
        } while (puVar27 < (uint *)(uVar12 + 0x13));
      }
      else {
LAB_00fc3930:
        uVar29 = 0x14;
      }
      break;
    case 0xd:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc30b0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc30b0:
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar28 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar28 = puVar28 + 1;
          if ((uint *)(uVar12 + 3) <= puVar28) break;
          uVar15 = *puVar28;
        }
      }
      for (puVar28 = (uint *)(uVar12 + 7); puVar28 < (uint *)((long)puVar27 + (long)(int)uVar29);
          puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0xe:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1d64;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1d64:
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar32 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,(ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar32 = puVar32 + 1;
          if (puVar28 <= puVar32) break;
          uVar15 = *puVar32;
        }
      }
      puVar32 = (uint *)(uVar12 + 0xb);
      for (; puVar28 < puVar32; puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      for (; puVar32 < (uint *)((long)puVar27 + (long)(int)uVar29); puVar32 = puVar32 + 1) {
        while( true ) {
          uVar15 = *puVar32;
          uVar23 = (ulong)uVar15 & 3;
          if (uVar23 == 1) break;
          if ((uVar15 != 3) && (uVar23 == 3)) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,
                       (ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar15 & 0xfffffffffffffffd);
          }
          puVar32 = puVar32 + 1;
          if ((uint *)((long)puVar27 + (long)(int)uVar29) <= puVar32) goto LAB_00fc3a7c;
        }
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this_00,uVar12,puVar32);
      }
      break;
    case 0xf:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto joined_r0x00fc12c4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
joined_r0x00fc12c4:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      for (puVar27 = (uint *)(uVar12 + 0xb); puVar27 < (uint *)(uVar12 + 0xf); puVar27 = puVar27 + 1
          ) {
        if ((*puVar27 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27
                    );
        }
      }
      sVar9 = *(short *)(uVar12 + 5);
      local_a8[0] = uVar12;
      sVar8 = DescriptorArray::UpdateNumberOfMarkedDescriptors
                        ((DescriptorArray *)local_a8,*(uint *)(this_00 + 0x2c),sVar9);
      uVar12 = local_a8[0];
      if ((int)sVar8 < (int)sVar9) {
        lVar17 = local_a8[0] + 0xf;
        for (puVar27 = (uint *)(lVar17 + (long)(int)sVar8 * 0xc);
            puVar27 < (uint *)(lVar17 + (long)sVar9 * 0xc); puVar27 = puVar27 + 1) {
          uVar15 = *puVar27;
          uVar23 = (ulong)uVar15 & 3;
          if (uVar23 == 1) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27);
          }
          else if ((uVar15 != 3) && (uVar23 == 3)) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15 & 0xfffffffffffffffd);
          }
        }
      }
      break;
    case 0x10:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1e80;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1e80:
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar28 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar28 = puVar28 + 1;
          if ((uint *)(uVar12 + 3) <= puVar28) break;
          uVar15 = *puVar28;
        }
      }
      if (8 < (int)uVar29) {
        lVar17 = 8;
        do {
          puVar28 = (uint *)(lVar17 + (long)puVar27);
          if (puVar28 < (uint *)0xfffffffffffffffc) {
            puVar32 = puVar28 + 1;
            uVar15 = *puVar28;
            while( true ) {
              if ((uVar15 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar12,puVar28,
                           (ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15);
              }
              puVar28 = puVar28 + 1;
              if (puVar32 <= puVar28) break;
              uVar15 = *puVar28;
            }
          }
          lVar17 = lVar17 + 8;
        } while ((int)lVar17 < (int)uVar29);
      }
      break;
    case 0x11:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar27 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar27 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar28 = puVar27;
        if (bVar7) {
          uVar29 = 1;
          puVar28 = puVar27 + 1;
        }
        while (uVar15 = puVar27[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar28 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar6) {
              *puVar28 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              local_68 = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc2cdc;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      local_68 = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc2cdc:
      uVar12 = local_68;
      lVar24 = *(long *)(this_00 + 0x18);
      lVar17 = lVar24 + (long)*(int *)(this_00 + 0x28) * 0x50;
      puVar26 = *(undefined8 **)(lVar17 + 0x2b8);
      lVar18 = puVar26[1];
      if (lVar18 == 0x40) {
        base::Mutex::Lock((Mutex *)(lVar24 + 0x538));
        *puVar26 = *(undefined8 *)(lVar24 + 0x560);
        *(undefined8 **)(lVar24 + 0x560) = puVar26;
        base::Mutex::Unlock((Mutex *)(lVar24 + 0x538));
        puVar21 = operator_new(0x210);
        puVar21[4] = 0;
        puVar21[3] = 0;
        puVar21[0x22] = 0;
        puVar21[0x21] = 0;
        puVar21[0x24] = 0;
        puVar21[0x23] = 0;
        puVar21[0x26] = 0;
        puVar21[0x25] = 0;
        puVar21[0x28] = 0;
        puVar21[0x27] = 0;
        puVar21[0x2a] = 0;
        puVar21[0x29] = 0;
        puVar21[0x2c] = 0;
        puVar21[0x2b] = 0;
        puVar21[0x2e] = 0;
        puVar21[0x2d] = 0;
        puVar21[0x30] = 0;
        puVar21[0x2f] = 0;
        puVar21[0x32] = 0;
        puVar21[0x31] = 0;
        puVar21[0x34] = 0;
        puVar21[0x33] = 0;
        puVar21[0x36] = 0;
        puVar21[0x35] = 0;
        puVar21[0x38] = 0;
        puVar21[0x37] = 0;
        puVar21[0x3a] = 0;
        puVar21[0x39] = 0;
        puVar21[0x3c] = 0;
        puVar21[0x3b] = 0;
        puVar21[0x3e] = 0;
        puVar21[0x3d] = 0;
        puVar21[0x40] = 0;
        puVar21[0x3f] = 0;
        puVar21[0x41] = 0;
        puVar21[6] = 0;
        puVar21[5] = 0;
        puVar21[8] = 0;
        puVar21[7] = 0;
        puVar21[10] = 0;
        puVar21[9] = 0;
        puVar21[0xc] = 0;
        puVar21[0xb] = 0;
        puVar21[0xe] = 0;
        puVar21[0xd] = 0;
        puVar21[0x10] = 0;
        puVar21[0xf] = 0;
        puVar21[0x12] = 0;
        puVar21[0x11] = 0;
        puVar21[0x14] = 0;
        puVar21[0x13] = 0;
        puVar21[0x16] = 0;
        puVar21[0x15] = 0;
        puVar21[0x18] = 0;
        puVar21[0x17] = 0;
        puVar21[0x1a] = 0;
        puVar21[0x19] = 0;
        puVar21[0x1c] = 0;
        puVar21[0x1b] = 0;
        puVar21[0x1e] = 0;
        puVar21[0x1d] = 0;
        puVar21[0x20] = 0;
        puVar21[0x1f] = 0;
        *(undefined8 **)(lVar17 + 0x2b8) = puVar21;
        puVar21[1] = 1;
      }
      else {
        puVar21 = puVar26 + lVar18;
        puVar26[1] = lVar18 + 1;
      }
      puVar21[2] = uVar12;
      uVar29 = *(uint *)(local_68 + 0xf);
      if ((int)uVar29 >> 1 != 0) {
        lVar17 = 0;
        do {
          iVar10 = (int)lVar17 * 8;
          lVar18 = local_68 + (long)(iVar10 + 0xc);
          uVar12 = (ulong)*(uint *)(lVar18 + 7);
          uVar23 = local_68 & 0xffffffff00000000 | uVar12;
          uVar12 = local_68 & 0xffffffff00000000 | uVar12 & 0xfffffffffffc0000;
          if (((uint)*(undefined8 *)(uVar12 + 8) >> 6 & 1) != 0) {
            uVar33 = *(ulong *)((MemoryChunk *)(local_68 & 0xfffffffffffc0000) + 8);
            if ((((uint)uVar33 >> 0xf & 1) != 0) || ((uVar33 & 0x58) == 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        ((MemoryChunk *)(local_68 & 0xfffffffffffc0000),lVar18 + 7);
            }
          }
          uVar33 = local_68;
          puVar27 = (uint *)(local_68 + (long)(int)(iVar10 + 0x10U | 7));
          if ((*(uint *)(*(long *)(uVar12 + 0x10) + (uVar23 - uVar12 >> 7 & 0x1ffffff) * 4) >>
               (ulong)((uint)(uVar23 - uVar12 >> 2) & 0x1f) & 1) == 0) {
            uVar12 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                     ::ValueAt((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                                *)&local_68,lVar17);
            if ((uVar12 & 1) != 0) {
              uVar33 = uVar12 & 0xfffffffffffc0000;
              if (((uint)*(undefined8 *)(uVar33 + 8) >> 6 & 1) != 0) {
                uVar19 = *(ulong *)((MemoryChunk *)(local_68 & 0xfffffffffffc0000) + 8);
                if ((((uint)uVar19 >> 0xf & 1) != 0) || ((uVar19 & 0x58) == 0)) {
                  RememberedSet<(v8::internal::RememberedSetType)1>::
                  Insert<(v8::internal::AccessMode)0>
                            ((MemoryChunk *)(local_68 & 0xfffffffffffc0000),(ulong)puVar27);
                }
              }
              if ((*(uint *)(*(long *)(uVar33 + 0x10) + (uVar12 - uVar33 >> 7 & 0x1ffffff) * 4) >>
                   (ulong)((uint)(uVar12 - uVar33 >> 2) & 0x1f) & 1) == 0) {
                lVar22 = *(long *)(this_00 + 0x18);
                lVar18 = lVar22 + (long)*(int *)(this_00 + 0x28) * 0x50;
                puVar26 = *(undefined8 **)(lVar18 + 0xae0);
                lVar24 = puVar26[1];
                if (lVar24 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar22 + 0xd60));
                  *puVar26 = *(undefined8 *)(lVar22 + 0xd88);
                  *(undefined8 **)(lVar22 + 0xd88) = puVar26;
                  base::Mutex::Unlock((Mutex *)(lVar22 + 0xd60));
                  pvVar13 = operator_new(0x410);
                  memset((void *)((long)pvVar13 + 0x20),0,0x3f0);
                  *(void **)(lVar18 + 0xae0) = pvVar13;
                  *(undefined8 *)((long)pvVar13 + 8) = 1;
                  *(ulong *)((long)pvVar13 + 0x10) = uVar23;
                  *(ulong *)((long)pvVar13 + 0x18) = uVar12;
                }
                else {
                  puVar26[1] = lVar24 + 1;
                  puVar26[lVar24 * 2 + 2] = uVar23;
                  puVar26[lVar24 * 2 + 3] = uVar12;
                }
              }
            }
          }
          else if (puVar27 < (uint *)0xfffffffffffffffc) {
            puVar28 = puVar27 + 1;
            uVar15 = *puVar27;
            while( true ) {
              if ((uVar15 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar33,puVar27,
                           (ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15);
              }
              puVar27 = puVar27 + 1;
              if (puVar28 <= puVar27) break;
              uVar15 = *puVar27;
            }
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 != (long)((ulong)uVar29 << 0x20) >> 0x21);
      }
      uVar29 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar31);
      break;
    case 0x12:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1f48;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1f48:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      if ((uint *)(uVar12 + 7) <= puVar28) goto LAB_00fc30a0;
      do {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
        puVar28 = puVar28 + 1;
        uVar29 = 0xc;
      } while (puVar28 < (uint *)(uVar12 + 7));
      break;
    case 0x13:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc1fd4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc1fd4:
      uVar29 = *(int *)(uVar12 + 0xf) * 4 + 0x20;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar15 = *puVar27;
        }
      }
      FeedbackVector::BodyDescriptor::
      IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar31,uVar12,uVar29,this_00);
      break;
    case 0x14:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      if (((uint)*(undefined8 *)(uVar23 + 8) >> 8 & 1) == 0) {
        uVar29 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
                 VisitLeftTrimmableArray<v8::internal::FixedArray>
                           ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar31,
                            uVar12);
      }
      else {
        puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
        uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
        if ((*puVar28 & uVar29) != 0) {
          uVar29 = uVar29 << 1;
          bVar7 = uVar29 == 0;
          puVar32 = puVar28;
          if (bVar7) {
            uVar29 = 1;
            puVar32 = puVar28 + 1;
          }
          while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
            while (*puVar32 == uVar15) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
              if (bVar6) {
                *puVar32 = uVar15 | uVar29;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                local_a8[0] = uVar12;
                iVar10 = HeapObject::SizeFromMap
                                   ((HeapObject *)local_a8,
                                    uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
                *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
                goto LAB_00fc3afc;
              }
            }
            ClearExclusiveLocal();
          }
        }
LAB_00fc3afc:
        local_a8[0] = uVar12;
        iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
        plVar2 = (long *)(uVar23 + 0x60);
        lVar17 = *plVar2;
        iVar10 = (int)lVar17;
        if (iVar10 == 0) {
          if (puVar27 < (uint *)0xfffffffffffffffc) {
            uVar29 = *puVar27;
            puVar28 = puVar27;
            while( true ) {
              if ((uVar29 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar12,puVar28,
                           (ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar29);
              }
              puVar28 = puVar28 + 1;
              if ((uint *)(uVar12 + 3) <= puVar28) break;
              uVar29 = *puVar28;
            }
            iVar10 = 8;
          }
          else {
            iVar10 = 8;
          }
        }
        iVar1 = iVar10 + 0x20000;
        iVar3 = iVar11;
        if (iVar1 <= iVar11) {
          iVar3 = iVar1;
        }
        uVar29 = iVar3 - iVar10;
        if (uVar29 != 0 && iVar10 <= iVar3) {
          for (puVar28 = (uint *)((long)puVar27 + (long)iVar10);
              puVar28 < (uint *)((long)puVar27 + (long)iVar3); puVar28 = puVar28 + 1) {
            if ((*puVar28 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_00,uVar12,puVar28,
                         (ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28);
            }
          }
          do {
            if (*plVar2 != lVar17) {
              ClearExclusiveLocal();
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","success");
            }
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = (long)iVar3;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar1 < iVar11) {
            lVar18 = *(long *)(this_00 + 8);
            puVar21 = (undefined8 *)(lVar18 + (long)*(int *)(this_00 + 0x28) * 0x50);
            puVar26 = (undefined8 *)*puVar21;
            lVar17 = puVar26[1];
            if (lVar17 == 0x40) {
              pMVar14 = (Mutex *)(lVar18 + 0x280);
              base::Mutex::Lock(pMVar14);
              *puVar26 = *(undefined8 *)(lVar18 + 0x2a8);
              *(undefined8 **)(lVar18 + 0x2a8) = puVar26;
              goto LAB_00fc3f30;
            }
            puVar26[1] = lVar17 + 1;
            puVar26[lVar17 + 2] = uVar12;
          }
        }
      }
      break;
    case 0x15:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc2044;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc2044:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < (uint *)(uVar12 + 3));
      }
      uVar29 = (int)*(uint *)(uVar12 + 3) >> 1;
      break;
    case 0x16:
      uVar29 = MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
               ::VisitEmbedderTracingSubclass<v8::internal::JSObject>
                         ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                           *)this_00,uVar31,uVar12);
      break;
    case 0x17:
      uVar29 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
               VisitJSObjectSubclass<v8::internal::JSArrayBuffer,v8::internal::JSArrayBuffer::BodyDescriptor>
                         ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar31,
                          uVar12);
      goto joined_r0x00fc04dc;
    case 0x18:
      uVar29 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
               VisitJSObjectSubclass<v8::internal::JSDataView,v8::internal::JSDataView::BodyDescriptor>
                         ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar31,
                          uVar12);
joined_r0x00fc04dc:
      if ((uVar29 != 0) && (this_00[0x34] != (ObjectVisitor)0x0)) {
        lVar18 = *(long *)(this_00 + 0x10);
        puVar21 = (undefined8 *)(lVar18 + (long)*(int *)(this_00 + 0x28) * 0x50);
        puVar26 = (undefined8 *)*puVar21;
        lVar17 = puVar26[1];
        if (lVar17 == 0x10) {
          base::Mutex::Lock((Mutex *)(lVar18 + 0x280));
          *puVar26 = *(undefined8 *)(lVar18 + 0x2a8);
          *(undefined8 **)(lVar18 + 0x2a8) = puVar26;
          base::Mutex::Unlock((Mutex *)(lVar18 + 0x280));
          pvVar13 = operator_new(0x90);
          *(undefined8 *)((long)pvVar13 + 0x88) = 0;
          *(undefined8 *)((long)pvVar13 + 0x20) = 0;
          *(undefined8 *)((long)pvVar13 + 0x18) = 0;
          *(undefined8 *)((long)pvVar13 + 0x30) = 0;
          *(undefined8 *)((long)pvVar13 + 0x28) = 0;
          *(undefined8 *)((long)pvVar13 + 0x40) = 0;
          *(undefined8 *)((long)pvVar13 + 0x38) = 0;
          *(undefined8 *)((long)pvVar13 + 0x50) = 0;
          *(undefined8 *)((long)pvVar13 + 0x48) = 0;
          *(undefined8 *)((long)pvVar13 + 0x60) = 0;
          *(undefined8 *)((long)pvVar13 + 0x58) = 0;
          *(undefined8 *)((long)pvVar13 + 0x70) = 0;
          *(undefined8 *)((long)pvVar13 + 0x68) = 0;
          *(undefined8 *)((long)pvVar13 + 0x80) = 0;
          *(undefined8 *)((long)pvVar13 + 0x78) = 0;
LAB_00fc2878:
          *puVar21 = pvVar13;
          *(undefined8 *)((long)pvVar13 + 8) = 1;
          *(ulong *)((long)pvVar13 + 0x10) = uVar12;
        }
        else {
LAB_00fc2888:
          puVar26[1] = lVar17 + 1;
          puVar26[lVar17 + 2] = uVar12;
        }
      }
      break;
    case 0x19:
      uVar19 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar19 + 0x10) + (uVar12 + ~uVar19 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar19 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar19 + 0x68) = *(long *)(uVar19 + 0x68) + (long)iVar10;
              goto joined_r0x00fc0f0c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) {
        uVar29 = 0;
        iVar10 = *(int *)(this_00 + 0x30);
      }
      else {
joined_r0x00fc0f0c:
        if (puVar27 < (uint *)0xfffffffffffffffc) {
          uVar29 = *puVar27;
          while( true ) {
            if ((uVar29 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_00,uVar12,puVar27,
                         (ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29);
            }
            puVar27 = puVar27 + 1;
            if ((uint *)(uVar12 + 3) <= puVar27) break;
            uVar29 = *puVar27;
          }
        }
        uVar29 = (uint)*(byte *)(uVar31 + 3) << 2;
        BodyDescriptorBase::
        IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                  (uVar31,uVar12,4,uVar29,this_00);
        iVar10 = *(int *)(this_00 + 0x30);
      }
      if (iVar10 != 0) {
        if ((*(uint *)(uVar12 + 0xb) & 1) != 0) {
          uVar31 = uVar23 | *(uint *)(uVar12 + 0xb);
          if ((((*(uint *)(uVar12 + 0x17) & 1) != 0) &&
              (*(short *)(uVar33 + *(uint *)(uVar31 - 1)) == 0xa6)) &&
             (uVar19 = uVar23 | *(uint *)(uVar12 + 0x17),
             *(short *)(uVar33 + *(uint *)(uVar19 - 1)) == 0x9a)) {
            uVar15 = *(uint *)(uVar31 + 3);
            if (((uVar15 == 0x84) ||
                (((uVar15 & 1) != 0 &&
                 (*(ushort *)(uVar33 + *(uint *)((uVar23 | uVar15) - 1)) - 0x95 < 2)))) &&
               (*(int *)(uVar19 + 0x27) != 0x42)) {
              lVar24 = *(long *)(this_00 + 0x18);
              lVar17 = lVar24 + (long)*(int *)(this_00 + 0x28) * 0x50;
              puVar26 = *(undefined8 **)(lVar17 + 0x1b30);
              lVar18 = puVar26[1];
              if (lVar18 != 0x40) goto LAB_00fc3e40;
              pMVar14 = (Mutex *)(lVar24 + 0x1db0);
              puVar21 = (undefined8 *)(lVar17 + 0x1b30);
              base::Mutex::Lock(pMVar14);
              *puVar26 = *(undefined8 *)(lVar24 + 0x1dd8);
              *(undefined8 **)(lVar24 + 0x1dd8) = puVar26;
              goto LAB_00fc27fc;
            }
          }
        }
      }
      break;
    case 0x1a:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc21d0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc21d0:
      uVar29 = (uint)*(byte *)(uVar31 + 3) << 2;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar15 = *puVar27;
        }
      }
LAB_00fc3244:
      BodyDescriptorBase::
      IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar31,uVar12,4,uVar29,this_00);
      break;
    case 0x1b:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc3158;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc3158:
      bVar4 = *(byte *)(uVar31 + 3);
      puVar28 = (uint *)(uVar12 + 3);
      uVar29 = (uint)bVar4 * 4;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar32 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,(ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar32 = puVar32 + 1;
          if (puVar28 <= puVar32) break;
          uVar15 = *puVar32;
        }
      }
      for (; puVar28 < puVar27 + bVar4; puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0x1c:
      uVar29 = MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
               ::VisitEmbedderTracingSubclass<v8::internal::JSTypedArray>
                         ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                           *)this_00,uVar31,uVar12);
      break;
    case 0x1d:
      uVar29 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
               VisitJSObjectSubclass<v8::internal::JSWeakRef,v8::internal::JSWeakRef::BodyDescriptor>
                         ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar31,
                          uVar12);
      if (uVar29 != 0) {
        uVar15 = *(uint *)(uVar12 + 0xb);
        if ((uVar15 & 1) != 0) {
          uVar23 = uVar23 | (ulong)uVar15 & 0xfffffffffffc0000;
          uVar33 = uVar15 - uVar23;
          if ((*(uint *)(*(long *)(uVar23 + 0x10) + (uVar33 >> 7 & 0x1ffffff) * 4) >>
               (ulong)((uint)(uVar33 >> 2) & 0x1f) & 1) == 0) {
            lVar24 = *(long *)(this_00 + 0x18);
            lVar17 = lVar24 + (long)*(int *)(this_00 + 0x28) * 0x50;
            puVar26 = *(undefined8 **)(lVar17 + 0x1308);
            lVar18 = puVar26[1];
            if (lVar18 == 0x40) {
              pMVar14 = (Mutex *)(lVar24 + 0x1588);
              puVar21 = (undefined8 *)(lVar17 + 0x1308);
              base::Mutex::Lock(pMVar14);
              *puVar26 = *(undefined8 *)(lVar24 + 0x15b0);
              *(undefined8 **)(lVar24 + 0x15b0) = puVar26;
              goto LAB_00fc27fc;
            }
LAB_00fc3e40:
            puVar26[1] = lVar18 + 1;
            puVar26[lVar18 + 2] = uVar12;
          }
          else if (((uint)*(undefined8 *)(uVar23 + 8) >> 6 & 1) != 0) {
            uVar23 = *(ulong *)((MemoryChunk *)(uVar12 & 0xfffffffffffc0000) + 8);
            if ((((uint)uVar23 >> 0xf & 1) != 0) || ((uVar23 & 0x58) == 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        ((MemoryChunk *)(uVar12 & 0xfffffffffffc0000),uVar12 + 0xb);
            }
          }
        }
      }
      break;
    case 0x1e:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc31f4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fc31f4:
        uVar29 = (uint)*(byte *)(uVar31 + 3) << 2;
        if (puVar27 < (uint *)0xfffffffffffffffc) {
          uVar15 = *puVar27;
          while( true ) {
            if ((uVar15 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_00,uVar12,puVar27,
                         (ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15);
            }
            puVar27 = puVar27 + 1;
            if ((uint *)(uVar12 + 3) <= puVar27) break;
            uVar15 = *puVar27;
          }
        }
        goto LAB_00fc3244;
      }
LAB_00fc3a78:
      uVar29 = 0;
      break;
    case 0x1f:
      uVar33 = uVar12 & 0xfffffffffffc0000;
      puVar27 = (uint *)(*(long *)(uVar33 + 0x10) + (uVar12 + ~uVar33 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar33 >> 2) & 0x1f);
      if ((*puVar27 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar28 = puVar27;
        if (bVar7) {
          uVar29 = 1;
          puVar28 = puVar27 + 1;
        }
        while (uVar15 = puVar27[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar28 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar28,0x10);
            if (bVar6) {
              *puVar28 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar33 + 0x68) = *(long *)(uVar33 + 0x68) + (long)iVar10;
              goto LAB_00fc2228;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc2228:
      if (0xa9 < *(ushort *)(uVar12 + 7)) {
        uVar31 = uVar23 | *(uint *)(uVar12 + 0x17);
        uVar33 = uVar23 | (ulong)*(uint *)(uVar12 + 0x17) & 0xfffffffffffc0000;
        puVar27 = (uint *)(*(long *)(uVar33 + 0x10) + (uVar31 - uVar33 >> 7 & 0x1ffffff) * 4);
        while( true ) {
          uVar29 = *puVar27;
          uVar15 = (uint)(1L << (uVar31 - uVar33 >> 2 & 0x1f));
          if ((uVar15 & (uVar29 ^ 0xffffffff)) == 0) break;
          while (*puVar27 == uVar29) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar27,0x10);
            if (bVar7) {
              *puVar27 = uVar29 | uVar15;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00fc2290;
          }
          ClearExclusiveLocal();
        }
LAB_00fc2290:
        puVar27 = (uint *)(*(long *)(uVar33 + 0x10) + (uVar31 + ~uVar33 >> 7 & 0x1ffffff) * 4);
        uVar29 = 1 << (ulong)((uint)(uVar31 + ~uVar33 >> 2) & 0x1f);
        local_a8[0] = uVar31;
        if ((*puVar27 & uVar29) != 0) {
          uVar29 = uVar29 << 1;
          bVar7 = uVar29 == 0;
          puVar28 = puVar27;
          if (bVar7) {
            uVar29 = 1;
            puVar28 = puVar27 + 1;
          }
          while (uVar15 = puVar27[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
            while (*puVar28 == uVar15) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar28,0x10);
              if (bVar6) {
                *puVar28 = uVar15 | uVar29;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                iVar10 = HeapObject::SizeFromMap
                                   ((HeapObject *)local_a8,uVar23 | *(uint *)(uVar31 - 1));
                puVar27 = (uint *)(uVar31 - 1);
                *(long *)(uVar33 + 0x68) = *(long *)(uVar33 + 0x68) + (long)iVar10;
                if (puVar27 < (uint *)0xfffffffffffffffc) {
                  uVar29 = *puVar27;
                  while( true ) {
                    if ((uVar29 & 1) != 0) {
                      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                                ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                                  *)this_00,uVar31,puVar27,
                                 (ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29);
                    }
                    puVar27 = puVar27 + 1;
                    if ((uint *)(uVar31 + 3) <= puVar27) break;
                    uVar29 = *puVar27;
                  }
                }
                for (puVar27 = (uint *)(uVar31 + 0xb); puVar27 < (uint *)(uVar31 + 0xf);
                    puVar27 = puVar27 + 1) {
                  if ((*puVar27 & 1) != 0) {
                    MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                              ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                                *)this_00,uVar31,puVar27,
                               (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
                  }
                }
                goto LAB_00fc3c1c;
              }
            }
            ClearExclusiveLocal();
          }
        }
LAB_00fc3c1c:
        uVar29 = *(uint *)(uVar12 + 0xb) >> 10 & 0x3ff;
        if (uVar29 != 0) {
          uVar15 = (int)*(short *)(uVar31 + 5);
          if ((int)uVar29 <= (int)*(short *)(uVar31 + 5)) {
            uVar15 = uVar29;
          }
          local_a8[0] = uVar31;
          sVar9 = DescriptorArray::UpdateNumberOfMarkedDescriptors
                            ((DescriptorArray *)local_a8,*(uint *)(this_00 + 0x2c),(short)uVar15);
          uVar23 = local_a8[0];
          if ((int)sVar9 < (int)uVar15) {
            puVar28 = (uint *)(local_a8[0] + (long)(int)(uVar15 * 0xc + 0xf));
            for (puVar27 = (uint *)(local_a8[0] + (long)(sVar9 * 0xc + 0xf)); puVar27 < puVar28;
                puVar27 = puVar27 + 1) {
              uVar29 = *puVar27;
              uVar33 = (ulong)uVar29 & 3;
              if (uVar33 == 1) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar23,puVar27);
              }
              else if ((uVar29 != 3) && (uVar33 == 3)) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar23,puVar27,
                           (ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29 & 0xfffffffffffffffd)
                ;
              }
            }
          }
        }
      }
      puVar28 = (uint *)(uVar12 + 0x23);
      for (puVar27 = (uint *)(uVar12 + 0xf); puVar27 < puVar28; puVar27 = puVar27 + 1) {
        if ((*puVar27 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27
                    );
        }
      }
      if (puVar28 < (uint *)0xfffffffffffffffc) {
        do {
          uVar29 = *puVar28;
          uVar23 = (ulong)uVar29 & 3;
          if (uVar23 == 1) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28);
          }
          else if ((uVar29 != 3) && (uVar23 == 3)) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,
                       (ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar29 & 0xfffffffffffffffd);
          }
          puVar28 = puVar28 + 1;
          uVar29 = 0x28;
        } while (puVar28 < (uint *)(uVar12 + 0x27));
      }
      else {
        uVar29 = 0x28;
      }
      break;
    case 0x20:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc2318;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc2318:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      if (puVar28 < (uint *)(uVar12 + 0x417)) {
        do {
          if ((*puVar28 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,
                       (ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28);
          }
          puVar28 = puVar28 + 1;
          uVar29 = 0x42c;
        } while (puVar28 < (uint *)(uVar12 + 0x417));
      }
      else {
        uVar29 = 0x42c;
      }
      break;
    case 0x21:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto joined_r0x00fc0fb4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
joined_r0x00fc0fb4:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      puVar27 = (uint *)(uVar12 + 0xb);
      if (puVar27 < (uint *)(uVar12 + 0x1b)) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
          uVar29 = 0x1c;
        } while (puVar27 < (uint *)(uVar12 + 0x1b));
      }
      else {
        uVar29 = 0x1c;
      }
      break;
    case 0x22:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc2440;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc2440:
      uVar16 = *(uint *)(uVar12 + 3) + 0xf & 0xfffffffc;
      uVar29 = uVar16 + *(int *)(uVar12 + 7) * 4;
      uVar15 = uVar29;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar28 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar28 = puVar28 + 1;
          if ((uint *)(uVar12 + 3) <= puVar28) break;
          uVar15 = *puVar28;
        }
        uVar16 = *(int *)(uVar12 + 3) + 0xfU & 0xfffffffc;
        uVar15 = uVar16 + *(int *)(uVar12 + 7) * 4;
      }
      for (puVar28 = (uint *)((long)puVar27 + (long)(int)uVar16);
          puVar28 < (uint *)((long)puVar27 + (long)(int)uVar15); puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0x23:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc161c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc161c:
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar28 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar28 = puVar28 + 1;
          if ((uint *)(uVar12 + 3) <= puVar28) break;
          uVar15 = *puVar28;
        }
      }
      for (puVar28 = (uint *)(uVar12 + 7); puVar28 < (uint *)((long)puVar27 + (long)(int)uVar29);
          puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0x24:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc3670;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc3670:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      if ((uint *)(uVar12 + 0x13) <= puVar28) goto LAB_00fc3930;
      do {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
        puVar28 = puVar28 + 1;
        uVar29 = 0x14;
      } while (puVar28 < (uint *)(uVar12 + 0x13));
      break;
    case 0x25:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc16c4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc16c4:
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar15 = *puVar27;
        }
      }
      PrototypeInfo::BodyDescriptor::
      IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar31,uVar12,uVar29,this_00);
      break;
    case 0x26:
      uVar19 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar19 + 0x10) + (uVar12 + ~uVar19 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar19 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar19 + 0x68) = *(long *)(uVar19 + 0x68) + (long)iVar10;
              goto LAB_00fc173c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc173c:
      bVar4 = *(byte *)(uVar31 + 3);
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      uVar29 = (uint)bVar4 << 2;
      (**(code **)(*(long *)this_00 + 0x38))(this_00,uVar12,puVar28);
      puVar27 = (uint *)(uVar12 + 7);
      if (puVar27 < (uint *)(uVar12 + 0x13)) {
        uVar15 = *puVar27;
        puVar32 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,(ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar32 = puVar32 + 1;
          if ((uint *)(uVar12 + 0x13) <= puVar32) break;
          uVar15 = *puVar32;
        }
      }
      if (((((*(int *)(this_00 + 0x30) == 0) ||
            (uVar15 = *(uint *)(uVar12 + 0x1b) & 0x1f, uVar15 - 10 < 7)) || (uVar15 - 1 < 2)) ||
          (((*(uint *)(uVar12 + 0x1b) >> 0xc & 1) == 0 || ((*puVar28 & 1) == 0)))) ||
         ((uVar23 = uVar23 | *puVar28, *(short *)(uVar33 + *(uint *)(uVar23 - 1)) != 0x86 ||
          ((*(int *)(this_00 + 0x30) != 2 &&
           (local_a8[0] = uVar23, uVar23 = BytecodeArray::IsOld((BytecodeArray *)local_a8),
           (uVar23 & 1) == 0)))))) {
        if (puVar28 < (uint *)0xfffffffffffffffc) {
          do {
            if ((*puVar28 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_00,uVar12,puVar28,
                         (ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28);
            }
            puVar28 = puVar28 + 1;
          } while (puVar28 < puVar27);
        }
      }
      else {
        lVar24 = *(long *)(this_00 + 0x18);
        lVar17 = lVar24 + (long)*(int *)(this_00 + 0x28) * 0x50;
        puVar26 = *(undefined8 **)(lVar17 + 0x1878);
        lVar18 = puVar26[1];
        if (lVar18 == 0x40) {
          pMVar14 = (Mutex *)(lVar24 + 0x1af8);
          puVar21 = (undefined8 *)(lVar17 + 0x1878);
          base::Mutex::Lock(pMVar14);
          *puVar26 = *(undefined8 *)(lVar24 + 0x1b20);
          *(undefined8 **)(lVar24 + 0x1b20) = puVar26;
LAB_00fc3f30:
          base::Mutex::Unlock(pMVar14);
          pvVar13 = operator_new(0x210);
          *(undefined8 *)((long)pvVar13 + 0x20) = 0;
          *(undefined8 *)((long)pvVar13 + 0x18) = 0;
          *(undefined8 *)((long)pvVar13 + 0x110) = 0;
          *(undefined8 *)((long)pvVar13 + 0x108) = 0;
          *(undefined8 *)((long)pvVar13 + 0x120) = 0;
          *(undefined8 *)((long)pvVar13 + 0x118) = 0;
          *(undefined8 *)((long)pvVar13 + 0x130) = 0;
          *(undefined8 *)((long)pvVar13 + 0x128) = 0;
          *(undefined8 *)((long)pvVar13 + 0x140) = 0;
          *(undefined8 *)((long)pvVar13 + 0x138) = 0;
          *(undefined8 *)((long)pvVar13 + 0x150) = 0;
          *(undefined8 *)((long)pvVar13 + 0x148) = 0;
          *(undefined8 *)((long)pvVar13 + 0x160) = 0;
          *(undefined8 *)((long)pvVar13 + 0x158) = 0;
          *(undefined8 *)((long)pvVar13 + 0x170) = 0;
          *(undefined8 *)((long)pvVar13 + 0x168) = 0;
          *(undefined8 *)((long)pvVar13 + 0x180) = 0;
          *(undefined8 *)((long)pvVar13 + 0x178) = 0;
          *(undefined8 *)((long)pvVar13 + 400) = 0;
          *(undefined8 *)((long)pvVar13 + 0x188) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1a0) = 0;
          *(undefined8 *)((long)pvVar13 + 0x198) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1b0) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1a8) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1c0) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1b8) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1d0) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1c8) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1e0) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1d8) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1f0) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1e8) = 0;
          *(undefined8 *)((long)pvVar13 + 0x200) = 0;
          *(undefined8 *)((long)pvVar13 + 0x1f8) = 0;
          *(undefined8 *)((long)pvVar13 + 0x208) = 0;
          *(undefined8 *)((long)pvVar13 + 0x30) = 0;
          *(undefined8 *)((long)pvVar13 + 0x28) = 0;
          *(undefined8 *)((long)pvVar13 + 0x40) = 0;
          *(undefined8 *)((long)pvVar13 + 0x38) = 0;
          *(undefined8 *)((long)pvVar13 + 0x50) = 0;
          *(undefined8 *)((long)pvVar13 + 0x48) = 0;
          *(undefined8 *)((long)pvVar13 + 0x60) = 0;
          *(undefined8 *)((long)pvVar13 + 0x58) = 0;
          *(undefined8 *)((long)pvVar13 + 0x70) = 0;
          *(undefined8 *)((long)pvVar13 + 0x68) = 0;
          *(undefined8 *)((long)pvVar13 + 0x80) = 0;
          *(undefined8 *)((long)pvVar13 + 0x78) = 0;
          *(undefined8 *)((long)pvVar13 + 0x90) = 0;
          *(undefined8 *)((long)pvVar13 + 0x88) = 0;
          *(undefined8 *)((long)pvVar13 + 0xa0) = 0;
          *(undefined8 *)((long)pvVar13 + 0x98) = 0;
          *(undefined8 *)((long)pvVar13 + 0xb0) = 0;
          *(undefined8 *)((long)pvVar13 + 0xa8) = 0;
          *(undefined8 *)((long)pvVar13 + 0xc0) = 0;
          *(undefined8 *)((long)pvVar13 + 0xb8) = 0;
          *(undefined8 *)((long)pvVar13 + 0xd0) = 0;
          *(undefined8 *)((long)pvVar13 + 200) = 0;
          *(undefined8 *)((long)pvVar13 + 0xe0) = 0;
          *(undefined8 *)((long)pvVar13 + 0xd8) = 0;
          *(undefined8 *)((long)pvVar13 + 0xf0) = 0;
          *(undefined8 *)((long)pvVar13 + 0xe8) = 0;
          *(undefined8 *)((long)pvVar13 + 0x100) = 0;
          *(undefined8 *)((long)pvVar13 + 0xf8) = 0;
          *puVar21 = pvVar13;
          *(undefined8 *)((long)pvVar13 + 8) = 1;
          *(ulong *)((long)pvVar13 + 0x10) = uVar12;
        }
        else {
          puVar26[1] = lVar18 + 1;
          puVar26[lVar18 + 2] = uVar12;
        }
      }
      break;
    case 0x27:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto joined_r0x00fc136c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
joined_r0x00fc136c:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      puVar27 = (uint *)(uVar12 + 0xb);
      if ((uint *)(uVar12 + 0x13) <= puVar27) goto LAB_00fc3930;
      do {
        if ((*puVar27 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27
                    );
        }
        puVar27 = puVar27 + 1;
        uVar29 = 0x14;
      } while (puVar27 < (uint *)(uVar12 + 0x13));
      break;
    case 0x28:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto joined_r0x00fc139c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
joined_r0x00fc139c:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      puVar27 = (uint *)(uVar12 + 0xb);
      if ((uint *)(uVar12 + 0x13) <= puVar27) goto LAB_00fc3930;
      do {
        if ((*puVar27 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27
                    );
        }
        puVar27 = puVar27 + 1;
        uVar29 = 0x14;
      } while (puVar27 < (uint *)(uVar12 + 0x13));
      break;
    case 0x29:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc2500;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc2500:
      bVar4 = *(byte *)(uVar12 + 5);
      uVar29 = (uint)bVar4 * 0x13 + 0xb & 0x3ffc;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar28 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar28 = puVar28 + 1;
          if ((uint *)(uVar12 + 3) <= puVar28) break;
          uVar15 = *puVar28;
        }
        bVar4 = *(byte *)(uVar12 + 5);
      }
      for (puVar28 = (uint *)(uVar12 + 7);
          puVar28 < (uint *)(((ulong)bVar4 << 4 | 8) + (long)puVar27); puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0x2a:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc25b4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc25b4:
      bVar4 = *(byte *)(uVar12 + 5);
      uVar29 = (uint)bVar4 * 0xb + 0xb & 0x1ffc;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar15 = *puVar27;
        }
        bVar4 = *(byte *)(uVar12 + 5);
      }
      puVar28 = (uint *)(uVar12 + 7);
      puVar27 = puVar28 + (ulong)bVar4 * 2;
      for (; puVar28 < puVar27; puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0x2b:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc3390;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc3390:
      bVar4 = *(byte *)(uVar12 + 9);
      uVar29 = (uint)bVar4 * 0x1b + 0xf & 0x3ffc;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar15 = *puVar27;
        }
        bVar4 = *(byte *)(uVar12 + 9);
      }
      puVar27 = (uint *)(uVar12 + 0xb);
      puVar28 = puVar27 + (ulong)bVar4 * 6;
      for (; puVar27 < puVar28; puVar27 = puVar27 + 1) {
        if ((*puVar27 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27
                    );
        }
      }
      break;
    case 0x2c:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc36fc;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc36fc:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      puVar27 = (uint *)(uVar12 + 0x17);
      for (; puVar28 < puVar27; puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      if (puVar27 < (uint *)(uVar12 + 0x47)) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
          uVar29 = 0x48;
        } while (puVar27 < (uint *)(uVar12 + 0x47));
      }
      else {
        uVar29 = 0x48;
      }
      break;
    case 0x2d:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc265c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc265c:
      bVar4 = *(byte *)(uVar31 + 3);
      puVar28 = (uint *)(uVar12 + 3);
      uVar29 = (uint)bVar4 * 4;
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar32 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,(ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar32 = puVar32 + 1;
          if (puVar28 <= puVar32) break;
          uVar15 = *puVar32;
        }
      }
      for (; puVar28 < puVar27 + bVar4; puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0x2e:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto joined_r0x00fc13f4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
joined_r0x00fc13f4:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      puVar27 = (uint *)(uVar12 + 0xb);
      if (puVar27 < (uint *)(uVar12 + 0xf)) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
          uVar29 = 0x10;
        } while (puVar27 < (uint *)(uVar12 + 0xf));
      }
      else {
LAB_00fc3014:
        uVar29 = 0x10;
      }
      break;
    case 0x2f:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc37cc;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc37cc:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      for (; puVar28 < (uint *)(uVar12 + 0x17); puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      puVar27 = (uint *)(uVar12 + 0x1b);
      if (puVar27 < (uint *)(uVar12 + 0x23)) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
          uVar29 = 0x24;
        } while (puVar27 < (uint *)(uVar12 + 0x23));
      }
      else {
        uVar29 = 0x24;
      }
      break;
    case 0x30:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto joined_r0x00fc0dc4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
joined_r0x00fc0dc4:
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar27 = puVar27 + 1;
          if ((uint *)(uVar12 + 3) <= puVar27) break;
          uVar29 = *puVar27;
        }
      }
      puVar27 = (uint *)(uVar12 + 0xb);
      if ((uint *)(uVar12 + 0xf) <= puVar27) goto LAB_00fc3014;
      do {
        if ((*puVar27 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27
                    );
        }
        puVar27 = puVar27 + 1;
        uVar29 = 0x10;
      } while (puVar27 < (uint *)(uVar12 + 0xf));
      break;
    case 0x31:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc26f8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc26f8:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        puVar32 = puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,(ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar32 = puVar32 + 1;
          if (puVar28 <= puVar32) break;
          uVar29 = *puVar32;
        }
      }
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      for (; puVar28 < (uint *)((long)puVar27 + (long)(int)uVar29); puVar28 = puVar28 + 1) {
        uVar15 = *puVar28;
        uVar23 = (ulong)uVar15 & 3;
        if (uVar23 == 1) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28);
        }
        else if ((uVar15 != 3) && (uVar23 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,
                     (ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15 & 0xfffffffffffffffd);
        }
      }
      lVar18 = *(long *)(this_00 + 0x18);
      puVar21 = (undefined8 *)(lVar18 + (long)*(int *)(this_00 + 0x28) * 0x50);
      puVar26 = (undefined8 *)*puVar21;
      lVar17 = puVar26[1];
      if (lVar17 != 0x40) goto LAB_00fc2888;
      pMVar14 = (Mutex *)(lVar18 + 0x280);
      base::Mutex::Lock(pMVar14);
      *puVar26 = *(undefined8 *)(lVar18 + 0x2a8);
      *(undefined8 **)(lVar18 + 0x2a8) = puVar26;
LAB_00fc27fc:
      base::Mutex::Unlock(pMVar14);
      pvVar13 = operator_new(0x210);
      *(undefined8 *)((long)pvVar13 + 0x20) = 0;
      *(undefined8 *)((long)pvVar13 + 0x18) = 0;
      *(undefined8 *)((long)pvVar13 + 0x110) = 0;
      *(undefined8 *)((long)pvVar13 + 0x108) = 0;
      *(undefined8 *)((long)pvVar13 + 0x120) = 0;
      *(undefined8 *)((long)pvVar13 + 0x118) = 0;
      *(undefined8 *)((long)pvVar13 + 0x130) = 0;
      *(undefined8 *)((long)pvVar13 + 0x128) = 0;
      *(undefined8 *)((long)pvVar13 + 0x140) = 0;
      *(undefined8 *)((long)pvVar13 + 0x138) = 0;
      *(undefined8 *)((long)pvVar13 + 0x150) = 0;
      *(undefined8 *)((long)pvVar13 + 0x148) = 0;
      *(undefined8 *)((long)pvVar13 + 0x160) = 0;
      *(undefined8 *)((long)pvVar13 + 0x158) = 0;
      *(undefined8 *)((long)pvVar13 + 0x170) = 0;
      *(undefined8 *)((long)pvVar13 + 0x168) = 0;
      *(undefined8 *)((long)pvVar13 + 0x180) = 0;
      *(undefined8 *)((long)pvVar13 + 0x178) = 0;
      *(undefined8 *)((long)pvVar13 + 400) = 0;
      *(undefined8 *)((long)pvVar13 + 0x188) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1a0) = 0;
      *(undefined8 *)((long)pvVar13 + 0x198) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1b0) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1a8) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1c0) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1b8) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1d0) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1c8) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1e0) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1d8) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1f0) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1e8) = 0;
      *(undefined8 *)((long)pvVar13 + 0x200) = 0;
      *(undefined8 *)((long)pvVar13 + 0x1f8) = 0;
      *(undefined8 *)((long)pvVar13 + 0x208) = 0;
      *(undefined8 *)((long)pvVar13 + 0x30) = 0;
      *(undefined8 *)((long)pvVar13 + 0x28) = 0;
      *(undefined8 *)((long)pvVar13 + 0x40) = 0;
      *(undefined8 *)((long)pvVar13 + 0x38) = 0;
      *(undefined8 *)((long)pvVar13 + 0x50) = 0;
      *(undefined8 *)((long)pvVar13 + 0x48) = 0;
      *(undefined8 *)((long)pvVar13 + 0x60) = 0;
      *(undefined8 *)((long)pvVar13 + 0x58) = 0;
      *(undefined8 *)((long)pvVar13 + 0x70) = 0;
      *(undefined8 *)((long)pvVar13 + 0x68) = 0;
      *(undefined8 *)((long)pvVar13 + 0x80) = 0;
      *(undefined8 *)((long)pvVar13 + 0x78) = 0;
      *(undefined8 *)((long)pvVar13 + 0x90) = 0;
      *(undefined8 *)((long)pvVar13 + 0x88) = 0;
      *(undefined8 *)((long)pvVar13 + 0xa0) = 0;
      *(undefined8 *)((long)pvVar13 + 0x98) = 0;
      *(undefined8 *)((long)pvVar13 + 0xb0) = 0;
      *(undefined8 *)((long)pvVar13 + 0xa8) = 0;
      *(undefined8 *)((long)pvVar13 + 0xc0) = 0;
      *(undefined8 *)((long)pvVar13 + 0xb8) = 0;
      *(undefined8 *)((long)pvVar13 + 0xd0) = 0;
      *(undefined8 *)((long)pvVar13 + 200) = 0;
      *(undefined8 *)((long)pvVar13 + 0xe0) = 0;
      *(undefined8 *)((long)pvVar13 + 0xd8) = 0;
      *(undefined8 *)((long)pvVar13 + 0xf0) = 0;
      *(undefined8 *)((long)pvVar13 + 0xe8) = 0;
      *(undefined8 *)((long)pvVar13 + 0x100) = 0;
      *(undefined8 *)((long)pvVar13 + 0xf8) = 0;
      goto LAB_00fc2878;
    case 0x32:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc28a8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc28a8:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      if ((uint *)(uVar12 + 7) <= puVar28) goto LAB_00fc3014;
      do {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
        puVar28 = puVar28 + 1;
        uVar29 = 0x10;
      } while (puVar28 < (uint *)(uVar12 + 7));
      break;
    case 0x33:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc38a0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc38a0:
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar27 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar27,
                       (ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27);
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 < puVar28);
      }
      for (; puVar28 < (uint *)(uVar12 + 7); puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      puVar27 = (uint *)(uVar12 + 0xf);
      if ((uint *)(uVar12 + 0x13) <= puVar27) goto LAB_00fc3930;
      do {
        if ((*puVar27 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar27,(ulong)puVar27 & 0xffffffff00000000 | (ulong)*puVar27
                    );
        }
        puVar27 = puVar27 + 1;
        uVar29 = 0x14;
      } while (puVar27 < (uint *)(uVar12 + 0x13));
      break;
    case 0x34:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc3974;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc3974:
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar28 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar28 = puVar28 + 1;
          if ((uint *)(uVar12 + 3) <= puVar28) break;
          uVar15 = *puVar28;
        }
      }
      for (puVar28 = (uint *)(uVar12 + 0xb); puVar28 < (uint *)((long)puVar27 + (long)(int)uVar29);
          puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0x35:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc3a1c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc3a1c:
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar28 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar28 = puVar28 + 1;
          if ((uint *)(uVar12 + 3) <= puVar28) break;
          uVar15 = *puVar28;
        }
      }
      for (puVar28 = (uint *)(uVar12 + 0x17); puVar28 < (uint *)((long)puVar27 + (long)(int)uVar29);
          puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      break;
    case 0x36:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc18f4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc18f4:
      bVar4 = *(byte *)(uVar31 + 3);
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        puVar32 = puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,(ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar32 = puVar32 + 1;
          if (puVar28 <= puVar32) break;
          uVar29 = *puVar32;
        }
      }
      uVar29 = (uint)bVar4 << 2;
      for (; puVar28 < (uint *)(uVar12 + 0xb); puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      puVar20 = &WasmInstanceObject::kTaggedFieldOffsets;
      do {
        puVar28 = (uint *)((long)puVar27 + (ulong)*puVar20);
        if (puVar28 < (uint *)0xfffffffffffffffc) {
          puVar32 = puVar28 + 1;
          uVar15 = *puVar28;
          while( true ) {
            if ((uVar15 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_00,uVar12,puVar28,
                         (ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15);
            }
            puVar28 = puVar28 + 1;
            if (puVar32 <= puVar28) break;
            uVar15 = *puVar28;
          }
        }
        puVar20 = puVar20 + 1;
      } while (puVar20 != (ushort *)&DAT_019f0a14);
      BodyDescriptorBase::
      IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar31,uVar12,0xc4,uVar29,this_00);
      break;
    case 0x37:
      uVar23 = uVar12 & 0xfffffffffffc0000;
      puVar28 = (uint *)(*(long *)(uVar23 + 0x10) + (uVar12 + ~uVar23 >> 7 & 0x1ffffff) * 4);
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~uVar23 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(uVar23 + 0x68) = *(long *)(uVar23 + 0x68) + (long)iVar10;
              goto LAB_00fc343c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc343c:
      local_a8[0] = uVar12;
      uVar29 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar31);
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar27;
        puVar32 = puVar27;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,(ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar32 = puVar32 + 1;
          if (puVar28 <= puVar32) break;
          uVar15 = *puVar32;
        }
      }
      for (; puVar28 < (uint *)((long)puVar27 + (long)(int)uVar29); puVar28 = puVar28 + 1) {
        while( true ) {
          uVar15 = *puVar28;
          uVar23 = (ulong)uVar15 & 3;
          if (uVar23 == 1) break;
          if ((uVar15 != 3) && (uVar23 == 3)) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar28,
                       (ulong)puVar28 & 0xffffffff00000000 | (ulong)uVar15 & 0xfffffffffffffffd);
          }
          puVar28 = puVar28 + 1;
          if ((uint *)((long)puVar27 + (long)(int)uVar29) <= puVar28) goto LAB_00fc3a7c;
        }
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this_00,uVar12,puVar28);
      }
      break;
    case 0x38:
      pMVar30 = (MemoryChunk *)(uVar12 & 0xfffffffffffc0000);
      puVar28 = (uint *)(*(long *)(pMVar30 + 0x10) + (uVar12 + ~(ulong)pMVar30 >> 7 & 0x1ffffff) * 4
                        );
      uVar29 = 1 << (ulong)((uint)(uVar12 + ~(ulong)pMVar30 >> 2) & 0x1f);
      if ((*puVar28 & uVar29) != 0) {
        uVar29 = uVar29 << 1;
        bVar7 = uVar29 == 0;
        puVar32 = puVar28;
        if (bVar7) {
          uVar29 = 1;
          puVar32 = puVar28 + 1;
        }
        while (uVar15 = puVar28[bVar7], (uVar29 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar32 == uVar15) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar32,0x10);
            if (bVar6) {
              *puVar32 = uVar15 | uVar29;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') {
              local_a8[0] = uVar12;
              iVar10 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1));
              *(long *)(pMVar30 + 0x68) = *(long *)(pMVar30 + 0x68) + (long)iVar10;
              goto LAB_00fc3518;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar12;
      if (this_00[0x40] == (ObjectVisitor)0x0) goto LAB_00fc3a78;
LAB_00fc3518:
      bVar4 = *(byte *)(uVar31 + 3);
      puVar28 = (uint *)(uVar12 + 3);
      if (puVar27 < (uint *)0xfffffffffffffffc) {
        uVar29 = *puVar27;
        puVar32 = puVar27;
        while( true ) {
          if ((uVar29 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar12,puVar32,(ulong)puVar32 & 0xffffffff00000000 | (ulong)uVar29
                      );
          }
          puVar32 = puVar32 + 1;
          if (puVar28 <= puVar32) break;
          uVar29 = *puVar32;
        }
      }
      puVar32 = (uint *)(uVar12 + 7);
      uVar29 = (uint)bVar4 * 4;
      for (; puVar28 < puVar32; puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      (**(code **)(*(long *)this_00 + 0x38))(this_00,uVar12,puVar32);
      for (puVar28 = (uint *)(uVar12 + 0xb); puVar28 < puVar27 + bVar4; puVar28 = puVar28 + 1) {
        if ((*puVar28 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar12,puVar28,(ulong)puVar28 & 0xffffffff00000000 | (ulong)*puVar28
                    );
        }
      }
      uVar15 = *puVar32;
      if ((uVar15 & 1) != 0) {
        uVar23 = uVar23 | (ulong)uVar15 & 0xfffffffffffc0000;
        uVar33 = uVar15 - uVar23;
        if ((*(uint *)(*(long *)(uVar23 + 0x10) + (uVar33 >> 7 & 0x1ffffff) * 4) >>
             (ulong)((uint)(uVar33 >> 2) & 0x1f) & 1) == 0) {
          lVar24 = *(long *)(this_00 + 0x18);
          lVar17 = lVar24 + (long)*(int *)(this_00 + 0x28) * 0x50;
          puVar26 = *(undefined8 **)(lVar17 + 0x15c0);
          lVar18 = puVar26[1];
          if (lVar18 != 0x40) goto LAB_00fc3e40;
          pMVar14 = (Mutex *)(lVar24 + 0x1840);
          puVar21 = (undefined8 *)(lVar17 + 0x15c0);
          base::Mutex::Lock(pMVar14);
          *puVar26 = *(undefined8 *)(lVar24 + 0x1868);
          *(undefined8 **)(lVar24 + 0x1868) = puVar26;
          goto LAB_00fc27fc;
        }
        if ((((uint)*(undefined8 *)(uVar23 + 8) >> 6 & 1) != 0) &&
           ((((uint)*(ulong *)(pMVar30 + 8) >> 0xf & 1) != 0 ||
            ((*(ulong *)(pMVar30 + 8) & 0x58) == 0)))) {
          RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                    (pMVar30,(ulong)puVar32);
        }
      }
    }
LAB_00fc3a7c:
    uVar25 = uVar25 + (long)(int)uVar29;
    if (param_1 - 1 < uVar25) {
      return uVar25;
    }
  } while( true );
}

