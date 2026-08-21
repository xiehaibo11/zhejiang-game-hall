
/* cocos2d::RenderState::~RenderState() */

void __thiscall cocos2d::RenderState::~RenderState(RenderState *this)

{
                    /* catch() { ... } // from try @ 00fe2094 with catch @ 00fe2054 */
  *(undefined ***)this = &PTR__RenderState_01724270;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* try { // try from 00fe208c to 010e2093 has its CatchHandler @ 00fe2100 */
  if (((byte)this[0x40] & 1) != 0) {
                    /* try { // try from 00fe2094 to 010e211b has its CatchHandler @ 00fe2054 */
    operator_delete(*(void **)(this + 0x50));
  }
  Ref::~Ref((Ref *)this);
  return;
}

