
/* cocos2d::ui::LayoutParameter::clone() */

long * __thiscall cocos2d::ui::LayoutParameter::clone(LayoutParameter *this)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
  (**(code **)(*plVar1 + 0x18))(plVar1,this);
  return plVar1;
}

