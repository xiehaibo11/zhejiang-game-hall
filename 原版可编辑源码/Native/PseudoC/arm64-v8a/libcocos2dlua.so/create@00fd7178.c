
/* cocos2d::GLProgramState::create(cocos2d::GLProgram*) */

GLProgramState * cocos2d::GLProgramState::create(GLProgram *param_1)

{
  GLProgramState *this;
  
  this = operator_new(0x110,(nothrow_t *)&std::nothrow);
  if (this != (GLProgramState *)0x0) {
    GLProgramState(this);
    init(this,param_1);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

