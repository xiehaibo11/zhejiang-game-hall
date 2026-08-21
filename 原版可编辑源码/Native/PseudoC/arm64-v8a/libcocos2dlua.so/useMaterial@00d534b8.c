
/* spine::TwoColorTrianglesCommand::useMaterial() const */

void __thiscall spine::TwoColorTrianglesCommand::useMaterial(TwoColorTrianglesCommand *this)

{
  cocos2d::GL::bindTexture2D(*(uint *)(this + 0x54));
  if (*(uint *)(this + 200) != 0) {
    cocos2d::GL::bindTexture2DN(1,*(uint *)(this + 200));
  }
  cocos2d::GL::blendFunc(*(uint *)(this + 0x68),*(uint *)(this + 0x6c));
  cocos2d::GLProgramState::apply(*(GLProgramState **)(this + 0x58),(Mat4 *)(this + 0x88));
  return;
}

