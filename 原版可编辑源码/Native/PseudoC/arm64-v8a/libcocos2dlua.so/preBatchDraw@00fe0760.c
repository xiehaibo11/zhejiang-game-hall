
/* cocos2d::MeshCommand::preBatchDraw() */

void __thiscall cocos2d::MeshCommand::preBatchDraw(MeshCommand *this)

{
  uint uVar1;
  Configuration *this_00;
  ulong uVar2;
  GLProgramState *this_01;
  
                    /* catch() { ... } // from try @ 00fe06f4 with catch @ 00fe0760 */
  if (*(long *)(this + 0x98) != 0) {
    return;
  }
  this_00 = (Configuration *)Configuration::getInstance();
  uVar2 = Configuration::supportsShareableVAO(this_00);
  if (((uVar2 & 1) == 0) || (*(int *)(this + 0x38) != 0)) {
    uVar1 = *(uint *)(this + 0x38);
  }
  else {
    buildVAO(this);
    uVar1 = *(uint *)(this + 0x38);
  }
  if (uVar1 != 0) {
    GL::bindVAO(uVar1);
    return;
  }
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x3c));
  if (*(long *)(this + 0x98) == 0) {
    this_01 = *(GLProgramState **)(this + 0xa0);
  }
  else {
    this_01 = (GLProgramState *)
              Pass::getGLProgramState
                        ((Pass *)**(undefined8 **)(*(long *)(*(long *)(this + 0x98) + 0x90) + 0x78))
    ;
  }
  GLProgramState::applyAttributes(this_01,true);
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x40));
  return;
}

