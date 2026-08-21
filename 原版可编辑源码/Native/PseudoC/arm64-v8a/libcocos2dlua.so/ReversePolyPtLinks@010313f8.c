
/* ClipperLib::ReversePolyPtLinks(ClipperLib::OutPt*) */

void ClipperLib::ReversePolyPtLinks(OutPt *param_1)

{
  OutPt *pOVar1;
  OutPt *pOVar2;
  
  pOVar2 = param_1;
  if (param_1 != (OutPt *)0x0) {
    do {
      pOVar1 = *(OutPt **)(pOVar2 + 0x18);
      *(undefined8 *)(pOVar2 + 0x18) = *(undefined8 *)(pOVar2 + 0x20);
      *(OutPt **)(pOVar2 + 0x20) = pOVar1;
      pOVar2 = pOVar1;
                    /* try { // try from 01031410 to 011314b3 has its CatchHandler @ 01031410
                       catch() { ... } // from try @ 01031410 with catch @ 01031410
                       catch() { ... } // from try @ 01031640 with catch @ 01031410
                       catch() { ... } // from try @ 010316a8 with catch @ 01031410
                       catch() { ... } // from try @ 010316c4 with catch @ 01031410 */
    } while (pOVar1 != param_1);
  }
  return;
}

