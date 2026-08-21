
/* cocos2d::renderer::Texture2D::~Texture2D() */

void __thiscall cocos2d::renderer::Texture2D::~Texture2D(Texture2D *this)

{
  Texture::~Texture((Texture *)this);
  operator_delete(this);
  return;
}

