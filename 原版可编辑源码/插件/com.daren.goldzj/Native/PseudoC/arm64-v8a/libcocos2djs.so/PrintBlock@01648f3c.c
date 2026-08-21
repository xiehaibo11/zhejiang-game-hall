
/* v8::internal::compiler::InstructionSequence::PrintBlock(int) const */

void __thiscall
v8::internal::compiler::InstructionSequence::PrintBlock(InstructionSequence *this,int param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long local_160;
  InstructionSequence *pIStack_158;
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
  
  lVar3 = **(long **)(this + 0x10);
  if ((ulong)((*(long **)(this + 0x10))[1] - lVar3 >> 3) <= (ulong)(long)param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(lVar3 + (long)param_1 * 8);
  if (*(int *)(lVar3 + 100) == param_1) {
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
    local_f8 = 0;
    uStack_110 = 0;
    local_118 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_130 = 0;
    local_138 = 0;
    local_160 = lVar3;
    pIStack_158 = this;
    compiler::operator<<((basic_ostream *)&local_150,(PrintableInstructionBlock *)&local_160);
    std::__ndk1::ios_base::getloc();
    plVar2 = (long *)std::__ndk1::locale::use_facet(alStack_58,(id *)&std::__ndk1::ctype<char>::id);
    cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,10);
    std::__ndk1::locale::~locale(alStack_58);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150,cVar1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_150);
    local_150 = &PTR__StdoutStream_01ca1128;
    local_f0[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_148);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","block->rpo_number() == rpo");
}

