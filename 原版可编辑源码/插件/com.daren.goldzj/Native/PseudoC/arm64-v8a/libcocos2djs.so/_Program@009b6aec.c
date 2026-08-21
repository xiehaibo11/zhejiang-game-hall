
/* cocos2d::renderer::Program::~Program() */

void __thiscall cocos2d::renderer::Program::~Program(Program *this)

{
  ~Program(this);
  operator_delete(this);
  return;
}

