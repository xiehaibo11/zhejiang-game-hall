
/* v8::internal::compiler::GraphC1Visualizer::PrintNodeId(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintNodeId(GraphC1Visualizer *this,Node *param_1)

{
  basic_ostream *this_00;
  uint uVar1;
  
  this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (*(basic_ostream **)this,"n",1);
  if (param_1 == (Node *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14) & 0xffffff;
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,uVar1);
  return;
}

