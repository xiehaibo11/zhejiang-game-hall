
/* dragonBones::CCArmatureCacheDisplay::bindNodeProxy(cocos2d::renderer::NodeProxy*) */

void __thiscall
dragonBones::CCArmatureCacheDisplay::bindNodeProxy(CCArmatureCacheDisplay *this,NodeProxy *param_1)

{
  if (*(Ref **)(this + 0xc0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0xc0));
  }
  *(NodeProxy **)(this + 0xc0) = param_1;
  if (param_1 != (NodeProxy *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

