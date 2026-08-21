
/* cocos2d::PrimitiveCommand::~PrimitiveCommand() */

void __thiscall cocos2d::PrimitiveCommand::~PrimitiveCommand(PrimitiveCommand *this)

{
  *(undefined ***)this = &PTR__PrimitiveCommand_017241d0;
  Mat4::~Mat4((Mat4 *)(this + 0x38));
  RenderCommand::~RenderCommand((RenderCommand *)this);
  operator_delete(this);
  return;
}

