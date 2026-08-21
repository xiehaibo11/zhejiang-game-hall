
/* cocos2d::experimental::TMXLayer::onDraw(cocos2d::Primitive*) */

void __thiscall cocos2d::experimental::TMXLayer::onDraw(TMXLayer *this,Primitive *param_1)

{
  long *plVar1;
  uint uVar2;
  GLProgramState *this_00;
  long lVar3;
  long lVar4;
  
  uVar2 = Texture2D::getName(*(Texture2D **)(this + 0x360));
  GL::bindTexture2D(uVar2);
  this_00 = (GLProgramState *)Node::getGLProgramState((Node *)this);
  GLProgramState::apply(this_00,(Mat4 *)(this + 0x8c));
  GL::bindVAO(0);
  Primitive::draw(param_1);
  glBindBuffer(0x8892,0);
  glBindBuffer(0x8893,0);
  lVar3 = Director::getInstance();
  lVar4 = *(long *)(lVar3 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
                    /* try { // try from 00ef9c28 to 00ff9c6b has its CatchHandler @ 00ef9c28
                       catch() { ... } // from try @ 00ef9c28 with catch @ 00ef9c28
                       catch() { ... } // from try @ 00ef9d74 with catch @ 00ef9c28 */
  *plVar1 = *plVar1 + 1;
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + (long)*(int *)(param_1 + 0x3c) * 4;
  return;
}

