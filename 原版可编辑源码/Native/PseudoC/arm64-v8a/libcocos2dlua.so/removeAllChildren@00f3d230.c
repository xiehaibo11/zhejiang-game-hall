
/* cocos2d::Scene::removeAllChildren() */

void __thiscall cocos2d::Scene::removeAllChildren(Scene *this)

{
  if (*(Ref **)(this + 0x310) != (Ref *)0x0) {
    Ref::retain(*(Ref **)(this + 0x310));
  }
  Node::removeAllChildren((Node *)this);
  if (*(long *)(this + 0x310) != 0) {
    (**(code **)(*(long *)this + 0x208))(this);
    Ref::release(*(Ref **)(this + 0x310));
    return;
  }
  return;
}

