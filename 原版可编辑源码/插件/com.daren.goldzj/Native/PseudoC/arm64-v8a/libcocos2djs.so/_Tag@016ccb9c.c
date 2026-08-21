
/* v8::internal::compiler::GraphC1Visualizer::Tag::~Tag() */

void __thiscall v8::internal::compiler::GraphC1Visualizer::Tag::~Tag(Tag *this)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  char *__s;
  undefined8 *puVar3;
  int iVar4;
  
  *(int *)(*(long *)this + 8) = *(int *)(*(long *)this + 8) + -1;
  puVar3 = *(undefined8 **)this;
  if (0 < *(int *)(puVar3 + 1)) {
    iVar4 = 0;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)*puVar3,"  ",2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(puVar3 + 1));
    puVar3 = *(undefined8 **)this;
  }
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)*puVar3,"end_",4);
  __s = *(char **)(this + 8);
  sVar2 = strlen(__s);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,__s,sVar2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
  return;
}

