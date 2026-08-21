
/* cocos2d::CallFuncN::initWithTarget(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Node*)) */

undefined8 cocos2d::CallFuncN::initWithTarget(Ref *param_1,_func_void_Node_ptr *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
                    /* catch() { ... } // from try @ 00edacac with catch @ 00edade0 */
                    /* catch() { ... } // from try @ 00edac88 with catch @ 00edade4 */
  if (param_2 != (_func_void_Node_ptr *)0x0) {
    Ref::retain((Ref *)param_2);
  }
  if (*(Ref **)(param_1 + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(param_1 + 0x58));
  }
  *(_func_void_Node_ptr **)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = in_x2;
  *(undefined8 *)(param_1 + 0x68) = in_x3;
  return 1;
}

