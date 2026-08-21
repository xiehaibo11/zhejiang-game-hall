
/* v8::internal::RegExpUnparser::VisitEmpty(v8::internal::RegExpEmpty*, void*) */

undefined8 v8::internal::RegExpUnparser::VisitEmpty(RegExpEmpty *param_1,void *param_2)

{
  char local_14 [4];
  
  local_14[0] = '%';
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)(param_1 + 8),local_14,1);
  return 0;
}

