
/* v8::internal::compiler::GraphC1Visualizer::PrintCompilation(v8::internal::OptimizedCompilationInfo
   const*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintCompilation
          (GraphC1Visualizer *this,OptimizedCompilationInfo *param_1)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  long *plVar3;
  int iVar4;
  double dVar5;
  char *local_48;
  Tag aTStack_40 [16];
  
  Tag::Tag(aTStack_40,this,"compilation");
  OptimizedCompilationInfo::GetDebugName();
  iVar4 = *(int *)(param_1 + 8);
  PrintStringProperty(this,"name",local_48);
  if (iVar4 == 0) {
    if (0 < *(int *)(this + 8)) {
      iVar4 = 0;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (*(basic_ostream **)this,"  ",2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 8));
    }
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this,"method \"",8);
    sVar2 = strlen(local_48);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,local_48,sVar2);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,":",1);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                        *(int *)(param_1 + 0x70));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\"\n",2);
  }
  else {
    PrintStringProperty(this,"method","stub");
  }
  plVar3 = (long *)V8::GetCurrentPlatform();
  dVar5 = (double)(**(code **)(*plVar3 + 0x80))();
  PrintLongProperty(this,"date",(long)dVar5);
  if (local_48 != (char *)0x0) {
    operator_delete__(local_48);
  }
  Tag::~Tag(aTStack_40);
  return;
}

