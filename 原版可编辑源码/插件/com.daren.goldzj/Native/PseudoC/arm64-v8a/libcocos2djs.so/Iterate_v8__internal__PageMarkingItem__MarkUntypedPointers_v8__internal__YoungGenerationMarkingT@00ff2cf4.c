
/* unsigned long
   v8::internal::SlotSet::Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::CompressedMaybeObjectSlot)#1},
   v8::internal::SlotSet::Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::CompressedMaybeObjectSlot)#1}>(unsigned
   long, unsigned long,
   v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::CompressedMaybeObjectSlot)#1},
   v8::internal::SlotSet::EmptyBucketMode)::{lambda(unsigned long)#1}>(unsigned long, unsigned long,
   v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::CompressedMaybeObjectSlot)#1},
   v8::internal::SlotSet::Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::CompressedMaybeObjectSlot)#1}>(unsigned
   long, unsigned long,
   v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::{lambda(v8::internal::CompressedMaybeObjectSlot)#1},
   v8::internal::SlotSet::EmptyBucketMode)::{lambda(unsigned long)#1}) */

ulong v8::internal::SlotSet::
      Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_,v8::internal::SlotSet::Iterate<v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_>(unsigned_long,unsigned_long,v8::internal::PageMarkingItem::MarkUntypedPointers(v8::internal::YoungGenerationMarkingTask*)::_lambda(v8::internal::CompressedMaybeObjectSlot)_1_,v8::internal::SlotSet::EmptyBucketMode)::_lambda(unsigned_long)_1_>
                (long param_1,void *param_2,long param_3,long *param_4,long param_5,int param_6)

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
  void *extraout_x1_00;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    lVar15 = 0;
    pvVar9 = param_2;
    do {
      lVar10 = *(long *)(param_1 + lVar15 * 8);
      if (lVar10 != 0) {
        lVar13 = 0;
        lVar16 = 0;
        lVar17 = lVar15 << 10;
        do {
          puVar1 = (uint *)(lVar10 + lVar13 * 4);
          uVar4 = *puVar1;
          if (uVar4 != 0) {
            uVar18 = 0;
            uVar14 = uVar4;
            do {
              uVar5 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
              uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
              uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
              uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
              lVar11 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
              lVar19 = *param_4;
              uVar5 = 1 << (ulong)((uint)lVar11 & 0x1f);
              puVar2 = (uint *)((long)param_2 + (lVar17 + lVar11) * 4);
              auVar20 = InvalidatedSlotsFilter::IsValid
                                  ((InvalidatedSlotsFilter *)param_4[2],(ulong)puVar2);
              pvVar9 = auVar20._8_8_;
              if ((auVar20._0_8_ & 1) == 0) {
LAB_00ff2db0:
                lVar11 = 0;
                uVar12 = uVar5;
              }
              else {
                uVar12 = *puVar2;
                if (((uVar12 == 3) || ((uVar12 & 1) == 0)) ||
                   ((*(byte *)(((ulong)puVar2 & 0xffffffff00000000 |
                               (ulong)uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
                goto LAB_00ff2db0;
                YoungGenerationMarkingTask::MarkObject
                          ((YoungGenerationMarkingTask *)param_4[1],
                           (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffffffd);
                *(int *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) + 1;
                lVar11 = 1;
                pvVar9 = extraout_x1;
                uVar12 = 0;
              }
              uVar18 = uVar12 | uVar18;
              uVar14 = uVar5 ^ uVar14;
              lVar16 = lVar16 + lVar11;
            } while (uVar14 != 0);
            if ((uVar18 & uVar4) != 0) {
              while (uVar4 = *puVar1, (uVar4 & uVar18) != 0) {
                while (*puVar1 == uVar4) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar7) {
                    *puVar1 = uVar4 & ~uVar18;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_00ff2d7c;
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00ff2d7c:
          lVar13 = lVar13 + 1;
          lVar17 = lVar17 + 0x20;
        } while (lVar13 != 0x20);
        if ((param_6 == 0) && (lVar16 == 0)) {
          puVar3 = (undefined8 *)(param_5 + lVar15 * 8);
          this = (Malloced *)*puVar3;
          *puVar3 = 0;
          if (this != (Malloced *)0x0) {
            Malloced::operator_delete(this,pvVar9);
            pvVar9 = extraout_x1_00;
          }
        }
        uVar8 = lVar16 + uVar8;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != param_3);
  }
  return uVar8;
}

