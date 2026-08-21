
/* spine::TwoColorTrianglesCommand::~TwoColorTrianglesCommand() */

void __thiscall
spine::TwoColorTrianglesCommand::~TwoColorTrianglesCommand(TwoColorTrianglesCommand *this)

{
  *(undefined ***)this = &PTR__TwoColorTrianglesCommand_016d5d30;
  cocos2d::Mat4::~Mat4((Mat4 *)(this + 0x88));
  cocos2d::CustomCommand::~CustomCommand((CustomCommand *)this);
  operator_delete(this);
  return;
}

