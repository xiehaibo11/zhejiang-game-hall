
/* v8::internal::Page::MergeOldToNewRememberedSets() */

void v8::internal::Page::MergeOldToNewRememberedSets(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  MemoryChunk *in_x0;
  undefined8 *puVar5;
  Malloced *this;
  void *in_x1;
  void *extraout_x1;
  void *extraout_x1_00;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  MemoryChunk *pMVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  pMVar10 = in_x0 + 0x70;
  lVar6 = *(long *)pMVar10;
  if (lVar6 != 0) {
    if (*(long *)(in_x0 + 0x30) != 0) {
      puVar11 = *(undefined8 **)(in_x0 + 0x30);
      if ((puVar11 != (undefined8 *)0x0) && (uVar7 = *(long *)in_x0 + 0xfffU >> 0xc, uVar7 != 0)) {
        uVar8 = 0;
        do {
          lVar6 = puVar11[uVar8];
          if (lVar6 != 0) {
            lVar14 = 0;
            lVar15 = uVar8 << 10;
            do {
              for (uVar2 = *(uint *)(lVar6 + lVar14 * 4); uVar2 != 0;
                  uVar2 = 1 << (ulong)((uint)lVar12 & 0x1f) ^ uVar2) {
                auVar16._8_8_ = in_x1;
                auVar16._0_8_ = *(long *)pMVar10;
                uVar4 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
                uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
                uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
                uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                lVar12 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
                uVar1 = lVar15 + lVar12;
                if (*(long *)pMVar10 == 0) {
                  auVar16 = MemoryChunk::AllocateSlotSet(in_x0,(SlotSet **)pMVar10);
                }
                in_x1 = auVar16._8_8_;
                uVar9 = uVar1 >> 10 & 0xfffffffffffff;
                puVar5 = *(undefined8 **)(auVar16._0_8_ + uVar9 * 8);
                uVar13 = uVar1 >> 5 & 0x1f;
                if (puVar5 == (undefined8 *)0x0) {
                  puVar5 = Malloced::operator_new((Malloced *)0x80,(ulong)in_x1);
                  puVar5[1] = 0;
                  *puVar5 = 0;
                  puVar5[3] = 0;
                  puVar5[2] = 0;
                  puVar5[5] = 0;
                  puVar5[4] = 0;
                  puVar5[7] = 0;
                  puVar5[6] = 0;
                  puVar5[9] = 0;
                  puVar5[8] = 0;
                  puVar5[0xb] = 0;
                  puVar5[10] = 0;
                  puVar5[0xd] = 0;
                  puVar5[0xc] = 0;
                  puVar5[0xf] = 0;
                  puVar5[0xe] = 0;
                  *(undefined8 **)(auVar16._0_8_ + uVar9 * 8) = puVar5;
                  in_x1 = extraout_x1;
                }
                uVar4 = *(uint *)((long)puVar5 + uVar13 * 4);
                uVar3 = 1 << (ulong)((uint)uVar1 & 0x1f);
                if ((uVar4 & uVar3) == 0) {
                  *(uint *)((long)puVar5 + uVar13 * 4) = uVar4 | uVar3;
                }
              }
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 0x20;
            } while (lVar14 != 0x20);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar7);
        puVar11 = *(undefined8 **)(in_x0 + 0x30);
      }
      if (puVar11 != (undefined8 *)0x0) {
        puVar5 = puVar11;
        for (uVar7 = *(long *)in_x0 + 0xfffU >> 0xc; uVar7 != 0; uVar7 = uVar7 - 1) {
          this = (Malloced *)*puVar5;
          *puVar5 = 0;
          if (this != (Malloced *)0x0) {
            Malloced::operator_delete(this,in_x1);
            in_x1 = extraout_x1_00;
          }
          puVar5 = puVar5 + 1;
        }
        AlignedFree((void *)((long)(puVar11 + -1) - (puVar11[-1] + 7 & 0xfffffffffffffff8)));
        *(undefined8 *)(in_x0 + 0x30) = 0;
      }
      lVar6 = *(long *)pMVar10;
    }
    *(long *)(in_x0 + 0x30) = lVar6;
    *(undefined8 *)(in_x0 + 0x70) = 0;
  }
  return;
}

