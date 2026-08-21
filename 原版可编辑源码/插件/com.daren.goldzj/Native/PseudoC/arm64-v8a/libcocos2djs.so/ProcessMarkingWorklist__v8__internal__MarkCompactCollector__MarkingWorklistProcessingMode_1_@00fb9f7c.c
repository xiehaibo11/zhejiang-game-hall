
/* unsigned long
   v8::internal::MarkCompactCollector::ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)1>(unsigned
   long) */

ulong __thiscall
v8::internal::MarkCompactCollector::
ProcessMarkingWorklist<(v8::internal::MarkCompactCollector::MarkingWorklistProcessingMode)1>
          (MarkCompactCollector *this,ulong param_1)

{
  int iVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  MemoryChunk *pMVar21;
  ushort *puVar22;
  undefined8 *puVar23;
  uint *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  Mutex *this_00;
  ObjectVisitor *this_01;
  uint *puVar31;
  uint uVar32;
  ulong uVar33;
  ulong local_a8 [8];
  ulong local_68;
  
  uVar27 = 0;
  do {
    do {
      local_a8[0] = 0;
      uVar13 = Worklist<v8::internal::HeapObject,64>::Pop
                         ((Worklist<v8::internal::HeapObject,64> *)(this + 0x58),0,
                          (HeapObject *)local_a8);
      if ((uVar13 & 1) == 0) {
        uVar13 = Worklist<v8::internal::HeapObject,64>::Pop
                           ((Worklist<v8::internal::HeapObject,64> *)(this + 0x310),0,
                            (HeapObject *)local_a8);
        if ((uVar13 & 1) == 0) {
          local_a8[0] = 0;
        }
        iVar11 = (int)local_a8[0];
        uVar13 = local_a8[0];
      }
      else {
        iVar11 = (int)local_a8[0];
        uVar13 = local_a8[0];
      }
      if (iVar11 == 0) {
        return uVar27;
      }
      uVar25 = uVar13 & 0xffffffff00000000;
      uVar20 = uVar25 | 7;
    } while ((*(ushort *)(uVar20 + *(uint *)(uVar13 - 1)) | 1) == 0xa1);
    puVar31 = (uint *)(uVar13 - 1);
    local_a8[0] = uVar13;
    if (this[0x2680] == (MarkCompactCollector)0x0) {
      puVar17 = *(ulong **)(this + 0x2670);
      if ((ulong)((long)puVar17 - *(long *)(this + 0x2668) >> 3) < *(ulong *)(this + 0x2688)) {
        if (*(ulong **)(this + 0x2678) == puVar17) {
          std::__ndk1::
          vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>::
          __push_back_slow_path<v8::internal::HeapObject_const&>
                    ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                      *)(this + 0x2668),(HeapObject *)local_a8);
        }
        else {
          *puVar17 = uVar13;
          *(long *)(this + 0x2670) = *(long *)(this + 0x2670) + 8;
        }
      }
      else {
        this[0x2680] = (MarkCompactCollector)0x1;
      }
    }
    this_01 = *(ObjectVisitor **)(this + 0x2690);
    uVar33 = uVar25 | *puVar31;
    switch(*(undefined1 *)(uVar33 + 6)) {
    case 0:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbc520;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbc520:
      uVar32 = (*(uint *)(uVar13 + 3) & 0x3ffffffe) * 4 + 8;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < (uint *)(uVar13 + 3));
      }
      break;
    case 1:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbc988;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbc988:
      uVar32 = ((int)*(uint *)(uVar13 + 3) >> 1) + 0xbU & 0xfffffffc;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < (uint *)(uVar13 + 3));
      }
      break;
    case 2:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd8b4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd8b4:
      uVar32 = (uint)*(byte *)(uVar33 + 3) << 2;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar15 = *puVar31;
        }
      }
      break;
    case 3:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbc9e0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbc9e0:
      uVar32 = (*(uint *)(uVar13 + 3) & 0x3ffffffe) * 4 + 8;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < (uint *)(uVar13 + 3));
      }
      break;
    case 4:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd910;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd910:
      uVar32 = *(int *)(uVar13 + 7) + 0xfU & 0xfffffffc;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar15 = *puVar31;
        }
      }
      break;
    case 5:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd96c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd96c:
      uVar32 = *(int *)(uVar13 + 7) * 2 + 0xfU & 0xfffffffc;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar15 = *puVar31;
        }
      }
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 7:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbca38;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbca38:
      puVar24 = (uint *)(uVar13 + 3);
      uVar32 = (uint)*(byte *)(uVar33 + 3) << 2;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      for (; puVar24 < (uint *)(uVar13 + 0xf); puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 8:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar31 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar31 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar24 = puVar31;
        if (bVar8) {
          uVar32 = 1;
          puVar24 = puVar31 + 1;
        }
        while (uVar15 = puVar31[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar24 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar24,0x10);
            if (bVar7) {
              *puVar24 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              local_68 = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd9cc;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      local_68 = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd9cc:
      uVar13 = local_68;
      iVar11 = *(int *)(local_68 + 3);
      puVar31 = (uint *)(local_68 - 1);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        puVar24 = (uint *)(local_68 + 3);
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          if (puVar24 <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      uVar13 = local_68;
      puVar31 = (uint *)(local_68 + 7);
      puVar24 = (uint *)(local_68 + 0xb);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      puVar31 = (uint *)(uVar13 + 0xf);
      if (puVar24 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar24 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,
                       (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
          }
          puVar24 = puVar24 + 1;
        } while (puVar24 < puVar31);
      }
      uVar32 = (iVar11 >> 1) + 0x25U & 0xfffffffc;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 0x13) <= puVar31) break;
          uVar15 = *puVar31;
        }
      }
      if (this_01[0x35] == (ObjectVisitor)0x0) {
        BytecodeArray::MakeOlder((BytecodeArray *)&local_68);
      }
      break;
    case 9:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbcad0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbcad0:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      if (puVar24 < (uint *)(uVar13 + 7)) {
        do {
          if ((*puVar24 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,
                       (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
          }
          puVar24 = puVar24 + 1;
          uVar32 = 8;
        } while (puVar24 < (uint *)(uVar13 + 7));
      }
      else {
        uVar32 = 8;
      }
      break;
    case 10:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbcb60;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbcb60:
      uVar32 = *(uint *)(uVar13 + 0x13);
      if ((*(byte *)(uVar13 + 0x17) & 1) != 0) {
        uVar25 = (long)(int)(uVar32 + 0x47) & 0xfffffffffffffff8;
        uVar32 = ((int)uVar25 + *(int *)((long)puVar31 + uVar25)) - 0x38;
      }
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      uVar32 = (uVar32 + 3 & 0xfffffffc) + 0x5f & 0xffffffe0;
      for (; puVar24 < (uint *)(uVar13 + 0x13); puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      RelocIterator::RelocIterator((RelocIterator *)local_a8,uVar13,1999);
      ObjectVisitor::VisitRelocInfo(this_01,(RelocIterator *)local_a8);
      break;
    case 0xb:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto joined_r0x00fbc1c8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
joined_r0x00fbc1c8:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          uVar32 = 0xc;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      else {
LAB_00fbe03c:
        uVar32 = 0xc;
      }
      break;
    case 0xc:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto joined_r0x00fbc0f8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
joined_r0x00fbc0f8:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      puVar31 = (uint *)(uVar13 + 0xb);
      if (puVar31 < (uint *)(uVar13 + 0x13)) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
          uVar32 = 0x14;
        } while (puVar31 < (uint *)(uVar13 + 0x13));
      }
      else {
LAB_00fbe8cc:
        uVar32 = 0x14;
      }
      break;
    case 0xd:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe04c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe04c:
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar24 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar24 = puVar24 + 1;
          if ((uint *)(uVar13 + 3) <= puVar24) break;
          uVar15 = *puVar24;
        }
      }
      for (puVar24 = (uint *)(uVar13 + 7); puVar24 < (uint *)((long)puVar31 + (long)(int)uVar32);
          puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0xe:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbccd0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbccd0:
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar2 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar15);
          }
          puVar2 = puVar2 + 1;
          if (puVar24 <= puVar2) break;
          uVar15 = *puVar2;
        }
      }
      puVar2 = (uint *)(uVar13 + 0xb);
      for (; puVar24 < puVar2; puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      for (; puVar2 < (uint *)((long)puVar31 + (long)(int)uVar32); puVar2 = puVar2 + 1) {
        uVar15 = *puVar2;
        uVar25 = (ulong)uVar15 & 3;
        if (uVar25 == 1) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar2);
        }
        else if ((uVar15 != 3) && (uVar25 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar2,
                     (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar15 & 0xfffffffffffffffd);
        }
      }
      break;
    case 0xf:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto joined_r0x00fbc220;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
joined_r0x00fbc220:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      for (puVar31 = (uint *)(uVar13 + 0xb); puVar31 < (uint *)(uVar13 + 0xf); puVar31 = puVar31 + 1
          ) {
        if ((*puVar31 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31
                    );
        }
      }
      sVar10 = *(short *)(uVar13 + 5);
      local_a8[0] = uVar13;
      sVar9 = DescriptorArray::UpdateNumberOfMarkedDescriptors
                        ((DescriptorArray *)local_a8,*(uint *)(this_01 + 0x2c),sVar10);
      uVar13 = local_a8[0];
      if ((int)sVar9 < (int)sVar10) {
        puVar24 = (uint *)(local_a8[0] + 0xf + (long)sVar10 * 0xc);
        for (puVar31 = (uint *)(local_a8[0] + 0xf + (long)(int)sVar9 * 0xc); puVar31 < puVar24;
            puVar31 = puVar31 + 1) {
          while( true ) {
            uVar15 = *puVar31;
            uVar25 = (ulong)uVar15 & 3;
            if (uVar25 == 1) break;
            if ((uVar15 != 3) && (uVar25 == 3)) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_01,uVar13,puVar31,
                         (ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15 & 0xfffffffffffffffd);
            }
            puVar31 = puVar31 + 1;
            if (puVar24 <= puVar31) goto LAB_00fbea20;
          }
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar31);
        }
      }
      break;
    case 0x10:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbcde4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbcde4:
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar24 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar24 = puVar24 + 1;
          if ((uint *)(uVar13 + 3) <= puVar24) break;
          uVar15 = *puVar24;
        }
      }
      if (8 < (int)uVar32) {
        lVar18 = 8;
        do {
          puVar24 = (uint *)(lVar18 + (long)puVar31);
          if (puVar24 < (uint *)0xfffffffffffffffc) {
            puVar2 = puVar24 + 1;
            uVar15 = *puVar24;
            while( true ) {
              if ((uVar15 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_01,uVar13,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15);
              }
              puVar24 = puVar24 + 1;
              if (puVar2 <= puVar24) break;
              uVar15 = *puVar24;
            }
          }
          lVar18 = lVar18 + 8;
        } while ((int)lVar18 < (int)uVar32);
      }
      break;
    case 0x11:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar31 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar31 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar24 = puVar31;
        if (bVar8) {
          uVar32 = 1;
          puVar24 = puVar31 + 1;
        }
        while (uVar15 = puVar31[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar24 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar24,0x10);
            if (bVar7) {
              *puVar24 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              local_68 = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbdc70;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      local_68 = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbdc70:
      uVar13 = local_68;
      lVar26 = *(long *)(this_01 + 0x18);
      lVar18 = lVar26 + (long)*(int *)(this_01 + 0x28) * 0x50;
      puVar29 = *(undefined8 **)(lVar18 + 0x2b8);
      lVar19 = puVar29[1];
      if (lVar19 == 0x40) {
        base::Mutex::Lock((Mutex *)(lVar26 + 0x538));
        *puVar29 = *(undefined8 *)(lVar26 + 0x560);
        *(undefined8 **)(lVar26 + 0x560) = puVar29;
        base::Mutex::Unlock((Mutex *)(lVar26 + 0x538));
        puVar23 = operator_new(0x210);
        puVar23[4] = 0;
        puVar23[3] = 0;
        puVar23[0x22] = 0;
        puVar23[0x21] = 0;
        puVar23[0x24] = 0;
        puVar23[0x23] = 0;
        puVar23[0x26] = 0;
        puVar23[0x25] = 0;
        puVar23[0x28] = 0;
        puVar23[0x27] = 0;
        puVar23[0x2a] = 0;
        puVar23[0x29] = 0;
        puVar23[0x2c] = 0;
        puVar23[0x2b] = 0;
        puVar23[0x2e] = 0;
        puVar23[0x2d] = 0;
        puVar23[0x30] = 0;
        puVar23[0x2f] = 0;
        puVar23[0x32] = 0;
        puVar23[0x31] = 0;
        puVar23[0x34] = 0;
        puVar23[0x33] = 0;
        puVar23[0x36] = 0;
        puVar23[0x35] = 0;
        puVar23[0x38] = 0;
        puVar23[0x37] = 0;
        puVar23[0x3a] = 0;
        puVar23[0x39] = 0;
        puVar23[0x3c] = 0;
        puVar23[0x3b] = 0;
        puVar23[0x3e] = 0;
        puVar23[0x3d] = 0;
        puVar23[0x40] = 0;
        puVar23[0x3f] = 0;
        puVar23[0x41] = 0;
        puVar23[6] = 0;
        puVar23[5] = 0;
        puVar23[8] = 0;
        puVar23[7] = 0;
        puVar23[10] = 0;
        puVar23[9] = 0;
        puVar23[0xc] = 0;
        puVar23[0xb] = 0;
        puVar23[0xe] = 0;
        puVar23[0xd] = 0;
        puVar23[0x10] = 0;
        puVar23[0xf] = 0;
        puVar23[0x12] = 0;
        puVar23[0x11] = 0;
        puVar23[0x14] = 0;
        puVar23[0x13] = 0;
        puVar23[0x16] = 0;
        puVar23[0x15] = 0;
        puVar23[0x18] = 0;
        puVar23[0x17] = 0;
        puVar23[0x1a] = 0;
        puVar23[0x19] = 0;
        puVar23[0x1c] = 0;
        puVar23[0x1b] = 0;
        puVar23[0x1e] = 0;
        puVar23[0x1d] = 0;
        puVar23[0x20] = 0;
        puVar23[0x1f] = 0;
        *(undefined8 **)(lVar18 + 0x2b8) = puVar23;
        puVar23[1] = 1;
      }
      else {
        puVar23 = puVar29 + lVar19;
        puVar29[1] = lVar19 + 1;
      }
      puVar23[2] = uVar13;
      uVar32 = *(uint *)(local_68 + 0xf);
      if ((int)uVar32 >> 1 != 0) {
        lVar18 = 0;
        do {
          iVar11 = (int)lVar18 * 8;
          lVar19 = local_68 + (long)(iVar11 + 0xc);
          uVar13 = (ulong)*(uint *)(lVar19 + 7);
          uVar25 = local_68 & 0xffffffff00000000 | uVar13;
          uVar13 = local_68 & 0xffffffff00000000 | uVar13 & 0xfffffffffffc0000;
          if (((uint)*(undefined8 *)(uVar13 + 8) >> 6 & 1) != 0) {
            uVar20 = *(ulong *)((MemoryChunk *)(local_68 & 0xfffffffffffc0000) + 8);
            if ((((uint)uVar20 >> 0xf & 1) != 0) || ((uVar20 & 0x58) == 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        ((MemoryChunk *)(local_68 & 0xfffffffffffc0000),lVar19 + 7);
            }
          }
          uVar20 = local_68;
          puVar31 = (uint *)(local_68 + (long)(int)(iVar11 + 0x10U | 7));
          if ((*(uint *)(*(long *)(uVar13 + 0x10) + (uVar25 - uVar13 >> 7 & 0x1ffffff) * 4) >>
               (ulong)((uint)(uVar25 - uVar13 >> 2) & 0x1f) & 1) == 0) {
            uVar13 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                     ::ValueAt((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                                *)&local_68,lVar18);
            if ((uVar13 & 1) != 0) {
              uVar20 = uVar13 & 0xfffffffffffc0000;
              if (((uint)*(undefined8 *)(uVar20 + 8) >> 6 & 1) != 0) {
                uVar30 = *(ulong *)((MemoryChunk *)(local_68 & 0xfffffffffffc0000) + 8);
                if ((((uint)uVar30 >> 0xf & 1) != 0) || ((uVar30 & 0x58) == 0)) {
                  RememberedSet<(v8::internal::RememberedSetType)1>::
                  Insert<(v8::internal::AccessMode)0>
                            ((MemoryChunk *)(local_68 & 0xfffffffffffc0000),(ulong)puVar31);
                }
              }
              if ((*(uint *)(*(long *)(uVar20 + 0x10) + (uVar13 - uVar20 >> 7 & 0x1ffffff) * 4) >>
                   (ulong)((uint)(uVar13 - uVar20 >> 2) & 0x1f) & 1) == 0) {
                lVar28 = *(long *)(this_01 + 0x18);
                lVar19 = lVar28 + (long)*(int *)(this_01 + 0x28) * 0x50;
                puVar29 = *(undefined8 **)(lVar19 + 0xae0);
                lVar26 = puVar29[1];
                if (lVar26 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar28 + 0xd60));
                  *puVar29 = *(undefined8 *)(lVar28 + 0xd88);
                  *(undefined8 **)(lVar28 + 0xd88) = puVar29;
                  base::Mutex::Unlock((Mutex *)(lVar28 + 0xd60));
                  pvVar14 = operator_new(0x410);
                  memset((void *)((long)pvVar14 + 0x20),0,0x3f0);
                  *(void **)(lVar19 + 0xae0) = pvVar14;
                  *(undefined8 *)((long)pvVar14 + 8) = 1;
                  *(ulong *)((long)pvVar14 + 0x10) = uVar25;
                  *(ulong *)((long)pvVar14 + 0x18) = uVar13;
                }
                else {
                  puVar29[1] = lVar26 + 1;
                  puVar29[lVar26 * 2 + 2] = uVar25;
                  puVar29[lVar26 * 2 + 3] = uVar13;
                }
              }
            }
          }
          else if (puVar31 < (uint *)0xfffffffffffffffc) {
            puVar24 = puVar31 + 1;
            uVar15 = *puVar31;
            while( true ) {
              if ((uVar15 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_01,uVar20,puVar31,
                           (ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15);
              }
              puVar31 = puVar31 + 1;
              if (puVar24 <= puVar31) break;
              uVar15 = *puVar31;
            }
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 != (long)((ulong)uVar32 << 0x20) >> 0x21);
      }
      uVar32 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar33);
      break;
    case 0x12:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbceb0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbceb0:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      if ((uint *)(uVar13 + 7) <= puVar24) goto LAB_00fbe03c;
      do {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
        puVar24 = puVar24 + 1;
        uVar32 = 0xc;
      } while (puVar24 < (uint *)(uVar13 + 7));
      break;
    case 0x13:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbcf3c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbcf3c:
      uVar32 = *(int *)(uVar13 + 0xf) * 4 + 0x20;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar15 = *puVar31;
        }
      }
      FeedbackVector::BodyDescriptor::
      IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar33,uVar13,uVar32,this_01);
      break;
    case 0x14:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      if (((uint)*(undefined8 *)(uVar25 + 8) >> 8 & 1) == 0) {
        uVar32 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
                 VisitLeftTrimmableArray<v8::internal::FixedArray>
                           ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_01,uVar33,
                            uVar13);
      }
      else {
        puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
        uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
        if ((*puVar24 & uVar32) != 0) {
          uVar32 = uVar32 << 1;
          bVar8 = uVar32 == 0;
          puVar2 = puVar24;
          if (bVar8) {
            uVar32 = 1;
            puVar2 = puVar24 + 1;
          }
          while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
            while (*puVar2 == uVar15) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar7) {
                *puVar2 = uVar15 | uVar32;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') {
                local_a8[0] = uVar13;
                iVar11 = HeapObject::SizeFromMap
                                   ((HeapObject *)local_a8,
                                    uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
                *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
                goto LAB_00fbeaac;
              }
            }
            ClearExclusiveLocal();
          }
        }
LAB_00fbeaac:
        local_a8[0] = uVar13;
        iVar12 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
        plVar3 = (long *)(uVar25 + 0x60);
        lVar18 = *plVar3;
        iVar11 = (int)lVar18;
        if (iVar11 == 0) {
          if (puVar31 < (uint *)0xfffffffffffffffc) {
            uVar32 = *puVar31;
            puVar24 = puVar31;
            while( true ) {
              if ((uVar32 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_01,uVar13,puVar24,
                           (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar32);
              }
              puVar24 = puVar24 + 1;
              if ((uint *)(uVar13 + 3) <= puVar24) break;
              uVar32 = *puVar24;
            }
            iVar11 = 8;
          }
          else {
            iVar11 = 8;
          }
        }
        iVar1 = iVar11 + 0x20000;
        iVar4 = iVar12;
        if (iVar1 <= iVar12) {
          iVar4 = iVar1;
        }
        uVar32 = iVar4 - iVar11;
        if (uVar32 != 0 && iVar11 <= iVar4) {
          for (puVar24 = (uint *)((long)puVar31 + (long)iVar11);
              puVar24 < (uint *)((long)puVar31 + (long)iVar4); puVar24 = puVar24 + 1) {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_01,uVar13,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
          }
          do {
            if (*plVar3 != lVar18) {
              ClearExclusiveLocal();
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","success");
            }
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *plVar3 = (long)iVar4;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar1 < iVar12) {
            lVar19 = *(long *)(this_01 + 8);
            puVar29 = (undefined8 *)(lVar19 + (long)*(int *)(this_01 + 0x28) * 0x50);
            puVar23 = (undefined8 *)*puVar29;
            lVar18 = puVar23[1];
            if (lVar18 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
              *puVar23 = *(undefined8 *)(lVar19 + 0x2a8);
              *(undefined8 **)(lVar19 + 0x2a8) = puVar23;
              base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
              pvVar14 = operator_new(0x210);
              *(undefined8 *)((long)pvVar14 + 0x20) = 0;
              *(undefined8 *)((long)pvVar14 + 0x18) = 0;
              *(undefined8 *)((long)pvVar14 + 0x110) = 0;
              *(undefined8 *)((long)pvVar14 + 0x108) = 0;
              *(undefined8 *)((long)pvVar14 + 0x120) = 0;
              *(undefined8 *)((long)pvVar14 + 0x118) = 0;
              *(undefined8 *)((long)pvVar14 + 0x130) = 0;
              *(undefined8 *)((long)pvVar14 + 0x128) = 0;
              *(undefined8 *)((long)pvVar14 + 0x140) = 0;
              *(undefined8 *)((long)pvVar14 + 0x138) = 0;
              *(undefined8 *)((long)pvVar14 + 0x150) = 0;
              *(undefined8 *)((long)pvVar14 + 0x148) = 0;
              *(undefined8 *)((long)pvVar14 + 0x160) = 0;
              *(undefined8 *)((long)pvVar14 + 0x158) = 0;
              *(undefined8 *)((long)pvVar14 + 0x170) = 0;
              *(undefined8 *)((long)pvVar14 + 0x168) = 0;
              *(undefined8 *)((long)pvVar14 + 0x180) = 0;
              *(undefined8 *)((long)pvVar14 + 0x178) = 0;
              *(undefined8 *)((long)pvVar14 + 400) = 0;
              *(undefined8 *)((long)pvVar14 + 0x188) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar14 + 0x198) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar14 + 0x200) = 0;
              *(undefined8 *)((long)pvVar14 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar14 + 0x208) = 0;
              *(undefined8 *)((long)pvVar14 + 0x30) = 0;
              *(undefined8 *)((long)pvVar14 + 0x28) = 0;
              *(undefined8 *)((long)pvVar14 + 0x40) = 0;
              *(undefined8 *)((long)pvVar14 + 0x38) = 0;
              *(undefined8 *)((long)pvVar14 + 0x50) = 0;
              *(undefined8 *)((long)pvVar14 + 0x48) = 0;
              *(undefined8 *)((long)pvVar14 + 0x60) = 0;
              *(undefined8 *)((long)pvVar14 + 0x58) = 0;
              *(undefined8 *)((long)pvVar14 + 0x70) = 0;
              *(undefined8 *)((long)pvVar14 + 0x68) = 0;
              *(undefined8 *)((long)pvVar14 + 0x80) = 0;
              *(undefined8 *)((long)pvVar14 + 0x78) = 0;
              *(undefined8 *)((long)pvVar14 + 0x90) = 0;
              *(undefined8 *)((long)pvVar14 + 0x88) = 0;
              *(undefined8 *)((long)pvVar14 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar14 + 0x98) = 0;
              *(undefined8 *)((long)pvVar14 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar14 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar14 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar14 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar14 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar14 + 200) = 0;
              *(undefined8 *)((long)pvVar14 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar14 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar14 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar14 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar14 + 0x100) = 0;
              *(undefined8 *)((long)pvVar14 + 0xf8) = 0;
              *puVar29 = pvVar14;
              *(undefined8 *)((long)pvVar14 + 8) = 1;
              *(ulong *)((long)pvVar14 + 0x10) = uVar13;
            }
            else {
              puVar23[1] = lVar18 + 1;
              puVar23[lVar18 + 2] = uVar13;
            }
          }
        }
      }
      break;
    case 0x15:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbcfb0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbcfb0:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < (uint *)(uVar13 + 3));
      }
      uVar32 = (int)*(uint *)(uVar13 + 3) >> 1;
      break;
    case 0x16:
      uVar32 = MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
               ::VisitEmbedderTracingSubclass<v8::internal::JSObject>
                         ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                           *)this_01,uVar33,uVar13);
      break;
    case 0x17:
      uVar32 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
               VisitJSObjectSubclass<v8::internal::JSArrayBuffer,v8::internal::JSArrayBuffer::BodyDescriptor>
                         ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_01,uVar33,
                          uVar13);
      goto joined_r0x00fbb41c;
    case 0x18:
      uVar32 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
               VisitJSObjectSubclass<v8::internal::JSDataView,v8::internal::JSDataView::BodyDescriptor>
                         ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_01,uVar33,
                          uVar13);
joined_r0x00fbb41c:
      if ((uVar32 != 0) && (this_01[0x34] != (ObjectVisitor)0x0)) {
        lVar19 = *(long *)(this_01 + 0x10);
        puVar23 = (undefined8 *)(lVar19 + (long)*(int *)(this_01 + 0x28) * 0x50);
        puVar29 = (undefined8 *)*puVar23;
        lVar18 = puVar29[1];
        if (lVar18 == 0x10) {
          base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
          *puVar29 = *(undefined8 *)(lVar19 + 0x2a8);
          *(undefined8 **)(lVar19 + 0x2a8) = puVar29;
          base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
          pvVar14 = operator_new(0x90);
          *(undefined8 *)((long)pvVar14 + 0x88) = 0;
          *(undefined8 *)((long)pvVar14 + 0x20) = 0;
          *(undefined8 *)((long)pvVar14 + 0x18) = 0;
          *(undefined8 *)((long)pvVar14 + 0x30) = 0;
          *(undefined8 *)((long)pvVar14 + 0x28) = 0;
          *(undefined8 *)((long)pvVar14 + 0x40) = 0;
          *(undefined8 *)((long)pvVar14 + 0x38) = 0;
          *(undefined8 *)((long)pvVar14 + 0x50) = 0;
          *(undefined8 *)((long)pvVar14 + 0x48) = 0;
          *(undefined8 *)((long)pvVar14 + 0x60) = 0;
          *(undefined8 *)((long)pvVar14 + 0x58) = 0;
          *(undefined8 *)((long)pvVar14 + 0x70) = 0;
          *(undefined8 *)((long)pvVar14 + 0x68) = 0;
          *(undefined8 *)((long)pvVar14 + 0x80) = 0;
          *(undefined8 *)((long)pvVar14 + 0x78) = 0;
LAB_00fbd7f8:
          *puVar23 = pvVar14;
          *(undefined8 *)((long)pvVar14 + 8) = 1;
          *(ulong *)((long)pvVar14 + 0x10) = uVar13;
        }
        else {
LAB_00fbd808:
          puVar29[1] = lVar18 + 1;
          puVar29[lVar18 + 2] = uVar13;
        }
      }
      break;
    case 0x19:
      uVar30 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar30 + 0x10) + (uVar13 + ~uVar30 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar30 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
              goto LAB_00fbd004;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) {
        uVar32 = 0;
      }
      else {
LAB_00fbd004:
        if (puVar31 < (uint *)0xfffffffffffffffc) {
          uVar32 = *puVar31;
          while( true ) {
            if ((uVar32 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_01,uVar13,puVar31,
                         (ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32);
            }
            puVar31 = puVar31 + 1;
            if ((uint *)(uVar13 + 3) <= puVar31) break;
            uVar32 = *puVar31;
          }
        }
        uVar32 = (uint)*(byte *)(uVar33 + 3) << 2;
        BodyDescriptorBase::
        IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                  (uVar33,uVar13,4,uVar32,this_01);
      }
      if (*(int *)(this_01 + 0x30) != 0) {
        if ((*(uint *)(uVar13 + 0xb) & 1) != 0) {
          uVar33 = uVar25 | *(uint *)(uVar13 + 0xb);
          if ((((*(uint *)(uVar13 + 0x17) & 1) != 0) &&
              (*(short *)(uVar20 + *(uint *)(uVar33 - 1)) == 0xa6)) &&
             (uVar30 = uVar25 | *(uint *)(uVar13 + 0x17),
             *(short *)(uVar20 + *(uint *)(uVar30 - 1)) == 0x9a)) {
            uVar15 = *(uint *)(uVar33 + 3);
            if (((uVar15 == 0x84) ||
                (((uVar15 & 1) != 0 &&
                 (*(ushort *)(uVar20 + *(uint *)((uVar25 | uVar15) - 1)) - 0x95 < 2)))) &&
               (*(int *)(uVar30 + 0x27) != 0x42)) {
              lVar26 = *(long *)(this_01 + 0x18);
              lVar18 = lVar26 + (long)*(int *)(this_01 + 0x28) * 0x50;
              puVar29 = *(undefined8 **)(lVar18 + 0x1b30);
              lVar19 = puVar29[1];
              if (lVar19 != 0x40) goto LAB_00fbedf4;
              this_00 = (Mutex *)(lVar26 + 0x1db0);
              puVar23 = (undefined8 *)(lVar18 + 0x1b30);
              base::Mutex::Lock(this_00);
              *puVar29 = *(undefined8 *)(lVar26 + 0x1dd8);
              *(undefined8 **)(lVar26 + 0x1dd8) = puVar29;
              goto LAB_00fbd77c;
            }
          }
        }
      }
      break;
    case 0x1a:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd148;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd148:
      uVar32 = (uint)*(byte *)(uVar33 + 3) << 2;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar15 = *puVar31;
        }
      }
LAB_00fbe1e8:
      BodyDescriptorBase::
      IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar33,uVar13,4,uVar32,this_01);
      break;
    case 0x1b:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe0f8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe0f8:
      bVar5 = *(byte *)(uVar33 + 3);
      puVar24 = (uint *)(uVar13 + 3);
      uVar32 = (uint)bVar5 * 4;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar2 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar15);
          }
          puVar2 = puVar2 + 1;
          if (puVar24 <= puVar2) break;
          uVar15 = *puVar2;
        }
      }
      for (; puVar24 < puVar31 + bVar5; puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0x1c:
      uVar32 = MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
               ::VisitEmbedderTracingSubclass<v8::internal::JSTypedArray>
                         ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                           *)this_01,uVar33,uVar13);
      break;
    case 0x1d:
      uVar32 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
               VisitJSObjectSubclass<v8::internal::JSWeakRef,v8::internal::JSWeakRef::BodyDescriptor>
                         ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_01,uVar33,
                          uVar13);
      if (uVar32 != 0) {
        uVar15 = *(uint *)(uVar13 + 0xb);
        if ((uVar15 & 1) != 0) {
          uVar25 = uVar25 | (ulong)uVar15 & 0xfffffffffffc0000;
          uVar20 = uVar15 - uVar25;
          if ((*(uint *)(*(long *)(uVar25 + 0x10) + (uVar20 >> 7 & 0x1ffffff) * 4) >>
               (ulong)((uint)(uVar20 >> 2) & 0x1f) & 1) == 0) {
            lVar26 = *(long *)(this_01 + 0x18);
            lVar18 = lVar26 + (long)*(int *)(this_01 + 0x28) * 0x50;
            puVar29 = *(undefined8 **)(lVar18 + 0x1308);
            lVar19 = puVar29[1];
            if (lVar19 == 0x40) {
              this_00 = (Mutex *)(lVar26 + 0x1588);
              puVar23 = (undefined8 *)(lVar18 + 0x1308);
              base::Mutex::Lock(this_00);
              *puVar29 = *(undefined8 *)(lVar26 + 0x15b0);
              *(undefined8 **)(lVar26 + 0x15b0) = puVar29;
              goto LAB_00fbd77c;
            }
LAB_00fbedf4:
            puVar29[1] = lVar19 + 1;
            puVar29[lVar19 + 2] = uVar13;
          }
          else if (((uint)*(undefined8 *)(uVar25 + 8) >> 6 & 1) != 0) {
            uVar25 = *(ulong *)((MemoryChunk *)(uVar13 & 0xfffffffffffc0000) + 8);
            if ((((uint)uVar25 >> 0xf & 1) != 0) || ((uVar25 & 0x58) == 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        ((MemoryChunk *)(uVar13 & 0xfffffffffffc0000),uVar13 + 0xb);
            }
          }
        }
      }
      break;
    case 0x1e:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe198;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] != (ObjectVisitor)0x0) {
LAB_00fbe198:
        uVar32 = (uint)*(byte *)(uVar33 + 3) << 2;
        if (puVar31 < (uint *)0xfffffffffffffffc) {
          uVar15 = *puVar31;
          while( true ) {
            if ((uVar15 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_01,uVar13,puVar31,
                         (ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15);
            }
            puVar31 = puVar31 + 1;
            if ((uint *)(uVar13 + 3) <= puVar31) break;
            uVar15 = *puVar31;
          }
        }
        goto LAB_00fbe1e8;
      }
LAB_00fbea1c:
      uVar32 = 0;
      break;
    case 0x1f:
      uVar20 = uVar13 & 0xfffffffffffc0000;
      puVar31 = (uint *)(*(long *)(uVar20 + 0x10) + (uVar13 + ~uVar20 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar20 >> 2) & 0x1f);
      if ((*puVar31 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar24 = puVar31;
        if (bVar8) {
          uVar32 = 1;
          puVar24 = puVar31 + 1;
        }
        while (uVar15 = puVar31[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar24 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar24,0x10);
            if (bVar7) {
              *puVar24 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar20 + 0x68) = *(long *)(uVar20 + 0x68) + (long)iVar11;
              goto LAB_00fbd1a0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd1a0:
      if (0xa9 < *(ushort *)(uVar13 + 7)) {
        uVar33 = uVar25 | *(uint *)(uVar13 + 0x17);
        uVar20 = uVar25 | (ulong)*(uint *)(uVar13 + 0x17) & 0xfffffffffffc0000;
        puVar31 = (uint *)(*(long *)(uVar20 + 0x10) + (uVar33 - uVar20 >> 7 & 0x1ffffff) * 4);
        while( true ) {
          uVar32 = *puVar31;
          uVar15 = (uint)(1L << (uVar33 - uVar20 >> 2 & 0x1f));
          if ((uVar15 & (uVar32 ^ 0xffffffff)) == 0) break;
          while (*puVar31 == uVar32) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar31,0x10);
            if (bVar8) {
              *puVar31 = uVar32 | uVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00fbd208;
          }
          ClearExclusiveLocal();
        }
LAB_00fbd208:
        puVar31 = (uint *)(*(long *)(uVar20 + 0x10) + (uVar33 + ~uVar20 >> 7 & 0x1ffffff) * 4);
        uVar32 = 1 << (ulong)((uint)(uVar33 + ~uVar20 >> 2) & 0x1f);
        local_a8[0] = uVar33;
        if ((*puVar31 & uVar32) != 0) {
          uVar32 = uVar32 << 1;
          bVar8 = uVar32 == 0;
          puVar24 = puVar31;
          if (bVar8) {
            uVar32 = 1;
            puVar24 = puVar31 + 1;
          }
          while (uVar15 = puVar31[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
            while (*puVar24 == uVar15) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar24,0x10);
              if (bVar7) {
                *puVar24 = uVar15 | uVar32;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') {
                iVar11 = HeapObject::SizeFromMap
                                   ((HeapObject *)local_a8,uVar25 | *(uint *)(uVar33 - 1));
                puVar31 = (uint *)(uVar33 - 1);
                *(long *)(uVar20 + 0x68) = *(long *)(uVar20 + 0x68) + (long)iVar11;
                if (puVar31 < (uint *)0xfffffffffffffffc) {
                  uVar32 = *puVar31;
                  while( true ) {
                    if ((uVar32 & 1) != 0) {
                      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                                ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                                  *)this_01,uVar33,puVar31,
                                 (ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32);
                    }
                    puVar31 = puVar31 + 1;
                    if ((uint *)(uVar33 + 3) <= puVar31) break;
                    uVar32 = *puVar31;
                  }
                }
                for (puVar31 = (uint *)(uVar33 + 0xb); puVar31 < (uint *)(uVar33 + 0xf);
                    puVar31 = puVar31 + 1) {
                  if ((*puVar31 & 1) != 0) {
                    MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                              ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                                *)this_01,uVar33,puVar31,
                               (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
                  }
                }
                goto LAB_00fbebd0;
              }
            }
            ClearExclusiveLocal();
          }
        }
LAB_00fbebd0:
        uVar32 = *(uint *)(uVar13 + 0xb) >> 10 & 0x3ff;
        if (uVar32 != 0) {
          uVar15 = (int)*(short *)(uVar33 + 5);
          if ((int)uVar32 <= (int)*(short *)(uVar33 + 5)) {
            uVar15 = uVar32;
          }
          local_a8[0] = uVar33;
          sVar10 = DescriptorArray::UpdateNumberOfMarkedDescriptors
                             ((DescriptorArray *)local_a8,*(uint *)(this_01 + 0x2c),(short)uVar15);
          uVar25 = local_a8[0];
          if ((int)sVar10 < (int)uVar15) {
            puVar24 = (uint *)(local_a8[0] + (long)(int)(uVar15 * 0xc + 0xf));
            for (puVar31 = (uint *)(local_a8[0] + (long)(sVar10 * 0xc + 0xf)); puVar31 < puVar24;
                puVar31 = puVar31 + 1) {
              uVar32 = *puVar31;
              uVar20 = (ulong)uVar32 & 3;
              if (uVar20 == 1) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_01,uVar25,puVar31);
              }
              else if ((uVar32 != 3) && (uVar20 == 3)) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_01,uVar25,puVar31,
                           (ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32 & 0xfffffffffffffffd)
                ;
              }
            }
          }
        }
      }
      puVar24 = (uint *)(uVar13 + 0x23);
      for (puVar31 = (uint *)(uVar13 + 0xf); puVar31 < puVar24; puVar31 = puVar31 + 1) {
        if ((*puVar31 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31
                    );
        }
      }
      if (puVar24 < (uint *)0xfffffffffffffffc) {
        do {
          uVar32 = *puVar24;
          uVar25 = (ulong)uVar32 & 3;
          if (uVar25 == 1) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24);
          }
          else if ((uVar32 != 3) && (uVar25 == 3)) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,
                       (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar32 & 0xfffffffffffffffd);
          }
          puVar24 = puVar24 + 1;
          uVar32 = 0x28;
        } while (puVar24 < (uint *)(uVar13 + 0x27));
      }
      else {
        uVar32 = 0x28;
      }
      break;
    case 0x20:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd290;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd290:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      if (puVar24 < (uint *)(uVar13 + 0x417)) {
        do {
          if ((*puVar24 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,
                       (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
          }
          puVar24 = puVar24 + 1;
          uVar32 = 0x42c;
        } while (puVar24 < (uint *)(uVar13 + 0x417));
      }
      else {
        uVar32 = 0x42c;
      }
      break;
    case 0x21:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto joined_r0x00fbbf10;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
joined_r0x00fbbf10:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      puVar31 = (uint *)(uVar13 + 0xb);
      if (puVar31 < (uint *)(uVar13 + 0x1b)) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
          uVar32 = 0x1c;
        } while (puVar31 < (uint *)(uVar13 + 0x1b));
      }
      else {
        uVar32 = 0x1c;
      }
      break;
    case 0x22:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd3b8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd3b8:
      uVar16 = *(uint *)(uVar13 + 3) + 0xf & 0xfffffffc;
      uVar32 = uVar16 + *(int *)(uVar13 + 7) * 4;
      uVar15 = uVar32;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar24 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar24 = puVar24 + 1;
          if ((uint *)(uVar13 + 3) <= puVar24) break;
          uVar15 = *puVar24;
        }
        uVar16 = *(int *)(uVar13 + 3) + 0xfU & 0xfffffffc;
        uVar15 = uVar16 + *(int *)(uVar13 + 7) * 4;
      }
      for (puVar24 = (uint *)((long)puVar31 + (long)(int)uVar16);
          puVar24 < (uint *)((long)puVar31 + (long)(int)uVar15); puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0x23:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbc578;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbc578:
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar24 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar24 = puVar24 + 1;
          if ((uint *)(uVar13 + 3) <= puVar24) break;
          uVar15 = *puVar24;
        }
      }
      for (puVar24 = (uint *)(uVar13 + 7); puVar24 < (uint *)((long)puVar31 + (long)(int)uVar32);
          puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0x24:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe60c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe60c:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      if ((uint *)(uVar13 + 0x13) <= puVar24) goto LAB_00fbe8cc;
      do {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
        puVar24 = puVar24 + 1;
        uVar32 = 0x14;
      } while (puVar24 < (uint *)(uVar13 + 0x13));
      break;
    case 0x25:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbc624;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbc624:
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar15 = *puVar31;
        }
      }
      PrototypeInfo::BodyDescriptor::
      IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar33,uVar13,uVar32,this_01);
      break;
    case 0x26:
      uVar30 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar30 + 0x10) + (uVar13 + ~uVar30 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar30 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
              goto LAB_00fbc6a0;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbc6a0:
      bVar5 = *(byte *)(uVar33 + 3);
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      uVar32 = (uint)bVar5 << 2;
      (**(code **)(*(long *)this_01 + 0x38))(this_01,uVar13,puVar24);
      puVar31 = (uint *)(uVar13 + 7);
      if (puVar31 < (uint *)(uVar13 + 0x13)) {
        uVar15 = *puVar31;
        puVar2 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar15);
          }
          puVar2 = puVar2 + 1;
          if ((uint *)(uVar13 + 0x13) <= puVar2) break;
          uVar15 = *puVar2;
        }
      }
      if (((((*(int *)(this_01 + 0x30) == 0) ||
            (uVar15 = *(uint *)(uVar13 + 0x1b) & 0x1f, uVar15 - 10 < 7)) || (uVar15 - 1 < 2)) ||
          (((*(uint *)(uVar13 + 0x1b) >> 0xc & 1) == 0 || ((*puVar24 & 1) == 0)))) ||
         ((uVar25 = uVar25 | *puVar24, *(short *)(uVar20 + *(uint *)(uVar25 - 1)) != 0x86 ||
          ((*(int *)(this_01 + 0x30) != 2 &&
           (local_a8[0] = uVar25, uVar25 = BytecodeArray::IsOld((BytecodeArray *)local_a8),
           (uVar25 & 1) == 0)))))) {
        if (puVar24 < (uint *)0xfffffffffffffffc) {
          do {
            if ((*puVar24 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_01,uVar13,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24);
            }
            puVar24 = puVar24 + 1;
          } while (puVar24 < puVar31);
        }
      }
      else {
        lVar26 = *(long *)(this_01 + 0x18);
        lVar18 = lVar26 + (long)*(int *)(this_01 + 0x28) * 0x50;
        puVar29 = *(undefined8 **)(lVar18 + 0x1878);
        lVar19 = puVar29[1];
        if (lVar19 == 0x40) {
          base::Mutex::Lock((Mutex *)(lVar26 + 0x1af8));
          *puVar29 = *(undefined8 *)(lVar26 + 0x1b20);
          *(undefined8 **)(lVar26 + 0x1b20) = puVar29;
          base::Mutex::Unlock((Mutex *)(lVar26 + 0x1af8));
          pvVar14 = operator_new(0x210);
          *(undefined8 *)((long)pvVar14 + 0x20) = 0;
          *(undefined8 *)((long)pvVar14 + 0x18) = 0;
          *(undefined8 *)((long)pvVar14 + 0x110) = 0;
          *(undefined8 *)((long)pvVar14 + 0x108) = 0;
          *(undefined8 *)((long)pvVar14 + 0x120) = 0;
          *(undefined8 *)((long)pvVar14 + 0x118) = 0;
          *(undefined8 *)((long)pvVar14 + 0x130) = 0;
          *(undefined8 *)((long)pvVar14 + 0x128) = 0;
          *(undefined8 *)((long)pvVar14 + 0x140) = 0;
          *(undefined8 *)((long)pvVar14 + 0x138) = 0;
          *(undefined8 *)((long)pvVar14 + 0x150) = 0;
          *(undefined8 *)((long)pvVar14 + 0x148) = 0;
          *(undefined8 *)((long)pvVar14 + 0x160) = 0;
          *(undefined8 *)((long)pvVar14 + 0x158) = 0;
          *(undefined8 *)((long)pvVar14 + 0x170) = 0;
          *(undefined8 *)((long)pvVar14 + 0x168) = 0;
          *(undefined8 *)((long)pvVar14 + 0x180) = 0;
          *(undefined8 *)((long)pvVar14 + 0x178) = 0;
          *(undefined8 *)((long)pvVar14 + 400) = 0;
          *(undefined8 *)((long)pvVar14 + 0x188) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1a0) = 0;
          *(undefined8 *)((long)pvVar14 + 0x198) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1b0) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1a8) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1c0) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1b8) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1d0) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1c8) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1e0) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1d8) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1f0) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1e8) = 0;
          *(undefined8 *)((long)pvVar14 + 0x200) = 0;
          *(undefined8 *)((long)pvVar14 + 0x1f8) = 0;
          *(undefined8 *)((long)pvVar14 + 0x208) = 0;
          *(undefined8 *)((long)pvVar14 + 0x30) = 0;
          *(undefined8 *)((long)pvVar14 + 0x28) = 0;
          *(undefined8 *)((long)pvVar14 + 0x40) = 0;
          *(undefined8 *)((long)pvVar14 + 0x38) = 0;
          *(undefined8 *)((long)pvVar14 + 0x50) = 0;
          *(undefined8 *)((long)pvVar14 + 0x48) = 0;
          *(undefined8 *)((long)pvVar14 + 0x60) = 0;
          *(undefined8 *)((long)pvVar14 + 0x58) = 0;
          *(undefined8 *)((long)pvVar14 + 0x70) = 0;
          *(undefined8 *)((long)pvVar14 + 0x68) = 0;
          *(undefined8 *)((long)pvVar14 + 0x80) = 0;
          *(undefined8 *)((long)pvVar14 + 0x78) = 0;
          *(undefined8 *)((long)pvVar14 + 0x90) = 0;
          *(undefined8 *)((long)pvVar14 + 0x88) = 0;
          *(undefined8 *)((long)pvVar14 + 0xa0) = 0;
          *(undefined8 *)((long)pvVar14 + 0x98) = 0;
          *(undefined8 *)((long)pvVar14 + 0xb0) = 0;
          *(undefined8 *)((long)pvVar14 + 0xa8) = 0;
          *(undefined8 *)((long)pvVar14 + 0xc0) = 0;
          *(undefined8 *)((long)pvVar14 + 0xb8) = 0;
          *(undefined8 *)((long)pvVar14 + 0xd0) = 0;
          *(undefined8 *)((long)pvVar14 + 200) = 0;
          *(undefined8 *)((long)pvVar14 + 0xe0) = 0;
          *(undefined8 *)((long)pvVar14 + 0xd8) = 0;
          *(undefined8 *)((long)pvVar14 + 0xf0) = 0;
          *(undefined8 *)((long)pvVar14 + 0xe8) = 0;
          *(undefined8 *)((long)pvVar14 + 0x100) = 0;
          *(undefined8 *)((long)pvVar14 + 0xf8) = 0;
          *(void **)(lVar18 + 0x1878) = pvVar14;
          *(undefined8 *)((long)pvVar14 + 8) = 1;
          *(ulong *)((long)pvVar14 + 0x10) = uVar13;
        }
        else {
          puVar29[1] = lVar19 + 1;
          puVar29[lVar19 + 2] = uVar13;
        }
      }
      break;
    case 0x27:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto joined_r0x00fbc2c8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
joined_r0x00fbc2c8:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      puVar31 = (uint *)(uVar13 + 0xb);
      if ((uint *)(uVar13 + 0x13) <= puVar31) goto LAB_00fbe8cc;
      do {
        if ((*puVar31 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31
                    );
        }
        puVar31 = puVar31 + 1;
        uVar32 = 0x14;
      } while (puVar31 < (uint *)(uVar13 + 0x13));
      break;
    case 0x28:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto joined_r0x00fbc2f8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
joined_r0x00fbc2f8:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      puVar31 = (uint *)(uVar13 + 0xb);
      if ((uint *)(uVar13 + 0x13) <= puVar31) goto LAB_00fbe8cc;
      do {
        if ((*puVar31 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31
                    );
        }
        puVar31 = puVar31 + 1;
        uVar32 = 0x14;
      } while (puVar31 < (uint *)(uVar13 + 0x13));
      break;
    case 0x29:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd478;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd478:
      bVar5 = *(byte *)(uVar13 + 5);
      uVar32 = (uint)bVar5 * 0x13 + 0xb & 0x3ffc;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar24 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar24 = puVar24 + 1;
          if ((uint *)(uVar13 + 3) <= puVar24) break;
          uVar15 = *puVar24;
        }
        bVar5 = *(byte *)(uVar13 + 5);
      }
      for (puVar24 = (uint *)(uVar13 + 7);
          puVar24 < (uint *)(((ulong)bVar5 << 4 | 8) + (long)puVar31); puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0x2a:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd52c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd52c:
      bVar5 = *(byte *)(uVar13 + 5);
      uVar32 = (uint)bVar5 * 0xb + 0xb & 0x1ffc;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar15 = *puVar31;
        }
        bVar5 = *(byte *)(uVar13 + 5);
      }
      puVar24 = (uint *)(uVar13 + 7);
      puVar31 = puVar24 + (ulong)bVar5 * 2;
      for (; puVar24 < puVar31; puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0x2b:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe338;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe338:
      bVar5 = *(byte *)(uVar13 + 9);
      uVar32 = (uint)bVar5 * 0x1b + 0xf & 0x3ffc;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar15 = *puVar31;
        }
        bVar5 = *(byte *)(uVar13 + 9);
      }
      puVar31 = (uint *)(uVar13 + 0xb);
      puVar24 = puVar31 + (ulong)bVar5 * 6;
      for (; puVar31 < puVar24; puVar31 = puVar31 + 1) {
        if ((*puVar31 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31
                    );
        }
      }
      break;
    case 0x2c:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe698;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe698:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      puVar31 = (uint *)(uVar13 + 0x17);
      for (; puVar24 < puVar31; puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      if (puVar31 < (uint *)(uVar13 + 0x47)) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
          uVar32 = 0x48;
        } while (puVar31 < (uint *)(uVar13 + 0x47));
      }
      else {
        uVar32 = 0x48;
      }
      break;
    case 0x2d:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd5d4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd5d4:
      bVar5 = *(byte *)(uVar33 + 3);
      puVar24 = (uint *)(uVar13 + 3);
      uVar32 = (uint)bVar5 * 4;
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar2 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar15);
          }
          puVar2 = puVar2 + 1;
          if (puVar24 <= puVar2) break;
          uVar15 = *puVar2;
        }
      }
      for (; puVar24 < puVar31 + bVar5; puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0x2e:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto joined_r0x00fbc350;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
joined_r0x00fbc350:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      puVar31 = (uint *)(uVar13 + 0xb);
      if (puVar31 < (uint *)(uVar13 + 0xf)) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
          uVar32 = 0x10;
        } while (puVar31 < (uint *)(uVar13 + 0xf));
      }
      else {
LAB_00fbdfb0:
        uVar32 = 0x10;
      }
      break;
    case 0x2f:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe768;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe768:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      for (; puVar24 < (uint *)(uVar13 + 0x17); puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      puVar31 = (uint *)(uVar13 + 0x1b);
      if (puVar31 < (uint *)(uVar13 + 0x23)) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
          uVar32 = 0x24;
        } while (puVar31 < (uint *)(uVar13 + 0x23));
      }
      else {
        uVar32 = 0x24;
      }
      break;
    case 0x30:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto joined_r0x00fbbd28;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
joined_r0x00fbbd28:
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)uVar32
                      );
          }
          puVar31 = puVar31 + 1;
          if ((uint *)(uVar13 + 3) <= puVar31) break;
          uVar32 = *puVar31;
        }
      }
      puVar31 = (uint *)(uVar13 + 0xb);
      if ((uint *)(uVar13 + 0xf) <= puVar31) goto LAB_00fbdfb0;
      do {
        if ((*puVar31 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31
                    );
        }
        puVar31 = puVar31 + 1;
        uVar32 = 0x10;
      } while (puVar31 < (uint *)(uVar13 + 0xf));
      break;
    case 0x31:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd674;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd674:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        puVar2 = puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar32);
          }
          puVar2 = puVar2 + 1;
          if (puVar24 <= puVar2) break;
          uVar32 = *puVar2;
        }
      }
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      for (; puVar24 < (uint *)((long)puVar31 + (long)(int)uVar32); puVar24 = puVar24 + 1) {
        uVar15 = *puVar24;
        uVar25 = (ulong)uVar15 & 3;
        if (uVar25 == 1) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24);
        }
        else if ((uVar15 != 3) && (uVar25 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,
                     (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15 & 0xfffffffffffffffd);
        }
      }
      lVar19 = *(long *)(this_01 + 0x18);
      puVar23 = (undefined8 *)(lVar19 + (long)*(int *)(this_01 + 0x28) * 0x50);
      puVar29 = (undefined8 *)*puVar23;
      lVar18 = puVar29[1];
      if (lVar18 != 0x40) goto LAB_00fbd808;
      this_00 = (Mutex *)(lVar19 + 0x280);
      base::Mutex::Lock(this_00);
      *puVar29 = *(undefined8 *)(lVar19 + 0x2a8);
      *(undefined8 **)(lVar19 + 0x2a8) = puVar29;
LAB_00fbd77c:
      base::Mutex::Unlock(this_00);
      pvVar14 = operator_new(0x210);
      *(undefined8 *)((long)pvVar14 + 0x20) = 0;
      *(undefined8 *)((long)pvVar14 + 0x18) = 0;
      *(undefined8 *)((long)pvVar14 + 0x110) = 0;
      *(undefined8 *)((long)pvVar14 + 0x108) = 0;
      *(undefined8 *)((long)pvVar14 + 0x120) = 0;
      *(undefined8 *)((long)pvVar14 + 0x118) = 0;
      *(undefined8 *)((long)pvVar14 + 0x130) = 0;
      *(undefined8 *)((long)pvVar14 + 0x128) = 0;
      *(undefined8 *)((long)pvVar14 + 0x140) = 0;
      *(undefined8 *)((long)pvVar14 + 0x138) = 0;
      *(undefined8 *)((long)pvVar14 + 0x150) = 0;
      *(undefined8 *)((long)pvVar14 + 0x148) = 0;
      *(undefined8 *)((long)pvVar14 + 0x160) = 0;
      *(undefined8 *)((long)pvVar14 + 0x158) = 0;
      *(undefined8 *)((long)pvVar14 + 0x170) = 0;
      *(undefined8 *)((long)pvVar14 + 0x168) = 0;
      *(undefined8 *)((long)pvVar14 + 0x180) = 0;
      *(undefined8 *)((long)pvVar14 + 0x178) = 0;
      *(undefined8 *)((long)pvVar14 + 400) = 0;
      *(undefined8 *)((long)pvVar14 + 0x188) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1a0) = 0;
      *(undefined8 *)((long)pvVar14 + 0x198) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1b0) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1a8) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1c0) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1b8) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1d0) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1c8) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1e0) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1d8) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1f0) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1e8) = 0;
      *(undefined8 *)((long)pvVar14 + 0x200) = 0;
      *(undefined8 *)((long)pvVar14 + 0x1f8) = 0;
      *(undefined8 *)((long)pvVar14 + 0x208) = 0;
      *(undefined8 *)((long)pvVar14 + 0x30) = 0;
      *(undefined8 *)((long)pvVar14 + 0x28) = 0;
      *(undefined8 *)((long)pvVar14 + 0x40) = 0;
      *(undefined8 *)((long)pvVar14 + 0x38) = 0;
      *(undefined8 *)((long)pvVar14 + 0x50) = 0;
      *(undefined8 *)((long)pvVar14 + 0x48) = 0;
      *(undefined8 *)((long)pvVar14 + 0x60) = 0;
      *(undefined8 *)((long)pvVar14 + 0x58) = 0;
      *(undefined8 *)((long)pvVar14 + 0x70) = 0;
      *(undefined8 *)((long)pvVar14 + 0x68) = 0;
      *(undefined8 *)((long)pvVar14 + 0x80) = 0;
      *(undefined8 *)((long)pvVar14 + 0x78) = 0;
      *(undefined8 *)((long)pvVar14 + 0x90) = 0;
      *(undefined8 *)((long)pvVar14 + 0x88) = 0;
      *(undefined8 *)((long)pvVar14 + 0xa0) = 0;
      *(undefined8 *)((long)pvVar14 + 0x98) = 0;
      *(undefined8 *)((long)pvVar14 + 0xb0) = 0;
      *(undefined8 *)((long)pvVar14 + 0xa8) = 0;
      *(undefined8 *)((long)pvVar14 + 0xc0) = 0;
      *(undefined8 *)((long)pvVar14 + 0xb8) = 0;
      *(undefined8 *)((long)pvVar14 + 0xd0) = 0;
      *(undefined8 *)((long)pvVar14 + 200) = 0;
      *(undefined8 *)((long)pvVar14 + 0xe0) = 0;
      *(undefined8 *)((long)pvVar14 + 0xd8) = 0;
      *(undefined8 *)((long)pvVar14 + 0xf0) = 0;
      *(undefined8 *)((long)pvVar14 + 0xe8) = 0;
      *(undefined8 *)((long)pvVar14 + 0x100) = 0;
      *(undefined8 *)((long)pvVar14 + 0xf8) = 0;
      goto LAB_00fbd7f8;
    case 0x32:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbd828;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbd828:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      if ((uint *)(uVar13 + 7) <= puVar24) goto LAB_00fbdfb0;
      do {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
        puVar24 = puVar24 + 1;
        uVar32 = 0x10;
      } while (puVar24 < (uint *)(uVar13 + 7));
      break;
    case 0x33:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe83c;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe83c:
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar31 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar31,
                       (ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31);
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 < puVar24);
      }
      for (; puVar24 < (uint *)(uVar13 + 7); puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      puVar31 = (uint *)(uVar13 + 0xf);
      if ((uint *)(uVar13 + 0x13) <= puVar31) goto LAB_00fbe8cc;
      do {
        if ((*puVar31 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar31,(ulong)puVar31 & 0xffffffff00000000 | (ulong)*puVar31
                    );
        }
        puVar31 = puVar31 + 1;
        uVar32 = 0x14;
      } while (puVar31 < (uint *)(uVar13 + 0x13));
      break;
    case 0x34:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe910;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe910:
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar24 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar24 = puVar24 + 1;
          if ((uint *)(uVar13 + 3) <= puVar24) break;
          uVar15 = *puVar24;
        }
      }
      for (puVar24 = (uint *)(uVar13 + 0xb); puVar24 < (uint *)((long)puVar31 + (long)(int)uVar32);
          puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0x35:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe9bc;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe9bc:
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar24 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15
                      );
          }
          puVar24 = puVar24 + 1;
          if ((uint *)(uVar13 + 3) <= puVar24) break;
          uVar15 = *puVar24;
        }
      }
      for (puVar24 = (uint *)(uVar13 + 0x17); puVar24 < (uint *)((long)puVar31 + (long)(int)uVar32);
          puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      break;
    case 0x36:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbc858;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbc858:
      bVar5 = *(byte *)(uVar33 + 3);
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        puVar2 = puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar32);
          }
          puVar2 = puVar2 + 1;
          if (puVar24 <= puVar2) break;
          uVar32 = *puVar2;
        }
      }
      uVar32 = (uint)bVar5 << 2;
      for (; puVar24 < (uint *)(uVar13 + 0xb); puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      puVar22 = &WasmInstanceObject::kTaggedFieldOffsets;
      do {
        puVar24 = (uint *)((long)puVar31 + (ulong)*puVar22);
        if (puVar24 < (uint *)0xfffffffffffffffc) {
          puVar2 = puVar24 + 1;
          uVar15 = *puVar24;
          while( true ) {
            if ((uVar15 & 1) != 0) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_01,uVar13,puVar24,
                         (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15);
            }
            puVar24 = puVar24 + 1;
            if (puVar2 <= puVar24) break;
            uVar15 = *puVar24;
          }
        }
        puVar22 = puVar22 + 1;
      } while (puVar22 != (ushort *)&DAT_019f0a14);
      BodyDescriptorBase::
      IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar33,uVar13,0xc4,uVar32,this_01);
      break;
    case 0x37:
      uVar25 = uVar13 & 0xfffffffffffc0000;
      puVar24 = (uint *)(*(long *)(uVar25 + 0x10) + (uVar13 + ~uVar25 >> 7 & 0x1ffffff) * 4);
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~uVar25 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(uVar25 + 0x68) = *(long *)(uVar25 + 0x68) + (long)iVar11;
              goto LAB_00fbe3e4;
            }
          }
          ClearExclusiveLocal();
        }
      }
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe3e4:
      local_a8[0] = uVar13;
      uVar32 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar33);
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar15 = *puVar31;
        puVar2 = puVar31;
        while( true ) {
          if ((uVar15 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar15);
          }
          puVar2 = puVar2 + 1;
          if (puVar24 <= puVar2) break;
          uVar15 = *puVar2;
        }
      }
      for (; puVar24 < (uint *)((long)puVar31 + (long)(int)uVar32); puVar24 = puVar24 + 1) {
        uVar15 = *puVar24;
        uVar25 = (ulong)uVar15 & 3;
        if (uVar25 == 1) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24);
        }
        else if ((uVar15 != 3) && (uVar25 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,
                     (ulong)puVar24 & 0xffffffff00000000 | (ulong)uVar15 & 0xfffffffffffffffd);
        }
      }
      break;
    case 0x38:
      pMVar21 = (MemoryChunk *)(uVar13 & 0xfffffffffffc0000);
      puVar24 = (uint *)(*(long *)(pMVar21 + 0x10) + (uVar13 + ~(ulong)pMVar21 >> 7 & 0x1ffffff) * 4
                        );
      uVar32 = 1 << (ulong)((uint)(uVar13 + ~(ulong)pMVar21 >> 2) & 0x1f);
      if ((*puVar24 & uVar32) != 0) {
        uVar32 = uVar32 << 1;
        bVar8 = uVar32 == 0;
        puVar2 = puVar24;
        if (bVar8) {
          uVar32 = 1;
          puVar2 = puVar24 + 1;
        }
        while (uVar15 = puVar24[bVar8], (uVar32 & (uVar15 ^ 0xffffffff)) != 0) {
          while (*puVar2 == uVar15) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar7) {
              *puVar2 = uVar15 | uVar32;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              local_a8[0] = uVar13;
              iVar11 = HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,
                                  uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 - 1));
              *(long *)(pMVar21 + 0x68) = *(long *)(pMVar21 + 0x68) + (long)iVar11;
              goto LAB_00fbe4b8;
            }
          }
          ClearExclusiveLocal();
        }
      }
      local_a8[0] = uVar13;
      if (this_01[0x40] == (ObjectVisitor)0x0) goto LAB_00fbea1c;
LAB_00fbe4b8:
      bVar5 = *(byte *)(uVar33 + 3);
      puVar24 = (uint *)(uVar13 + 3);
      if (puVar31 < (uint *)0xfffffffffffffffc) {
        uVar32 = *puVar31;
        puVar2 = puVar31;
        while( true ) {
          if ((uVar32 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_01,uVar13,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar32);
          }
          puVar2 = puVar2 + 1;
          if (puVar24 <= puVar2) break;
          uVar32 = *puVar2;
        }
      }
      puVar2 = (uint *)(uVar13 + 7);
      uVar32 = (uint)bVar5 * 4;
      for (; puVar24 < puVar2; puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      (**(code **)(*(long *)this_01 + 0x38))(this_01,uVar13,puVar2);
      for (puVar24 = (uint *)(uVar13 + 0xb); puVar24 < puVar31 + bVar5; puVar24 = puVar24 + 1) {
        if ((*puVar24 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_01,uVar13,puVar24,(ulong)puVar24 & 0xffffffff00000000 | (ulong)*puVar24
                    );
        }
      }
      uVar15 = *puVar2;
      if ((uVar15 & 1) != 0) {
        uVar25 = uVar25 | (ulong)uVar15 & 0xfffffffffffc0000;
        uVar20 = uVar15 - uVar25;
        if ((*(uint *)(*(long *)(uVar25 + 0x10) + (uVar20 >> 7 & 0x1ffffff) * 4) >>
             (ulong)((uint)(uVar20 >> 2) & 0x1f) & 1) == 0) {
          lVar26 = *(long *)(this_01 + 0x18);
          lVar18 = lVar26 + (long)*(int *)(this_01 + 0x28) * 0x50;
          puVar29 = *(undefined8 **)(lVar18 + 0x15c0);
          lVar19 = puVar29[1];
          if (lVar19 != 0x40) goto LAB_00fbedf4;
          this_00 = (Mutex *)(lVar26 + 0x1840);
          puVar23 = (undefined8 *)(lVar18 + 0x15c0);
          base::Mutex::Lock(this_00);
          *puVar29 = *(undefined8 *)(lVar26 + 0x1868);
          *(undefined8 **)(lVar26 + 0x1868) = puVar29;
          goto LAB_00fbd77c;
        }
        if ((((uint)*(undefined8 *)(uVar25 + 8) >> 6 & 1) != 0) &&
           ((((uint)*(ulong *)(pMVar21 + 8) >> 0xf & 1) != 0 ||
            ((*(ulong *)(pMVar21 + 8) & 0x58) == 0)))) {
          RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                    (pMVar21,(ulong)puVar2);
        }
      }
    }
LAB_00fbea20:
    uVar27 = uVar27 + (long)(int)uVar32;
    if (param_1 - 1 < uVar27) {
      return uVar27;
    }
  } while( true );
}

