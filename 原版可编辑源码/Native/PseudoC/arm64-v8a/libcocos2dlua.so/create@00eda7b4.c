
/* cocos2d::CallFunc::create(cocos2d::Ref*, void (cocos2d::Ref::*)()) */

Action * __thiscall cocos2d::CallFunc::create(CallFunc *this,Ref *param_1,_func_void *param_2)

{
  Action *this_00;
  Ref *this_01;
  
                    /* try { // try from 00eda7cc to 00fda7f3 has its CatchHandler @ 00eda92c */
  this_00 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* try { // try from 00eda7f4 to 00fda7ff has its CatchHandler @ 00eda928 */
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* try { // try from 00eda800 to 00fda983 has its CatchHandler @ 00eda78c */
    *(undefined ***)this_00 = &PTR__CallFunc_016f7d80;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7de8;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    if (this != (CallFunc *)0x0) {
      Ref::retain((Ref *)this);
      this_01 = *(Ref **)(this_00 + 0x58);
      if (this_01 != (Ref *)0x0) {
        Ref::release(this_01);
      }
    }
    *(CallFunc **)(this_00 + 0x58) = this;
    *(Ref **)(this_00 + 0x60) = param_1;
    *(_func_void **)(this_00 + 0x68) = param_2;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

