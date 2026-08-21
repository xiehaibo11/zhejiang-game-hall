
/* cocos2d::ParticleBatchNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ParticleBatchNode::visit
          (ParticleBatchNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  Director *pDVar3;
  
  if (this[0x1f9] != (ParticleBatchNode)0x0) {
                    /* try { // try from 00f2d0c0 to 0102d0c7 has its CatchHandler @ 00f2d0f0 */
    uVar1 = Node::processParentFlags((Node *)this,param_2,param_3);
                    /* try { // try from 00f2d0d4 to 0102d0df has its CatchHandler @ 00f2d108 */
    uVar2 = Node::isVisitableByVisitingCamera((Node *)this);
    if ((uVar2 & 1) != 0) {
                    /* try { // try from 00f2d0e0 to 0102d11b has its CatchHandler @ 00f2d07c */
      pDVar3 = (Director *)Director::getInstance();
      Director::pushMatrix(pDVar3,0);
                    /* catch() { ... } // from try @ 00f2d0c0 with catch @ 00f2d0f0 */
      Director::loadMatrix(pDVar3,0,this + 0x8c);
                    /* catch() { ... } // from try @ 00f2d0d4 with catch @ 00f2d108 */
      (**(code **)(*(long *)this + 0x348))(this,param_1,this + 0x8c,uVar1);
      Director::popMatrix(pDVar3,0);
      return;
    }
  }
  return;
}

