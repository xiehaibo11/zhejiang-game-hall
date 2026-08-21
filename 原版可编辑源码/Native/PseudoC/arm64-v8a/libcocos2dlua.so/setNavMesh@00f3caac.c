
/* cocos2d::Scene::setNavMesh(cocos2d::NavMesh*) */

void __thiscall cocos2d::Scene::setNavMesh(Scene *this,NavMesh *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x360);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (NavMesh *)0x0) {
      Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x360);
    }
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(NavMesh **)(this + 0x360) = param_1;
  }
  return;
}

