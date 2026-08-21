
/* v8::internal::compiler::GraphC1Visualizer::PrintLongProperty(char const*, long) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintLongProperty
          (GraphC1Visualizer *this,char *param_1,long param_2)

{
  size_t sVar1;
  basic_ostream *pbVar2;
  int iVar3;
  
  if (0 < *(int *)(this + 8)) {
    iVar3 = 0;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"  ",2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 8));
  }
  pbVar2 = *(basic_ostream **)this;
  sVar1 = strlen(param_1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,param_1,sVar1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," ",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (int)(SUB168(SEXT816(param_2) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                      (SUB164(SEXT816(param_2) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\n",1);
  return;
}

