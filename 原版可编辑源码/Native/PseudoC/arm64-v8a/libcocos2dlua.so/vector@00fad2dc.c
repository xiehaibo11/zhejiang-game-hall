
/* std::__ndk1::vector<cocos2d::Properties::Property,
   std::__ndk1::allocator<cocos2d::Properties::Property>
   >::vector(std::__ndk1::vector<cocos2d::Properties::Property,
   std::__ndk1::allocator<cocos2d::Properties::Property> > const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::vector
          (vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
           *this,vector *param_1)

{
  basic_string *pbVar1;
  basic_string *pbVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar3 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    this_00 = operator_new(uVar3);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this =
         this_00;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         this_00;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = this_00 + ((long)uVar3 >> 4) * 0x10;
    pbVar2 = *(basic_string **)(param_1 + 8);
    for (pbVar1 = *(basic_string **)param_1; pbVar1 != pbVar2; pbVar1 = pbVar1 + 0x30) {
                    /* try { // try from 00fad358 to 010ad35f has its CatchHandler @ 00fad4f4 */
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (this_00,pbVar1);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
                (this_00 + 0x18,pbVar1 + 0x18);
      this_00 = this_00 + 0x30;
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
         this_00;
  }
  return;
}

