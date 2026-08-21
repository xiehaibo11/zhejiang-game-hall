
/* v8::internal::FieldType::PrintTo(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&) const */

void __thiscall v8::internal::FieldType::PrintTo(FieldType *this,basic_ostream *param_1)

{
  basic_ostream *this_00;
  char *pcVar1;
  ulong uVar2;
  
  if (*(int *)this == 4) {
    pcVar1 = "None";
    uVar2 = 4;
  }
  else if (*(int *)this == 2) {
    pcVar1 = "Any";
    uVar2 = 3;
  }
  else {
    this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"Class(",6);
    param_1 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,
                         *(void **)this);
    pcVar1 = ")";
    uVar2 = 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,uVar2);
  return;
}

