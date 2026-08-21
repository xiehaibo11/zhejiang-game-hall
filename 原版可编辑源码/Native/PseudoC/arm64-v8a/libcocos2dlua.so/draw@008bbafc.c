
/* GLNode::draw(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall GLNode::draw(GLNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  code *local_c0;
  undefined8 uStack_b8;
  GLNode *local_b0;
  Mat4 aMStack_a8 [64];
  uint local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  cocos2d::CustomCommand::init((CustomCommand *)(this + 0x300),*(float *)(this + 0x170));
  uStack_b8 = 0;
  local_c0 = onDraw;
  local_b0 = this;
  cocos2d::Mat4::Mat4(aMStack_a8,param_2);
  local_68 = param_3;
  std::__ndk1::function<void()>::operator=((function<void()> *)(this + 800),(__bind *)&local_c0);
  cocos2d::Mat4::~Mat4(aMStack_a8);
  cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(this + 0x300));
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

