
/* cocos2d::Data::takeBuffer(long*) */

undefined8 __thiscall cocos2d::Data::takeBuffer(Data *this,long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  if (param_1 != (long *)0x0) {
    *param_1 = *(long *)(this + 8);
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return uVar1;
}

