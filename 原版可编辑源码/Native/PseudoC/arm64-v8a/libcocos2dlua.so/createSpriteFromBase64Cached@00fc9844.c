
/* cocos2d::utils::createSpriteFromBase64Cached(char const*, char const*) */

void cocos2d::utils::createSpriteFromBase64Cached(char *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  Director *pDVar3;
  TextureCache *pTVar4;
  Texture2D *pTVar5;
  size_t sVar6;
  Image *this;
  ulong uVar7;
  undefined8 uVar8;
  uchar *local_58;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pDVar3 = (Director *)Director::getInstance();
  pTVar4 = (TextureCache *)Director::getTextureCache(pDVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,param_2);
  pTVar5 = (Texture2D *)TextureCache::getTextureForKey(pTVar4,(basic_string *)local_50);
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (pTVar5 == (Texture2D *)0x0) {
    sVar6 = strlen(param_1);
    iVar2 = base64Decode(param_1,sVar6,&local_58);
    this = operator_new(0x170,(nothrow_t *)&std::nothrow);
    if (this != (Image *)0x0) {
      Image::Image(this);
    }
    uVar7 = Image::initWithImageData(this,local_58,(long)iVar2);
    free(local_58);
    if ((uVar7 & 1) == 0) {
      if (this != (Image *)0x0) {
        Ref::release((Ref *)this);
      }
      uVar8 = 0;
      goto LAB_00fc9954;
    }
    pDVar3 = (Director *)Director::getInstance();
    pTVar4 = (TextureCache *)Director::getTextureCache(pDVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,param_2);
    pTVar5 = (Texture2D *)TextureCache::addImage(pTVar4,this,(basic_string *)local_50);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    Ref::release((Ref *)this);
  }
  uVar8 = Sprite::createWithTexture(pTVar5);
LAB_00fc9954:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

