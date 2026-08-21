
/* spine::Cocos2dTextureLoader::unload(void*) */

void __thiscall spine::Cocos2dTextureLoader::unload(Cocos2dTextureLoader *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    cocos2d::Ref::release(param_1);
    return;
  }
  return;
}

