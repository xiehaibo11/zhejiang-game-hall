
/* cocos2d::renderer::Texture::~Texture() */

void __thiscall cocos2d::renderer::Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__Texture_01c693f8;
  if (*(int *)(this + 0xc) == 0) {
    __android_log_print(6,"renderer"," (68): Invalid texture: %p\n",this);
  }
  else {
    glDeleteTextures(1);
  }
  GraphicsHandle::~GraphicsHandle((GraphicsHandle *)this);
  operator_delete(this);
  return;
}

