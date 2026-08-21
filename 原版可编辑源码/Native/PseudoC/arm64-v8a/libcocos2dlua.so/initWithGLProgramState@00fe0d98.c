
/* cocos2d::Pass::initWithGLProgramState(cocos2d::Technique*, cocos2d::GLProgramState*) */

undefined8 __thiscall
cocos2d::Pass::initWithGLProgramState(Pass *this,Technique *param_1,GLProgramState *param_2)

{
  *(Technique **)(this + 0x38) = param_1;
  *(GLProgramState **)(this + 0x60) = param_2;
  if (param_2 != (GLProgramState *)0x0) {
    Ref::retain((Ref *)param_2);
  }
  return 1;
}

