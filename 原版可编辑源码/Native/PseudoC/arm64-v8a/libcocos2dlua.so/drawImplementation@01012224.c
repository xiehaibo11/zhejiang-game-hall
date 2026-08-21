
/* cocos2d::Physics3DDebugDrawer::drawImplementation(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::Physics3DDebugDrawer::drawImplementation(Mat4 *param_1,uint param_2)

{
  long *plVar1;
  Configuration *this;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  GLProgram::use(*(GLProgram **)(param_1 + 0x80));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(param_1 + 0x80),(Mat4 *)(ulong)param_2);
  glEnable(0xb71);
  GL::blendFunc(*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
                    /* try { // try from 01012260 to 011122a3 has its CatchHandler @ 01012140 */
  if (param_1[0x88] != (Mat4)0x0) {
    glBindBuffer(0x8892,*(undefined4 *)(param_1 + 0xc));
                    /* catch() { ... } // from try @ 010121a8 with catch @ 0101227c */
                    /* catch() { ... } // from try @ 01012218 with catch @ 01012280 */
    glBufferData(0x8892,(long)*(int *)(param_1 + 0x10) * 0x1c,*(undefined8 *)(param_1 + 0x18),0x88e0
                );
    param_1[0x88] = (Mat4)0x0;
  }
  this = (Configuration *)Configuration::getInstance();
  uVar2 = Configuration::supportsShareableVAO(this);
  if ((uVar2 & 1) == 0) {
    GL::enableVertexAttribs(3);
    glBindBuffer(0x8892,*(undefined4 *)(param_1 + 0xc));
    glVertexAttribPointer(0,3,0x1406,0,0x1c,0);
    glVertexAttribPointer(1,4,0x1406,0,0x1c,0xc);
  }
  else {
    GL::bindVAO(*(uint *)(param_1 + 8));
  }
  glDrawArrays(1,0,*(undefined4 *)(param_1 + 0x14));
  glBindBuffer(0x8892,0);
  lVar3 = Director::getInstance();
  lVar4 = *(long *)(lVar3 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
  *plVar1 = *plVar1 + 1;
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + *(int *)(param_1 + 0x14);
  glDisable(0xb71);
  RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,false);
  return;
}

