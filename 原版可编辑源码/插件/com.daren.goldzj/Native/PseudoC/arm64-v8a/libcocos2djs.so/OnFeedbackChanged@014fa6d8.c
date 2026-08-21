
/* v8::internal::IC::OnFeedbackChanged(v8::internal::Isolate*, v8::internal::FeedbackVector,
   v8::internal::FeedbackSlot, char const*) */

void v8::internal::IC::OnFeedbackChanged
               (long param_1,ulong param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  long *plVar4;
  undefined **local_158;
  undefined **local_150;
  locale alStack_148 [8];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined **local_f8 [17];
  undefined8 local_70;
  undefined4 local_68;
  ulong local_48;
  
  if ((FLAG_trace_opt_verbose != '\0') && (*(int *)(param_2 + 0x17) != 0)) {
    local_158 = (undefined **)0x1ca1178;
    local_f8[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_f8,(AndroidLogStream *)&local_150);
    local_68 = 0xffffffff;
    local_150 = &PTR__basic_streambuf_01c671a8;
    local_70 = 0;
    local_158 = &PTR__StdoutStream_01ca1128;
    local_f8[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_148);
    local_150 = &PTR__AndroidLogStream_01cbc008;
    local_110 = 0;
    uStack_108 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    local_140 = 0;
    local_100 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158,"[resetting ticks for ",0x15);
    local_48 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 3);
    Object::ShortPrint((Object *)&local_48,(basic_ostream *)&local_158);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_158," from ",6);
    pbVar2 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                        *(int *)(param_2 + 0x17));
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2," due to IC change: ",0x13);
    sVar3 = strlen(param_4);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,param_4,sVar3);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"]",1);
    std::__ndk1::ios_base::getloc();
    plVar4 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_48,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,10);
    std::__ndk1::locale::~locale((locale *)&local_48);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2);
    local_158 = &PTR__StdoutStream_01ca1128;
    local_f8[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_150);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_f8);
  }
  *(undefined4 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x9510) + 8) = 1;
  return;
}

