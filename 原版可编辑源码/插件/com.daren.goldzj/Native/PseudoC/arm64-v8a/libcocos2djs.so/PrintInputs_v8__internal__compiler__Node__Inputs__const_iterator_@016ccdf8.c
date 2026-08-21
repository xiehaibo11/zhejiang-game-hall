
/* void 
   v8::internal::compiler::GraphC1Visualizer::PrintInputs<v8::internal::compiler::Node::Inputs::const_iterator>(v8::internal::compiler::Node::Inputs::const_iterator*,
   int, char const*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::
PrintInputs<v8::internal::compiler::Node::Inputs::const_iterator>
          (GraphC1Visualizer *this,const_iterator *param_1,int param_2,char *param_3)

{
  size_t sVar1;
  uint uVar2;
  basic_ostream *pbVar3;
  long lVar4;
  
  if (0 < param_2) {
    pbVar3 = *(basic_ostream **)this;
    sVar1 = strlen(param_3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,param_3,sVar1)
    ;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this," ",1);
      lVar4 = **(long **)param_1;
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (*(basic_ostream **)this,"n",1);
      if (lVar4 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x14) & 0xffffff;
      }
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar2);
      param_2 = param_2 + -1;
      *(long *)param_1 = *(long *)param_1 + 8;
    } while (0 < param_2);
  }
  return;
}

