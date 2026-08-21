
/* v8::internal::compiler::GraphC1Visualizer::PrintIndent() */

void __thiscall v8::internal::compiler::GraphC1Visualizer::PrintIndent(GraphC1Visualizer *this)

{
  int iVar1;
  
  if (0 < *(int *)(this + 8)) {
    iVar1 = 0;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"  ",2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 8));
  }
  return;
}

