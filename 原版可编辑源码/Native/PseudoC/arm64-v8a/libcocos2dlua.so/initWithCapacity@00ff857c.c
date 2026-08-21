
/* cocos2d::__Array::initWithCapacity(long) */

undefined8 __thiscall cocos2d::__Array::initWithCapacity(__Array *this,long param_1)

{
  undefined8 uVar1;
  
  uVar1 = ccArrayNew(param_1);
  *(undefined8 *)(this + 0x30) = uVar1;
  return 1;
}

