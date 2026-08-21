
/* cocos2d::__Array::replaceObjectAtIndex(long, cocos2d::Ref*, bool) */

void __thiscall
cocos2d::__Array::replaceObjectAtIndex(__Array *this,long param_1,Ref *param_2,bool param_3)

{
  ccArrayInsertObjectAtIndex(*(_ccArray **)(this + 0x30),param_2,param_1);
  ccArrayRemoveObjectAtIndex(*(_ccArray **)(this + 0x30),param_1 + 1,param_3);
  return;
}

