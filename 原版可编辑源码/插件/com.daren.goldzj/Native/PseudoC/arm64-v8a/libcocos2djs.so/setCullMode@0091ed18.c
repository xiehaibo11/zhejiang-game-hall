
/* cocos2d::renderer::Pass::setCullMode(cocos2d::renderer::CullMode) */

void __thiscall cocos2d::renderer::Pass::setCullMode(Pass *this,uint param_2)

{
  *(uint *)(this + 0x80) = param_2 & 0xffff;
  return;
}

