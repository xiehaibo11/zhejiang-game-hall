
/* spine::Cocos2dTextureLoader::~Cocos2dTextureLoader() */

void __thiscall spine::Cocos2dTextureLoader::~Cocos2dTextureLoader(Cocos2dTextureLoader *this)

{
  void *extraout_x1;
  
  TextureLoader::~TextureLoader((TextureLoader *)this);
  SpineObject::operator_delete((SpineObject *)this,extraout_x1);
  return;
}

