
/* cocostudio::Armature::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocostudio::Armature::visit(Armature *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  Director *pDVar3;
  
  if (this[0x1f9] != (Armature)0x0) {
    uVar1 = cocos2d::Node::processParentFlags((Node *)this,param_2,param_3);
    uVar2 = cocos2d::Node::isVisitableByVisitingCamera((Node *)this);
    if ((uVar2 & 1) != 0) {
      pDVar3 = (Director *)cocos2d::Director::getInstance();
      cocos2d::Director::pushMatrix(pDVar3,0);
      cocos2d::Director::loadMatrix(pDVar3,0,this + 0x8c);
      (**(code **)(*(long *)this + 0x2b0))(this);
      (**(code **)(*(long *)this + 0x348))(this,param_1,this + 0x8c,uVar1);
      cocos2d::Director::popMatrix(pDVar3,0);
      return;
    }
  }
  return;
}

