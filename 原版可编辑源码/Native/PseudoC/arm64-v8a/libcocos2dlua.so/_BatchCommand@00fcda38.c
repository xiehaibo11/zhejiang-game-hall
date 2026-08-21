
/* cocos2d::BatchCommand::~BatchCommand() */

void __thiscall cocos2d::BatchCommand::~BatchCommand(BatchCommand *this)

{
  *(undefined ***)this = &PTR__BatchCommand_01723d70;
  Mat4::~Mat4((Mat4 *)(this + 0x38));
  RenderCommand::~RenderCommand((RenderCommand *)this);
  return;
}

