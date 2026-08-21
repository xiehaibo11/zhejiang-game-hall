
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ObjectRef const&) */

void v8::internal::compiler::operator<<(basic_ostream *param_1,ObjectRef *param_2)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  basic_ostream *pbVar4;
  undefined8 local_38;
  
  cVar2 = FLAG_concurrent_recompilation;
  iVar1 = *(int *)(*(long *)param_2 + 8);
  pvVar3 = (void *)ObjectRef::data(param_2);
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,pvVar3);
  if ((iVar1 == 2) || (cVar2 == '\0')) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4," {",2);
    local_38 = *(undefined8 *)**(undefined8 **)param_2;
    pbVar4 = (basic_ostream *)internal::operator<<(pbVar4,(Brief *)&local_38);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"}",1);
  }
  return;
}

