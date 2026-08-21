
/* cocos2d::RenderTexture::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::RenderTexture::visit(RenderTexture *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  RenderTexture *pRVar1;
  undefined4 uVar2;
  Director *pDVar3;
  ulong uVar4;
  
                    /* catch() { ... } // from try @ 00f3b29c with catch @ 00f3b270 */
  if (this[0x1f9] != (RenderTexture)0x0) {
                    /* try { // try from 00f3b294 to 0103b29b has its CatchHandler @ 00f3b2ec */
    uVar2 = Node::processParentFlags((Node *)this,param_2,param_3);
                    /* try { // try from 00f3b29c to 0103b307 has its CatchHandler @ 00f3b270 */
    pDVar3 = (Director *)Director::getInstance();
    Director::pushMatrix(pDVar3,0);
    pRVar1 = this + 0x8c;
    Director::loadMatrix(pDVar3,0,pRVar1);
    (**(code **)(**(long **)(this + 0x380) + 0x358))(*(long **)(this + 0x380),param_1,pRVar1,uVar2);
    uVar4 = Node::isVisitableByVisitingCamera((Node *)this);
    if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 00f3b294 with catch @ 00f3b2ec */
      (**(code **)(*(long *)this + 0x348))(this,param_1,pRVar1,uVar2);
    }
    Director::popMatrix(pDVar3,0);
    return;
  }
  return;
}

