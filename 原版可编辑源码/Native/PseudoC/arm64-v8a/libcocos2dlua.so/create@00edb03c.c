
/* cocos2d::__CCCallFuncND::create(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Node*, void*),
   void*) */

Action * __thiscall
cocos2d::__CCCallFuncND::create
          (__CCCallFuncND *this,Ref *param_1,_func_void_Node_ptr_void_ptr *param_2,void *param_3)

{
  Action *this_00;
  Ref *this_01;
  
                    /* try { // try from 00edb03c to 00fdb04b has its CatchHandler @ 00edb208 */
                    /* try { // try from 00edb04c to 00fdb063 has its CatchHandler @ 00edb244 */
  this_00 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* try { // try from 00edb080 to 00fdb08f has its CatchHandler @ 00edb218 */
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
                    /* try { // try from 00edb090 to 00fdb09b has its CatchHandler @ 00edb214 */
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined ***)this_00 = &PTR__CallFunc_016f8460;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f84c8;
    if (this != (__CCCallFuncND *)0x0) {
                    /* try { // try from 00edb0b4 to 00fdb0c3 has its CatchHandler @ 00edb204 */
      Ref::retain((Ref *)this);
      this_01 = *(Ref **)(this_00 + 0x58);
      if (this_01 != (Ref *)0x0) {
        Ref::release(this_01);
      }
    }
                    /* try { // try from 00edb0c4 to 00fdb0db has its CatchHandler @ 00edb240 */
    *(__CCCallFuncND **)(this_00 + 0x58) = this;
    *(_func_void_Node_ptr_void_ptr **)(this_00 + 0xa8) = param_2;
    *(void **)(this_00 + 0xb0) = param_3;
    *(Ref **)(this_00 + 0xa0) = param_1;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

