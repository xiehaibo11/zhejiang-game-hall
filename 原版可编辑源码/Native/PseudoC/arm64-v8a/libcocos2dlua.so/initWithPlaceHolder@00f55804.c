
/* cocos2d::TextFieldTTF::initWithPlaceHolder(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Size const&,
   cocos2d::TextHAlignment, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float) */

undefined8 __thiscall
cocos2d::TextFieldTTF::initWithPlaceHolder
          (float param_1_00,TextFieldTTF *this,basic_string *param_1,float *param_2,
          undefined4 param_5,basic_string *param_6)

{
  Label::setDimensions((Label *)this,*param_2,param_2[1]);
  Label::setAlignment((Label *)this,param_5,1);
  initWithPlaceHolder(this,param_1,param_6,param_1_00);
  return 1;
}

