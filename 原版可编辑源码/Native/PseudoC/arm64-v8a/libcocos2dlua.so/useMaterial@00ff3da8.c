
/* cocos2d::TrianglesCommand::useMaterial() const */

void __thiscall cocos2d::TrianglesCommand::useMaterial(TrianglesCommand *this)

{
                    /* try { // try from 00ff3dac to 010f3dc7 has its CatchHandler @ 00ff3ecc */
  GL::bindTexture2D(*(uint *)(this + 0x1c));
  if (*(uint *)(this + 0x88) != 0) {
                    /* try { // try from 00ff3dc8 to 010f3ee7 has its CatchHandler @ 00ff3d68 */
    GL::bindTexture2DN(1,*(uint *)(this + 0x88));
  }
  GL::blendFunc(*(uint *)(this + 0x28),*(uint *)(this + 0x2c));
  GLProgramState::apply(*(GLProgramState **)(this + 0x20),(Mat4 *)(this + 0x48));
  return;
}

