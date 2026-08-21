
/* cocos2d::QuadCommand::QuadCommand() */

void __thiscall cocos2d::QuadCommand::QuadCommand(QuadCommand *this)

{
  TrianglesCommand::TrianglesCommand((TrianglesCommand *)this);
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x8c) = 0xffffffff;
  *(undefined ***)this = &PTR__QuadCommand_01724208;
  *(undefined8 *)(this + 0x90) = 0;
                    /* catch() { ... } // from try @ 00fe17e0 with catch @ 00fe1868 */
  return;
}

