
/* cocos2d::ResizeTo::create(float, cocos2d::Size const&) */

Action * cocos2d::ResizeTo::create(float param_1,Size *param_2)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ee05c0 to 00fe05c7 has its CatchHandler @ 00ee06d4 */
    *(undefined ***)this = &PTR__Action_016f8d68;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8dc8;
    Size::Size((Size *)(this + 0x58));
    Size::Size((Size *)(this + 0x60));
    Size::Size((Size *)(this + 0x68));
                    /* try { // try from 00ee05e4 to 00fe060b has its CatchHandler @ 00ee06e4 */
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x4c) = fVar1;
    *(undefined2 *)(this + 0x54) = 1;
    Size::operator=((Size *)(this + 0x60),param_2);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

