
/* cocos2d::__CCCallFuncO::initWithTarget(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*),
   cocos2d::Ref*) */

undefined8
cocos2d::__CCCallFuncO::initWithTarget(Ref *param_1,_func_void_Ref_ptr *param_2,Ref *param_3)

{
  undefined8 in_x3;
  Ref *in_x4;
  
                    /* catch() { ... } // from try @ 00edb378 with catch @ 00edb57c
                       catch() { ... } // from try @ 00edb518 with catch @ 00edb57c */
  if (param_2 != (_func_void_Ref_ptr *)0x0) {
    Ref::retain((Ref *)param_2);
  }
  if (*(Ref **)(param_1 + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(param_1 + 0x58));
  }
  *(_func_void_Ref_ptr **)(param_1 + 0x58) = param_2;
  *(Ref **)(param_1 + 0xa0) = in_x4;
  if (in_x4 != (Ref *)0x0) {
    Ref::retain(in_x4);
  }
  *(Ref **)(param_1 + 0xa8) = param_3;
  *(undefined8 *)(param_1 + 0xb0) = in_x3;
  return 1;
}

