
/* fairygui::FUIRichText::addNewLine() */

void __thiscall fairygui::FUIRichText::addNewLine(FUIRichText *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x330);
  *(undefined4 *)(this + 0x34c) = *(undefined4 *)(this + 0x350);
  if (puVar1 < *(undefined8 **)(this + 0x338)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 **)(this + 0x330) = puVar1 + 3;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
    ::__emplace_back_slow_path<>
              ((vector<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>>>
                *)(this + 0x328));
  }
  *(int *)(this + 0x354) = *(int *)(this + 0x354) + 1;
  return;
}

