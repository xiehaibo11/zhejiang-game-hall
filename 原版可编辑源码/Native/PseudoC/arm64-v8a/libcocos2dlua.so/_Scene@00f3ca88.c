
/* cocos2d::Scene::~Scene() */

void __thiscall cocos2d::Scene::~Scene(Scene *this)

{
  ~Scene(this);
  operator_delete(this);
  return;
}

