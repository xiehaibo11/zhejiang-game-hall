
/* cocos2d::renderer::StencilManager::getExitWriteMask() */

int __thiscall cocos2d::renderer::StencilManager::getExitWriteMask(StencilManager *this)

{
  return 1 << (ulong)(*(uint *)(this + 0x10) & 0x1f);
}

