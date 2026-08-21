
/* v8::internal::JSObject::PrintElementsTransition(__sFILE*,
   v8::internal::Handle<v8::internal::JSObject>, v8::internal::ElementsKind,
   v8::internal::Handle<v8::internal::FixedArrayBase>, v8::internal::ElementsKind,
   v8::internal::Handle<v8::internal::FixedArrayBase>) */

void v8::internal::JSObject::PrintElementsTransition
               (__sFILE *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,uint param_5,
               undefined8 *param_6)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  size_t sVar3;
  undefined **local_148;
  undefined **ppuStack_140;
  locale alStack_138 [64];
  undefined **local_f8 [19];
  undefined8 local_48;
  
  if ((param_3 & 0xff) != (param_5 & 0xff)) {
    OFStream::OFStream((OFStream *)&local_148,param_1);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_148,"elements transition [",0x15);
    pcVar2 = (char *)ElementsKindToString(param_3);
    sVar3 = strlen(pcVar2);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,pcVar2,sVar3);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1," -> ",4);
    pcVar2 = (char *)ElementsKindToString(param_5);
    sVar3 = strlen(pcVar2);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,pcVar2,sVar3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"] in ",5);
    JavaScriptFrame::PrintTop
              ((Isolate *)((ulong)*(uint *)((long)param_2 + 4) << 0x20),param_1,false,true);
    PrintF(param_1," for ");
    local_48 = *param_2;
    Object::ShortPrint((Object *)&local_48,param_1);
    PrintF(param_1," from ");
    local_48 = *param_4;
    Object::ShortPrint((Object *)&local_48,param_1);
    PrintF(param_1," to ");
    local_48 = *param_6;
    Object::ShortPrint((Object *)&local_48,param_1);
    PrintF(param_1,"\n");
    local_148 = &PTR__OFStream_01ca1000;
    local_f8[0] = &PTR__OFStream_01ca1028;
    ppuStack_140 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_138);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_f8);
  }
  return;
}

