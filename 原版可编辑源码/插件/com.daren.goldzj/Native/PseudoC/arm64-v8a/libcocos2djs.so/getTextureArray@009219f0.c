
/* cocos2d::renderer::Technique::Parameter::getTextureArray() const */

void cocos2d::renderer::Technique::Parameter::getTextureArray(void)

{
  byte bVar1;
  long in_x0;
  vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>> *in_x8;
  Texture **ppTVar2;
  ulong uVar3;
  
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)in_x8 = 0;
  if (((*(byte *)(in_x0 + 0x31) | 2) == 0x1f) && (*(char *)(in_x0 + 0x30) != '\0')) {
    ppTVar2 = *(Texture ***)(in_x0 + 0x38);
    uVar3 = 1;
    while( true ) {
      std::__ndk1::
      vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>::
      __push_back_slow_path<cocos2d::renderer::Texture*const&>(in_x8,ppTVar2);
      bVar1 = *(byte *)(in_x0 + 0x30);
      if (bVar1 <= uVar3) break;
      while( true ) {
        ppTVar2 = ppTVar2 + 1;
        uVar3 = uVar3 + 1;
        if (*(undefined8 **)(in_x8 + 8) == *(undefined8 **)(in_x8 + 0x10)) break;
        **(undefined8 **)(in_x8 + 8) = *ppTVar2;
        *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 8;
        if (bVar1 <= uVar3) {
          return;
        }
      }
    }
  }
  return;
}

