
/* v8::internal::Isolate::DumpAndResetStats() */

void __thiscall v8::internal::Isolate::DumpAndResetStats(Isolate *this)

{
  Isolate *pIVar1;
  long lVar2;
  char cVar3;
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar4;
  long *plVar5;
  void *extraout_x1;
  void *extraout_x1_00;
  void *pvVar6;
  Malloced *this_00;
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
  locale alStack_70 [8];
  undefined8 local_68;
  undefined1 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pIVar1 = this + 0x9520;
  if (*(long *)(this + 0xb7c8) != 0) {
    local_168 = (undefined **)0x1ca1178;
    local_108[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_108,(AndroidLogStream *)&local_160);
    local_78 = 0xffffffff;
    local_168 = &PTR__StdoutStream_01ca1128;
    local_108[0] = &PTR__StdoutStream_01ca1150;
    local_160 = &PTR__basic_streambuf_01c671a8;
    local_80 = 0;
    std::__ndk1::locale::locale(alStack_158);
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    local_160 = &PTR__AndroidLogStream_01cbc008;
    uStack_148 = 0;
    local_150 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0;
    if (FLAG_turbo_stats != '\0') {
      local_68 = *(undefined8 *)(this + 0xb7c8);
      local_60 = 0;
      pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
               internal::operator<<((basic_ostream *)&local_168,(AsPrintableStatistics *)&local_68);
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale(alStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar4,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar4);
    }
    if (FLAG_turbo_stats_nvp != '\0') {
      local_68 = *(undefined8 *)(this + 0xb7c8);
      local_60 = 1;
      pbVar4 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
               internal::operator<<((basic_ostream *)&local_168,(AsPrintableStatistics *)&local_68);
      std::__ndk1::ios_base::getloc();
      plVar5 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_70,(id *)&std::__ndk1::ctype<char>::id);
      cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
      std::__ndk1::locale::~locale(alStack_70);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(pbVar4,cVar3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(pbVar4);
    }
    this_00 = *(Malloced **)(this + 0xb7c8);
    if (this_00 != (Malloced *)0x0) {
      base::Mutex::~Mutex((Mutex *)(this_00 + 0x70));
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::PhaseStats>>>
                 *)(this_00 + 0x58),*(__tree_node **)(this_00 + 0x60));
      std::__ndk1::
      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
      ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,v8::internal::CompilationStatistics::OrderedStats>>>
                 *)(this_00 + 0x40),*(__tree_node **)(this_00 + 0x48));
      pvVar6 = extraout_x1;
      if (((byte)this_00[0x20] & 1) != 0) {
        operator_delete(*(void **)(this_00 + 0x30));
        pvVar6 = extraout_x1_00;
      }
      Malloced::operator_delete(this_00,pvVar6);
    }
    local_168 = &PTR__StdoutStream_01ca1128;
    local_108[0] = &PTR__StdoutStream_01ca1150;
    *(undefined8 *)(this + 0xb7c8) = 0;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  }
  if (FLAG_turbo_stats_wasm != '\0') {
    wasm::WasmEngine::DumpAndResetTurboStatistics(*(WasmEngine **)(this + 0xc770));
  }
  if (TracingFlags::runtime_stats == 1) {
    WorkerThreadRuntimeCallStats::AddToMainTable
              ((WorkerThreadRuntimeCallStats *)(*(long *)pIVar1 + 0xc928),
               (RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
    RuntimeCallStats::Print((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
    RuntimeCallStats::Reset((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

