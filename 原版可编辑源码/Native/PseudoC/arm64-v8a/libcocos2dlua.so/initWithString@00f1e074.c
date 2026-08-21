
/* cocos2d::MenuItemAtlasFont::initWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, char, std::__ndk1::function<void (cocos2d::Ref*)> const&) */

undefined8 __thiscall
cocos2d::MenuItemAtlasFont::initWithString
          (MenuItemAtlasFont *this,basic_string *param_1,basic_string *param_2,int param_3,
          int param_4,char param_5,function *param_6)

{
  LabelAtlas *this_00;
  
                    /* catch() { ... } // from try @ 00f1dfe8 with catch @ 00f1e07c */
                    /* catch() { ... } // from try @ 00f1e014 with catch @ 00f1e080 */
  this_00 = (LabelAtlas *)LabelAtlas::create();
  LabelAtlas::initWithString(this_00,param_1,param_2,param_3,param_4,(int)param_5);
  MenuItemLabel::initWithLabel((MenuItemLabel *)this,(Node *)this_00,param_6);
  return 1;
}

