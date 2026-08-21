
/* void 
   v8::internal::Heap::WriteBarrierForRange<v8::internal::CompressedObjectSlot>(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::Heap::WriteBarrierForRange<v8::internal::CompressedObjectSlot>
          (Heap *this,ulong param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  MemoryChunk *this_00;
  ulong uVar12;
  SlotSet *pSVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  
  plVar14 = *(long **)(this + 0x828);
  this_00 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
  bVar5 = ((byte)this_00[8] & 0x18) == 0;
  if (1 < (int)plVar14[0xb]) {
    bVar11 = 2;
    if ((*(ulong *)(this_00 + 8) & 0x58) == 0 || (*(ulong *)(this_00 + 8) & 0x8000) != 0) {
      bVar11 = 6;
    }
    bVar5 = bVar11 | bVar5;
  }
  switch(bVar5) {
  case 0:
    break;
  case 1:
    if (param_3 < param_4) {
      uVar12 = param_2 & 0xfffffffffffc0000;
      uVar2 = *param_3;
      while( true ) {
        if (((uVar2 & 1) != 0) &&
           ((*(byte *)(((ulong)uVar2 & 0xfffc0000 | (ulong)param_3 & 0xffffffff00000000) + 8) & 0x18
            ) != 0)) {
          pSVar13 = *(SlotSet **)(this_00 + 0x30);
          if (pSVar13 == (SlotSet *)0x0) {
            pSVar13 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this_00);
            param_2 = extraout_x1;
          }
          uVar17 = (long)param_3 - uVar12;
          puVar6 = *(undefined8 **)(pSVar13 + (uVar17 >> 0xc) * 8);
          uVar9 = uVar17 >> 7 & 0x1f;
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = Malloced::operator_new((Malloced *)0x80,param_2);
            puVar6[1] = 0;
            *puVar6 = 0;
            puVar6[3] = 0;
            puVar6[2] = 0;
            puVar6[5] = 0;
            puVar6[4] = 0;
            puVar6[7] = 0;
            puVar6[6] = 0;
            puVar6[9] = 0;
            puVar6[8] = 0;
            puVar6[0xb] = 0;
            puVar6[10] = 0;
            puVar6[0xd] = 0;
            puVar6[0xc] = 0;
            puVar6[0xf] = 0;
            puVar6[0xe] = 0;
            *(undefined8 **)(pSVar13 + (uVar17 >> 0xc) * 8) = puVar6;
            param_2 = extraout_x1_00;
          }
          uVar2 = *(uint *)((long)puVar6 + uVar9 * 4);
          uVar8 = 1 << (ulong)((uint)uVar17 >> 2 & 0x1f);
          if ((uVar2 & uVar8) == 0) {
            *(uint *)((long)puVar6 + uVar9 * 4) = uVar2 | uVar8;
          }
        }
        param_3 = param_3 + 1;
        if (param_4 <= param_3) break;
        uVar2 = *param_3;
      }
    }
    break;
  case 2:
    if (param_3 < param_4) {
      uVar2 = *param_3;
      do {
        if ((uVar2 & 1) != 0) {
          uVar9 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2;
          uVar12 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar17 = uVar9 - uVar12;
          puVar1 = (uint *)(*(long *)(uVar12 + 0x10) + (uVar17 >> 7 & 0x1ffffff) * 4);
          while( true ) {
            uVar2 = *puVar1;
            uVar8 = (uint)(1L << (uVar17 >> 2 & 0x1f));
            if ((uVar8 & (uVar2 ^ 0xffffffff)) == 0) break;
            while (*puVar1 == uVar2) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar2 | uVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                puVar16 = (undefined8 *)plVar14[2];
                puVar6 = (undefined8 *)*puVar16;
                lVar10 = puVar6[1];
                if (lVar10 == 0x40) {
                  base::Mutex::Lock((Mutex *)(puVar16 + 0x50));
                  *puVar6 = puVar16[0x55];
                  puVar16[0x55] = puVar6;
                  base::Mutex::Unlock((Mutex *)(puVar16 + 0x50));
                  puVar7 = operator_new(0x210);
                  puVar7[4] = 0;
                  puVar7[3] = 0;
                  puVar7[6] = 0;
                  puVar7[5] = 0;
                  puVar7[8] = 0;
                  puVar7[7] = 0;
                  puVar7[10] = 0;
                  puVar7[9] = 0;
                  puVar7[0xc] = 0;
                  puVar7[0xb] = 0;
                  puVar7[0xe] = 0;
                  puVar7[0xd] = 0;
                  puVar7[0x10] = 0;
                  puVar7[0xf] = 0;
                  puVar7[0x12] = 0;
                  puVar7[0x11] = 0;
                  puVar7[0x14] = 0;
                  puVar7[0x13] = 0;
                  puVar7[0x16] = 0;
                  puVar7[0x15] = 0;
                  puVar7[0x18] = 0;
                  puVar7[0x17] = 0;
                  puVar7[0x1a] = 0;
                  puVar7[0x19] = 0;
                  puVar7[0x1c] = 0;
                  puVar7[0x1b] = 0;
                  puVar7[0x1e] = 0;
                  puVar7[0x1d] = 0;
                  puVar7[0x20] = 0;
                  puVar7[0x1f] = 0;
                  puVar7[0x22] = 0;
                  puVar7[0x21] = 0;
                  puVar7[0x24] = 0;
                  puVar7[0x23] = 0;
                  puVar7[0x26] = 0;
                  puVar7[0x25] = 0;
                  puVar7[0x28] = 0;
                  puVar7[0x27] = 0;
                  puVar7[0x2a] = 0;
                  puVar7[0x29] = 0;
                  puVar7[0x2c] = 0;
                  puVar7[0x2b] = 0;
                  puVar7[0x2e] = 0;
                  puVar7[0x2d] = 0;
                  puVar7[0x30] = 0;
                  puVar7[0x2f] = 0;
                  puVar7[0x32] = 0;
                  puVar7[0x31] = 0;
                  puVar7[0x34] = 0;
                  puVar7[0x33] = 0;
                  puVar7[0x36] = 0;
                  puVar7[0x35] = 0;
                  puVar7[0x38] = 0;
                  puVar7[0x37] = 0;
                  puVar7[0x3a] = 0;
                  puVar7[0x39] = 0;
                  puVar7[0x3c] = 0;
                  puVar7[0x3b] = 0;
                  puVar7[0x3e] = 0;
                  puVar7[0x3d] = 0;
                  puVar7[0x40] = 0;
                  puVar7[0x3f] = 0;
                  puVar7[0x41] = 0;
                  *puVar16 = puVar7;
                  puVar7[1] = 1;
                }
                else {
                  puVar7 = puVar6 + lVar10;
                  puVar6[1] = lVar10 + 1;
                }
                puVar7[2] = uVar9;
                if (((int)plVar14[0xb] == 3) &&
                   (*(undefined4 *)(plVar14 + 0xb) = 2, FLAG_trace_incremental_marking != '\0')) {
                  Isolate::PrintWithTimestamp
                            ((char *)(*plVar14 + -0x8850),
                             "[IncrementalMarking] Restarting (new grey objects)\n");
                }
                goto LAB_00f8f470;
              }
            }
            ClearExclusiveLocal();
          }
        }
LAB_00f8f470:
        param_3 = param_3 + 1;
        if (param_4 <= param_3) {
          return;
        }
        uVar2 = *param_3;
      } while( true );
    }
    break;
  case 3:
    if (param_3 < param_4) {
      uVar2 = *param_3;
      do {
        if ((uVar2 & 1) != 0) {
          uVar17 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2;
          uVar12 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar12 + 8) & 0x18) != 0) {
            pSVar13 = *(SlotSet **)(this_00 + 0x30);
            if (pSVar13 == (SlotSet *)0x0) {
              pSVar13 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this_00);
              param_2 = extraout_x1_01;
            }
            uVar9 = (long)param_3 - (long)this_00;
            puVar6 = *(undefined8 **)(pSVar13 + (uVar9 >> 0xc) * 8);
            uVar15 = uVar9 >> 7 & 0x1f;
            if (puVar6 == (undefined8 *)0x0) {
              puVar6 = Malloced::operator_new((Malloced *)0x80,param_2);
              puVar6[1] = 0;
              *puVar6 = 0;
              puVar6[3] = 0;
              puVar6[2] = 0;
              puVar6[5] = 0;
              puVar6[4] = 0;
              puVar6[7] = 0;
              puVar6[6] = 0;
              puVar6[9] = 0;
              puVar6[8] = 0;
              puVar6[0xb] = 0;
              puVar6[10] = 0;
              puVar6[0xd] = 0;
              puVar6[0xc] = 0;
              puVar6[0xf] = 0;
              puVar6[0xe] = 0;
              *(undefined8 **)(pSVar13 + (uVar9 >> 0xc) * 8) = puVar6;
              param_2 = extraout_x1_02;
            }
            uVar2 = *(uint *)((long)puVar6 + uVar15 * 4);
            uVar8 = 1 << (ulong)((uint)uVar9 >> 2 & 0x1f);
            if ((uVar2 & uVar8) == 0) {
              *(uint *)((long)puVar6 + uVar15 * 4) = uVar2 | uVar8;
            }
          }
          uVar9 = uVar17 - uVar12;
          puVar1 = (uint *)(*(long *)(uVar12 + 0x10) + (uVar9 >> 7 & 0x1ffffff) * 4);
          while( true ) {
            uVar2 = *puVar1;
            uVar8 = (uint)(1L << (uVar9 >> 2 & 0x1f));
            if ((uVar8 & (uVar2 ^ 0xffffffff)) == 0) break;
            while (*puVar1 == uVar2) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar2 | uVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                puVar6 = (undefined8 *)plVar14[2];
                puVar16 = (undefined8 *)*puVar6;
                lVar10 = puVar16[1];
                if (lVar10 == 0x40) {
                  base::Mutex::Lock((Mutex *)(puVar6 + 0x50));
                  *puVar16 = puVar6[0x55];
                  puVar6[0x55] = puVar16;
                  base::Mutex::Unlock((Mutex *)(puVar6 + 0x50));
                  puVar7 = operator_new(0x210);
                  puVar7[4] = 0;
                  puVar7[3] = 0;
                  puVar7[6] = 0;
                  puVar7[5] = 0;
                  puVar7[8] = 0;
                  puVar7[7] = 0;
                  puVar7[10] = 0;
                  puVar7[9] = 0;
                  puVar7[0xc] = 0;
                  puVar7[0xb] = 0;
                  puVar7[0xe] = 0;
                  puVar7[0xd] = 0;
                  puVar7[0x10] = 0;
                  puVar7[0xf] = 0;
                  puVar7[0x12] = 0;
                  puVar7[0x11] = 0;
                  puVar7[0x14] = 0;
                  puVar7[0x13] = 0;
                  puVar7[0x16] = 0;
                  puVar7[0x15] = 0;
                  puVar7[0x18] = 0;
                  puVar7[0x17] = 0;
                  puVar7[0x1a] = 0;
                  puVar7[0x19] = 0;
                  puVar7[0x1c] = 0;
                  puVar7[0x1b] = 0;
                  puVar7[0x1e] = 0;
                  puVar7[0x1d] = 0;
                  puVar7[0x20] = 0;
                  puVar7[0x1f] = 0;
                  puVar7[0x22] = 0;
                  puVar7[0x21] = 0;
                  puVar7[0x24] = 0;
                  puVar7[0x23] = 0;
                  puVar7[0x26] = 0;
                  puVar7[0x25] = 0;
                  puVar7[0x28] = 0;
                  puVar7[0x27] = 0;
                  puVar7[0x2a] = 0;
                  puVar7[0x29] = 0;
                  puVar7[0x2c] = 0;
                  puVar7[0x2b] = 0;
                  puVar7[0x2e] = 0;
                  puVar7[0x2d] = 0;
                  puVar7[0x30] = 0;
                  puVar7[0x2f] = 0;
                  puVar7[0x32] = 0;
                  puVar7[0x31] = 0;
                  puVar7[0x34] = 0;
                  puVar7[0x33] = 0;
                  puVar7[0x36] = 0;
                  puVar7[0x35] = 0;
                  puVar7[0x38] = 0;
                  puVar7[0x37] = 0;
                  puVar7[0x3a] = 0;
                  puVar7[0x39] = 0;
                  puVar7[0x3c] = 0;
                  puVar7[0x3b] = 0;
                  puVar7[0x3e] = 0;
                  puVar7[0x3d] = 0;
                  puVar7[0x40] = 0;
                  puVar7[0x3f] = 0;
                  puVar7[0x41] = 0;
                  *puVar6 = puVar7;
                  puVar7[1] = 1;
                  param_2 = extraout_x1_03;
                }
                else {
                  puVar7 = puVar16 + lVar10;
                  puVar16[1] = lVar10 + 1;
                }
                puVar7[2] = uVar17;
                if (((int)plVar14[0xb] == 3) &&
                   (*(undefined4 *)(plVar14 + 0xb) = 2, FLAG_trace_incremental_marking != '\0')) {
                  Isolate::PrintWithTimestamp
                            ((char *)(*plVar14 + -0x8850),
                             "[IncrementalMarking] Restarting (new grey objects)\n");
                  param_2 = extraout_x1_04;
                }
                goto LAB_00f8f268;
              }
            }
            ClearExclusiveLocal();
          }
        }
LAB_00f8f268:
        param_3 = param_3 + 1;
        if (param_4 <= param_3) {
          return;
        }
        uVar2 = *param_3;
      } while( true );
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 6:
    if (param_3 < param_4) {
      uVar2 = *param_3;
      do {
        if ((uVar2 & 1) != 0) {
          uVar17 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2;
          uVar9 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar12 = uVar17 - uVar9;
          puVar1 = (uint *)(*(long *)(uVar9 + 0x10) + (uVar12 >> 7 & 0x1ffffff) * 4);
          while( true ) {
            uVar2 = *puVar1;
            uVar8 = (uint)(1L << (uVar12 >> 2 & 0x1f));
            if ((uVar8 & (uVar2 ^ 0xffffffff)) == 0) break;
            while (*puVar1 == uVar2) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar2 | uVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                puVar6 = (undefined8 *)plVar14[2];
                puVar16 = (undefined8 *)*puVar6;
                lVar10 = puVar16[1];
                if (lVar10 == 0x40) {
                  base::Mutex::Lock((Mutex *)(puVar6 + 0x50));
                  *puVar16 = puVar6[0x55];
                  puVar6[0x55] = puVar16;
                  base::Mutex::Unlock((Mutex *)(puVar6 + 0x50));
                  puVar7 = operator_new(0x210);
                  puVar7[4] = 0;
                  puVar7[3] = 0;
                  puVar7[6] = 0;
                  puVar7[5] = 0;
                  puVar7[8] = 0;
                  puVar7[7] = 0;
                  puVar7[10] = 0;
                  puVar7[9] = 0;
                  puVar7[0xc] = 0;
                  puVar7[0xb] = 0;
                  puVar7[0xe] = 0;
                  puVar7[0xd] = 0;
                  puVar7[0x10] = 0;
                  puVar7[0xf] = 0;
                  puVar7[0x12] = 0;
                  puVar7[0x11] = 0;
                  puVar7[0x14] = 0;
                  puVar7[0x13] = 0;
                  puVar7[0x16] = 0;
                  puVar7[0x15] = 0;
                  puVar7[0x18] = 0;
                  puVar7[0x17] = 0;
                  puVar7[0x1a] = 0;
                  puVar7[0x19] = 0;
                  puVar7[0x1c] = 0;
                  puVar7[0x1b] = 0;
                  puVar7[0x1e] = 0;
                  puVar7[0x1d] = 0;
                  puVar7[0x20] = 0;
                  puVar7[0x1f] = 0;
                  puVar7[0x22] = 0;
                  puVar7[0x21] = 0;
                  puVar7[0x24] = 0;
                  puVar7[0x23] = 0;
                  puVar7[0x26] = 0;
                  puVar7[0x25] = 0;
                  puVar7[0x28] = 0;
                  puVar7[0x27] = 0;
                  puVar7[0x2a] = 0;
                  puVar7[0x29] = 0;
                  puVar7[0x2c] = 0;
                  puVar7[0x2b] = 0;
                  puVar7[0x2e] = 0;
                  puVar7[0x2d] = 0;
                  puVar7[0x30] = 0;
                  puVar7[0x2f] = 0;
                  puVar7[0x32] = 0;
                  puVar7[0x31] = 0;
                  puVar7[0x34] = 0;
                  puVar7[0x33] = 0;
                  puVar7[0x36] = 0;
                  puVar7[0x35] = 0;
                  puVar7[0x38] = 0;
                  puVar7[0x37] = 0;
                  puVar7[0x3a] = 0;
                  puVar7[0x39] = 0;
                  puVar7[0x3c] = 0;
                  puVar7[0x3b] = 0;
                  puVar7[0x3e] = 0;
                  puVar7[0x3d] = 0;
                  puVar7[0x40] = 0;
                  puVar7[0x3f] = 0;
                  puVar7[0x41] = 0;
                  *puVar6 = puVar7;
                  puVar7[1] = 1;
                }
                else {
                  puVar7 = puVar16 + lVar10;
                  puVar16[1] = lVar10 + 1;
                }
                puVar7[2] = uVar17;
                if (((int)plVar14[0xb] == 3) &&
                   (*(undefined4 *)(plVar14 + 0xb) = 2, FLAG_trace_incremental_marking != '\0')) {
                  Isolate::PrintWithTimestamp
                            ((char *)(*plVar14 + -0x8850),
                             "[IncrementalMarking] Restarting (new grey objects)\n");
                }
                goto LAB_00f8f96c;
              }
            }
            ClearExclusiveLocal();
          }
LAB_00f8f96c:
          if ((*(char *)((long)plVar14 + 0x5c) != '\0') &&
             (((uint)*(undefined8 *)(uVar9 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (this_00,(ulong)param_3);
          }
        }
        param_3 = param_3 + 1;
        if (param_4 <= param_3) {
          return;
        }
        uVar2 = *param_3;
      } while( true );
    }
    break;
  case 7:
    if (param_3 < param_4) {
      uVar2 = *param_3;
      do {
        if ((uVar2 & 1) != 0) {
          uVar12 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2;
          uVar17 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar17 + 8) & 0x18) != 0) {
            pSVar13 = *(SlotSet **)(this_00 + 0x30);
            if (pSVar13 == (SlotSet *)0x0) {
              pSVar13 = MemoryChunk::AllocateSlotSet<(v8::internal::RememberedSetType)0>(this_00);
              param_2 = extraout_x1_05;
            }
            uVar9 = (long)param_3 - (long)this_00;
            puVar6 = *(undefined8 **)(pSVar13 + (uVar9 >> 0xc) * 8);
            uVar15 = uVar9 >> 7 & 0x1f;
            if (puVar6 == (undefined8 *)0x0) {
              puVar6 = Malloced::operator_new((Malloced *)0x80,param_2);
              puVar6[1] = 0;
              *puVar6 = 0;
              puVar6[3] = 0;
              puVar6[2] = 0;
              puVar6[5] = 0;
              puVar6[4] = 0;
              puVar6[7] = 0;
              puVar6[6] = 0;
              puVar6[9] = 0;
              puVar6[8] = 0;
              puVar6[0xb] = 0;
              puVar6[10] = 0;
              puVar6[0xd] = 0;
              puVar6[0xc] = 0;
              puVar6[0xf] = 0;
              puVar6[0xe] = 0;
              *(undefined8 **)(pSVar13 + (uVar9 >> 0xc) * 8) = puVar6;
              param_2 = extraout_x1_06;
            }
            uVar2 = *(uint *)((long)puVar6 + uVar15 * 4);
            uVar8 = 1 << (ulong)((uint)uVar9 >> 2 & 0x1f);
            if ((uVar2 & uVar8) == 0) {
              *(uint *)((long)puVar6 + uVar15 * 4) = uVar2 | uVar8;
            }
          }
          uVar9 = uVar12 - uVar17;
          puVar1 = (uint *)(*(long *)(uVar17 + 0x10) + (uVar9 >> 7 & 0x1ffffff) * 4);
          while( true ) {
            uVar2 = *puVar1;
            uVar8 = (uint)(1L << (uVar9 >> 2 & 0x1f));
            if ((uVar8 & (uVar2 ^ 0xffffffff)) == 0) break;
            while (*puVar1 == uVar2) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar2 | uVar8;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                puVar16 = (undefined8 *)plVar14[2];
                puVar6 = (undefined8 *)*puVar16;
                lVar10 = puVar6[1];
                if (lVar10 == 0x40) {
                  base::Mutex::Lock((Mutex *)(puVar16 + 0x50));
                  *puVar6 = puVar16[0x55];
                  puVar16[0x55] = puVar6;
                  base::Mutex::Unlock((Mutex *)(puVar16 + 0x50));
                  puVar7 = operator_new(0x210);
                  puVar7[4] = 0;
                  puVar7[3] = 0;
                  puVar7[6] = 0;
                  puVar7[5] = 0;
                  puVar7[8] = 0;
                  puVar7[7] = 0;
                  puVar7[10] = 0;
                  puVar7[9] = 0;
                  puVar7[0xc] = 0;
                  puVar7[0xb] = 0;
                  puVar7[0xe] = 0;
                  puVar7[0xd] = 0;
                  puVar7[0x10] = 0;
                  puVar7[0xf] = 0;
                  puVar7[0x12] = 0;
                  puVar7[0x11] = 0;
                  puVar7[0x14] = 0;
                  puVar7[0x13] = 0;
                  puVar7[0x16] = 0;
                  puVar7[0x15] = 0;
                  puVar7[0x18] = 0;
                  puVar7[0x17] = 0;
                  puVar7[0x1a] = 0;
                  puVar7[0x19] = 0;
                  puVar7[0x1c] = 0;
                  puVar7[0x1b] = 0;
                  puVar7[0x1e] = 0;
                  puVar7[0x1d] = 0;
                  puVar7[0x20] = 0;
                  puVar7[0x1f] = 0;
                  puVar7[0x22] = 0;
                  puVar7[0x21] = 0;
                  puVar7[0x24] = 0;
                  puVar7[0x23] = 0;
                  puVar7[0x26] = 0;
                  puVar7[0x25] = 0;
                  puVar7[0x28] = 0;
                  puVar7[0x27] = 0;
                  puVar7[0x2a] = 0;
                  puVar7[0x29] = 0;
                  puVar7[0x2c] = 0;
                  puVar7[0x2b] = 0;
                  puVar7[0x2e] = 0;
                  puVar7[0x2d] = 0;
                  puVar7[0x30] = 0;
                  puVar7[0x2f] = 0;
                  puVar7[0x32] = 0;
                  puVar7[0x31] = 0;
                  puVar7[0x34] = 0;
                  puVar7[0x33] = 0;
                  puVar7[0x36] = 0;
                  puVar7[0x35] = 0;
                  puVar7[0x38] = 0;
                  puVar7[0x37] = 0;
                  puVar7[0x3a] = 0;
                  puVar7[0x39] = 0;
                  puVar7[0x3c] = 0;
                  puVar7[0x3b] = 0;
                  puVar7[0x3e] = 0;
                  puVar7[0x3d] = 0;
                  puVar7[0x40] = 0;
                  puVar7[0x3f] = 0;
                  puVar7[0x41] = 0;
                  *puVar16 = puVar7;
                  puVar7[1] = 1;
                  param_2 = extraout_x1_07;
                }
                else {
                  puVar7 = puVar6 + lVar10;
                  puVar6[1] = lVar10 + 1;
                }
                puVar7[2] = uVar12;
                if (((int)plVar14[0xb] == 3) &&
                   (*(undefined4 *)(plVar14 + 0xb) = 2, FLAG_trace_incremental_marking != '\0')) {
                  Isolate::PrintWithTimestamp
                            ((char *)(*plVar14 + -0x8850),
                             "[IncrementalMarking] Restarting (new grey objects)\n");
                  param_2 = extraout_x1_08;
                }
                goto LAB_00f8f7cc;
              }
            }
            ClearExclusiveLocal();
          }
LAB_00f8f7cc:
          if ((*(char *)((long)plVar14 + 0x5c) != '\0') &&
             (((uint)*(undefined8 *)(uVar17 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (this_00,(ulong)param_3);
            param_2 = extraout_x1_09;
          }
        }
        param_3 = param_3 + 1;
        if (param_4 <= param_3) {
          return;
        }
        uVar2 = *param_3;
      } while( true );
    }
  }
  return;
}

