
/* cocos2d::Renderer::addCommand(cocos2d::RenderCommand*) */

void __thiscall cocos2d::Renderer::addCommand(Renderer *this,RenderCommand *param_1)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(this + 0x38) + *(long *)(this + 0x30)) - 1;
  RenderQueue::push_back
            ((RenderQueue *)
             (*(long *)(this + 0x40) +
             (long)*(int *)(*(long *)(*(long *)(this + 0x18) + (uVar1 >> 7 & 0x1fffffffffffff8)) +
                           (uVar1 & 0x3ff) * 4) * 0x80),param_1);
  return;
}

