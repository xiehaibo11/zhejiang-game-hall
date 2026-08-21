
/* cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::extension::AssetsManagerEx*, cocos2d::extension::EventAssetsManagerEx::EventCode const&,
   float, float, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int) */

void __thiscall
cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
          (EventAssetsManagerEx *this,basic_string *param_1,AssetsManagerEx *param_2,
          EventCode *param_3,float param_4,float param_5,basic_string *param_6,basic_string *param_7
          ,int param_8,int param_9)

{
  undefined4 uVar1;
  
  EventCustom::EventCustom((EventCustom *)this,param_1);
  *(undefined ***)this = &PTR__EventAssetsManagerEx_016e7f98;
  uVar1 = *(undefined4 *)param_3;
  *(AssetsManagerEx **)(this + 0x60) = param_2;
  *(undefined4 *)(this + 0x58) = uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x68),param_7);
                    /* catch() { ... } // from try @ 00e08110 with catch @ 00e08244 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x80),param_6);
  *(int *)(this + 0x98) = param_8;
  *(int *)(this + 0x9c) = param_9;
  *(float *)(this + 0xa0) = param_4;
  *(float *)(this + 0xa4) = param_5;
  return;
}

