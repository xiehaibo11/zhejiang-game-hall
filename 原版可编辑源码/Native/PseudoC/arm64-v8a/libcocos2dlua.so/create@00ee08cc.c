
/* cocos2d::ResizeBy::create(float, cocos2d::Size const&) */

Action * cocos2d::ResizeBy::create(float param_1,Size *param_2)

{
  Action *this;
  float fVar1;
  
                    /* catch() { ... } // from try @ 00ee088c with catch @ 00ee08d4 */
                    /* try { // try from 00ee08f0 to 00fe0927 has its CatchHandler @ 00ee08f0
                       catch() { ... } // from try @ 00ee08f0 with catch @ 00ee08f0
                       catch() { ... } // from try @ 00ee093c with catch @ 00ee08f0 */
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f8e08;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8e68;
                    /* try { // try from 00ee0928 to 00fe093b has its CatchHandler @ 00ee0970 */
    Size::Size((Size *)(this + 0x58));
    Size::Size((Size *)(this + 0x60));
                    /* try { // try from 00ee093c to 00fe098b has its CatchHandler @ 00ee08f0 */
    Size::Size((Size *)(this + 0x68));
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x4c) = fVar1;
    *(undefined2 *)(this + 0x54) = 1;
                    /* catch() { ... } // from try @ 00ee0928 with catch @ 00ee0970 */
    Size::operator=((Size *)(this + 0x58),param_2);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

