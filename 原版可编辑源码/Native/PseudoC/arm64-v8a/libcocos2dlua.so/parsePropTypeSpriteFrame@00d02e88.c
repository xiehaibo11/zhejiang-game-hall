
/* cocosbuilder::NodeLoader::parsePropTypeSpriteFrame(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*, char const*) */

Ref * __thiscall
cocosbuilder::NodeLoader::parsePropTypeSpriteFrame
          (NodeLoader *this,Node *param_1,Node *param_2,CCBReader *param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  SpriteFrameCache *this_00;
  __ndk1 *p_Var3;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *p_Var4;
  long lVar5;
  long lVar6;
  Ref *pRVar7;
  Director *this_01;
  TextureCache *this_02;
  Texture2D *pTVar8;
  CCBAnimationManager *this_03;
  float local_b4;
  float local_b0;
  basic_string local_a8 [8];
  ulong uStack_a0;
  undefined1 *local_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 *local_80;
  ulong local_70;
  ulong uStack_68;
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  CCBReader::readCachedString();
  CCBReader::readCachedString();
  uVar1 = local_90 >> 1 & 0x7f;
  if ((local_90 & 1) != 0) {
    uVar1 = uStack_88;
  }
  if (uVar1 == 0) {
    pRVar7 = (Ref *)0x0;
    if ((local_90 & 1) == 0) goto LAB_00d03114;
  }
  else {
    uVar1 = (ulong)((byte)local_70._0_1_ >> 1);
    if ((local_70 & 1) != 0) {
      uVar1 = uStack_68;
    }
    if (uVar1 == 0) {
      p_Var3 = (__ndk1 *)CCBReader::getCCBRootPath(param_3);
      std::__ndk1::operator+(p_Var3,(basic_string *)&local_90,(basic_string *)param_2);
      if (((byte)local_90._0_1_ & 1) != 0) {
        *local_80 = 0;
        uStack_88 = 0;
        if (((byte)local_90._0_1_ & 1) != 0) {
          operator_delete(local_80);
        }
      }
      local_90._0_1_ = local_a8[0];
      uStack_88 = uStack_a0;
      local_80 = local_98;
      this_01 = (Director *)cocos2d::Director::getInstance();
      this_02 = (TextureCache *)cocos2d::Director::getTextureCache(this_01);
      pTVar8 = (Texture2D *)cocos2d::TextureCache::addImage(this_02,(basic_string *)&local_90);
      pRVar7 = (Ref *)0x0;
      if (pTVar8 != (Texture2D *)0x0) {
        cocos2d::Texture2D::getContentSize();
        cocos2d::Texture2D::getContentSize();
        cocos2d::Rect::Rect((Rect *)local_a8,0.0,0.0,local_b0,local_b4);
        pRVar7 = (Ref *)cocos2d::SpriteFrame::createWithTexture(pTVar8,local_a8);
      }
    }
    else {
      this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
      p_Var3 = (__ndk1 *)CCBReader::getCCBRootPath(param_3);
      std::__ndk1::operator+(p_Var3,(basic_string *)&local_70,(basic_string *)param_2);
      if (((byte)local_70._0_1_ & 1) != 0) {
        *local_60 = 0;
        uStack_68 = 0;
        if (((byte)local_70._0_1_ & 1) != 0) {
          operator_delete(local_60);
        }
      }
      local_70._0_1_ = local_a8[0];
      uStack_68 = uStack_a0;
      local_60 = local_98;
      p_Var4 = (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)CCBReader::getLoadedSpriteSheet(param_3);
      lVar5 = std::__ndk1::
              __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (p_Var4,(basic_string *)&local_70);
      lVar6 = CCBReader::getLoadedSpriteSheet(param_3);
      if (lVar6 + 8 == lVar5) {
        cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this_00,(basic_string *)&local_70);
        p_Var4 = (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)CCBReader::getLoadedSpriteSheet(param_3);
        std::__ndk1::
        __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  (p_Var4,(basic_string *)&local_70,(basic_string *)&local_70);
      }
      pRVar7 = (Ref *)cocos2d::SpriteFrameCache::getSpriteFrameByName
                                (this_00,(basic_string *)&local_90);
    }
    p_Var4 = (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)CCBReader::getAnimatedProperties(param_3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_a8,param_4);
    lVar5 = std::__ndk1::
            __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (p_Var4,local_a8);
    lVar6 = CCBReader::getAnimatedProperties(param_3);
    if (((byte)local_a8[0] & 1) != 0) {
      operator_delete(local_98);
    }
    if (lVar6 + 8 != lVar5) {
      this_03 = (CCBAnimationManager *)CCBReader::getAnimationManager(param_3);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_a8,param_4);
      CCBAnimationManager::setObject(this_03,pRVar7,param_1,local_a8);
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
    }
    if (((byte)local_90._0_1_ & 1) == 0) goto LAB_00d03114;
  }
  operator_delete(local_80);
LAB_00d03114:
  if (((byte)local_70._0_1_ & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pRVar7;
}

