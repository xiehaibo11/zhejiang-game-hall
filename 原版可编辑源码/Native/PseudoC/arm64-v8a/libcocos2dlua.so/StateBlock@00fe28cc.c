
/* cocos2d::RenderState::StateBlock::StateBlock() */

void __thiscall cocos2d::RenderState::StateBlock::StateBlock(StateBlock *this)

{
  Ref::Ref((Ref *)this);
                    /* catch() { ... } // from try @ 00fe2874 with catch @ 00fe28e4 */
  *(undefined2 *)(this + 0x21) = 0x100;
  *(undefined4 *)(this + 0x24) = 0x201;
  *(undefined8 *)(this + 0x54) = 0x1e0000001e00;
                    /* catch() { ... } // from try @ 00fe2934 with catch @ 00fe2900 */
  this[0x28] = (StateBlock)0x1;
  *(undefined8 *)(this + 0x34) = 0x90100000405;
  *(undefined8 *)(this + 0x2c) = 1;
  *(undefined4 *)(this + 0x50) = 0x1e00;
  this[0x23] = (StateBlock)0x0;
  this[0x3c] = (StateBlock)0x0;
                    /* try { // try from 00fe292c to 010e2933 has its CatchHandler @ 00fe29a4 */
  *(undefined8 *)(this + 0x48) = 0xffffffff00000000;
  *(undefined8 *)(this + 0x40) = 0x207ffffffff;
                    /* try { // try from 00fe2934 to 010e29bf has its CatchHandler @ 00fe2900 */
  *(undefined ***)this = &PTR__StateBlock_01724290;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}

