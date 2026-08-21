
/* cocos2d::PrimitiveCommand::PrimitiveCommand() */

void __thiscall cocos2d::PrimitiveCommand::PrimitiveCommand(PrimitiveCommand *this)

{
  RenderCommand::RenderCommand((RenderCommand *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* catch() { ... } // from try @ 00fe15f4 with catch @ 00fe15ac */
  *(undefined ***)this = &PTR__PrimitiveCommand_017241d0;
  *(undefined8 *)(this + 0x28) = 1;
  *(undefined8 *)(this + 0x30) = 0;
  Mat4::Mat4((Mat4 *)(this + 0x38));
  *(undefined4 *)(this + 8) = 6;
  return;
}

