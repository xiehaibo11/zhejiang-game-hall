
/* v8::internal::Space::GetNextInlineAllocationStepSize() */

long __thiscall v8::internal::Space::GetNextInlineAllocationStepSize(Space *this)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar6;
  long *plVar5;
  
  if (*(long **)(this + 8) != *(long **)(this + 0x10)) {
    lVar3 = 0;
    plVar4 = *(long **)(this + 8);
    do {
      plVar5 = plVar4 + 1;
      lVar6 = *(long *)(*plVar4 + 0x10);
      lVar1 = lVar3;
      if (lVar6 <= lVar3) {
        lVar1 = lVar6;
      }
      bVar2 = lVar3 != 0;
      lVar3 = lVar6;
      if (bVar2) {
        lVar3 = lVar1;
      }
      plVar4 = plVar5;
    } while (*(long **)(this + 0x10) != plVar5);
    return lVar3;
  }
  return 0;
}

