
/* cocos2d::__Array::initWithArray(cocos2d::__Array*) */

undefined8 __thiscall cocos2d::__Array::initWithArray(__Array *this,__Array *param_1)

{
  _ccArray *p_Var1;
  
  p_Var1 = (_ccArray *)ccArrayNew(**(long **)(param_1 + 0x30));
  *(_ccArray **)(this + 0x30) = p_Var1;
  ccArrayAppendArrayWithResize(p_Var1,*(_ccArray **)(param_1 + 0x30));
                    /* try { // try from 00ff8bd8 to 010f8d1f has its CatchHandler @ 00ff8a58 */
  return 1;
}

