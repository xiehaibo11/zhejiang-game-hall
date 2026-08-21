
/* cocos2d::TrianglesCommand::TrianglesCommand() */

void __thiscall cocos2d::TrianglesCommand::TrianglesCommand(TrianglesCommand *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ff37b0 with catch @ 00ff3878
                        */
  RenderCommand::RenderCommand((RenderCommand *)this);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__TrianglesCommand_017245f8;
  *(undefined8 *)(this + 0x28) = 1;
  Mat4::Mat4((Mat4 *)(this + 0x48));
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 8) = 7;
                    /* catch() { ... } // from try @ 00ff3900 with catch @ 00ff38c8 */
  return;
}

