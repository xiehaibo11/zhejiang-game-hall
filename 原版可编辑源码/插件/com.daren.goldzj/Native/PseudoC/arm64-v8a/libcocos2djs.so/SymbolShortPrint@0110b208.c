
/* v8::internal::Symbol::SymbolShortPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::Symbol::SymbolShortPrint(Symbol *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  size_t sVar3;
  undefined ***local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  undefined **local_40;
  void *local_38;
  char *local_18;
  
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<Symbol:",8);
  if (*(int *)(*(ulong *)this + 0xb) == *(int *)((*(ulong *)this & 0xffffffff00000000) + 0xa0)) {
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," (",2);
    pcVar2 = (char *)PrivateSymbolToName(this);
    sVar3 = strlen(pcVar2);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,pcVar2,sVar3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,")",1);
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," ",1);
    local_60 = &local_40;
    local_58 = 0x1000000001;
    local_50 = 0;
    local_40 = &PTR__HeapStringAllocator_01cbbc78;
    local_48 = (undefined1 *)HeapStringAllocator::allocate((HeapStringAllocator *)&local_40,0x10);
    *local_48 = 0;
    local_18 = (char *)(*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb)
                       );
    String::StringShortPrint((String *)&local_18,(StringStream *)&local_60,false);
    StringStream::ToCString();
    pcVar2 = local_18;
    sVar3 = strlen(local_18);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,sVar3)
    ;
    pcVar2 = local_18;
    local_18 = (char *)0x0;
    if (pcVar2 != (char *)0x0) {
      operator_delete__(pcVar2);
    }
    local_40 = &PTR__HeapStringAllocator_01cbbc78;
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,">",1);
  return;
}

