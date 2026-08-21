
/* cocos2d::renderer::Light::~Light() */

void __thiscall cocos2d::renderer::Light::~Light(Light *this)

{
  ~Light(this);
  operator_delete(this);
  return;
}

