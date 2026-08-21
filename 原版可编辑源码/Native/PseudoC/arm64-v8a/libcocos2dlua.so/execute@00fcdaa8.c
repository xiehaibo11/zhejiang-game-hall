
/* cocos2d::BatchCommand::execute() */

void __thiscall cocos2d::BatchCommand::execute(BatchCommand *this)

{
  GLProgram::use(*(GLProgram **)(this + 0x20));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(this + 0x20),(Mat4 *)(this + 0x38));
  GL::bindTexture2D(*(uint *)(this + 0x1c));
  GL::blendFunc(*(uint *)(this + 0x28),*(uint *)(this + 0x2c));
  TextureAtlas::drawQuads(*(TextureAtlas **)(this + 0x30));
  return;
}

