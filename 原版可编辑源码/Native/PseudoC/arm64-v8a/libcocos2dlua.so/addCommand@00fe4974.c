
/* cocos2d::Renderer::addCommand(cocos2d::RenderCommand*, int) */

void __thiscall cocos2d::Renderer::addCommand(Renderer *this,RenderCommand *param_1,int param_2)

{
  RenderQueue::push_back((RenderQueue *)(*(long *)(this + 0x40) + (long)param_2 * 0x80),param_1);
  return;
}

