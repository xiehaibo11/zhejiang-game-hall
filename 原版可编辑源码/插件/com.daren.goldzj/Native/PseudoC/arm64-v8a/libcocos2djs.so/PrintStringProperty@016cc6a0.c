
/* v8::internal::compiler::GraphC1Visualizer::PrintStringProperty(char const*, char const*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintStringProperty
          (GraphC1Visualizer *this,char *param_1,char *param_2)

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
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2," \"",2);
  sVar1 = strlen(param_2);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,param_2,sVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\"\n",2);
  return;
}

