
/* cocos2d::SpriteBatchNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::SpriteBatchNode::visit(SpriteBatchNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if (this[0x1f9] != (SpriteBatchNode)0x0) {
    (**(code **)(*(long *)this + 0x2b0))();
    uVar1 = Node::processParentFlags((Node *)this,param_2,param_3);
    uVar2 = Node::isVisitableByVisitingCamera((Node *)this);
    if ((uVar2 & 1) != 0) {
      Director::pushMatrix(*(Director **)(this + 0x198),0);
      Director::loadMatrix(*(Director **)(this + 0x198),0,this + 0x8c);
      (**(code **)(*(long *)this + 0x348))(this,param_1,this + 0x8c,uVar1);
      Director::popMatrix(*(Director **)(this + 0x198),0);
      return;
    }
  }
  return;
}

