
/* cocos2d::__Array::addObjectsFromArray(cocos2d::__Array*) */

void __thiscall cocos2d::__Array::addObjectsFromArray(__Array *this,__Array *param_1)

{
  ccArrayAppendArrayWithResize(*(_ccArray **)(this + 0x30),*(_ccArray **)(param_1 + 0x30));
  return;
}

