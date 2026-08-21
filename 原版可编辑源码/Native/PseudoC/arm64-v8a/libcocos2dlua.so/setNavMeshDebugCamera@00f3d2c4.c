
/* cocos2d::Scene::setNavMeshDebugCamera(cocos2d::Camera*) */

void __thiscall cocos2d::Scene::setNavMeshDebugCamera(Scene *this,Camera *param_1)

{
  if (param_1 != (Camera *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x368) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x368));
  }
  *(Camera **)(this + 0x368) = param_1;
  return;
}

