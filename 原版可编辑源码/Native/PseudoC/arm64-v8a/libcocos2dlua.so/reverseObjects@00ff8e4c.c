
/* cocos2d::__Array::reverseObjects() */

void __thiscall cocos2d::__Array::reverseObjects(__Array *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)*(_ccArray **)(this + 0x30);
  lVar2 = lVar1 + -2;
  if (((1 < lVar1) && (lVar3 = (long)((float)lVar1 * 0.5), 0 < lVar3)) &&
     (ccArraySwapObjectsAtIndexes(*(_ccArray **)(this + 0x30),0,lVar1 + -1), lVar3 != 1)) {
    lVar1 = 1;
    do {
      ccArraySwapObjectsAtIndexes(*(_ccArray **)(this + 0x30),lVar1,lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar3 != lVar1);
  }
  return;
}

