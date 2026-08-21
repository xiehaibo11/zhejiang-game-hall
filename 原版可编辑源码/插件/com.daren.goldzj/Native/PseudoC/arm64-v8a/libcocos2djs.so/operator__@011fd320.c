
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::FeedbackSlot) */

void v8::internal::operator<<(basic_ostream *param_1,int param_2)

{
  basic_ostream *this;
  
  this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"#",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,param_2);
  return;
}

