
/* cocos2d::renderer::Pass::setStencilFront(cocos2d::renderer::ComparisonFunc, unsigned int,
   unsigned char, cocos2d::renderer::StencilOp, cocos2d::renderer::StencilOp,
   cocos2d::renderer::StencilOp, unsigned char) */

void __thiscall
cocos2d::renderer::Pass::setStencilFront
          (Pass *this,uint param_2,undefined4 param_3,uint param_4,uint param_5,uint param_6,
          uint param_7,uint param_8)

{
  *(undefined4 *)(this + 0xb0) = 1;
  *(uint *)(this + 0xb4) = param_2 & 0xffff;
  *(undefined4 *)(this + 0xb8) = param_3;
  *(uint *)(this + 0xbc) = param_4 & 0xff;
  *(uint *)(this + 0xc0) = param_5 & 0xffff;
  *(uint *)(this + 0xc4) = param_6 & 0xffff;
  *(uint *)(this + 200) = param_7 & 0xffff;
  *(uint *)(this + 0xcc) = param_8 & 0xff;
  return;
}

