
/* cocos2d::MenuItemFont::MenuItemFont() */

void __thiscall cocos2d::MenuItemFont::MenuItemFont(MenuItemFont *this)

{
  Node::Node((Node *)this);
  *(undefined2 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined ***)this = &PTR__MenuItem_01705020;
  Color3B::Color3B((Color3B *)(this + 0x330));
  *(undefined4 *)(this + 0x334) = 0;
  Color3B::Color3B((Color3B *)(this + 0x338));
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined ***)this = &PTR__MenuItemFont_01704a98;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x350),"");
  return;
}

