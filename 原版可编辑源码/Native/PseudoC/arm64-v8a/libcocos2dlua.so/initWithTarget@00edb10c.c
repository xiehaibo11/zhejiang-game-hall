
/* cocos2d::__CCCallFuncND::initWithTarget(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Node*,
   void*), void*) */

undefined8
cocos2d::__CCCallFuncND::initWithTarget
          (Ref *param_1,_func_void_Node_ptr_void_ptr *param_2,void *param_3)

{
  undefined8 in_x3;
  undefined8 in_x4;
  
                    /* try { // try from 00edb118 to 00fdb127 has its CatchHandler @ 00edb200 */
                    /* try { // try from 00edb128 to 00fdb147 has its CatchHandler @ 00edb1fc */
  if (param_2 != (_func_void_Node_ptr_void_ptr *)0x0) {
    Ref::retain((Ref *)param_2);
  }
  if (*(Ref **)(param_1 + 0x58) != (Ref *)0x0) {
                    /* try { // try from 00edb148 to 00fdb1cb has its CatchHandler @ 00edaea4 */
    Ref::release(*(Ref **)(param_1 + 0x58));
  }
  *(_func_void_Node_ptr_void_ptr **)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = in_x3;
  *(undefined8 *)(param_1 + 0xb0) = in_x4;
  *(void **)(param_1 + 0xa0) = param_3;
  return 1;
}

