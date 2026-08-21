
/* cocos2d::CustomCommand::CustomCommand() */

void __thiscall cocos2d::CustomCommand::CustomCommand(CustomCommand *this)

{
  RenderCommand::RenderCommand((RenderCommand *)this);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 8) = 2;
  *(undefined ***)this = &PTR__CustomCommand_01723da8;
  return;
}

