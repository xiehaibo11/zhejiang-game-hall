
/* cocos2d::Physics3DComponent::~Physics3DComponent() */

void __thiscall cocos2d::Physics3DComponent::~Physics3DComponent(Physics3DComponent *this)

{
  ~Physics3DComponent(this);
  operator_delete(this);
  return;
}

