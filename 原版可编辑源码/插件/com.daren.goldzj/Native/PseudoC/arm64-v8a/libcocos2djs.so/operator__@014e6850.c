
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::vector<v8::internal::SourcePositionInfo,
   std::__ndk1::allocator<v8::internal::SourcePositionInfo> > const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,vector *param_2)

{
  SourcePositionInfo *pSVar1;
  SourcePositionInfo *pSVar2;
  
  pSVar1 = *(SourcePositionInfo **)param_2;
  pSVar2 = *(SourcePositionInfo **)(param_2 + 8);
  if (pSVar1 != pSVar2) {
    operator<<(param_1,pSVar1);
    while (pSVar1 = pSVar1 + 0x20, pSVar1 != pSVar2) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1," inlined at ",0xc);
      operator<<(param_1,pSVar1);
    }
  }
  return param_1;
}

