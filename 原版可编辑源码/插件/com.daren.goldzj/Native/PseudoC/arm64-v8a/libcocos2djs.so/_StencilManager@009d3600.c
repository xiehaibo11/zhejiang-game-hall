
/* cocos2d::renderer::StencilManager::~StencilManager() */

void __thiscall cocos2d::renderer::StencilManager::~StencilManager(StencilManager *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    return;
  }
  return;
}

