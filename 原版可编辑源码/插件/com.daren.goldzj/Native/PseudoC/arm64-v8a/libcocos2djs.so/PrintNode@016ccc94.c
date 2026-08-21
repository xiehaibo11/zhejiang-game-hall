
/* v8::internal::compiler::GraphC1Visualizer::PrintNode(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintNode(GraphC1Visualizer *this,Node *param_1)

{
  basic_ostream *pbVar1;
  uint uVar2;
  
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)this,"n",1);
  if (param_1 == (Node *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14) & 0xffffff;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,uVar2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)this," ",1);
  pbVar1 = (basic_ostream *)compiler::operator<<(pbVar1,*(Operator **)param_1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1," ",1);
  PrintInputs(this,param_1);
  return;
}

