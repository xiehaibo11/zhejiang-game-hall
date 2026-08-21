
undefined8 FUN_0173e9e8(JSHeapBroker *param_1,SharedFunctionInfoRef *param_2,ObjectRef *param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  basic_ostream *pbVar5;
  undefined **local_150;
  undefined **local_148;
  locale alStack_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined **local_f0 [17];
  undefined8 local_68;
  undefined4 local_60;
  locale alStack_58 [8];
  
  iVar2 = v8::internal::compiler::SharedFunctionInfoRef::GetInlineability(param_2);
  if (iVar2 == 0) {
    uVar4 = v8::internal::compiler::JSHeapBroker::IsSerializedForCompilation
                      (param_1,param_2,(FeedbackVectorRef *)param_3);
    if ((uVar4 & 1) != 0) {
      if (v8::internal::FLAG_trace_turbo_inlining != '\0') {
        local_150 = (undefined **)0x1ca1178;
        local_f0[0] = (undefined **)0x1ca11a0;
        std::__ndk1::ios_base::init((ios_base *)local_f0,(AndroidLogStream *)&local_148);
        local_60 = 0xffffffff;
        local_148 = &PTR__basic_streambuf_01c671a8;
        local_68 = 0;
        local_150 = &PTR__StdoutStream_01ca1128;
        local_f0[0] = &PTR__StdoutStream_01ca1150;
        std::__ndk1::locale::locale(alStack_140);
        local_148 = &PTR__AndroidLogStream_01cbc008;
        local_108 = 0;
        uStack_100 = 0;
        uStack_110 = 0;
        local_118 = 0;
        uStack_120 = 0;
        local_128 = 0;
        uStack_130 = 0;
        local_138 = 0;
        local_f8 = 0;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_150,"Considering ",0xc);
        v8::internal::compiler::operator<<((basic_ostream *)&local_150,(ObjectRef *)param_2);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_150," for inlining with ",0x13);
        v8::internal::compiler::operator<<((basic_ostream *)&local_150,param_3);
        std::__ndk1::ios_base::getloc();
        plVar3 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_58,(id *)&std::__ndk1::ctype<char>::id);
        cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
        std::__ndk1::locale::~locale(alStack_58);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150,cVar1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150);
        local_150 = &PTR__StdoutStream_01ca1128;
        local_f0[0] = &PTR__StdoutStream_01ca1150;
        v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_148);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_f0);
      }
      return 1;
    }
    if (param_1[0x74] != (JSHeapBroker)0x0) {
      pbVar5 = (basic_ostream *)v8::internal::compiler::JSHeapBroker::Trace(param_1);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"Missing ",8);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"data for ",9);
      pbVar5 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar5,(ObjectRef *)param_2);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," (not serialized for compilation)",0x21);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," (",2);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"../../src/compiler/js-inlining-heuristic.cc",0x2b);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,":",1);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,0x2a);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,")",1);
      std::__ndk1::ios_base::getloc();
      plVar3 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)&local_150,(id *)&std::__ndk1::ctype<char>::id);
      cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
      std::__ndk1::locale::~locale((locale *)&local_150);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,cVar1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5);
    }
    if (v8::internal::FLAG_trace_turbo_inlining == '\0') {
      return 0;
    }
    local_150 = (undefined **)0x1ca1178;
    local_f0[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_f0,(AndroidLogStream *)&local_148);
    local_60 = 0xffffffff;
    local_148 = &PTR__basic_streambuf_01c671a8;
    local_68 = 0;
    local_150 = &PTR__StdoutStream_01ca1128;
    local_f0[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_140);
    local_148 = &PTR__AndroidLogStream_01cbc008;
    local_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    local_f8 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_150,"Cannot consider ",0x10);
    v8::internal::compiler::operator<<((basic_ostream *)&local_150,(ObjectRef *)param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_150," for inlining with ",0x13);
    v8::internal::compiler::operator<<((basic_ostream *)&local_150,param_3);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_150," (missing data)",0xf);
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_58,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale(alStack_58);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150);
    local_150 = &PTR__StdoutStream_01ca1128;
    local_f0[0] = &PTR__StdoutStream_01ca1150;
    v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_148);
  }
  else {
    if (v8::internal::FLAG_trace_turbo_inlining == '\0') {
      return 0;
    }
    local_150 = (undefined **)0x1ca1178;
    local_f0[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_f0,(AndroidLogStream *)&local_148);
    local_60 = 0xffffffff;
    local_148 = &PTR__basic_streambuf_01c671a8;
    local_68 = 0;
    local_150 = &PTR__StdoutStream_01ca1128;
    local_f0[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_140);
    local_148 = &PTR__AndroidLogStream_01cbc008;
    local_108 = 0;
    uStack_100 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    local_f8 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_150,"Cannot consider ",0x10);
    v8::internal::compiler::operator<<((basic_ostream *)&local_150,(ObjectRef *)param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_150," for inlining (reason: ",0x17);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150,iVar2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_150,")",1);
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_58,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale(alStack_58);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150);
    local_150 = &PTR__StdoutStream_01ca1128;
    local_f0[0] = &PTR__StdoutStream_01ca1150;
    v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_148);
  }
  std::__ndk1::ios_base::~ios_base((ios_base *)local_f0);
  return 0;
}

