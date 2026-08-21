
/* cocos2d::__Array::removeLastObject(bool) */

void __thiscall cocos2d::__Array::removeLastObject(__Array *this,bool param_1)

{
  ccArrayRemoveObjectAtIndex
            (*(_ccArray **)(this + 0x30),*(long *)*(_ccArray **)(this + 0x30) + -1,param_1);
  return;
}

