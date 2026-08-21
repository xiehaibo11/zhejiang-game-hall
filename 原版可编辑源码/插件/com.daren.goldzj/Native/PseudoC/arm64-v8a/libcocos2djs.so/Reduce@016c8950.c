
/* v8::internal::compiler::GraphReducer::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall v8::internal::compiler::GraphReducer::Reduce(GraphReducer *this,Node *param_1)

{
  char cVar1;
  Node *pNVar2;
  char *pcVar3;
  size_t sVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **local_168;
  undefined **local_160;
  locale alStack_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  locale alStack_70 [16];
  
  puVar9 = *(undefined8 **)(this + 0x20);
  puVar6 = *(undefined8 **)(this + 0x28);
  puVar8 = puVar6;
  if (puVar6 != puVar9) {
    puVar7 = puVar6;
    do {
      puVar8 = puVar9;
      if (puVar7 != puVar9) goto LAB_016c89ec;
      while( true ) {
        do {
          puVar9 = puVar8 + 1;
          puVar8 = puVar7;
          if (puVar9 == puVar6) goto LAB_016c8b88;
          puVar8 = puVar9;
        } while (puVar7 == puVar9);
LAB_016c89ec:
        TickCounter::DoTick(*(TickCounter **)(this + 0xe0));
        pNVar2 = (Node *)(**(code **)(*(long *)*puVar8 + 0x18))((long *)*puVar8,param_1);
        if (pNVar2 != (Node *)0x0) break;
        puVar6 = *(undefined8 **)(this + 0x28);
      }
      if (pNVar2 != param_1) {
        if (FLAG_trace_turbo_reduction == '\0') {
          return pNVar2;
        }
        local_168 = (undefined **)0x1ca1178;
        local_108[0] = (undefined **)0x1ca11a0;
        std::__ndk1::ios_base::init((ios_base *)local_108,(AndroidLogStream *)&local_160);
        local_78 = 0xffffffff;
        local_80 = 0;
        local_160 = &PTR__basic_streambuf_01c671a8;
        local_168 = &PTR__StdoutStream_01ca1128;
        local_108[0] = &PTR__StdoutStream_01ca1150;
        std::__ndk1::locale::locale(alStack_158);
        local_160 = &PTR__AndroidLogStream_01cbc008;
        local_120 = 0;
        uStack_118 = 0;
        uStack_138 = 0;
        local_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_148 = 0;
        local_150 = 0;
        local_110 = 0;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168,"- Replacement of #",0x12);
        compiler::operator<<((basic_ostream *)&local_168,param_1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168," with #",7);
        compiler::operator<<((basic_ostream *)&local_168,pNVar2);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168," by reducer ",0xc);
        pcVar3 = (char *)(**(code **)(*(long *)*puVar8 + 0x10))();
        sVar4 = strlen(pcVar3);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168,pcVar3,sVar4);
        std::__ndk1::ios_base::getloc();
        plVar5 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
        cVar1 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
        std::__ndk1::locale::~locale(alStack_70);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,cVar1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168);
        local_168 = &PTR__StdoutStream_01ca1128;
        local_108[0] = &PTR__StdoutStream_01ca1150;
        AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
        return pNVar2;
      }
      if (FLAG_trace_turbo_reduction != '\0') {
        local_168 = (undefined **)0x1ca1178;
        local_108[0] = (undefined **)0x1ca11a0;
        std::__ndk1::ios_base::init((ios_base *)local_108,(AndroidLogStream *)&local_160);
        local_78 = 0xffffffff;
        local_80 = 0;
        local_160 = &PTR__basic_streambuf_01c671a8;
        local_168 = &PTR__StdoutStream_01ca1128;
        local_108[0] = &PTR__StdoutStream_01ca1150;
        std::__ndk1::locale::locale(alStack_158);
        uStack_138 = 0;
        local_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_148 = 0;
        local_150 = 0;
        local_160 = &PTR__AndroidLogStream_01cbc008;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0;
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168,"- In-place update of #",0x16);
        compiler::operator<<((basic_ostream *)&local_168,param_1);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168," by reducer ",0xc);
        pcVar3 = (char *)(**(code **)(*(long *)*puVar8 + 0x10))();
        sVar4 = strlen(pcVar3);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_168,pcVar3,sVar4);
        std::__ndk1::ios_base::getloc();
        plVar5 = (long *)std::__ndk1::locale::use_facet
                                   (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
        cVar1 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
        std::__ndk1::locale::~locale(alStack_70);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168,cVar1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_168);
        local_168 = &PTR__StdoutStream_01ca1128;
        local_108[0] = &PTR__StdoutStream_01ca1150;
        AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
      }
      puVar9 = *(undefined8 **)(this + 0x20);
      puVar6 = *(undefined8 **)(this + 0x28);
      puVar7 = puVar8;
    } while (puVar6 != puVar9);
  }
LAB_016c8b88:
  pNVar2 = (Node *)0x0;
  if (puVar6 != puVar8) {
    pNVar2 = param_1;
  }
  return pNVar2;
}

