
/* std::__ndk1::vector<cocos2d::NTextureData, std::__ndk1::allocator<cocos2d::NTextureData>
   >::vector(std::__ndk1::vector<cocos2d::NTextureData,
   std::__ndk1::allocator<cocos2d::NTextureData> > const&) */

void __thiscall
std::__ndk1::vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>::vector
          (vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>> *this,
          vector *param_1)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  undefined8 uVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if ((ulong)((long)uVar3 >> 6) >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    this_00 = operator_new(uVar3);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
         this_00;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         this_00;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = this_00 + ((long)uVar3 >> 6) * 0x40;
    pbVar2 = *(basic_string **)(param_1 + 8);
    for (pbVar1 = *(basic_string **)param_1; pbVar1 != pbVar2; pbVar1 = pbVar1 + 0x40) {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (this_00,pbVar1);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (this_00 + 0x18,pbVar1 + 0x18);
      uVar4 = *(undefined8 *)(pbVar1 + 0x30);
      *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(pbVar1 + 0x38);
      *(undefined8 *)(this_00 + 0x30) = uVar4;
      this_00 = this_00 + 0x40;
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         this_00;
  }
  return;
}

