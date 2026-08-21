
/* v8::internal::MarkCompactCollector::RevisitObject(v8::internal::HeapObject) */

void __thiscall
v8::internal::MarkCompactCollector::RevisitObject(MarkCompactCollector *this,ulong param_2)

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
  undefined4 uVar12;
  int iVar13;
  void *pvVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ObjectVisitor *this_00;
  Mutex *this_01;
  uint *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint *puVar25;
  long lVar26;
  MemoryChunk *pMVar27;
  ulong uVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  ushort *puVar32;
  long lVar33;
  ulong local_a8 [8];
  ulong local_68;
  
  lVar30 = *(long *)(this + 0x2690);
  uVar31 = param_2 & 0xffffffff00000000;
  *(undefined1 *)(lVar30 + 0x40) = 1;
  this_00 = *(ObjectVisitor **)(this + 0x2690);
  uVar24 = uVar31 | *(uint *)(param_2 - 1);
  if (0x39 < *(byte *)(uVar24 + 6)) {
switchD_00fb3bd0_caseD_6:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  puVar22 = (uint *)(param_2 - 1);
  local_68 = param_2;
  switch(*(byte *)(uVar24 + 6)) {
  case 0:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6f84;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6f84:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < (uint *)(param_2 + 3));
      }
    }
    break;
  case 1:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6fd0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6fd0:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < (uint *)(param_2 + 3));
      }
    }
    break;
  case 2:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7134;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7134:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
    }
    break;
  case 3:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5b9c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5b9c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
    }
    break;
  case 4:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb71d0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb71d0:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
    }
    break;
  case 5:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7400;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7400:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
    }
    break;
  default:
    goto switchD_00fb3bd0_caseD_6;
  case 7:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7224;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7224:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 0xf); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 8:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar22 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar22 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar25 = puVar22;
      if (bVar8) {
        uVar16 = 1;
        puVar25 = puVar22 + 1;
      }
      while (uVar17 = puVar22[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar25 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar7) {
            *puVar25 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7454;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7454:
      uVar31 = local_68;
      puVar22 = (uint *)(local_68 - 1);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        puVar25 = (uint *)(local_68 + 3);
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar31,puVar22,(ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16
                      );
          }
          puVar22 = puVar22 + 1;
          if (puVar25 <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      uVar31 = local_68;
      puVar22 = (uint *)(local_68 + 7);
      puVar25 = (uint *)(local_68 + 0xb);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar31,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      puVar22 = (uint *)(uVar31 + 0xf);
      if (puVar25 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar25 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar31,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
          }
          puVar25 = puVar25 + 1;
        } while (puVar25 < puVar22);
      }
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar31,puVar22,(ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16
                      );
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(uVar31 + 0x13) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      if (this_00[0x35] == (ObjectVisitor)0x0) {
        BytecodeArray::MakeOlder((BytecodeArray *)&local_68);
      }
    }
    break;
  case 9:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb701c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb701c:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 7); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 10:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6cd4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6cd4:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 0x13); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
      RelocIterator::RelocIterator((RelocIterator *)local_a8,param_2,1999);
      ObjectVisitor::VisitRelocInfo(this_00,(RelocIterator *)local_a8);
    }
    break;
  case 0xb:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5d1c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5d1c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
    }
    break;
  case 0xc:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5af4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5af4:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      for (puVar22 = (uint *)(param_2 + 0xb); puVar22 < (uint *)(param_2 + 0x13);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0xd:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7594;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7594:
      local_a8[0] = param_2;
      iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar16 = *puVar25;
        }
      }
      for (puVar25 = (uint *)(param_2 + 7); puVar25 < (uint *)((long)puVar22 + (long)iVar11);
          puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0xe:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6970;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6970:
      local_a8[0] = param_2;
      iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar2 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16)
            ;
          }
          puVar2 = puVar2 + 1;
          if (puVar25 <= puVar2) break;
          uVar16 = *puVar2;
        }
      }
      puVar2 = (uint *)(param_2 + 0xb);
      for (; puVar25 < puVar2; puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
      for (; puVar2 < (uint *)((long)puVar22 + (long)iVar11); puVar2 = puVar2 + 1) {
        uVar16 = *puVar2;
        uVar31 = (ulong)uVar16 & 3;
        if (uVar31 == 1) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2);
        }
        else if ((uVar16 != 3) && (uVar31 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,
                     (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16 & 0xfffffffffffffffd);
        }
      }
    }
    break;
  case 0xf:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5c1c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5c1c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      local_a8[0] = param_2;
      HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      for (puVar22 = (uint *)(param_2 + 0xb); puVar22 < (uint *)(param_2 + 0xf);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
      sVar10 = *(short *)(param_2 + 5);
      local_a8[0] = param_2;
      sVar9 = DescriptorArray::UpdateNumberOfMarkedDescriptors
                        ((DescriptorArray *)local_a8,*(uint *)(this_00 + 0x2c),sVar10);
      uVar31 = local_a8[0];
      if ((int)sVar9 < (int)sVar10) {
        puVar25 = (uint *)(local_a8[0] + 0xf + (long)sVar10 * 0xc);
        for (puVar22 = (uint *)(local_a8[0] + 0xf + (long)(int)sVar9 * 0xc); puVar22 < puVar25;
            puVar22 = puVar22 + 1) {
          while( true ) {
            uVar16 = *puVar22;
            uVar24 = (ulong)uVar16 & 3;
            if (uVar24 == 1) break;
            if ((uVar16 != 3) && (uVar24 == 3)) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_00,uVar31,puVar22,
                         (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16 & 0xfffffffffffffffd);
            }
            puVar22 = puVar22 + 1;
            if (puVar25 <= puVar22) goto LAB_00fb7ae4;
          }
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar31,puVar22);
        }
      }
    }
    break;
  case 0x10:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6698;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6698:
      local_a8[0] = param_2;
      iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar16 = *puVar25;
        }
      }
      if (8 < iVar11) {
        lVar20 = 8;
        do {
          puVar25 = (uint *)(lVar20 + (long)puVar22);
          if (puVar25 < (uint *)0xfffffffffffffffc) {
            puVar2 = puVar25 + 1;
            uVar16 = *puVar25;
            while( true ) {
              if ((uVar16 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,param_2,puVar25,
                           (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
              }
              puVar25 = puVar25 + 1;
              if (puVar2 <= puVar25) break;
              uVar16 = *puVar25;
            }
          }
          lVar20 = lVar20 + 8;
        } while ((int)lVar20 < iVar11);
      }
    }
    break;
  case 0x11:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar22 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar22 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar25 = puVar22;
      if (bVar8) {
        uVar16 = 1;
        puVar25 = puVar22 + 1;
      }
      while (uVar17 = puVar22[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar25 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar7) {
            *puVar25 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb763c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb763c:
      uVar31 = local_68;
      lVar26 = *(long *)(this_00 + 0x18);
      lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
      puVar29 = *(undefined8 **)(lVar20 + 0x2b8);
      lVar21 = puVar29[1];
      if (lVar21 == 0x40) {
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
        *(undefined8 **)(lVar20 + 0x2b8) = puVar23;
        puVar23[1] = 1;
      }
      else {
        puVar23 = puVar29 + lVar21;
        puVar29[1] = lVar21 + 1;
      }
      puVar23[2] = uVar31;
      uVar16 = *(uint *)(local_68 + 0xf);
      if ((int)uVar16 >> 1 != 0) {
        lVar20 = 0;
        do {
          iVar11 = (int)lVar20 * 8;
          lVar21 = local_68 + (long)(iVar11 + 0xc);
          uVar31 = (ulong)*(uint *)(lVar21 + 7);
          uVar28 = local_68 & 0xffffffff00000000 | uVar31;
          uVar31 = local_68 & 0xffffffff00000000 | uVar31 & 0xfffffffffffc0000;
          if (((uint)*(undefined8 *)(uVar31 + 8) >> 6 & 1) != 0) {
            uVar18 = *(ulong *)((MemoryChunk *)(local_68 & 0xfffffffffffc0000) + 8);
            if ((((uint)uVar18 >> 0xf & 1) != 0) || ((uVar18 & 0x58) == 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        ((MemoryChunk *)(local_68 & 0xfffffffffffc0000),lVar21 + 7);
            }
          }
          uVar18 = local_68;
          puVar22 = (uint *)(local_68 + (long)(int)(iVar11 + 0x10U | 7));
          if ((*(uint *)(*(long *)(uVar31 + 0x10) + (uVar28 - uVar31 >> 7 & 0x1ffffff) * 4) >>
               (ulong)((uint)(uVar28 - uVar31 >> 2) & 0x1f) & 1) == 0) {
            uVar31 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                     ::ValueAt((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                                *)&local_68,lVar20);
            if ((uVar31 & 1) != 0) {
              uVar18 = uVar31 & 0xfffffffffffc0000;
              if (((uint)*(undefined8 *)(uVar18 + 8) >> 6 & 1) != 0) {
                uVar19 = *(ulong *)((MemoryChunk *)(local_68 & 0xfffffffffffc0000) + 8);
                if ((((uint)uVar19 >> 0xf & 1) != 0) || ((uVar19 & 0x58) == 0)) {
                  RememberedSet<(v8::internal::RememberedSetType)1>::
                  Insert<(v8::internal::AccessMode)0>
                            ((MemoryChunk *)(local_68 & 0xfffffffffffc0000),(ulong)puVar22);
                }
              }
              if ((*(uint *)(*(long *)(uVar18 + 0x10) + (uVar31 - uVar18 >> 7 & 0x1ffffff) * 4) >>
                   (ulong)((uint)(uVar31 - uVar18 >> 2) & 0x1f) & 1) == 0) {
                lVar33 = *(long *)(this_00 + 0x18);
                lVar21 = lVar33 + (long)*(int *)(this_00 + 0x28) * 0x50;
                puVar29 = *(undefined8 **)(lVar21 + 0xae0);
                lVar26 = puVar29[1];
                if (lVar26 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar33 + 0xd60));
                  *puVar29 = *(undefined8 *)(lVar33 + 0xd88);
                  *(undefined8 **)(lVar33 + 0xd88) = puVar29;
                  base::Mutex::Unlock((Mutex *)(lVar33 + 0xd60));
                  pvVar14 = operator_new(0x410);
                  memset((void *)((long)pvVar14 + 0x20),0,0x3f0);
                  *(void **)(lVar21 + 0xae0) = pvVar14;
                  *(undefined8 *)((long)pvVar14 + 8) = 1;
                  *(ulong *)((long)pvVar14 + 0x10) = uVar28;
                  *(ulong *)((long)pvVar14 + 0x18) = uVar31;
                }
                else {
                  puVar29[1] = lVar26 + 1;
                  puVar29[lVar26 * 2 + 2] = uVar28;
                  puVar29[lVar26 * 2 + 3] = uVar31;
                }
              }
            }
          }
          else if (puVar22 < (uint *)0xfffffffffffffffc) {
            puVar25 = puVar22 + 1;
            uVar17 = *puVar22;
            while( true ) {
              if ((uVar17 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar18,puVar22,
                           (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar17);
              }
              puVar22 = puVar22 + 1;
              if (puVar25 <= puVar22) break;
              uVar17 = *puVar22;
            }
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 != (long)((ulong)uVar16 << 0x20) >> 0x21);
      }
      HeapObject::SizeFromMap((HeapObject *)&local_68,uVar24);
    }
    break;
  case 0x12:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6b08;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6b08:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 7); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x13:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6bdc;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6bdc:
      iVar11 = *(int *)(param_2 + 0xf);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      FeedbackVector::BodyDescriptor::
      IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar24,param_2,iVar11 * 4 + 0x20,this_00);
    }
    break;
  case 0x14:
    uVar31 = param_2 & 0xfffffffffffc0000;
    if (((uint)*(undefined8 *)(uVar31 + 8) >> 8 & 1) == 0) {
      MainMarkingVisitor<v8::internal::MajorMarkingState>::
      VisitLeftTrimmableArray<v8::internal::FixedArray>
                ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar24,param_2);
      break;
    }
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb834c;
          }
        }
        ClearExclusiveLocal();
      }
    }
LAB_00fb834c:
    local_a8[0] = param_2;
    iVar13 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
    plVar3 = (long *)(uVar31 + 0x60);
    lVar20 = *plVar3;
    iVar11 = (int)lVar20;
    if (iVar11 == 0) {
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar16 = *puVar25;
        }
      }
      iVar11 = 8;
    }
    iVar1 = iVar11 + 0x20000;
    iVar4 = iVar13;
    if (iVar1 <= iVar13) {
      iVar4 = iVar1;
    }
    if (iVar4 <= iVar11) break;
    for (puVar25 = (uint *)((long)puVar22 + (long)iVar11);
        puVar25 < (uint *)((long)puVar22 + (long)iVar4); puVar25 = puVar25 + 1) {
      if ((*puVar25 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this_00,param_2,puVar25,(ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25)
        ;
      }
    }
    do {
      if (*plVar3 != lVar20) {
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
    if (iVar13 <= iVar1) break;
    lVar20 = *(long *)(this_00 + 8);
    goto LAB_00fb65c0;
  case 0x15:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb59c4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb59c4:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
    }
    break;
  case 0x16:
    MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
    ::VisitEmbedderTracingSubclass<v8::internal::JSObject>
              ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                *)this_00,uVar24,param_2);
    break;
  case 0x17:
    iVar11 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
             VisitJSObjectSubclass<v8::internal::JSArrayBuffer,v8::internal::JSArrayBuffer::BodyDescriptor>
                       ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar24,
                        param_2);
    goto joined_r0x00fb4e44;
  case 0x18:
    iVar11 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
             VisitJSObjectSubclass<v8::internal::JSDataView,v8::internal::JSDataView::BodyDescriptor>
                       ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar24,
                        param_2);
joined_r0x00fb4e44:
    if ((iVar11 == 0) || (this_00[0x34] == (ObjectVisitor)0x0)) break;
    lVar20 = *(long *)(this_00 + 0x10);
    puVar23 = (undefined8 *)(lVar20 + (long)*(int *)(this_00 + 0x28) * 0x50);
    puVar29 = (undefined8 *)*puVar23;
    lVar21 = puVar29[1];
    if (lVar21 != 0x10) goto LAB_00fb667c;
    base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
    *puVar29 = *(undefined8 *)(lVar20 + 0x2a8);
    *(undefined8 **)(lVar20 + 0x2a8) = puVar29;
    base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
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
    goto LAB_00fb6670;
  case 0x19:
    uVar28 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar28 + 0x10) + (~uVar28 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar28 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar28 + 0x68) = *(long *)(uVar28 + 0x68) + (long)iVar11;
            goto joined_r0x00fb589c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb589c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      BodyDescriptorBase::
      IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar24,param_2,4,(ulong)*(byte *)(uVar24 + 3) << 2,this_00);
    }
    if (*(int *)(this_00 + 0x30) == 0) break;
    if ((*(uint *)(param_2 + 0xb) & 1) == 0) break;
    uVar24 = uVar31 | *(uint *)(param_2 + 0xb);
    if ((((*(uint *)(param_2 + 0x17) & 1) == 0) ||
        (uVar28 = uVar31 | 7, *(short *)(uVar28 + *(uint *)(uVar24 - 1)) != 0xa6)) ||
       (uVar18 = uVar31 | *(uint *)(param_2 + 0x17),
       *(short *)(uVar28 + *(uint *)(uVar18 - 1)) != 0x9a)) break;
    uVar16 = *(uint *)(uVar24 + 3);
    if (((uVar16 != 0x84) &&
        (((uVar16 & 1) == 0 || (1 < *(ushort *)(uVar28 + *(uint *)((uVar31 | uVar16) - 1)) - 0x95)))
        ) || (*(int *)(uVar18 + 0x27) == 0x42)) break;
    lVar26 = *(long *)(this_00 + 0x18);
    lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
    puVar29 = *(undefined8 **)(lVar20 + 0x1b30);
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) goto LAB_00fb8774;
    this_01 = (Mutex *)(lVar26 + 0x1db0);
    puVar23 = (undefined8 *)(lVar20 + 0x1b30);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar26 + 0x1dd8);
    *(undefined8 **)(lVar26 + 0x1dd8) = puVar29;
    goto LAB_00fb65f4;
  case 0x1a:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6878;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) break;
LAB_00fb6878:
    iVar11 = (uint)*(byte *)(uVar24 + 3) << 2;
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar16 = *puVar22;
      while( true ) {
        if ((uVar16 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,(ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16)
          ;
        }
        puVar22 = puVar22 + 1;
        if ((uint *)(param_2 + 3) <= puVar22) break;
        uVar16 = *puVar22;
      }
    }
    goto LAB_00fb7acc;
  case 0x1b:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7ba8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7ba8:
      bVar5 = *(byte *)(uVar24 + 3);
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar2 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16)
            ;
          }
          puVar2 = puVar2 + 1;
          if (puVar25 <= puVar2) break;
          uVar16 = *puVar2;
        }
      }
      for (; puVar25 < puVar22 + bVar5; puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x1c:
    MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
    ::VisitEmbedderTracingSubclass<v8::internal::JSTypedArray>
              ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                *)this_00,uVar24,param_2);
    break;
  case 0x1d:
    iVar11 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
             VisitJSObjectSubclass<v8::internal::JSWeakRef,v8::internal::JSWeakRef::BodyDescriptor>
                       ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar24,
                        param_2);
    if (iVar11 == 0) break;
    uVar16 = *(uint *)(param_2 + 0xb);
    if ((uVar16 & 1) == 0) break;
    uVar31 = uVar31 | (ulong)uVar16 & 0xfffffffffffc0000;
    uVar24 = uVar16 - uVar31;
    if ((*(uint *)(*(long *)(uVar31 + 0x10) + (uVar24 >> 7 & 0x1ffffff) * 4) >>
         (ulong)((uint)(uVar24 >> 2) & 0x1f) & 1) != 0) {
      if (((uint)*(undefined8 *)(uVar31 + 8) >> 6 & 1) != 0) {
        uVar31 = *(ulong *)((MemoryChunk *)(param_2 & 0xfffffffffffc0000) + 8);
        if ((((uint)uVar31 >> 0xf & 1) != 0) || ((uVar31 & 0x58) == 0)) {
          RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                    ((MemoryChunk *)(param_2 & 0xfffffffffffc0000),param_2 + 0xb);
        }
      }
      break;
    }
    lVar26 = *(long *)(this_00 + 0x18);
    lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
    puVar29 = *(undefined8 **)(lVar20 + 0x1308);
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) goto LAB_00fb8774;
    this_01 = (Mutex *)(lVar26 + 0x1588);
    puVar23 = (undefined8 *)(lVar20 + 0x1308);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar26 + 0x15b0);
    *(undefined8 **)(lVar26 + 0x15b0) = puVar29;
    goto LAB_00fb65f4;
  case 0x1e:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7a7c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) break;
LAB_00fb7a7c:
    iVar11 = (uint)*(byte *)(uVar24 + 3) << 2;
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar16 = *puVar22;
      while( true ) {
        if ((uVar16 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,(ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16)
          ;
        }
        puVar22 = puVar22 + 1;
        if ((uint *)(param_2 + 3) <= puVar22) break;
        uVar16 = *puVar22;
      }
    }
LAB_00fb7acc:
    uVar15 = 4;
LAB_00fb7ad0:
    BodyDescriptorBase::
    IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
              (uVar24,param_2,uVar15,iVar11,this_00);
    break;
  case 0x1f:
    uVar24 = param_2 & 0xfffffffffffc0000;
    puVar22 = (uint *)(*(long *)(uVar24 + 0x10) + (~uVar24 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar24 + param_2 >> 2) & 0x1f);
    if ((*puVar22 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar25 = puVar22;
      if (bVar8) {
        uVar16 = 1;
        puVar25 = puVar22 + 1;
      }
      while (uVar17 = puVar22[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar25 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar7) {
            *puVar25 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar24 + 0x68) = *(long *)(uVar24 + 0x68) + (long)iVar11;
            goto LAB_00fb6e04;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6e04:
      if (0xa9 < *(ushort *)(param_2 + 7)) {
        uVar24 = uVar31 | *(uint *)(param_2 + 0x17);
        uVar28 = uVar31 | (ulong)*(uint *)(param_2 + 0x17) & 0xfffffffffffc0000;
        puVar22 = (uint *)(*(long *)(uVar28 + 0x10) + (uVar24 - uVar28 >> 7 & 0x1ffffff) * 4);
        while( true ) {
          uVar16 = *puVar22;
          uVar17 = (uint)(1L << (uVar24 - uVar28 >> 2 & 0x1f));
          if ((uVar17 & (uVar16 ^ 0xffffffff)) == 0) break;
          while (*puVar22 == uVar16) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar22,0x10);
            if (bVar8) {
              *puVar22 = uVar16 | uVar17;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00fb6e6c;
          }
          ClearExclusiveLocal();
        }
LAB_00fb6e6c:
        puVar22 = (uint *)(*(long *)(uVar28 + 0x10) + (uVar24 + ~uVar28 >> 7 & 0x1ffffff) * 4);
        uVar16 = 1 << (ulong)((uint)(uVar24 + ~uVar28 >> 2) & 0x1f);
        local_a8[0] = uVar24;
        if ((*puVar22 & uVar16) != 0) {
          uVar16 = uVar16 << 1;
          bVar8 = uVar16 == 0;
          puVar25 = puVar22;
          if (bVar8) {
            uVar16 = 1;
            puVar25 = puVar22 + 1;
          }
          while (uVar17 = puVar22[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar17) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar7) {
                *puVar25 = uVar17 | uVar16;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') {
                iVar11 = HeapObject::SizeFromMap
                                   ((HeapObject *)local_a8,uVar31 | *(uint *)(uVar24 - 1));
                puVar22 = (uint *)(uVar24 - 1);
                *(long *)(uVar28 + 0x68) = *(long *)(uVar28 + 0x68) + (long)iVar11;
                if (puVar22 < (uint *)0xfffffffffffffffc) {
                  uVar16 = *puVar22;
                  while( true ) {
                    if ((uVar16 & 1) != 0) {
                      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                                ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                                  *)this_00,uVar24,puVar22,
                                 (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
                    }
                    puVar22 = puVar22 + 1;
                    if ((uint *)(uVar24 + 3) <= puVar22) break;
                    uVar16 = *puVar22;
                  }
                }
                for (puVar22 = (uint *)(uVar24 + 0xb); puVar22 < (uint *)(uVar24 + 0xf);
                    puVar22 = puVar22 + 1) {
                  if ((*puVar22 & 1) != 0) {
                    MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                              ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                                *)this_00,uVar24,puVar22,
                               (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
                  }
                }
                goto LAB_00fb8468;
              }
            }
            ClearExclusiveLocal();
          }
        }
LAB_00fb8468:
        uVar16 = *(uint *)(param_2 + 0xb) >> 10 & 0x3ff;
        if (uVar16 != 0) {
          uVar17 = (int)*(short *)(uVar24 + 5);
          if ((int)uVar16 <= (int)*(short *)(uVar24 + 5)) {
            uVar17 = uVar16;
          }
          local_a8[0] = uVar24;
          sVar10 = DescriptorArray::UpdateNumberOfMarkedDescriptors
                             ((DescriptorArray *)local_a8,*(uint *)(this_00 + 0x2c),(short)uVar17);
          uVar31 = local_a8[0];
          if ((int)sVar10 < (int)uVar17) {
            puVar25 = (uint *)(local_a8[0] + (long)(int)(uVar17 * 0xc + 0xf));
            for (puVar22 = (uint *)(local_a8[0] + (long)(sVar10 * 0xc + 0xf)); puVar22 < puVar25;
                puVar22 = puVar22 + 1) {
              uVar16 = *puVar22;
              uVar24 = (ulong)uVar16 & 3;
              if (uVar24 == 1) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar31,puVar22);
              }
              else if ((uVar16 != 3) && (uVar24 == 3)) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar31,puVar22,
                           (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16 & 0xfffffffffffffffd)
                ;
              }
            }
          }
        }
      }
      puVar25 = (uint *)(param_2 + 0x23);
      for (puVar22 = (uint *)(param_2 + 0xf); puVar22 < puVar25; puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
      if (puVar25 < (uint *)0xfffffffffffffffc) {
        do {
          uVar16 = *puVar25;
          uVar31 = (ulong)uVar16 & 3;
          if (uVar31 == 1) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25);
          }
          else if ((uVar16 != 3) && (uVar31 == 3)) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16 & 0xfffffffffffffffd);
          }
          puVar25 = puVar25 + 1;
        } while (puVar25 < (uint *)(param_2 + 0x27));
      }
    }
    break;
  case 0x20:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6c4c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6c4c:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 0x417); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x21:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5a9c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5a9c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      for (puVar22 = (uint *)(param_2 + 0xb); puVar22 < (uint *)(param_2 + 0x1b);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x22:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb63a0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb63a0:
      uVar16 = *(uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar16 = *puVar25;
        }
        uVar16 = *(uint *)(param_2 + 3);
        iVar11 = *(int *)(param_2 + 7);
      }
      else {
        iVar11 = *(int *)(param_2 + 7);
      }
      uVar16 = uVar16 + 0xf & 0xfffffffc;
      for (puVar25 = (uint *)((long)puVar22 + (long)(int)uVar16);
          puVar25 < (uint *)((long)puVar22 + (long)(int)(uVar16 + iVar11 * 4));
          puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x23:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb62f8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb62f8:
      local_a8[0] = param_2;
      iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar16 = *puVar25;
        }
      }
      for (puVar25 = (uint *)(param_2 + 7); puVar25 < (uint *)((long)puVar22 + (long)iVar11);
          puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x24:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7ef8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7ef8:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 0x13); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x25:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb60e0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb60e0:
      local_a8[0] = param_2;
      uVar12 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      PrototypeInfo::BodyDescriptor::
      IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar24,param_2,uVar12,this_00);
    }
    break;
  case 0x26:
    uVar24 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar24 + 0x10) + (~uVar24 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar24 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar24 + 0x68) = *(long *)(uVar24 + 0x68) + (long)iVar11;
            goto LAB_00fb5fcc;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) break;
LAB_00fb5fcc:
    puVar25 = (uint *)(param_2 + 3);
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      do {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
        puVar22 = puVar22 + 1;
      } while (puVar22 < puVar25);
    }
    (**(code **)(*(long *)this_00 + 0x38))(this_00,param_2,puVar25);
    puVar22 = (uint *)(param_2 + 7);
    if (puVar22 < (uint *)(param_2 + 0x13)) {
      uVar16 = *puVar22;
      puVar2 = puVar22;
      while( true ) {
        if ((uVar16 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16);
        }
        puVar2 = puVar2 + 1;
        if ((uint *)(param_2 + 0x13) <= puVar2) break;
        uVar16 = *puVar2;
      }
    }
    if (((((*(int *)(this_00 + 0x30) == 0) ||
          (uVar16 = *(uint *)(param_2 + 0x1b) & 0x1f, uVar16 - 10 < 7)) || (uVar16 - 1 < 2)) ||
        (((*(uint *)(param_2 + 0x1b) >> 0xc & 1) == 0 || ((*puVar25 & 1) == 0)))) ||
       ((uVar24 = uVar31 | *puVar25, *(short *)((uVar31 | 7) + (ulong)*(uint *)(uVar24 - 1)) != 0x86
        || ((*(int *)(this_00 + 0x30) != 2 &&
            (local_a8[0] = uVar24, uVar31 = BytecodeArray::IsOld((BytecodeArray *)local_a8),
            (uVar31 & 1) == 0)))))) {
      if (puVar25 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar25 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
          }
          puVar25 = puVar25 + 1;
        } while (puVar25 < puVar22);
      }
      break;
    }
    lVar26 = *(long *)(this_00 + 0x18);
    lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
    puVar29 = *(undefined8 **)(lVar20 + 0x1878);
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) {
LAB_00fb8774:
      puVar29[1] = lVar21 + 1;
      puVar29[lVar21 + 2] = param_2;
      break;
    }
    this_01 = (Mutex *)(lVar26 + 0x1af8);
    puVar23 = (undefined8 *)(lVar20 + 0x1878);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar26 + 0x1b20);
    *(undefined8 **)(lVar26 + 0x1b20) = puVar29;
    goto LAB_00fb65f4;
  case 0x27:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5dfc;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5dfc:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      for (puVar22 = (uint *)(param_2 + 0xb); puVar22 < (uint *)(param_2 + 0x13);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x28:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5d4c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5d4c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      for (puVar22 = (uint *)(param_2 + 0xb); puVar22 < (uint *)(param_2 + 0x13);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x29:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb58f4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb58f4:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar16 = *puVar25;
        }
      }
      bVar5 = *(byte *)(param_2 + 5);
      for (puVar25 = (uint *)(param_2 + 7);
          puVar25 < (uint *)(((ulong)bVar5 << 4 | 8) + (long)puVar22); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x2a:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5a44;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5a44:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      puVar22 = (uint *)(param_2 + 7);
      puVar25 = puVar22 + (ulong)*(byte *)(param_2 + 5) * 2;
      for (; puVar22 < puVar25; puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x2b:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5da4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5da4:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      puVar22 = (uint *)(param_2 + 0xb);
      puVar25 = puVar22 + (ulong)*(byte *)(param_2 + 9) * 6;
      for (; puVar22 < puVar25; puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x2c:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb80f4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb80f4:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      puVar22 = (uint *)(param_2 + 0x17);
      for (; puVar25 < puVar22; puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
      for (; puVar22 < (uint *)(param_2 + 0x47); puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x2d:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6454;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6454:
      bVar5 = *(byte *)(uVar24 + 3);
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar2 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16)
            ;
          }
          puVar2 = puVar2 + 1;
          if (puVar25 <= puVar2) break;
          uVar16 = *puVar2;
        }
      }
      for (; puVar25 < puVar22 + bVar5; puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x2e:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb5c9c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb5c9c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      for (puVar22 = (uint *)(param_2 + 0xb); puVar22 < (uint *)(param_2 + 0xf);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x2f:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7f80;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7f80:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 0x17); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
      for (puVar22 = (uint *)(param_2 + 0x1b); puVar22 < (uint *)(param_2 + 0x23);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x30:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto joined_r0x00fb577c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb577c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar16 = *puVar22;
        }
      }
      for (puVar22 = (uint *)(param_2 + 0xb); puVar22 < (uint *)(param_2 + 0xf);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x31:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb64f0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) break;
LAB_00fb64f0:
    puVar25 = (uint *)(param_2 + 3);
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar16 = *puVar22;
      puVar2 = puVar22;
      while( true ) {
        if ((uVar16 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16);
        }
        puVar2 = puVar2 + 1;
        if (puVar25 <= puVar2) break;
        uVar16 = *puVar2;
      }
    }
    local_a8[0] = param_2;
    iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
    for (; puVar25 < (uint *)((long)puVar22 + (long)iVar11); puVar25 = puVar25 + 1) {
      while( true ) {
        uVar16 = *puVar25;
        uVar31 = (ulong)uVar16 & 3;
        if (uVar31 == 1) break;
        if ((uVar16 != 3) && (uVar31 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16 & 0xfffffffffffffffd);
        }
        puVar25 = puVar25 + 1;
        if ((uint *)((long)puVar22 + (long)iVar11) <= puVar25) goto LAB_00fb65bc;
      }
      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                  *)this_00,param_2,puVar25);
    }
LAB_00fb65bc:
    lVar20 = *(long *)(this_00 + 0x18);
LAB_00fb65c0:
    puVar23 = (undefined8 *)(lVar20 + (long)*(int *)(this_00 + 0x28) * 0x50);
    puVar29 = (undefined8 *)*puVar23;
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) {
LAB_00fb667c:
      puVar29[1] = lVar21 + 1;
      puVar29[lVar21 + 2] = param_2;
      break;
    }
    this_01 = (Mutex *)(lVar20 + 0x280);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar20 + 0x2a8);
    *(undefined8 **)(lVar20 + 0x2a8) = puVar29;
    goto LAB_00fb65f4;
  case 0x32:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb6a80;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb6a80:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 7); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x33:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb8264;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb8264:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      for (; puVar25 < (uint *)(param_2 + 7); puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
      for (puVar22 = (uint *)(param_2 + 0xf); puVar22 < (uint *)(param_2 + 0x13);
          puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
        }
      }
    }
    break;
  case 0x34:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb81bc;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb81bc:
      local_a8[0] = param_2;
      iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar16 = *puVar25;
        }
      }
      for (puVar25 = (uint *)(param_2 + 0xb); puVar25 < (uint *)((long)puVar22 + (long)iVar11);
          puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x35:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb804c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb804c:
      local_a8[0] = param_2;
      iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar16 = *puVar25;
        }
      }
      for (puVar25 = (uint *)(param_2 + 0x17); puVar25 < (uint *)((long)puVar22 + (long)iVar11);
          puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
        }
      }
    }
    break;
  case 0x36:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb61e8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) break;
LAB_00fb61e8:
    bVar5 = *(byte *)(uVar24 + 3);
    puVar25 = (uint *)(param_2 + 3);
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar16 = *puVar22;
      puVar2 = puVar22;
      while( true ) {
        if ((uVar16 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16);
        }
        puVar2 = puVar2 + 1;
        if (puVar25 <= puVar2) break;
        uVar16 = *puVar2;
      }
    }
    iVar11 = (uint)bVar5 << 2;
    for (; puVar25 < (uint *)(param_2 + 0xb); puVar25 = puVar25 + 1) {
      if ((*puVar25 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this_00,param_2,puVar25,(ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25)
        ;
      }
    }
    puVar32 = &WasmInstanceObject::kTaggedFieldOffsets;
    do {
      puVar25 = (uint *)((long)puVar22 + (ulong)*puVar32);
      if (puVar25 < (uint *)0xfffffffffffffffc) {
        puVar2 = puVar25 + 1;
        uVar16 = *puVar25;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16);
          }
          puVar25 = puVar25 + 1;
          if (puVar2 <= puVar25) break;
          uVar16 = *puVar25;
        }
      }
      puVar32 = puVar32 + 1;
    } while (puVar32 != (ushort *)&DAT_019f0a14);
    uVar15 = 0xc4;
    goto LAB_00fb7ad0;
  case 0x37:
    uVar31 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar31 + 0x10) + (~uVar31 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar16 = 1 << (ulong)((uint)(~uVar31 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar31 + 0x68) = *(long *)(uVar31 + 0x68) + (long)iVar11;
            goto LAB_00fb7cd4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb7cd4:
      local_a8[0] = param_2;
      iVar11 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar16 = *puVar22;
        puVar2 = puVar22;
        while( true ) {
          if ((uVar16 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16)
            ;
          }
          puVar2 = puVar2 + 1;
          if (puVar25 <= puVar2) break;
          uVar16 = *puVar2;
        }
      }
      for (; puVar25 < (uint *)((long)puVar22 + (long)iVar11); puVar25 = puVar25 + 1) {
        uVar16 = *puVar25;
        uVar31 = (ulong)uVar16 & 3;
        if (uVar31 == 1) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25);
        }
        else if ((uVar16 != 3) && (uVar31 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar16 & 0xfffffffffffffffd);
        }
      }
    }
    break;
  case 0x38:
    pMVar27 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    puVar25 = (uint *)(*(long *)(pMVar27 + 0x10) + (~(ulong)pMVar27 + param_2 >> 7 & 0x1ffffff) * 4)
    ;
    uVar16 = 1 << (ulong)((uint)(~(ulong)pMVar27 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar16) != 0) {
      uVar16 = uVar16 << 1;
      bVar8 = uVar16 == 0;
      puVar2 = puVar25;
      if (bVar8) {
        uVar16 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar17 = puVar25[bVar8], (uVar16 & (uVar17 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar17) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar7) {
            *puVar2 = uVar17 | uVar16;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(pMVar27 + 0x68) = *(long *)(pMVar27 + 0x68) + (long)iVar11;
            goto LAB_00fb7da4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) break;
LAB_00fb7da4:
    bVar5 = *(byte *)(uVar24 + 3);
    puVar25 = (uint *)(param_2 + 3);
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar16 = *puVar22;
      puVar2 = puVar22;
      while( true ) {
        if ((uVar16 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar16);
        }
        puVar2 = puVar2 + 1;
        if (puVar25 <= puVar2) break;
        uVar16 = *puVar2;
      }
    }
    puVar2 = (uint *)(param_2 + 7);
    for (; puVar25 < puVar2; puVar25 = puVar25 + 1) {
      if ((*puVar25 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this_00,param_2,puVar25,(ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25)
        ;
      }
    }
    (**(code **)(*(long *)this_00 + 0x38))(this_00,param_2,puVar2);
    for (puVar25 = (uint *)(param_2 + 0xb); puVar25 < puVar22 + bVar5; puVar25 = puVar25 + 1) {
      if ((*puVar25 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this_00,param_2,puVar25,(ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25)
        ;
      }
    }
    uVar16 = *puVar2;
    if ((uVar16 & 1) == 0) break;
    uVar31 = uVar31 | (ulong)uVar16 & 0xfffffffffffc0000;
    uVar24 = uVar16 - uVar31;
    if ((*(uint *)(*(long *)(uVar31 + 0x10) + (uVar24 >> 7 & 0x1ffffff) * 4) >>
         (ulong)((uint)(uVar24 >> 2) & 0x1f) & 1) != 0) {
      if ((((uint)*(undefined8 *)(uVar31 + 8) >> 6 & 1) != 0) &&
         ((((uint)*(ulong *)(pMVar27 + 8) >> 0xf & 1) != 0 ||
          ((*(ulong *)(pMVar27 + 8) & 0x58) == 0)))) {
        RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                  (pMVar27,(ulong)puVar2);
      }
      break;
    }
    lVar26 = *(long *)(this_00 + 0x18);
    lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
    puVar29 = *(undefined8 **)(lVar20 + 0x15c0);
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) goto LAB_00fb8774;
    this_01 = (Mutex *)(lVar26 + 0x1840);
    puVar23 = (undefined8 *)(lVar20 + 0x15c0);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar26 + 0x1868);
    *(undefined8 **)(lVar26 + 0x1868) = puVar29;
LAB_00fb65f4:
    base::Mutex::Unlock(this_01);
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
LAB_00fb6670:
    *puVar23 = pvVar14;
    *(undefined8 *)((long)pvVar14 + 8) = 1;
    *(ulong *)((long)pvVar14 + 0x10) = param_2;
  }
LAB_00fb7ae4:
  *(undefined1 *)(lVar30 + 0x40) = 0;
  return;
}

