
/* cocos2d::MeshCommand::postBatchDraw() */

void __thiscall cocos2d::MeshCommand::postBatchDraw(MeshCommand *this)

{
                    /* try { // try from 00fe0a2c to 010e0a33 has its CatchHandler @ 00fe0ab8 */
  if (*(long *)(this + 0x98) != 0) {
    return;
  }
  if (*(int *)(this + 0x38) == 0) {
                    /* try { // try from 00fe0a54 to 010e0a67 has its CatchHandler @ 00fe0ac0 */
    glBindBuffer(0x8893,0);
    glBindBuffer(0x8892,0);
  }
  else {
    GL::bindVAO(0);
  }
                    /* try { // try from 00fe0a68 to 010e0ae3 has its CatchHandler @ 00fe0a04 */
  RenderState::StateBlock::restore(0);
  return;
}

