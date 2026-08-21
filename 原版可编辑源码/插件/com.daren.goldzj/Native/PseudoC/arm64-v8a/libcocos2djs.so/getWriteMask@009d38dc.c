
/* cocos2d::renderer::StencilManager::getWriteMask() */

int __thiscall cocos2d::renderer::StencilManager::getWriteMask(StencilManager *this)

{
  return 1 << (ulong)(*(int *)(this + 0x10) - 1U & 0x1f);
}

