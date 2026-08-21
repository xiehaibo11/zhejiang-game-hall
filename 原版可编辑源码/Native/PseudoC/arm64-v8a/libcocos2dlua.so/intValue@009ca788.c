
/* cocos2d::LuaValue::intValue(int) */

void __thiscall cocos2d::LuaValue::intValue(LuaValue *this,int param_1)

{
  undefined8 *in_x8;
  
  *(undefined4 *)(in_x8 + 1) = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  *(int *)in_x8 = (int)this;
  return;
}

