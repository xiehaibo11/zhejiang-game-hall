
/* cocos2d::TrianglesCommand::~TrianglesCommand() */

void __thiscall cocos2d::TrianglesCommand::~TrianglesCommand(TrianglesCommand *this)

{
  *(undefined ***)this = &PTR__TrianglesCommand_017245f8;
  Mat4::~Mat4((Mat4 *)(this + 0x48));
  RenderCommand::~RenderCommand((RenderCommand *)this);
  operator_delete(this);
  return;
}

