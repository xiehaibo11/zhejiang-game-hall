
/* cocos2d::Pass::create(cocos2d::Technique*) */

RenderState * cocos2d::Pass::create(Technique *param_1)

{
  RenderState *this;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (RenderState *)0x0) {
                    /* try { // try from 00fe0c84 to 010e0c8b has its CatchHandler @ 00fe0d30 */
    RenderState::RenderState(this);
                    /* try { // try from 00fe0c8c to 010e0d4b has its CatchHandler @ 00fe0c48 */
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x70) = 0x405;
    this[0x74] = (RenderState)0x1;
    *(undefined ***)this = &PTR__Pass_01724160;
    *(Technique **)(this + 0x38) = param_1;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

