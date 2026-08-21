
/* v8::internal::SourceTextModule::SourceTextModulePrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::SourceTextModule::SourceTextModulePrint(SourceTextModule *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_38;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"SourceTextModule");
  uVar2 = *(ulong *)this;
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - exports: ",0xd);
  local_38 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 3);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - status: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,*(int *)(uVar2 + 0xb) >> 1
            );
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - exception: ",0xf);
  local_38 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x13);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - origin: ",0xc);
  local_40 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x27);
  local_38 = Script::GetNameOrSourceURL((Script *)&local_40);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - code: ",10);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - requested_modules: ",0x17);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x23);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - script: ",0xc);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x27);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - import_meta: ",0x11);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x2b);
  internal::operator<<(pbVar1,(Brief *)&local_38);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

