
/* v8::internal::compiler::Schedule::PlanNode(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::Schedule::PlanNode(Schedule *this,BasicBlock *param_1,Node *param_2)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
  *this_00;
  char *__s;
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
  
  if (FLAG_trace_turbo_scheduler != '\0') {
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
              ((basic_ostream *)&local_158,"Planning #",10);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_158,
               *(uint *)(param_2 + 0x14) & 0xffffff);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158,":",1);
    __s = *(char **)(*(long *)param_2 + 8);
    sVar1 = strlen(__s);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158,__s,sVar1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158," for future add to B",0x14);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_158,
               *(ulong *)(param_1 + 0xa0));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158,"\n",1);
    local_158 = &PTR__StdoutStream_01ca1128;
    local_f8[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_150);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_f8);
  }
  this_00 = (vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
             *)(this + 0x28);
  lVar2 = *(long *)this_00;
  uVar4 = *(long *)(this + 0x30) - lVar2 >> 3;
  if (uVar4 <= ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff)) {
    uVar3 = (ulong)((int)((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) + 1);
    if (uVar4 < uVar3) {
      std::__ndk1::
      vector<v8::internal::compiler::BasicBlock*,v8::internal::ZoneAllocator<v8::internal::compiler::BasicBlock*>>
      ::__append(this_00,uVar3 - uVar4);
      lVar2 = *(long *)this_00;
    }
    else if (uVar4 != uVar3) {
      *(ulong *)(this + 0x30) = lVar2 + uVar3 * 8;
    }
  }
  *(BasicBlock **)(lVar2 + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 8) = param_1;
  return;
}

