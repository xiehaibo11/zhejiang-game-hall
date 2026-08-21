
/* fairygui::UIPackage::loadImage(fairygui::PackageItem*) */

void __thiscall fairygui::UIPackage::loadImage(UIPackage *this,PackageItem *param_1)

{
  PackageItem PVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  SpriteFrame *this_00;
  Texture2D *pTVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,fairygui::AtlasSprite*>>>
                      *)(this + 0xd8),(basic_string *)(param_1 + 0x38));
  if ((lVar3 == 0) || (*(AtlasSprite **)(lVar3 + 0x28) == (AtlasSprite *)0x0)) {
    this_00 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
    if (this_00 != (SpriteFrame *)0x0) {
      cocos2d::SpriteFrame::SpriteFrame(this_00);
    }
    *(SpriteFrame **)(param_1 + 0xb8) = this_00;
    pTVar5 = _emptyTexture;
    cocos2d::Rect::Rect((Rect *)&local_50);
    cocos2d::SpriteFrame::initWithTexture(this_00,pTVar5,(Rect *)&local_50);
    PVar1 = param_1[0xb0];
  }
  else {
    uVar4 = createSpriteTexture(this,*(AtlasSprite **)(lVar3 + 0x28));
    *(undefined8 *)(param_1 + 0xb8) = uVar4;
    PVar1 = param_1[0xb0];
  }
  if (PVar1 != (PackageItem)0x0) {
    uStack_48 = 0x290100002901;
    local_50 = 0x260100002601;
    pTVar5 = (Texture2D *)cocos2d::SpriteFrame::getTexture(*(SpriteFrame **)(param_1 + 0xb8));
    cocos2d::Texture2D::setTexParameters(pTVar5,(_TexParams *)&local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

