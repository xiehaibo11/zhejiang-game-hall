
/* cocos2d::GLProgram::~GLProgram() */

void __thiscall cocos2d::GLProgram::~GLProgram(GLProgram *this)

{
  ~GLProgram(this);
  operator_delete(this);
  return;
}

