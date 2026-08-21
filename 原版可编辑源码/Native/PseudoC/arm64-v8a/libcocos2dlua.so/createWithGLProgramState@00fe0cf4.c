
/* cocos2d::Pass::createWithGLProgramState(cocos2d::Technique*, cocos2d::GLProgramState*) */

RenderState * cocos2d::Pass::createWithGLProgramState(Technique *param_1,GLProgramState *param_2)

{
  RenderState *this;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (RenderState *)0x0) {
    RenderState::RenderState(this);
                    /* catch() { ... } // from try @ 00fe0c84 with catch @ 00fe0d30 */
    *(GLProgramState **)(this + 0x60) = param_2;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x70) = 0x405;
    this[0x74] = (RenderState)0x1;
    *(undefined ***)this = &PTR__Pass_01724160;
    *(Technique **)(this + 0x38) = param_1;
    if (param_2 != (GLProgramState *)0x0) {
      Ref::retain((Ref *)param_2);
    }
    Ref::autorelease((Ref *)this);
  }
  return this;
}

