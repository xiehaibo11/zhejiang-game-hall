
/* cocos2d::LayerRadialGradient::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::LayerRadialGradient::draw
          (LayerRadialGradient *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  code *local_c0;
  undefined8 uStack_b8;
  LayerRadialGradient *local_b0;
  Mat4 aMStack_a8 [64];
  uint local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)(this + 0x380),(uint)param_2);
  uStack_b8 = 0;
  local_c0 = onDraw;
  local_b0 = this;
  Mat4::Mat4(aMStack_a8,param_2);
  local_68 = param_3;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 0x3a0),(__bind *)&local_c0);
  Mat4::~Mat4(aMStack_a8);
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x380));
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

