
/* v8::internal::Map::PrintReconfiguration(v8::internal::Isolate*, __sFILE*,
   v8::internal::InternalIndex, v8::internal::PropertyKind, v8::internal::PropertyAttributes) */

void __thiscall
v8::internal::Map::PrintReconfiguration
          (Map *this,Isolate *param_1,__sFILE *param_2,long param_4,int param_5,undefined4 param_6)

{
  char *pcVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  void *pvVar4;
  void *local_138;
  undefined **local_130;
  undefined **ppuStack_128;
  locale alStack_120 [64];
  undefined **local_e0 [19];
  undefined4 local_44;
  
  local_44 = param_6;
  OFStream::OFStream((OFStream *)&local_130,param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_130,"[reconfiguring]",0xf);
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  pvVar4 = (void *)(uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)this + 0x17)) +
                                      (param_4 * 0xc00000000 + 0x1000000000 >> 0x20) + -1));
  if (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((long)pvVar4 + -1)) < 0x40) {
    local_138 = pvVar4;
    String::PrintOn((String *)&local_138,param_2);
  }
  else {
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_130,"{symbol ",8);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,pvVar4);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"}",1);
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_130,": ",2);
  pcVar1 = "kData";
  if (param_5 != 0) {
    pcVar1 = "ACCESSORS";
  }
  uVar3 = 5;
  if (param_5 != 0) {
    uVar3 = 9;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar1,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", attrs: ",9);
  pbVar2 = (basic_ostream *)
           internal::operator<<((basic_ostream *)&local_130,(PropertyAttributes *)&local_44);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2," [",2);
  JavaScriptFrame::PrintTop(param_1,param_2,false,true);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_130,"]\n",2);
  local_130 = &PTR__OFStream_01ca1000;
  local_e0[0] = &PTR__OFStream_01ca1028;
  ppuStack_128 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_120);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_e0);
  return;
}

