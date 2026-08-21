
/* cocos2d::MeshCommand::buildVAO() */

void __thiscall cocos2d::MeshCommand::buildVAO(MeshCommand *this)

{
  uint uVar1;
  uint uVar2;
  GLProgramState *this_00;
  MeshCommand *pMVar3;
  uint uVar4;
  
  if (*(long *)(this + 0x98) == 0) {
    this_00 = *(GLProgramState **)(this + 0xa0);
  }
  else {
    this_00 = (GLProgramState *)
              Pass::getGLProgramState
                        ((Pass *)**(undefined8 **)(*(long *)(*(long *)(this + 0x98) + 0x90) + 0x78))
    ;
  }
  pMVar3 = this + 0x38;
  if (*(int *)pMVar3 != 0) {
    (*glDeleteVertexArraysOESEXT)(1,pMVar3);
    *(int *)pMVar3 = 0;
    GL::bindVAO(0);
  }
  (*glGenVertexArraysOESEXT)(1,pMVar3);
  GL::bindVAO(*(uint *)(this + 0x38));
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x3c));
  uVar2 = GLProgramState::getVertexAttribsFlags(this_00);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar1 = 1 << (ulong)(uVar4 & 0x1f);
                    /* catch() { ... } // from try @ 00fe0940 with catch @ 00fe08cc */
      if ((uVar1 & uVar2) != 0) {
        glEnableVertexAttribArray(uVar4);
      }
      uVar2 = uVar2 & (uVar1 ^ 0xffffffff);
      uVar4 = uVar4 + 1;
    } while (uVar2 != 0);
  }
  GLProgramState::applyAttributes(this_00,false);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x40));
  GL::bindVAO(0);
                    /* try { // try from 00fe0900 to 010e0907 has its CatchHandler @ 00fe0994 */
  glBindBuffer(0x8892,0);
  glBindBuffer(0x8893,0);
  return;
}

