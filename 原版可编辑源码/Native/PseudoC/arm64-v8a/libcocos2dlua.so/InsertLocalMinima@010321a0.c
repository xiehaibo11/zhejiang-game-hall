
/* ClipperLib::ClipperBase::InsertLocalMinima(ClipperLib::LocalMinima*) */

void __thiscall ClipperLib::ClipperBase::InsertLocalMinima(ClipperBase *this,LocalMinima *param_1)

{
  ClipperBase *pCVar1;
  long *plVar2;
  long *plVar3;
  
  pCVar1 = this + 0x10;
  plVar2 = *(long **)pCVar1;
                    /* try { // try from 010321a4 to 011321cf has its CatchHandler @ 01031838 */
  if (plVar2 != (long *)0x0) {
    if (*(long *)param_1 < *plVar2) {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[3];
        if (plVar2 == (long *)0x0) break;
      } while (*(long *)param_1 < *plVar2);
                    /* try { // try from 010321d0 to 011321f3 has its CatchHandler @ 010332d8 */
      pCVar1 = (ClipperBase *)(plVar3 + 3);
    }
    *(long **)(param_1 + 0x18) = plVar2;
  }
  *(LocalMinima **)pCVar1 = param_1;
  return;
}

