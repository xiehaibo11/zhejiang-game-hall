
/* cocos2d::Sprite::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall cocos2d::Sprite::draw(Sprite *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TrianglesCommand *pTVar6;
  
  if (*(long *)(this + 0x368) == 0) {
    return;
  }
  lVar2 = Camera::getVisitingCamera();
  lVar3 = Camera::getDefaultCamera();
                    /* try { // try from 00f403fc to 010404cb has its CatchHandler @ 00f403fc
                       catch() { ... } // from try @ 00f403fc with catch @ 00f403fc
                       catch() { ... } // from try @ 00f4054c with catch @ 00f403fc
                       catch() { ... } // from try @ 00f4077c with catch @ 00f403fc
                       catch() { ... } // from try @ 00f407e8 with catch @ 00f403fc */
  if (lVar2 == 0) {
    this[0x50b] = (Sprite)0x1;
  }
  else {
    if (((lVar2 == lVar3) && ((param_3 & 1) == 0)) && (*(char *)(lVar2 + 0x429) == '\0')) {
      bVar1 = this[0x50b] != (Sprite)0x0;
    }
    else {
      bVar1 = Renderer::checkVisibility((Mat4 *)param_1,(Size *)param_2);
    }
    this[0x50b] = (Sprite)(bVar1 & 1);
    if ((Sprite)(bVar1 & 1) == (Sprite)0x0) {
      return;
    }
  }
                    /* WARNING: Load size is inaccurate */
  pTVar6._0_4_ = *(TrianglesCommand **)(this + 0x170);
  uVar5 = *(undefined8 *)(this + 0x368);
  uVar4 = Node::getGLProgramState((Node *)this);
  TrianglesCommand::init
            (pTVar6._0_4_,(RenderCommand *)(this + 0x378),uVar5,uVar4,*(undefined8 *)(this + 0x35c),
             this + 0x4c0,param_2,param_3);
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x378));
  return;
}

