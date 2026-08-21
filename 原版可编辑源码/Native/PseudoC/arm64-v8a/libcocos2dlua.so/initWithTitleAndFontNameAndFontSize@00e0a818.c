
/* cocos2d::extension::ControlButton::initWithTitleAndFontNameAndFontSize(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

void cocos2d::extension::ControlButton::initWithTitleAndFontNameAndFontSize
               (basic_string *param_1,basic_string *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00e0a81c to 00f0a98b has its CatchHandler @ 00e0a81c
                       catch() { ... } // from try @ 00e0a81c with catch @ 00e0a81c
                       catch() { ... } // from try @ 00e0a994 with catch @ 00e0a81c */
  uVar1 = Label::createWithSystemFont(param_2);
  uVar2 = cocos2d::ui::Scale9Sprite::create();
                    /* WARNING: Could not recover jumptable at 0x00e0a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x738))(param_1,uVar1,uVar2,1);
  return;
}

