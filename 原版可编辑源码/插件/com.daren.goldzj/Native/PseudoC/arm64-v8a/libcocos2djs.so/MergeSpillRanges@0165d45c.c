
/* v8::internal::compiler::LiveRangeBundle::MergeSpillRanges() */

void __thiscall v8::internal::compiler::LiveRangeBundle::MergeSpillRanges(LiveRangeBundle *this)

{
  SpillRange *pSVar1;
  LiveRangeBundle *pLVar2;
  LiveRangeBundle *pLVar3;
  long lVar4;
  SpillRange *this_00;
  LiveRangeBundle *pLVar5;
  
  if (*(LiveRangeBundle **)this != this + 8) {
    this_00 = (SpillRange *)0x0;
    pLVar5 = *(LiveRangeBundle **)this;
    do {
      if ((*(byte *)(*(long *)(*(long *)(pLVar5 + 0x20) + 0x20) + 4) >> 6 & 1) == 0) {
LAB_0165d4b8:
        pLVar2 = *(LiveRangeBundle **)(pLVar5 + 8);
        pSVar1 = this_00;
        if (*(LiveRangeBundle **)(pLVar5 + 8) != (LiveRangeBundle *)0x0) goto LAB_0165d4c0;
LAB_0165d4dc:
        pLVar2 = pLVar5 + 0x10;
        pLVar3 = *(LiveRangeBundle **)pLVar2;
        if (*(LiveRangeBundle **)pLVar3 != pLVar5) {
          do {
            lVar4 = *(long *)pLVar2;
            pLVar2 = (LiveRangeBundle *)(lVar4 + 0x10);
            pLVar3 = *(LiveRangeBundle **)pLVar2;
          } while (*(long *)pLVar3 != lVar4);
        }
      }
      else {
        pSVar1 = *(SpillRange **)(*(long *)(*(long *)(pLVar5 + 0x20) + 0x20) + 0x70);
        if (this_00 != (SpillRange *)0x0) {
          if (this_00 != pSVar1) {
            SpillRange::TryMerge(this_00,pSVar1);
          }
          goto LAB_0165d4b8;
        }
        pLVar2 = *(LiveRangeBundle **)(pLVar5 + 8);
        if (*(LiveRangeBundle **)(pLVar5 + 8) == (LiveRangeBundle *)0x0) goto LAB_0165d4dc;
LAB_0165d4c0:
        do {
          pLVar3 = pLVar2;
          pLVar2 = *(LiveRangeBundle **)pLVar3;
        } while (*(LiveRangeBundle **)pLVar3 != (LiveRangeBundle *)0x0);
      }
      this_00 = pSVar1;
      pLVar5 = pLVar3;
    } while (pLVar3 != this + 8);
  }
  return;
}

