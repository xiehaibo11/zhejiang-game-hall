
/* cocos2d::Texture2D::~Texture2D() */

void __thiscall cocos2d::Texture2D::~Texture2D(Texture2D *this)

{
  ~Texture2D(this);
  operator_delete(this);
  return;
}

