
/* cocos2d::GLProgram::getDescription() const */

void __thiscall cocos2d::GLProgram::getDescription(GLProgram *this)

{
  StringUtils::format("<GLProgram = %08zX | Program = %i, VertexShader = %i, FragmentShader = %i>",
                      this,(ulong)*(uint *)(this + 0x24),(ulong)*(uint *)(this + 0x28),
                      (ulong)*(uint *)(this + 0x2c));
  return;
}

