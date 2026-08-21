
/* unsigned long
   v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#3},
   v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#3}>(unsigned
   long, unsigned long,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#3},
   v8::internal::SlotSet::EmptyBucketMode)::{lambda(unsigned long)#1}>(unsigned long, unsigned long,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#3},
   v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#3}>(unsigned
   long, unsigned long,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#3},
   v8::internal::SlotSet::EmptyBucketMode)::{lambda(unsigned long)#1}) */

ulong v8::internal::SlotSet::
      Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_3_,v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_3_>(unsigned_long,unsigned_long,v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_3_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
                (long param_1,void *param_2,long param_3,InvalidatedSlotsFilter *param_4,
                long param_5,int param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  Malloced *this;
  void *pvVar8;
  void *extraout_x1;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  
  if (param_3 != 0) {
    lVar13 = 0;
    pvVar8 = param_2;
    do {
      lVar10 = *(long *)(param_1 + lVar13 * 8);
      if (lVar10 != 0) {
        lVar15 = 0;
        lVar14 = lVar13 << 10;
        do {
          puVar1 = (uint *)(lVar10 + lVar15 * 4);
          uVar4 = *puVar1;
          if (uVar4 != 0) {
            uVar16 = 0;
            uVar17 = uVar4;
            do {
              uVar5 = (uVar17 & 0xaaaaaaaa) >> 1 | (uVar17 & 0x55555555) << 1;
              uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
              uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
              uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
              lVar11 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
              uVar5 = 1 << (ulong)((uint)lVar11 & 0x1f);
              puVar2 = (uint *)((long)param_2 + (lVar14 + lVar11) * 4);
              auVar18 = InvalidatedSlotsFilter::IsValid(param_4,(ulong)puVar2);
              pvVar8 = auVar18._8_8_;
              if ((auVar18._0_8_ & 1) != 0) {
                uVar12 = (ulong)*puVar2;
                if ((*puVar2 == 3) || ((uVar12 & 3) != 3)) {
                  if (((uVar12 & 3) == 1) &&
                     (uVar9 = *(uint *)(((ulong)puVar2 & 0xffffffff00000000 | uVar12) - 1),
                     (uVar9 & 1) == 0)) {
                    uVar9 = uVar9 + 1;
                    goto LAB_00feef6c;
                  }
                }
                else {
                  uVar9 = *(uint *)(((ulong)puVar2 & 0xffffffff00000000 |
                                    uVar12 & 0xfffffffffffffffd) - 1);
                  if ((uVar9 & 1) == 0) {
                    uVar9 = uVar9 + 1 | 2;
LAB_00feef6c:
                    *puVar2 = uVar9;
                  }
                }
              }
              uVar17 = uVar5 ^ uVar17;
              uVar16 = uVar5 | uVar16;
            } while (uVar17 != 0);
            if ((uVar16 & uVar4) != 0) {
              while (uVar4 = *puVar1, (uVar4 & uVar16) != 0) {
                while (*puVar1 == uVar4) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar7) {
                    *puVar1 = uVar4 & ~uVar16;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_00feef40;
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00feef40:
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + 0x20;
        } while (lVar15 != 0x20);
        if (param_6 == 0) {
          puVar3 = (undefined8 *)(param_5 + lVar13 * 8);
          this = (Malloced *)*puVar3;
          *puVar3 = 0;
          if (this != (Malloced *)0x0) {
            Malloced::operator_delete(this,pvVar8);
            pvVar8 = extraout_x1;
          }
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != param_3);
  }
  return 0;
}

