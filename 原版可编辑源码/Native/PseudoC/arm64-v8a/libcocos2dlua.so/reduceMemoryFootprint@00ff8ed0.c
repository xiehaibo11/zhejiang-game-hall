
/* cocos2d::__Array::reduceMemoryFootprint() */

void __thiscall cocos2d::__Array::reduceMemoryFootprint(__Array *this)

{
  ccArrayShrink(*(_ccArray **)(this + 0x30));
  return;
}

