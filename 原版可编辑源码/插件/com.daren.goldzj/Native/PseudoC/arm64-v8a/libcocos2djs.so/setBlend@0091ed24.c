
/* cocos2d::renderer::Pass::setBlend(bool, cocos2d::renderer::BlendOp,
   cocos2d::renderer::BlendFactor, cocos2d::renderer::BlendFactor, cocos2d::renderer::BlendOp,
   cocos2d::renderer::BlendFactor, cocos2d::renderer::BlendFactor, unsigned int) */

void __thiscall
cocos2d::renderer::Pass::setBlend
          (Pass *this,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,
          uint param_8,undefined4 param_9)

{
  *(uint *)(this + 0x84) = param_2 & 1;
  *(uint *)(this + 0x88) = param_3 & 0xffff;
  *(uint *)(this + 0x8c) = param_4 & 0xffff;
  *(uint *)(this + 0x90) = param_5 & 0xffff;
  *(uint *)(this + 0x94) = param_6 & 0xffff;
  *(uint *)(this + 0x98) = param_7 & 0xffff;
  *(uint *)(this + 0x9c) = param_8 & 0xffff;
  *(undefined4 *)(this + 0xa0) = param_9;
  return;
}

