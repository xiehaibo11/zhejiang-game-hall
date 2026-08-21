
/* cocos2d::renderer::Pass::setDepth(bool, bool, cocos2d::renderer::ComparisonFunc) */

void __thiscall cocos2d::renderer::Pass::setDepth(Pass *this,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(this + 0xa4) = param_2 & 1;
  *(uint *)(this + 0xa8) = param_3 & 1;
  *(uint *)(this + 0xac) = param_4 & 0xffff;
  return;
}

