
/* cocos2d::TrianglesCommand::~TrianglesCommand() */

void __thiscall cocos2d::TrianglesCommand::~TrianglesCommand(TrianglesCommand *this)

{
  *(undefined ***)this = &PTR__TrianglesCommand_017245f8;
  Mat4::~Mat4((Mat4 *)(this + 0x48));
                    /* try { // try from 00ff3d68 to 010f3dab has its CatchHandler @ 00ff3d68
                       catch() { ... } // from try @ 00ff3d68 with catch @ 00ff3d68
                       catch() { ... } // from try @ 00ff3dc8 with catch @ 00ff3d68 */
  RenderCommand::~RenderCommand((RenderCommand *)this);
  return;
}

