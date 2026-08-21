
/* cocos2d::RenderState::StateBlock::create() */

Ref * cocos2d::RenderState::StateBlock::create(void)

{
  Ref *this;
  
                    /* catch() { ... } // from try @ 00fe1fd4 with catch @ 00fe1f9c */
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined2 *)(this + 0x21) = 0x100;
                    /* try { // try from 00fe1fcc to 010e1fd3 has its CatchHandler @ 00fe2038 */
    *(undefined4 *)(this + 0x24) = 0x201;
                    /* try { // try from 00fe1fd4 to 010e2053 has its CatchHandler @ 00fe1f9c */
    *(undefined8 *)(this + 0x54) = 0x1e0000001e00;
    this[0x28] = (Ref)0x1;
    *(undefined8 *)(this + 0x34) = 0x90100000405;
    *(undefined8 *)(this + 0x2c) = 1;
    *(undefined4 *)(this + 0x50) = 0x1e00;
    this[0x23] = (Ref)0x0;
    this[0x3c] = (Ref)0x0;
    *(undefined ***)this = &PTR__StateBlock_01724290;
    *(undefined8 *)(this + 0x48) = 0xffffffff00000000;
    *(undefined8 *)(this + 0x40) = 0x207ffffffff;
    *(undefined8 *)(this + 0x60) = 0;
    Ref::autorelease(this);
  }
  return this;
}

