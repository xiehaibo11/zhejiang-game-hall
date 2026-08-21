
/* covariant return thunk to cocos2d::Sequence::clone() const */

long __thiscall cocos2d::Sequence::clone(Sequence *this)

{
  long lVar1;
  FiniteTimeAction *pFVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    if (*(long *)(this + 0x38) == 0) {
      lVar4 = 0;
    }
    else {
      pFVar2 = (FiniteTimeAction *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
                    /* try { // try from 00edc938 to 00fdc93f has its CatchHandler @ 00edcc44 */
                    /* try { // try from 00edc940 to 00fdca97 has its CatchHandler @ 00edc8e8 */
      uVar3 = (**(code **)(**(long **)(this + 0x38) + 0x18))(*(long **)(this + 0x38));
      lVar4 = create(pFVar2,uVar3,0);
    }
  }
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x28;
  }
  return lVar1;
}

