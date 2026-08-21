
/* cocos2d::Material::~Material() */

void __thiscall cocos2d::Material::~Material(Material *this)

{
  ~Material(this);
  operator_delete(this);
  return;
}

