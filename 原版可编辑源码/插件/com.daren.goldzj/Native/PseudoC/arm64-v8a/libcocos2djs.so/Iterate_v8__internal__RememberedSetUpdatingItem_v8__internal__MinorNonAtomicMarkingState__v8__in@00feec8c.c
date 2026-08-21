
/* unsigned long
   v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#2},
   v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#2}>(unsigned
   long, unsigned long,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#2},
   v8::internal::SlotSet::EmptyBucketMode)::{lambda(unsigned long)#1}>(unsigned long, unsigned long,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#2},
   v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#2}>(unsigned
   long, unsigned long,
   v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,
   (v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::{lambda(v8::internal::CompressedMaybeObjectSlot)#2},
   v8::internal::SlotSet::EmptyBucketMode)::{lambda(unsigned long)#1}) */

ulong v8::internal::SlotSet::
      Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_,v8::internal::SlotSet::Iterate<v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_>(unsigned_long,unsigned_long,v8::internal::RememberedSetUpdatingItem<v8::internal::MinorNonAtomicMarkingState,(v8::internal::GarbageCollector)2>::UpdateUntypedPointers()::_lambda(v8::internal::CompressedMaybeObjectSlot)_2_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
                (long param_1,void *param_2,long param_3,undefined8 param_4,
                InvalidatedSlotsFilter *param_5,long param_6,int param_7)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  Malloced *this;
  void *pvVar9;
  void *extraout_x1;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    lVar19 = 0;
    pvVar9 = param_2;
    do {
      lVar10 = *(long *)(param_1 + lVar19 * 8);
      if (lVar10 != 0) {
        lVar13 = 0;
        lVar20 = 0;
        lVar21 = lVar19 << 10;
        do {
          puVar1 = (uint *)(lVar10 + lVar13 * 4);
          uVar4 = *puVar1;
          if (uVar4 != 0) {
            uVar22 = 0;
            uVar18 = uVar4;
            do {
              uVar5 = (uVar18 & 0xaaaaaaaa) >> 1 | (uVar18 & 0x55555555) << 1;
              uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
              uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
              uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
              lVar11 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
              uVar5 = 1 << (ulong)((uint)lVar11 & 0x1f);
              puVar2 = (uint *)((long)param_2 + (lVar21 + lVar11) * 4);
              auVar23 = InvalidatedSlotsFilter::IsValid(param_5,(ulong)puVar2);
              pvVar9 = auVar23._8_8_;
              if ((auVar23._0_8_ & 1) == 0) {
LAB_00feed4c:
                lVar11 = 0;
                uVar17 = uVar5;
              }
              else {
                uVar17 = *puVar2;
                uVar14 = (ulong)uVar17;
                if ((uVar17 == 3) || ((uVar17 & 1) == 0)) goto LAB_00feed4c;
                uVar15 = (ulong)puVar2 & 0xffffffff00000000;
                uVar12 = uVar14 & 0xfffffffffffffffd | uVar15;
                uVar16 = uVar14 & 0xfffffffffffc0000 | uVar15;
                uVar17 = (uint)*(undefined8 *)(uVar16 + 8);
                if ((uVar17 >> 3 & 1) == 0) {
                  if (((uVar17 >> 4 & 1) == 0) ||
                     (((*(byte *)(uVar16 + 9) >> 2 & 1) != 0 &&
                      ((*(uint *)(*(long *)(uVar16 + 0x108) + (uVar12 - uVar16 >> 7 & 0x1ffffff) * 4
                                 ) >> (ulong)((uint)(uVar12 - uVar16 >> 2) & 0x1f) & 1) == 0))))
                  goto LAB_00feed4c;
                }
                else {
                  if ((*(uint *)(uVar12 - 1) & 1) == 0) {
                    uVar14 = (ulong)(*(uint *)(uVar12 - 1) + 1) | uVar14 & 2;
                    uVar17 = (uint)uVar14 & 1;
                    *puVar2 = (uint)uVar14;
                  }
                  else {
                    uVar17 = 1;
                  }
                  uVar15 = uVar14 | uVar15;
                  if ((uVar17 & (int)uVar14 != 3) == 0) {
                    uVar15 = uVar12;
                  }
                  if ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) >> 4 & 1) == 0)
                  goto LAB_00feed4c;
                }
                uVar17 = 0;
                lVar11 = 1;
              }
              uVar22 = uVar17 | uVar22;
              uVar18 = uVar5 ^ uVar18;
              lVar20 = lVar20 + lVar11;
            } while (uVar18 != 0);
            if ((uVar22 & uVar4) != 0) {
              while (uVar4 = *puVar1, (uVar4 & uVar22) != 0) {
                while (*puVar1 == uVar4) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar7) {
                    *puVar1 = uVar4 & ~uVar22;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_00feed18;
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00feed18:
          lVar13 = lVar13 + 1;
          lVar21 = lVar21 + 0x20;
        } while (lVar13 != 0x20);
        if ((param_7 == 0) && (lVar20 == 0)) {
          puVar3 = (undefined8 *)(param_6 + lVar19 * 8);
          this = (Malloced *)*puVar3;
          *puVar3 = 0;
          if (this != (Malloced *)0x0) {
            Malloced::operator_delete(this,pvVar9);
            pvVar9 = extraout_x1;
          }
        }
        uVar8 = lVar20 + uVar8;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != param_3);
  }
  return uVar8;
}

