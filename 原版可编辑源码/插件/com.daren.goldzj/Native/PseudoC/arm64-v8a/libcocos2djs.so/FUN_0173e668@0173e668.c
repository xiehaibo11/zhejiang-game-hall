
uint FUN_0173e668(JSHeapBroker *param_1,JSFunctionRef *param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  char *pcVar6;
  locale local_158 [16];
  undefined1 local_148 [16];
  locale alStack_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined **local_e8 [17];
  undefined8 local_60;
  undefined4 local_58;
  
  uVar3 = v8::internal::compiler::JSFunctionRef::has_feedback_vector(param_2);
  if ((uVar3 & 1) == 0) {
    if (v8::internal::FLAG_trace_turbo_inlining != '\0') {
      local_148._0_8_ = 0x1ca1178;
      local_e8[0] = (undefined **)0x1ca11a0;
      std::__ndk1::ios_base::init((ios_base *)local_e8,local_148 + 8);
      local_58 = 0xffffffff;
      local_148._0_8_ = &PTR__StdoutStream_01ca1128;
      local_e8[0] = &PTR__StdoutStream_01ca1150;
      local_148._8_8_ = &PTR__basic_streambuf_01c671a8;
      local_60 = 0;
      std::__ndk1::locale::locale(alStack_138);
      local_148._8_8_ = &PTR__AndroidLogStream_01cbc008;
      local_100 = 0;
      uStack_f8 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      local_130 = 0;
      local_f0 = 0;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)local_148,"Cannot consider ",0x10);
      v8::internal::compiler::operator<<((basic_ostream *)local_148,(ObjectRef *)param_2);
      pcVar6 = " for inlining (no feedback vector)";
      uVar3 = 0x22;
LAB_0173e954:
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)local_148,pcVar6,uVar3);
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet(local_158,(id *)&std::__ndk1::ctype<char>::id)
      ;
      cVar1 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale(local_158);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_148,cVar1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)local_148);
      local_e8[0] = &PTR__StdoutStream_01ca1150;
      local_148._0_8_ = &PTR__StdoutStream_01ca1128;
      v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)(local_148 + 8));
      std::__ndk1::ios_base::~ios_base((ios_base *)local_e8);
    }
  }
  else {
    uVar3 = v8::internal::compiler::JSFunctionRef::serialized(param_2);
    if ((uVar3 & 1) != 0) {
      local_148 = v8::internal::compiler::JSFunctionRef::shared(param_2);
      local_158 = (locale  [16])v8::internal::compiler::JSFunctionRef::feedback_vector(param_2);
      uVar2 = FUN_0173e9e8(param_1,local_148,local_158);
      goto LAB_0173e9c8;
    }
    if (param_1[0x74] != (JSHeapBroker)0x0) {
      pbVar4 = (basic_ostream *)v8::internal::compiler::JSHeapBroker::Trace(param_1);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,"Missing ",8);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,"data for ",9);
      pbVar4 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar4,(ObjectRef *)param_2);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4," (cannot consider for inlining)",0x1f);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4," (",2);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,"../../src/compiler/js-inlining-heuristic.cc",0x2b);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,":",1);
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,0x3e);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,")",1);
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)local_148,(id *)&std::__ndk1::ctype<char>::id);
      cVar1 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale((locale *)local_148);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar1);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
    }
    if (v8::internal::FLAG_trace_turbo_inlining != '\0') {
      local_148._0_8_ = 0x1ca1178;
      local_e8[0] = (undefined **)0x1ca11a0;
      std::__ndk1::ios_base::init((ios_base *)local_e8,local_148 + 8);
      local_58 = 0xffffffff;
      local_148._0_8_ = &PTR__StdoutStream_01ca1128;
      local_e8[0] = &PTR__StdoutStream_01ca1150;
      local_148._8_8_ = &PTR__basic_streambuf_01c671a8;
      local_60 = 0;
      std::__ndk1::locale::locale(alStack_138);
      local_148._8_8_ = &PTR__AndroidLogStream_01cbc008;
      local_100 = 0;
      uStack_f8 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      local_130 = 0;
      local_f0 = 0;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)local_148,"Cannot consider ",0x10);
      v8::internal::compiler::operator<<((basic_ostream *)local_148,(ObjectRef *)param_2);
      pcVar6 = " for inlining (missing data)";
      uVar3 = 0x1c;
      goto LAB_0173e954;
    }
  }
  uVar2 = 0;
LAB_0173e9c8:
  return uVar2 & 1;
}

