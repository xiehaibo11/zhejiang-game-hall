
/* v8::internal::compiler::SpillRange::MergeDisjointIntervals(v8::internal::compiler::UseInterval*)
    */

void __thiscall
v8::internal::compiler::SpillRange::MergeDisjointIntervals(SpillRange *this,UseInterval *param_1)

{
  UseInterval *pUVar1;
  UseInterval *pUVar2;
  UseInterval *pUVar3;
  
  if (param_1 == (UseInterval *)0x0) {
    return;
  }
  pUVar2 = (UseInterval *)0x0;
  pUVar3 = *(UseInterval **)(this + 0x20);
  pUVar1 = param_1;
  if (pUVar3 != (UseInterval *)0x0) goto LAB_01657e40;
LAB_01657e50:
  pUVar1 = pUVar3;
  pUVar3 = param_1;
  if (pUVar2 != (UseInterval *)0x0) goto LAB_01657e28;
  do {
    *(UseInterval **)(this + 0x20) = param_1;
    pUVar2 = param_1;
    while( true ) {
      if (pUVar1 == (UseInterval *)0x0) {
        return;
      }
      pUVar3 = *(UseInterval **)(pUVar2 + 8);
      param_1 = pUVar1;
      if (pUVar3 == (UseInterval *)0x0) goto LAB_01657e50;
LAB_01657e40:
      param_1 = pUVar1;
      if (*(int *)pUVar1 < *(int *)pUVar3) goto LAB_01657e50;
      param_1 = pUVar3;
      if (pUVar2 == (UseInterval *)0x0) break;
LAB_01657e28:
      *(UseInterval **)(pUVar2 + 8) = pUVar3;
      pUVar2 = pUVar3;
    }
  } while( true );
}

