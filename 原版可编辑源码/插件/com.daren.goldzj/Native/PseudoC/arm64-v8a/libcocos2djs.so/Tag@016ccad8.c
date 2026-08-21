
/* v8::internal::compiler::GraphC1Visualizer::Tag::Tag(v8::internal::compiler::GraphC1Visualizer*,
   char const*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::Tag::Tag
          (Tag *this,GraphC1Visualizer *param_1,char *param_2)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  GraphC1Visualizer *pGVar3;
  int iVar4;
  
  *(GraphC1Visualizer **)this = param_1;
  *(char **)(this + 8) = param_2;
  pGVar3 = param_1;
  if (0 < *(int *)(param_1 + 8)) {
    iVar4 = 0;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)param_1,"  ",2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
    pGVar3 = *(GraphC1Visualizer **)this;
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)pGVar3,"begin_",6);
  sVar2 = strlen(param_2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,param_2,sVar2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

