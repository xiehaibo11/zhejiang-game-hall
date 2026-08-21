
/* cocos2d::PrimitiveCommand::~PrimitiveCommand() */

void __thiscall cocos2d::PrimitiveCommand::~PrimitiveCommand(PrimitiveCommand *this)

{
                    /* try { // try from 00fe15f4 to 010e169b has its CatchHandler @ 00fe15ac */
  *(undefined ***)this = &PTR__PrimitiveCommand_017241d0;
  Mat4::~Mat4((Mat4 *)(this + 0x38));
  RenderCommand::~RenderCommand((RenderCommand *)this);
  return;
}

