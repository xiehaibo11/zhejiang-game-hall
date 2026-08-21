
/* cocos2d::__Array::exchangeObject(cocos2d::Ref*, cocos2d::Ref*) */

void __thiscall cocos2d::__Array::exchangeObject(__Array *this,Ref *param_1,Ref *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = ccArrayGetIndexOfObject(*(_ccArray **)(this + 0x30),param_1);
  if ((lVar1 != -1) &&
     (lVar2 = ccArrayGetIndexOfObject(*(_ccArray **)(this + 0x30),param_2), lVar2 != -1)) {
    ccArraySwapObjectsAtIndexes(*(_ccArray **)(this + 0x30),lVar1,lVar2);
    return;
  }
  return;
}

