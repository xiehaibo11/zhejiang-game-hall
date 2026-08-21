
/* cocos2d::CallFuncN::create(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Node*)) */

Action * __thiscall
cocos2d::CallFuncN::create(CallFuncN *this,Ref *param_1,_func_void_Node_ptr *param_2)

{
  Action *this_00;
  Ref *this_01;
  
  this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined ***)this_00 = &PTR__CallFuncN_016f83b8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8420;
    *(undefined8 *)(this_00 + 0xc0) = 0;
    if (this != (CallFuncN *)0x0) {
      Ref::retain((Ref *)this);
      this_01 = *(Ref **)(this_00 + 0x58);
      if (this_01 != (Ref *)0x0) {
        Ref::release(this_01);
      }
    }
    *(CallFuncN **)(this_00 + 0x58) = this;
    *(Ref **)(this_00 + 0x60) = param_1;
    *(_func_void_Node_ptr **)(this_00 + 0x68) = param_2;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

