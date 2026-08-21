
/* v8::internal::ArrayBoilerplateDescription::ArrayBoilerplateDescriptionPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::ArrayBoilerplateDescription::ArrayBoilerplateDescriptionPrint
          (ArrayBoilerplateDescription *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_30;
  char local_24 [4];
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"ArrayBoilerplateDescription");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - elements kind: ",0x13);
  local_24[0] = (char)(*(uint *)(*(long *)this + 3) >> 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,local_24,1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - constant elements: ",0x17);
  local_30 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  internal::operator<<(pbVar1,(Brief *)&local_30);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

