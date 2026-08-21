
/* cocos2d::BatchCommand::BatchCommand() */

void __thiscall cocos2d::BatchCommand::BatchCommand(BatchCommand *this)

{
  RenderCommand::RenderCommand((RenderCommand *)this);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined ***)this = &PTR__BatchCommand_01723d70;
  *(undefined8 *)(this + 0x28) = 1;
  *(undefined8 *)(this + 0x30) = 0;
  Mat4::Mat4((Mat4 *)(this + 0x38));
  *(undefined4 *)(this + 8) = 3;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}

