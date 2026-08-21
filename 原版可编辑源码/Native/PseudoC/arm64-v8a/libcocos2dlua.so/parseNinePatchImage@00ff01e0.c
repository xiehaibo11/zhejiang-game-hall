
/* cocos2d::TextureCache::parseNinePatchImage(cocos2d::Image*, cocos2d::Texture2D*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::TextureCache::parseNinePatchImage
          (TextureCache *this,Image *param_1,Texture2D *param_2,basic_string *param_3)

{
  long lVar1;
  ulong uVar2;
  Rect aRStack_80 [16];
  Rect aRStack_70 [16];
  NinePatchImageParser aNStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = NinePatchImageParser::isNinePatchImage(param_3);
  if ((uVar2 & 1) != 0) {
    Rect::Rect(aRStack_70,0.0,0.0,(float)*(int *)(param_1 + 0x38),(float)*(int *)(param_1 + 0x3c));
    NinePatchImageParser::NinePatchImageParser(aNStack_60,param_1,aRStack_70,false);
    NinePatchImageParser::parseCapInset();
    Texture2D::addSpriteFrameCapInset(param_2,(SpriteFrame *)0x0,aRStack_80);
    NinePatchImageParser::~NinePatchImageParser(aNStack_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

