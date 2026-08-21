
/* cocos2d::Sequence::isDone() const */

ulong __thiscall cocos2d::Sequence::isDone(Sequence *this)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x60);
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 00edc87c to 00fdc8e7 has its CatchHandler @ 00edc82c */
    uVar2 = (ulong)(this[0x55] != (Sequence)0x0);
  }
  else {
                    /* try { // try from 00edc82c to 00fdc857 has its CatchHandler @ 00edc82c
                       catch() { ... } // from try @ 00edc82c with catch @ 00edc82c
                       catch() { ... } // from try @ 00edc87c with catch @ 00edc82c */
    lVar1 = __dynamic_cast(plVar3,&FiniteTimeAction::typeinfo,&ActionInstant::typeinfo,0);
                    /* try { // try from 00edc858 to 00fdc85f has its CatchHandler @ 00edc8cc */
    uVar2 = (ulong)(lVar1 == 0 && this[0x55] != (Sequence)0x0);
    if ((lVar1 != 0) && (this[0x55] != (Sequence)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00edc878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00edc878 to 00fdc87b has its CatchHandler @ 00edc89c */
      uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
      return uVar2;
    }
  }
  return uVar2;
}

