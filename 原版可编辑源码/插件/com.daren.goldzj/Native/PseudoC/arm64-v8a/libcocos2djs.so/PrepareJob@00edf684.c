
/* v8::internal::OptimizedCompilationJob::PrepareJob(v8::internal::Isolate*) */

int __thiscall
v8::internal::OptimizedCompilationJob::PrepareJob(OptimizedCompilationJob *this,Isolate *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  char *__s;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined **local_118 [17];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_78,param_1);
  if ((FLAG_trace_opt != '\0') && (*(int *)(*(long *)(this + 0x18) + 8) == 0)) {
    local_178 = (undefined **)0x1ca1178;
    local_118[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_118,(AndroidLogStream *)&local_170);
    local_88 = 0xffffffff;
    local_170 = &PTR__basic_streambuf_01c671a8;
    local_90 = 0;
    local_178 = &PTR__StdoutStream_01ca1128;
    local_118[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_168);
    local_170 = &PTR__AndroidLogStream_01cbc008;
    local_130 = 0;
    uStack_128 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    local_160 = 0;
    local_120 = 0;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"[compiling method ",0x12);
    local_80 = **(undefined8 **)(*(long *)(this + 0x18) + 0x20);
    pbVar4 = (basic_ostream *)internal::operator<<(pbVar4,(Brief *)&local_80);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4," using ",7);
    __s = *(char **)(this + 0x38);
    sVar5 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,__s,sVar5);
    if (*(int *)(*(long *)(this + 0x18) + 0x38) != -1) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_178," OSR",4);
    }
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"]",1);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_80,(id *)&std::__ndk1::ctype<char>::id);
    cVar2 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_80);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
    local_178 = &PTR__StdoutStream_01ca1128;
    local_118[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_170);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
  }
  lVar7 = base::TimeTicks::HighResolutionNow();
  iVar3 = (**(code **)(*(long *)this + 0x10))(this,param_1);
  uVar9 = 4;
  if (iVar3 == 0) {
    uVar9 = 1;
  }
  *(undefined4 *)(this + 8) = uVar9;
  lVar8 = base::TimeTicks::HighResolutionNow();
  *(long *)(this + 0x20) = (lVar8 - lVar7) + *(long *)(this + 0x20);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

