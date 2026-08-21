
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::MarkCompactCollector::VisitObject(v8::internal::HeapObject) */

MarkCompactCollector * __thiscall
v8::internal::MarkCompactCollector::VisitObject(MarkCompactCollector *this,ulong param_2)

{
  int iVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  MarkCompactCollector *extraout_x0;
  MarkCompactCollector *extraout_x0_00;
  MarkCompactCollector *extraout_x0_01;
  MarkCompactCollector *extraout_x0_02;
  MarkCompactCollector *extraout_x0_03;
  MarkCompactCollector *extraout_x0_04;
  MarkCompactCollector *extraout_x0_05;
  MarkCompactCollector *extraout_x0_06;
  MarkCompactCollector *extraout_x0_07;
  MarkCompactCollector *extraout_x0_08;
  MarkCompactCollector *extraout_x0_09;
  MarkCompactCollector *extraout_x0_10;
  MarkCompactCollector *pMVar13;
  MarkCompactCollector *extraout_x0_11;
  MarkCompactCollector *extraout_x0_12;
  MarkCompactCollector *extraout_x0_13;
  MarkCompactCollector *extraout_x0_14;
  MarkCompactCollector *extraout_x0_15;
  MarkCompactCollector *extraout_x0_16;
  MarkCompactCollector *extraout_x0_17;
  MarkCompactCollector *extraout_x0_18;
  MarkCompactCollector *extraout_x0_19;
  MarkCompactCollector *extraout_x0_20;
  MarkCompactCollector *extraout_x0_21;
  MarkCompactCollector *extraout_x0_22;
  MarkCompactCollector *extraout_x0_23;
  MarkCompactCollector *extraout_x0_24;
  MarkCompactCollector *extraout_x0_25;
  MarkCompactCollector *extraout_x0_26;
  MarkCompactCollector *extraout_x0_27;
  MarkCompactCollector *extraout_x0_28;
  MarkCompactCollector *extraout_x0_29;
  MarkCompactCollector *extraout_x0_30;
  MarkCompactCollector *extraout_x0_31;
  MarkCompactCollector *extraout_x0_32;
  MarkCompactCollector *extraout_x0_33;
  MarkCompactCollector *extraout_x0_34;
  MarkCompactCollector *extraout_x0_35;
  MarkCompactCollector *extraout_x0_36;
  MarkCompactCollector *extraout_x0_37;
  MarkCompactCollector *extraout_x0_38;
  MarkCompactCollector *extraout_x0_39;
  MarkCompactCollector *extraout_x0_40;
  MarkCompactCollector *extraout_x0_41;
  MarkCompactCollector *extraout_x0_42;
  MarkCompactCollector *extraout_x0_43;
  MarkCompactCollector *extraout_x0_44;
  MarkCompactCollector *extraout_x0_45;
  MarkCompactCollector *extraout_x0_46;
  MarkCompactCollector *extraout_x0_47;
  MarkCompactCollector *extraout_x0_48;
  MarkCompactCollector *extraout_x0_49;
  MarkCompactCollector *extraout_x0_50;
  MarkCompactCollector *extraout_x0_51;
  MarkCompactCollector *extraout_x0_52;
  MarkCompactCollector *extraout_x0_53;
  void *pvVar14;
  MarkCompactCollector *extraout_x0_54;
  MarkCompactCollector *extraout_x0_55;
  MarkCompactCollector *extraout_x0_56;
  MarkCompactCollector *extraout_x0_57;
  MarkCompactCollector *extraout_x0_58;
  MarkCompactCollector *extraout_x0_59;
  MarkCompactCollector *extraout_x0_60;
  MarkCompactCollector *extraout_x0_61;
  MarkCompactCollector *extraout_x0_62;
  MarkCompactCollector *extraout_x0_63;
  MarkCompactCollector *extraout_x0_64;
  MarkCompactCollector *extraout_x0_65;
  MarkCompactCollector *extraout_x0_66;
  MarkCompactCollector *extraout_x0_67;
  MarkCompactCollector *extraout_x0_68;
  MarkCompactCollector *extraout_x0_69;
  MarkCompactCollector *extraout_x0_70;
  MarkCompactCollector *extraout_x0_71;
  MarkCompactCollector *extraout_x0_72;
  MarkCompactCollector *extraout_x0_73;
  MarkCompactCollector *extraout_x0_74;
  MarkCompactCollector *extraout_x0_75;
  MarkCompactCollector *extraout_x0_76;
  MarkCompactCollector *extraout_x0_77;
  MarkCompactCollector *extraout_x0_78;
  MarkCompactCollector *extraout_x0_79;
  MarkCompactCollector *extraout_x0_80;
  MarkCompactCollector *extraout_x0_81;
  MarkCompactCollector *extraout_x0_82;
  MarkCompactCollector *extraout_x0_83;
  MarkCompactCollector *extraout_x0_84;
  MarkCompactCollector *extraout_x0_85;
  MarkCompactCollector *extraout_x0_86;
  MarkCompactCollector *extraout_x0_87;
  MarkCompactCollector *extraout_x0_88;
  MarkCompactCollector *extraout_x0_89;
  MarkCompactCollector *extraout_x0_90;
  MarkCompactCollector *extraout_x0_91;
  MarkCompactCollector *extraout_x0_92;
  MarkCompactCollector *extraout_x0_93;
  MarkCompactCollector *extraout_x0_94;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
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
  ulong uVar30;
  ushort *puVar31;
  long lVar32;
  ulong local_a8 [8];
  ulong local_68;
  
  this_00 = *(ObjectVisitor **)(this + 0x2690);
  uVar30 = param_2 & 0xffffffff00000000;
  uVar24 = uVar30 | *(uint *)(param_2 - 1);
  if (0x39 < *(byte *)(uVar24 + 6)) {
switchD_00faef0c_caseD_6:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  puVar22 = (uint *)(param_2 - 1);
  local_68 = param_2;
  switch(*(byte *)(uVar24 + 6)) {
  case 0:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb2320;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb2320:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_34;
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < (uint *)(param_2 + 3));
      }
    }
    break;
  case 1:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb236c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb236c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_35;
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < (uint *)(param_2 + 3));
      }
    }
    break;
  case 2:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb24d0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb24d0:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_40;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
    }
    break;
  case 3:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb0f38;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0f38:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_41;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
    }
    break;
  case 4:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb256c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb256c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_42;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
    }
    break;
  case 5:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb279c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb279c:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_47;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
    }
    break;
  default:
    goto switchD_00faef0c_caseD_6;
  case 7:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb25c0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb25c0:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_43;
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
          this = extraout_x0_44;
        }
      }
    }
    break;
  case 8:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar22 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar22 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar25 = puVar22;
      if (bVar9) {
        uVar10 = 1;
        puVar25 = puVar22 + 1;
      }
      while (uVar16 = puVar22[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar25 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar8) {
            *puVar25 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb27f0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb27f0:
      uVar30 = local_68;
      puVar22 = (uint *)(local_68 - 1);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        puVar25 = (uint *)(local_68 + 3);
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar30,puVar22,(ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10
                      );
            this = extraout_x0_48;
          }
          puVar22 = puVar22 + 1;
          if (puVar25 <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
      uVar30 = local_68;
      puVar22 = (uint *)(local_68 + 7);
      puVar25 = (uint *)(local_68 + 0xb);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar30,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_49;
          }
          puVar22 = puVar22 + 1;
        } while (puVar22 < puVar25);
      }
      puVar22 = (uint *)(uVar30 + 0xf);
      if (puVar25 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar25 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar30,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
            this = extraout_x0_50;
          }
          puVar25 = puVar25 + 1;
        } while (puVar25 < puVar22);
      }
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,uVar30,puVar22,(ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10
                      );
            this = extraout_x0_51;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(uVar30 + 0x13) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
      if (this_00[0x35] == (ObjectVisitor)0x0) {
        this = (MarkCompactCollector *)BytecodeArray::MakeOlder((BytecodeArray *)&local_68);
      }
    }
    break;
  case 9:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb23b8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb23b8:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_36;
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
          this = extraout_x0_37;
        }
      }
    }
    break;
  case 10:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb2070;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb2070:
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
      this = (MarkCompactCollector *)
             ObjectVisitor::VisitRelocInfo(this_00,(RelocIterator *)local_a8);
    }
    break;
  case 0xb:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb10b8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb10b8:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_56;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
    }
    break;
  case 0xc:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb0e90;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0e90:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_38;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
          this = extraout_x0_39;
        }
      }
    }
    break;
  case 0xd:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb2930;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb2930:
      local_a8[0] = param_2;
      this = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      iVar11 = (int)this;
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_52;
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar10 = *puVar25;
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
          this = extraout_x0_53;
        }
      }
    }
    break;
  case 0xe:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb1d0c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb1d0c:
      local_a8[0] = param_2;
      this = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      iVar11 = (int)this;
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar2 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10)
            ;
            this = extraout_x0_18;
          }
          puVar2 = puVar2 + 1;
          if (puVar25 <= puVar2) break;
          uVar10 = *puVar2;
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
          this = extraout_x0_19;
        }
      }
      for (; puVar2 < (uint *)((long)puVar22 + (long)iVar11); puVar2 = puVar2 + 1) {
        uVar10 = *puVar2;
        uVar30 = (ulong)uVar10 & 3;
        if (uVar30 == 1) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2);
          this = extraout_x0_20;
        }
        else if ((uVar10 != 3) && (uVar30 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,
                     (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10 & 0xfffffffffffffffd);
          this = extraout_x0_21;
        }
      }
    }
    break;
  case 0xf:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto joined_r0x00fb0fb8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0fb8:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
      sVar6 = *(short *)(param_2 + 5);
      local_a8[0] = param_2;
      this = (MarkCompactCollector *)
             DescriptorArray::UpdateNumberOfMarkedDescriptors
                       ((DescriptorArray *)local_a8,*(uint *)(this_00 + 0x2c),sVar6);
      uVar30 = local_a8[0];
      if ((int)(short)this < (int)sVar6) {
        puVar25 = (uint *)(local_a8[0] + 0xf + (long)sVar6 * 0xc);
        for (puVar22 = (uint *)(local_a8[0] + 0xf + (long)(int)(short)this * 0xc); puVar22 < puVar25
            ; puVar22 = puVar22 + 1) {
          while( true ) {
            uVar10 = *puVar22;
            uVar24 = (ulong)uVar10 & 3;
            if (uVar24 == 1) break;
            if ((uVar10 != 3) && (uVar24 == 3)) {
              MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
              ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                        ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                          *)this_00,uVar30,puVar22,
                         (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10 & 0xfffffffffffffffd);
              this = extraout_x0_46;
            }
            puVar22 = puVar22 + 1;
            if (puVar25 <= puVar22) {
              return this;
            }
          }
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,uVar30,puVar22);
          this = extraout_x0_45;
        }
      }
    }
    break;
  case 0x10:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb1a34;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb1a34:
      local_a8[0] = param_2;
      this = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      iVar11 = (int)this;
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_13;
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar10 = *puVar25;
        }
      }
      if (8 < iVar11) {
        lVar20 = 8;
        do {
          puVar25 = (uint *)(lVar20 + (long)puVar22);
          if (puVar25 < (uint *)0xfffffffffffffffc) {
            puVar2 = puVar25 + 1;
            uVar10 = *puVar25;
            while( true ) {
              if ((uVar10 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,param_2,puVar25,
                           (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
                this = extraout_x0_14;
              }
              puVar25 = puVar25 + 1;
              if (puVar2 <= puVar25) break;
              uVar10 = *puVar25;
            }
          }
          lVar20 = lVar20 + 8;
        } while ((int)lVar20 < iVar11);
      }
    }
    break;
  case 0x11:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar22 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar22 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar25 = puVar22;
      if (bVar9) {
        uVar10 = 1;
        puVar25 = puVar22 + 1;
      }
      while (uVar16 = puVar22[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar25 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar8) {
            *puVar25 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb29d8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb29d8:
      uVar30 = local_68;
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
      puVar23[2] = uVar30;
      uVar10 = *(uint *)(local_68 + 0xf);
      if ((int)uVar10 >> 1 != 0) {
        lVar20 = 0;
        do {
          iVar11 = (int)lVar20 * 8;
          lVar21 = local_68 + (long)(iVar11 + 0xc);
          uVar30 = (ulong)*(uint *)(lVar21 + 7);
          uVar28 = local_68 & 0xffffffff00000000 | uVar30;
          uVar30 = local_68 & 0xffffffff00000000 | uVar30 & 0xfffffffffffc0000;
          if (((uint)*(undefined8 *)(uVar30 + 8) >> 6 & 1) != 0) {
            uVar18 = *(ulong *)((MemoryChunk *)(local_68 & 0xfffffffffffc0000) + 8);
            if ((((uint)uVar18 >> 0xf & 1) != 0) || ((uVar18 & 0x58) == 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        ((MemoryChunk *)(local_68 & 0xfffffffffffc0000),lVar21 + 7);
            }
          }
          uVar18 = local_68;
          puVar22 = (uint *)(local_68 + (long)(int)(iVar11 + 0x10U | 7));
          if ((*(uint *)(*(long *)(uVar30 + 0x10) + (uVar28 - uVar30 >> 7 & 0x1ffffff) * 4) >>
               (ulong)((uint)(uVar28 - uVar30 >> 2) & 0x1f) & 1) == 0) {
            uVar30 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                     ::ValueAt((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                                *)&local_68,lVar20);
            if ((uVar30 & 1) != 0) {
              uVar18 = uVar30 & 0xfffffffffffc0000;
              if (((uint)*(undefined8 *)(uVar18 + 8) >> 6 & 1) != 0) {
                uVar19 = *(ulong *)((MemoryChunk *)(local_68 & 0xfffffffffffc0000) + 8);
                if ((((uint)uVar19 >> 0xf & 1) != 0) || ((uVar19 & 0x58) == 0)) {
                  RememberedSet<(v8::internal::RememberedSetType)1>::
                  Insert<(v8::internal::AccessMode)0>
                            ((MemoryChunk *)(local_68 & 0xfffffffffffc0000),(ulong)puVar22);
                }
              }
              if ((*(uint *)(*(long *)(uVar18 + 0x10) + (uVar30 - uVar18 >> 7 & 0x1ffffff) * 4) >>
                   (ulong)((uint)(uVar30 - uVar18 >> 2) & 0x1f) & 1) == 0) {
                lVar32 = *(long *)(this_00 + 0x18);
                lVar21 = lVar32 + (long)*(int *)(this_00 + 0x28) * 0x50;
                puVar29 = *(undefined8 **)(lVar21 + 0xae0);
                lVar26 = puVar29[1];
                if (lVar26 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar32 + 0xd60));
                  *puVar29 = *(undefined8 *)(lVar32 + 0xd88);
                  *(undefined8 **)(lVar32 + 0xd88) = puVar29;
                  base::Mutex::Unlock((Mutex *)(lVar32 + 0xd60));
                  pvVar14 = operator_new(0x410);
                  memset((void *)((long)pvVar14 + 0x20),0,0x3f0);
                  *(void **)(lVar21 + 0xae0) = pvVar14;
                  *(undefined8 *)((long)pvVar14 + 8) = 1;
                  *(ulong *)((long)pvVar14 + 0x10) = uVar28;
                  *(ulong *)((long)pvVar14 + 0x18) = uVar30;
                }
                else {
                  puVar29[1] = lVar26 + 1;
                  puVar29[lVar26 * 2 + 2] = uVar28;
                  puVar29[lVar26 * 2 + 3] = uVar30;
                }
              }
            }
          }
          else if (puVar22 < (uint *)0xfffffffffffffffc) {
            puVar25 = puVar22 + 1;
            uVar16 = *puVar22;
            while( true ) {
              if ((uVar16 & 1) != 0) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar18,puVar22,
                           (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar16);
              }
              puVar22 = puVar22 + 1;
              if (puVar25 <= puVar22) break;
              uVar16 = *puVar22;
            }
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 != (long)((ulong)uVar10 << 0x20) >> 0x21);
      }
      this = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)&local_68,uVar24);
    }
    break;
  case 0x12:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb1ea4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb1ea4:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_24;
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
          this = extraout_x0_25;
        }
      }
    }
    break;
  case 0x13:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb1f78;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb1f78:
      iVar11 = *(int *)(param_2 + 0xf);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
      FeedbackVector::BodyDescriptor::
      IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar24,param_2,iVar11 * 4 + 0x20,this_00);
      this = extraout_x0_27;
    }
    break;
  case 0x14:
    uVar30 = param_2 & 0xfffffffffffc0000;
    if (((uint)*(undefined8 *)(uVar30 + 8) >> 8 & 1) == 0) {
      uVar10 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
               VisitLeftTrimmableArray<v8::internal::FixedArray>
                         ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar24,
                          param_2);
      return (MarkCompactCollector *)(ulong)uVar10;
    }
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb36e4;
          }
        }
        ClearExclusiveLocal();
      }
    }
LAB_00fb36e4:
    local_a8[0] = param_2;
    pMVar13 = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
    plVar3 = (long *)(uVar30 + 0x60);
    lVar20 = *plVar3;
    iVar11 = (int)pMVar13;
    iVar17 = (int)lVar20;
    if (iVar17 == 0) {
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
            pMVar13 = extraout_x0_86;
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar10 = *puVar25;
        }
      }
      iVar17 = 8;
    }
    iVar1 = iVar17 + 0x20000;
    iVar4 = iVar11;
    if (iVar1 <= iVar11) {
      iVar4 = iVar1;
    }
    if (iVar4 <= iVar17) {
      return pMVar13;
    }
    for (puVar25 = (uint *)((long)puVar22 + (long)iVar17);
        puVar25 < (uint *)((long)puVar22 + (long)iVar4); puVar25 = puVar25 + 1) {
      if ((*puVar25 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this_00,param_2,puVar25,(ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25)
        ;
        pMVar13 = extraout_x0_94;
      }
    }
    do {
      if (*plVar3 != lVar20) {
        ClearExclusiveLocal();
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","success");
      }
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *plVar3 = (long)iVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 <= iVar1) {
      return pMVar13;
    }
    lVar20 = *(long *)(this_00 + 8);
    goto LAB_00fb195c;
  case 0x15:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb0d60;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0d60:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_26;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
    }
    break;
  case 0x16:
    uVar10 = MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
             ::VisitEmbedderTracingSubclass<v8::internal::JSObject>
                       ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                         *)this_00,uVar24,param_2);
    return (MarkCompactCollector *)(ulong)uVar10;
  case 0x17:
    uVar10 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
             VisitJSObjectSubclass<v8::internal::JSArrayBuffer,v8::internal::JSArrayBuffer::BodyDescriptor>
                       ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar24,
                        param_2);
    goto joined_r0x00fb01b0;
  case 0x18:
    uVar10 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
             VisitJSObjectSubclass<v8::internal::JSDataView,v8::internal::JSDataView::BodyDescriptor>
                       ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar24,
                        param_2);
joined_r0x00fb01b0:
    pMVar13 = (MarkCompactCollector *)(ulong)uVar10;
    if (uVar10 == 0) {
      return (MarkCompactCollector *)0x0;
    }
    if (this_00[0x34] == (ObjectVisitor)0x0) {
      return pMVar13;
    }
    lVar20 = *(long *)(this_00 + 0x10);
    puVar23 = (undefined8 *)(lVar20 + (long)*(int *)(this_00 + 0x28) * 0x50);
    puVar29 = (undefined8 *)*puVar23;
    lVar21 = puVar29[1];
    if (lVar21 != 0x10) goto LAB_00fb1a18;
    base::Mutex::Lock((Mutex *)(lVar20 + 0x280));
    *puVar29 = *(undefined8 *)(lVar20 + 0x2a8);
    *(undefined8 **)(lVar20 + 0x2a8) = puVar29;
    base::Mutex::Unlock((Mutex *)(lVar20 + 0x280));
    this = operator_new(0x90);
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    goto LAB_00fb1a0c;
  case 0x19:
    uVar28 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar28 + 0x10) + (~uVar28 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar28 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar28 + 0x68) = *(long *)(uVar28 + 0x68) + (long)iVar11;
            goto joined_r0x00fb0c38;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0c38:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
      BodyDescriptorBase::
      IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar24,param_2,4,(ulong)*(byte *)(uVar24 + 3) << 2,this_00);
      this = extraout_x0_15;
    }
    if (*(int *)(this_00 + 0x30) == 0) {
      return this;
    }
    if ((*(uint *)(param_2 + 0xb) & 1) == 0) {
      return this;
    }
    uVar24 = uVar30 | *(uint *)(param_2 + 0xb);
    if ((*(uint *)(param_2 + 0x17) & 1) == 0) {
      return this;
    }
    uVar28 = uVar30 | 7;
    if (*(short *)(uVar28 + *(uint *)(uVar24 - 1)) != 0xa6) {
      return this;
    }
    uVar18 = uVar30 | *(uint *)(param_2 + 0x17);
    if (*(short *)(uVar28 + *(uint *)(uVar18 - 1)) != 0x9a) {
      return this;
    }
    uVar10 = *(uint *)(uVar24 + 3);
    if (uVar10 != 0x84) {
      if ((uVar10 & 1) == 0) {
        return this;
      }
      if (1 < *(ushort *)(uVar28 + *(uint *)((uVar30 | uVar10) - 1)) - 0x95) {
        return this;
      }
    }
    if (*(int *)(uVar18 + 0x27) == 0x42) {
      return this;
    }
    lVar26 = *(long *)(this_00 + 0x18);
    lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
    puVar29 = *(undefined8 **)(lVar20 + 0x1b30);
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) {
LAB_00fb3b0c:
      puVar29[1] = lVar21 + 1;
      puVar29[lVar21 + 2] = param_2;
      return this;
    }
    this_01 = (Mutex *)(lVar26 + 0x1db0);
    puVar23 = (undefined8 *)(lVar20 + 0x1b30);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar26 + 0x1dd8);
    *(undefined8 **)(lVar26 + 0x1dd8) = puVar29;
    goto LAB_00fb1990;
  case 0x1a:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb1c14;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) {
      return this;
    }
LAB_00fb1c14:
    iVar11 = (uint)*(byte *)(uVar24 + 3) << 2;
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar10 = *puVar22;
      while( true ) {
        if ((uVar10 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,(ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10)
          ;
        }
        puVar22 = puVar22 + 1;
        if ((uint *)(param_2 + 3) <= puVar22) break;
        uVar10 = *puVar22;
      }
    }
    goto LAB_00fb2e68;
  case 0x1b:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb2f40;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb2f40:
      bVar5 = *(byte *)(uVar24 + 3);
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar2 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10)
            ;
            this = extraout_x0_62;
          }
          puVar2 = puVar2 + 1;
          if (puVar25 <= puVar2) break;
          uVar10 = *puVar2;
        }
      }
      for (; puVar25 < puVar22 + bVar5; puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
          this = extraout_x0_63;
        }
      }
    }
    break;
  case 0x1c:
    uVar10 = MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
             ::VisitEmbedderTracingSubclass<v8::internal::JSTypedArray>
                       ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                         *)this_00,uVar24,param_2);
    return (MarkCompactCollector *)(ulong)uVar10;
  case 0x1d:
    uVar10 = MainMarkingVisitor<v8::internal::MajorMarkingState>::
             VisitJSObjectSubclass<v8::internal::JSWeakRef,v8::internal::JSWeakRef::BodyDescriptor>
                       ((MainMarkingVisitor<v8::internal::MajorMarkingState> *)this_00,uVar24,
                        param_2);
    this = (MarkCompactCollector *)(ulong)uVar10;
    if (uVar10 == 0) {
      return (MarkCompactCollector *)0x0;
    }
    uVar10 = *(uint *)(param_2 + 0xb);
    if ((uVar10 & 1) == 0) {
      return this;
    }
    uVar30 = uVar30 | (ulong)uVar10 & 0xfffffffffffc0000;
    uVar24 = uVar10 - uVar30;
    if ((*(uint *)(*(long *)(uVar30 + 0x10) + (uVar24 >> 7 & 0x1ffffff) * 4) >>
         (ulong)((uint)(uVar24 >> 2) & 0x1f) & 1) != 0) {
      if (((uint)*(undefined8 *)(uVar30 + 8) >> 6 & 1) == 0) {
        return this;
      }
      pMVar27 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
      if ((((uint)*(ulong *)(pMVar27 + 8) >> 0xf & 1) == 0) &&
         ((*(ulong *)(pMVar27 + 8) & 0x58) != 0)) {
        return (MarkCompactCollector *)pMVar27;
      }
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                (pMVar27,param_2 + 0xb);
      return extraout_x0;
    }
    lVar26 = *(long *)(this_00 + 0x18);
    lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
    puVar29 = *(undefined8 **)(lVar20 + 0x1308);
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) goto LAB_00fb3b0c;
    this_01 = (Mutex *)(lVar26 + 0x1588);
    puVar23 = (undefined8 *)(lVar20 + 0x1308);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar26 + 0x15b0);
    *(undefined8 **)(lVar26 + 0x15b0) = puVar29;
    goto LAB_00fb1990;
  case 0x1e:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb2e18;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) {
      return this;
    }
LAB_00fb2e18:
    iVar11 = (uint)*(byte *)(uVar24 + 3) << 2;
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar10 = *puVar22;
      while( true ) {
        if ((uVar10 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,(ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10)
          ;
        }
        puVar22 = puVar22 + 1;
        if ((uint *)(param_2 + 3) <= puVar22) break;
        uVar10 = *puVar22;
      }
    }
LAB_00fb2e68:
    uVar15 = 4;
LAB_00fb2e6c:
    BodyDescriptorBase::
    IterateJSObjectBodyImpl<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
              (uVar24,param_2,uVar15,iVar11,this_00);
    this = extraout_x0_59;
    break;
  case 0x1f:
    uVar24 = param_2 & 0xfffffffffffc0000;
    puVar22 = (uint *)(*(long *)(uVar24 + 0x10) + (~uVar24 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar24 + param_2 >> 2) & 0x1f);
    if ((*puVar22 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar25 = puVar22;
      if (bVar9) {
        uVar10 = 1;
        puVar25 = puVar22 + 1;
      }
      while (uVar16 = puVar22[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar25 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar8) {
            *puVar25 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar24 + 0x68) = *(long *)(uVar24 + 0x68) + (long)(int)this;
            goto LAB_00fb21a0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb21a0:
      if (0xa9 < *(ushort *)(param_2 + 7)) {
        uVar24 = uVar30 | *(uint *)(param_2 + 0x17);
        uVar28 = uVar30 | (ulong)*(uint *)(param_2 + 0x17) & 0xfffffffffffc0000;
        puVar22 = (uint *)(*(long *)(uVar28 + 0x10) + (uVar24 - uVar28 >> 7 & 0x1ffffff) * 4);
        while( true ) {
          uVar10 = *puVar22;
          uVar16 = (uint)(1L << (uVar24 - uVar28 >> 2 & 0x1f));
          if ((uVar16 & (uVar10 ^ 0xffffffff)) == 0) break;
          while (*puVar22 == uVar10) {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar22,0x10);
            if (bVar9) {
              *puVar22 = uVar10 | uVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00fb2208;
          }
          ClearExclusiveLocal();
        }
LAB_00fb2208:
        puVar22 = (uint *)(*(long *)(uVar28 + 0x10) + (uVar24 + ~uVar28 >> 7 & 0x1ffffff) * 4);
        uVar10 = 1 << (ulong)((uint)(uVar24 + ~uVar28 >> 2) & 0x1f);
        local_a8[0] = uVar24;
        if ((*puVar22 & uVar10) != 0) {
          uVar10 = uVar10 << 1;
          bVar9 = uVar10 == 0;
          puVar25 = puVar22;
          if (bVar9) {
            uVar10 = 1;
            puVar25 = puVar22 + 1;
          }
          while (uVar16 = puVar22[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
            while (*puVar25 == uVar16) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar25,0x10);
              if (bVar8) {
                *puVar25 = uVar16 | uVar10;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') {
                this = (MarkCompactCollector *)
                       HeapObject::SizeFromMap
                                 ((HeapObject *)local_a8,uVar30 | *(uint *)(uVar24 - 1));
                puVar22 = (uint *)(uVar24 - 1);
                *(long *)(uVar28 + 0x68) = *(long *)(uVar28 + 0x68) + (long)(int)this;
                if (puVar22 < (uint *)0xfffffffffffffffc) {
                  uVar10 = *puVar22;
                  while( true ) {
                    if ((uVar10 & 1) != 0) {
                      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                                ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                                  *)this_00,uVar24,puVar22,
                                 (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
                      this = extraout_x0_87;
                    }
                    puVar22 = puVar22 + 1;
                    if ((uint *)(uVar24 + 3) <= puVar22) break;
                    uVar10 = *puVar22;
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
                    this = extraout_x0_88;
                  }
                }
                goto LAB_00fb3800;
              }
            }
            ClearExclusiveLocal();
          }
        }
LAB_00fb3800:
        uVar10 = *(uint *)(param_2 + 0xb) >> 10 & 0x3ff;
        if (uVar10 != 0) {
          uVar16 = (int)*(short *)(uVar24 + 5);
          if ((int)uVar10 <= (int)*(short *)(uVar24 + 5)) {
            uVar16 = uVar10;
          }
          local_a8[0] = uVar24;
          this = (MarkCompactCollector *)
                 DescriptorArray::UpdateNumberOfMarkedDescriptors
                           ((DescriptorArray *)local_a8,*(uint *)(this_00 + 0x2c),(short)uVar16);
          uVar30 = local_a8[0];
          if ((int)(short)this < (int)uVar16) {
            puVar25 = (uint *)(local_a8[0] + (long)(int)(uVar16 * 0xc + 0xf));
            for (puVar22 = (uint *)(local_a8[0] + (long)((short)this * 0xc + 0xf));
                puVar22 < puVar25; puVar22 = puVar22 + 1) {
              uVar10 = *puVar22;
              uVar24 = (ulong)uVar10 & 3;
              if (uVar24 == 1) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar30,puVar22);
                this = extraout_x0_89;
              }
              else if ((uVar10 != 3) && (uVar24 == 3)) {
                MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                          ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                            *)this_00,uVar30,puVar22,
                           (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10 & 0xfffffffffffffffd)
                ;
                this = extraout_x0_90;
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
          this = extraout_x0_91;
        }
      }
      if (puVar25 < (uint *)0xfffffffffffffffc) {
        do {
          uVar10 = *puVar25;
          uVar30 = (ulong)uVar10 & 3;
          if (uVar30 == 1) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25);
            this = extraout_x0_92;
          }
          else if ((uVar10 != 3) && (uVar30 == 3)) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10 & 0xfffffffffffffffd);
            this = extraout_x0_93;
          }
          puVar25 = puVar25 + 1;
        } while (puVar25 < (uint *)(param_2 + 0x27));
      }
    }
    break;
  case 0x20:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb1fe8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb1fe8:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_28;
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
          this = extraout_x0_29;
        }
      }
    }
    break;
  case 0x21:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb0e38;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0e38:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_32;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
          this = extraout_x0_33;
        }
      }
    }
    break;
  case 0x22:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb173c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb173c:
      uVar10 = *(uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_07;
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar10 = *puVar25;
        }
        uVar10 = *(uint *)(param_2 + 3);
        iVar11 = *(int *)(param_2 + 7);
      }
      else {
        iVar11 = *(int *)(param_2 + 7);
      }
      uVar10 = uVar10 + 0xf & 0xfffffffc;
      for (puVar25 = (uint *)((long)puVar22 + (long)(int)uVar10);
          puVar25 < (uint *)((long)puVar22 + (long)(int)(uVar10 + iVar11 * 4));
          puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
          this = extraout_x0_08;
        }
      }
    }
    break;
  case 0x23:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb1694;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb1694:
      local_a8[0] = param_2;
      this = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      iVar11 = (int)this;
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_05;
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar10 = *puVar25;
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
          this = extraout_x0_06;
        }
      }
    }
    break;
  case 0x24:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb3290;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb3290:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_71;
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
          this = extraout_x0_72;
        }
      }
    }
    break;
  case 0x25:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb147c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb147c:
      local_a8[0] = param_2;
      uVar12 = HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
        }
      }
      PrototypeInfo::BodyDescriptor::
      IterateBody<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>>
                (uVar24,param_2,uVar12,this_00);
      this = extraout_x0_02;
    }
    break;
  case 0x26:
    uVar24 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar24 + 0x10) + (~uVar24 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar24 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar24 + 0x68) = *(long *)(uVar24 + 0x68) + (long)iVar11;
            goto LAB_00fb1368;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) {
      return this;
    }
LAB_00fb1368:
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
    this = (MarkCompactCollector *)(**(code **)(*(long *)this_00 + 0x38))(this_00,param_2,puVar25);
    puVar22 = (uint *)(param_2 + 7);
    if (puVar22 < (uint *)(param_2 + 0x13)) {
      uVar10 = *puVar22;
      puVar2 = puVar22;
      while( true ) {
        if ((uVar10 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10);
          this = extraout_x0_00;
        }
        puVar2 = puVar2 + 1;
        if ((uint *)(param_2 + 0x13) <= puVar2) break;
        uVar10 = *puVar2;
      }
    }
    if (((((*(int *)(this_00 + 0x30) == 0) ||
          (uVar10 = *(uint *)(param_2 + 0x1b) & 0x1f, uVar10 - 10 < 7)) || (uVar10 - 1 < 2)) ||
        (((*(uint *)(param_2 + 0x1b) >> 0xc & 1) == 0 || ((*puVar25 & 1) == 0)))) ||
       ((uVar24 = uVar30 | *puVar25, *(short *)((uVar30 | 7) + (ulong)*(uint *)(uVar24 - 1)) != 0x86
        || ((*(int *)(this_00 + 0x30) != 2 &&
            (local_a8[0] = uVar24,
            this = (MarkCompactCollector *)BytecodeArray::IsOld((BytecodeArray *)local_a8),
            ((ulong)this & 1) == 0)))))) {
      if ((uint *)0xfffffffffffffffb < puVar25) {
        return this;
      }
      do {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
          this = extraout_x0_01;
        }
        puVar25 = puVar25 + 1;
      } while (puVar25 < puVar22);
      return this;
    }
    lVar26 = *(long *)(this_00 + 0x18);
    lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
    puVar29 = *(undefined8 **)(lVar20 + 0x1878);
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) goto LAB_00fb3b0c;
    this_01 = (Mutex *)(lVar26 + 0x1af8);
    puVar23 = (undefined8 *)(lVar20 + 0x1878);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar26 + 0x1b20);
    *(undefined8 **)(lVar26 + 0x1b20) = puVar29;
    goto LAB_00fb1990;
  case 0x27:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb1198;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb1198:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_64;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
          this = extraout_x0_65;
        }
      }
    }
    break;
  case 0x28:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb10e8;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb10e8:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_57;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
          this = extraout_x0_58;
        }
      }
    }
    break;
  case 0x29:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb0c90;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0c90:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_16;
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar10 = *puVar25;
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
          this = extraout_x0_17;
        }
      }
    }
    break;
  case 0x2a:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb0de0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0de0:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_30;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
          this = extraout_x0_31;
        }
      }
    }
    break;
  case 0x2b:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb1140;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb1140:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_60;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
          this = extraout_x0_61;
        }
      }
    }
    break;
  case 0x2c:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb348c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb348c:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_78;
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
          this = extraout_x0_79;
        }
      }
      for (; puVar22 < (uint *)(param_2 + 0x47); puVar22 = puVar22 + 1) {
        if ((*puVar22 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar22,
                     (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
          this = extraout_x0_80;
        }
      }
    }
    break;
  case 0x2d:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb17f0;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb17f0:
      bVar5 = *(byte *)(uVar24 + 3);
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar2 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10)
            ;
            this = extraout_x0_09;
          }
          puVar2 = puVar2 + 1;
          if (puVar25 <= puVar2) break;
          uVar10 = *puVar2;
        }
      }
      for (; puVar25 < puVar22 + bVar5; puVar25 = puVar25 + 1) {
        if ((*puVar25 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25);
          this = extraout_x0_10;
        }
      }
    }
    break;
  case 0x2e:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb1038;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb1038:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_54;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
          this = extraout_x0_55;
        }
      }
    }
    break;
  case 0x2f:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb3318;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb3318:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_73;
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
          this = extraout_x0_74;
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
          this = extraout_x0_75;
        }
      }
    }
    break;
  case 0x30:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto joined_r0x00fb0b18;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
joined_r0x00fb0b18:
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_03;
          }
          puVar22 = puVar22 + 1;
          if ((uint *)(param_2 + 3) <= puVar22) break;
          uVar10 = *puVar22;
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
          this = extraout_x0_04;
        }
      }
    }
    break;
  case 0x31:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb188c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) {
      return this;
    }
LAB_00fb188c:
    puVar25 = (uint *)(param_2 + 3);
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar10 = *puVar22;
      puVar2 = puVar22;
      while( true ) {
        if ((uVar10 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10);
        }
        puVar2 = puVar2 + 1;
        if (puVar25 <= puVar2) break;
        uVar10 = *puVar2;
      }
    }
    local_a8[0] = param_2;
    pMVar13 = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
    puVar22 = (uint *)((long)puVar22 + (long)(int)pMVar13);
    for (; puVar25 < puVar22; puVar25 = puVar25 + 1) {
      while( true ) {
        uVar10 = *puVar25;
        uVar30 = (ulong)uVar10 & 3;
        if (uVar30 == 1) break;
        if ((uVar10 != 3) && (uVar30 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10 & 0xfffffffffffffffd);
          pMVar13 = extraout_x0_12;
        }
        puVar25 = puVar25 + 1;
        if (puVar22 <= puVar25) goto LAB_00fb1958;
      }
      MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
      ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                  *)this_00,param_2,puVar25);
      pMVar13 = extraout_x0_11;
    }
LAB_00fb1958:
    lVar20 = *(long *)(this_00 + 0x18);
LAB_00fb195c:
    puVar23 = (undefined8 *)(lVar20 + (long)*(int *)(this_00 + 0x28) * 0x50);
    puVar29 = (undefined8 *)*puVar23;
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) {
LAB_00fb1a18:
      puVar29[1] = lVar21 + 1;
      puVar29[lVar21 + 2] = param_2;
      return pMVar13;
    }
    this_01 = (Mutex *)(lVar20 + 0x280);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar20 + 0x2a8);
    *(undefined8 **)(lVar20 + 0x2a8) = puVar29;
    goto LAB_00fb1990;
  case 0x32:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb1e1c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb1e1c:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_22;
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
          this = extraout_x0_23;
        }
      }
    }
    break;
  case 0x33:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            this = (MarkCompactCollector *)
                   HeapObject::SizeFromMap
                             ((HeapObject *)local_a8,
                              param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)(int)this;
            goto LAB_00fb35fc;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb35fc:
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        do {
          if ((*puVar22 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar22,
                       (ulong)puVar22 & 0xffffffff00000000 | (ulong)*puVar22);
            this = extraout_x0_83;
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
          this = extraout_x0_84;
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
          this = extraout_x0_85;
        }
      }
    }
    break;
  case 0x34:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb3554;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb3554:
      local_a8[0] = param_2;
      this = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      iVar11 = (int)this;
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_81;
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar10 = *puVar25;
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
          this = extraout_x0_82;
        }
      }
    }
    break;
  case 0x35:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb33e4;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb33e4:
      local_a8[0] = param_2;
      this = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      iVar11 = (int)this;
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar25 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
            this = extraout_x0_76;
          }
          puVar25 = puVar25 + 1;
          if ((uint *)(param_2 + 3) <= puVar25) break;
          uVar10 = *puVar25;
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
          this = extraout_x0_77;
        }
      }
    }
    break;
  case 0x36:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb1584;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) {
      return this;
    }
LAB_00fb1584:
    bVar5 = *(byte *)(uVar24 + 3);
    puVar25 = (uint *)(param_2 + 3);
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar10 = *puVar22;
      puVar2 = puVar22;
      while( true ) {
        if ((uVar10 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10);
        }
        puVar2 = puVar2 + 1;
        if (puVar25 <= puVar2) break;
        uVar10 = *puVar2;
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
    puVar31 = &WasmInstanceObject::kTaggedFieldOffsets;
    do {
      puVar25 = (uint *)((long)puVar22 + (ulong)*puVar31);
      if (puVar25 < (uint *)0xfffffffffffffffc) {
        puVar2 = puVar25 + 1;
        uVar10 = *puVar25;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar25,
                       (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10);
          }
          puVar25 = puVar25 + 1;
          if (puVar2 <= puVar25) break;
          uVar10 = *puVar25;
        }
      }
      puVar31 = puVar31 + 1;
    } while (puVar31 != (ushort *)&DAT_019f0a14);
    uVar15 = 0xc4;
    goto LAB_00fb2e6c;
  case 0x37:
    uVar30 = param_2 & 0xfffffffffffc0000;
    puVar25 = (uint *)(*(long *)(uVar30 + 0x10) + (~uVar30 + param_2 >> 7 & 0x1ffffff) * 4);
    uVar10 = 1 << (ulong)((uint)(~uVar30 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(uVar30 + 0x68) = *(long *)(uVar30 + 0x68) + (long)iVar11;
            goto LAB_00fb306c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    if (this_00[0x40] != (ObjectVisitor)0x0) {
LAB_00fb306c:
      local_a8[0] = param_2;
      this = (MarkCompactCollector *)HeapObject::SizeFromMap((HeapObject *)local_a8,uVar24);
      iVar11 = (int)this;
      puVar25 = (uint *)(param_2 + 3);
      if (puVar22 < (uint *)0xfffffffffffffffc) {
        uVar10 = *puVar22;
        puVar2 = puVar22;
        while( true ) {
          if ((uVar10 & 1) != 0) {
            MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
            ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                      ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                        *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10)
            ;
            this = extraout_x0_66;
          }
          puVar2 = puVar2 + 1;
          if (puVar25 <= puVar2) break;
          uVar10 = *puVar2;
        }
      }
      for (; puVar25 < (uint *)((long)puVar22 + (long)iVar11); puVar25 = puVar25 + 1) {
        uVar10 = *puVar25;
        uVar30 = (ulong)uVar10 & 3;
        if (uVar30 == 1) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25);
          this = extraout_x0_67;
        }
        else if ((uVar10 != 3) && (uVar30 == 3)) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessWeakHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar25,
                     (ulong)puVar25 & 0xffffffff00000000 | (ulong)uVar10 & 0xfffffffffffffffd);
          this = extraout_x0_68;
        }
      }
    }
    break;
  case 0x38:
    pMVar27 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    puVar25 = (uint *)(*(long *)(pMVar27 + 0x10) + (~(ulong)pMVar27 + param_2 >> 7 & 0x1ffffff) * 4)
    ;
    uVar10 = 1 << (ulong)((uint)(~(ulong)pMVar27 + param_2 >> 2) & 0x1f);
    if ((*puVar25 & uVar10) != 0) {
      uVar10 = uVar10 << 1;
      bVar9 = uVar10 == 0;
      puVar2 = puVar25;
      if (bVar9) {
        uVar10 = 1;
        puVar2 = puVar25 + 1;
      }
      while (uVar16 = puVar25[bVar9], (uVar10 & (uVar16 ^ 0xffffffff)) != 0) {
        while (*puVar2 == uVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar8) {
            *puVar2 = uVar16 | uVar10;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') {
            local_a8[0] = param_2;
            iVar11 = HeapObject::SizeFromMap
                               ((HeapObject *)local_a8,
                                param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
            *(long *)(pMVar27 + 0x68) = *(long *)(pMVar27 + 0x68) + (long)iVar11;
            goto LAB_00fb313c;
          }
        }
        ClearExclusiveLocal();
      }
    }
    local_a8[0] = param_2;
    if (this_00[0x40] == (ObjectVisitor)0x0) {
      return this;
    }
LAB_00fb313c:
    bVar5 = *(byte *)(uVar24 + 3);
    puVar25 = (uint *)(param_2 + 3);
    if (puVar22 < (uint *)0xfffffffffffffffc) {
      uVar10 = *puVar22;
      puVar2 = puVar22;
      while( true ) {
        if ((uVar10 & 1) != 0) {
          MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
          ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                    ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                      *)this_00,param_2,puVar2,(ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar10);
        }
        puVar2 = puVar2 + 1;
        if (puVar25 <= puVar2) break;
        uVar10 = *puVar2;
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
    this = (MarkCompactCollector *)(**(code **)(*(long *)this_00 + 0x38))(this_00,param_2,puVar2);
    for (puVar25 = (uint *)(param_2 + 0xb); puVar25 < puVar22 + bVar5; puVar25 = puVar25 + 1) {
      if ((*puVar25 & 1) != 0) {
        MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
        ::ProcessStrongHeapObject<v8::internal::CompressedHeapObjectSlot>
                  ((MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
                    *)this_00,param_2,puVar25,(ulong)puVar25 & 0xffffffff00000000 | (ulong)*puVar25)
        ;
        this = extraout_x0_69;
      }
    }
    uVar10 = *puVar2;
    if ((uVar10 & 1) == 0) {
      return this;
    }
    uVar30 = uVar30 | (ulong)uVar10 & 0xfffffffffffc0000;
    uVar24 = uVar10 - uVar30;
    if ((*(uint *)(*(long *)(uVar30 + 0x10) + (uVar24 >> 7 & 0x1ffffff) * 4) >>
         (ulong)((uint)(uVar24 >> 2) & 0x1f) & 1) != 0) {
      if (((uint)*(undefined8 *)(uVar30 + 8) >> 6 & 1) == 0) {
        return this;
      }
      if ((((uint)*(ulong *)(pMVar27 + 8) >> 0xf & 1) == 0) &&
         ((*(ulong *)(pMVar27 + 8) & 0x58) != 0)) {
        return this;
      }
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                (pMVar27,(ulong)puVar2);
      return extraout_x0_70;
    }
    lVar26 = *(long *)(this_00 + 0x18);
    lVar20 = lVar26 + (long)*(int *)(this_00 + 0x28) * 0x50;
    puVar29 = *(undefined8 **)(lVar20 + 0x15c0);
    lVar21 = puVar29[1];
    if (lVar21 != 0x40) goto LAB_00fb3b0c;
    this_01 = (Mutex *)(lVar26 + 0x1840);
    puVar23 = (undefined8 *)(lVar20 + 0x15c0);
    base::Mutex::Lock(this_01);
    *puVar29 = *(undefined8 *)(lVar26 + 0x1868);
    *(undefined8 **)(lVar26 + 0x1868) = puVar29;
LAB_00fb1990:
    base::Mutex::Unlock(this_01);
    this = operator_new(0x210);
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x110) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x130) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(undefined8 *)(this + 0x140) = 0;
    *(undefined8 *)(this + 0x138) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x160) = 0;
    *(undefined8 *)(this + 0x158) = 0;
    *(undefined8 *)(this + 0x170) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined8 *)(this + 0x178) = 0;
    *(undefined8 *)(this + 400) = 0;
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined8 *)(this + 0x1a0) = 0;
    *(undefined8 *)(this + 0x198) = 0;
    *(undefined8 *)(this + 0x1b0) = 0;
    *(undefined8 *)(this + 0x1a8) = 0;
    *(undefined8 *)(this + 0x1c0) = 0;
    *(undefined8 *)(this + 0x1b8) = 0;
    *(undefined8 *)(this + 0x1d0) = 0;
    *(undefined8 *)(this + 0x1c8) = 0;
    *(undefined8 *)(this + 0x1e0) = 0;
    *(undefined8 *)(this + 0x1d8) = 0;
    *(undefined8 *)(this + 0x1f0) = 0;
    *(undefined8 *)(this + 0x1e8) = 0;
    *(undefined8 *)(this + 0x200) = 0;
    *(undefined8 *)(this + 0x1f8) = 0;
    *(undefined8 *)(this + 0x208) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xe0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0xe8) = 0;
    *(undefined8 *)(this + 0x100) = 0;
    *(undefined8 *)(this + 0xf8) = 0;
LAB_00fb1a0c:
    *puVar23 = this;
    *(undefined8 *)(this + 8) = 1;
    *(ulong *)(this + 0x10) = param_2;
  }
  return this;
}

