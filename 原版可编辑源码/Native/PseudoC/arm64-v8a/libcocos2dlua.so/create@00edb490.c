
/* cocos2d::__CCCallFuncO::create(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*),
   cocos2d::Ref*) */

Action * __thiscall
cocos2d::__CCCallFuncO::create
          (__CCCallFuncO *this,Ref *param_1,_func_void_Ref_ptr *param_2,Ref *param_3)

{
  Action *this_00;
  Ref *this_01;
  
  this_00 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined ***)this_00 = &PTR____CCCallFuncO_016f7e10;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7e78;
    *(undefined8 *)(this_00 + 0xa0) = 0;
    if (this != (__CCCallFuncO *)0x0) {
      Ref::retain((Ref *)this);
      this_01 = *(Ref **)(this_00 + 0x58);
      if (this_01 != (Ref *)0x0) {
                    /* try { // try from 00edb518 to 00fdb523 has its CatchHandler @ 00edb57c */
        Ref::release(this_01);
      }
    }
    *(__CCCallFuncO **)(this_00 + 0x58) = this;
    *(Ref **)(this_00 + 0xa0) = param_3;
                    /* catch() { ... } // from try @ 00edb368 with catch @ 00edb524
                       try { // try from 00edb524 to 00fdb5e3 has its CatchHandler @ 00edb2fc */
    if (param_3 != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00edb3e4 with catch @ 00edb528 */
                    /* catch() { ... } // from try @ 00edb344 with catch @ 00edb52c */
      Ref::retain(param_3);
    }
    *(Ref **)(this_00 + 0xa8) = param_1;
    *(_func_void_Ref_ptr **)(this_00 + 0xb0) = param_2;
    Ref::autorelease((Ref *)this_00);
  }
                    /* catch() { ... } // from try @ 00edb334 with catch @ 00edb54c */
  return this_00;
}

