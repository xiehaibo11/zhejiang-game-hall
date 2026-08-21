
/* cocos2d::__Array::exchangeObjectAtIndex(long, long) */

void __thiscall cocos2d::__Array::exchangeObjectAtIndex(__Array *this,long param_1,long param_2)

{
  ccArraySwapObjectsAtIndexes(*(_ccArray **)(this + 0x30),param_1,param_2);
  return;
}

