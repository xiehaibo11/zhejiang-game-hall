
/* v8::base::RegionAllocator::Region::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall v8::base::RegionAllocator::Region::Print(Region *this,basic_ostream *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  basic_ostream *pbVar3;
  
  uVar2 = *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8);
  *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = 0x208;
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"[",1)
  ;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(ulong *)this);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,", ",2)
  ;
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                      *(long *)(this + 8) + *(long *)this);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar3,"), size: ",9);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(ulong *)(this + 8));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,", ",2);
  pcVar1 = "free";
  if (this[0x10] != (Region)0x0) {
    pcVar1 = "used";
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar1,4);
  *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = uVar2;
  return;
}

