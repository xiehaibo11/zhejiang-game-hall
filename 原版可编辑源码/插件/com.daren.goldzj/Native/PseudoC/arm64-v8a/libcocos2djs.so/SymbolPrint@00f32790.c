
/* v8::internal::Symbol::SymbolPrint(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >&) */

void __thiscall v8::internal::Symbol::SymbolPrint(Symbol *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  char *__s;
  size_t sVar3;
  ulong local_38;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"Symbol");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - hash: ",10);
  uVar1 = *(uint *)(*(long *)this + 3);
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 >> 3;
  }
  else {
    local_38 = *(long *)this;
    uVar1 = String::ComputeAndSetHash((String *)&local_38);
  }
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,uVar1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - description: ",0x11);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar2,(Brief *)&local_38);
  if (*(int *)(*(ulong *)this + 0xb) == *(int *)((*(ulong *)this & 0xffffffff00000000) + 0xa0)) {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," (",2);
    __s = (char *)PrivateSymbolToName(this);
    sVar3 = strlen(__s);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,__s,sVar3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")",1);
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - private: ",0xd);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             (bool)((byte)*(undefined4 *)(*(long *)this + 7) & 1));
  return;
}

