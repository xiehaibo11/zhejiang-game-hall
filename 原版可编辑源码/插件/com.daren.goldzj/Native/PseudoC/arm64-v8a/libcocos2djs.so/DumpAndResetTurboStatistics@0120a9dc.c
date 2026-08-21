
/* v8::internal::wasm::WasmEngine::DumpAndResetTurboStatistics() */

void __thiscall v8::internal::wasm::WasmEngine::DumpAndResetTurboStatistics(WasmEngine *this)

{
  long lVar1;
  char cVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  long *plVar3;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar4;
  Malloced *this_01;
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
  locale alStack_80 [8];
  undefined8 local_78;
  undefined1 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  base::Mutex::Lock((Mutex *)(this + 0x100));
  if (*(long *)(this + 0x150) == 0) {
    *(undefined8 *)(this + 0x150) = 0;
  }
  else {
    local_178 = (undefined **)0x1ca1178;
    local_118[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_118,(AndroidLogStream *)&local_170);
    local_88 = 0xffffffff;
    local_170 = &PTR__basic_streambuf_01c671a8;
    local_90 = 0;
    local_178 = &PTR__StdoutStream_01ca1128;
    local_118[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_168);
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0;
    local_170 = &PTR__AndroidLogStream_01cbc008;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    local_160 = 0;
    local_78 = *(undefined8 *)(this + 0x150);
    local_70 = 0;
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              internal::operator<<((basic_ostream *)&local_178,(AsPrintableStatistics *)&local_78);
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_80,(id *)&std::__ndk1::ctype<char>::id);
    cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
    std::__ndk1::locale::~locale(alStack_80);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(this_00,cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this_00);
    local_178 = &PTR__StdoutStream_01ca1128;
    local_118[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_170);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
    this_01 = *(Malloced **)(this + 0x150);
    *(undefined8 *)(this + 0x150) = 0;
    if (this_01 != (Malloced *)0x0) {
      base::Mutex::~Mutex((Mutex *)(this_01 + 0x70));
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
                 *)(this_01 + 0x58),*(__tree_node **)(this_01 + 0x60));
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
                 *)(this_01 + 0x40),*(__tree_node **)(this_01 + 0x48));
      pvVar4 = extraout_x1;
      if (((byte)this_01[0x20] & 1) != 0) {
        operator_delete(*(void **)(this_01 + 0x30));
        pvVar4 = extraout_x1_00;
      }
      Malloced::operator_delete(this_01,pvVar4);
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

