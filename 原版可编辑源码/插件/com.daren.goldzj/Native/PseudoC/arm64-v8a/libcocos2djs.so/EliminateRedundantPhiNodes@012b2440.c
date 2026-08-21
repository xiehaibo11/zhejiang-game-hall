
/* v8::internal::compiler::Schedule::EliminateRedundantPhiNodes() */

void __thiscall v8::internal::compiler::Schedule::EliminateRedundantPhiNodes(Schedule *this)

{
  Node *pNVar1;
  long *plVar2;
  size_t __n;
  bool bVar3;
  Node *pNVar4;
  bool bVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  Node *pNVar10;
  Node *this_00;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  do {
    plVar11 = *(long **)(this + 8);
    plVar2 = *(long **)(this + 0x10);
    if (plVar11 == plVar2) {
      return;
    }
    bVar5 = true;
    do {
      lVar12 = *plVar11;
      pvVar6 = *(void **)(lVar12 + 0x40);
      pvVar7 = *(void **)(lVar12 + 0x48);
      if (pvVar7 != pvVar6) {
        uVar13 = 0;
        uVar8 = *(long *)(lVar12 + 0x88) - *(long *)(lVar12 + 0x80);
        do {
          this_00 = *(Node **)((long)pvVar6 + uVar13 * 8);
          if (*(short *)(*(long *)this_00 + 0x10) == 0x23) {
            pNVar1 = this_00 + 0x20;
            pNVar4 = pNVar1;
            if ((*(uint *)(this_00 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar4 = (Node *)(*(long *)pNVar1 + 0x10);
            }
            pNVar4 = *(Node **)pNVar4;
            if (1 < (int)(uVar8 >> 3)) {
              lVar9 = 1;
              bVar3 = true;
              do {
                pNVar10 = pNVar1;
                if ((*(uint *)(this_00 + 0x14) & 0xf000000) == 0xf000000) {
                  pNVar10 = (Node *)(*(long *)pNVar1 + 0x10);
                }
                pNVar10 = *(Node **)(pNVar10 + lVar9 * 8);
                bVar3 = (bool)(bVar3 & (pNVar10 == pNVar4 || pNVar10 == this_00));
              } while ((pNVar10 == pNVar4 || pNVar10 == this_00) &&
                      (lVar9 = lVar9 + 1, lVar9 < (long)(uVar8 * 0x20000000) >> 0x20));
              if (!bVar3) goto LAB_012b24c4;
            }
            Node::ReplaceUses(this_00,pNVar4);
            Node::Kill(this_00);
            pvVar6 = *(void **)(lVar12 + 0x40);
            pvVar7 = (void *)((long)pvVar6 + uVar13 * 8);
            __n = *(long *)(lVar12 + 0x48) - ((long)pvVar7 + 8);
            if (__n != 0) {
              memmove(pvVar7,(void *)((long)pvVar7 + 8),__n);
              pvVar6 = *(void **)(lVar12 + 0x40);
            }
            bVar5 = false;
            pvVar7 = (void *)((long)pvVar7 + ((long)__n >> 3) * 8);
            uVar13 = uVar13 - 1;
            *(void **)(lVar12 + 0x48) = pvVar7;
          }
LAB_012b24c4:
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)((long)pvVar7 - (long)pvVar6 >> 3));
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar2);
    if (bVar5) {
      return;
    }
  } while( true );
}

