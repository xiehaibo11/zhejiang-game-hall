
/* v8::internal::compiler::GraphC1Visualizer::PrintType(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintType(GraphC1Visualizer *this,Node *param_1)

{
  basic_ostream *pbVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this," type:",6);
    compiler::operator<<(pbVar1,lVar2);
    return;
  }
  return;
}

