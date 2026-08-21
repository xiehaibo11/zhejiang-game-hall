
/* cocos2d::TextureCache::AsyncStruct::AsyncStruct(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::Texture2D*)> const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::TextureCache::AsyncStruct::AsyncStruct
          (AsyncStruct *this,basic_string *param_1,function *param_2,basic_string *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               this,param_1);
  plVar2 = *(long **)(param_2 + 0x20);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
  }
  else if ((long *)param_2 == plVar2) {
    *(AsyncStruct **)(this + 0x40) = this + 0x20;
                    /* catch() { ... } // from try @ 00fefe3c with catch @ 00fefec4 */
    (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(*(long **)(param_2 + 0x20),this + 0x20);
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)(this + 0x40) = uVar3;
  }
                    /* catch() { ... } // from try @ 00fefe0c with catch @ 00fefed4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x50),param_3);
  Image::Image((Image *)(this + 0x68));
  Image::Image((Image *)(this + 0x1d8));
  uVar1 = Texture2D::getDefaultAlphaPixelFormat();
  *(undefined4 *)(this + 0x348) = uVar1;
  this[0x34c] = (AsyncStruct)0x0;
  return;
}

