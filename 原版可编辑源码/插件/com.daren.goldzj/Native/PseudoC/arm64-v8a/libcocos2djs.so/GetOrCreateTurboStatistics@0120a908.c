
/* v8::internal::wasm::WasmEngine::GetOrCreateTurboStatistics() */

undefined8 * __thiscall v8::internal::wasm::WasmEngine::GetOrCreateTurboStatistics(WasmEngine *this)

{
  ulong extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Malloced *this_00;
  
  base::Mutex::Lock((Mutex *)(this + 0x100));
  puVar3 = *(undefined8 **)(this + 0x150);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = Malloced::operator_new((Malloced *)0x98,extraout_x1);
    puVar3[0x12] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar2 = puVar3 + 0xc;
    puVar3[0xd] = 0;
    *puVar2 = 0;
    puVar3[8] = puVar3 + 9;
    puVar3[0xd] = 0;
    *puVar2 = 0;
    puVar3[0xb] = puVar2;
    base::Mutex::Mutex((Mutex *)(puVar3 + 0xe));
    this_00 = *(Malloced **)(this + 0x150);
    *(undefined8 **)(this + 0x150) = puVar3;
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
      pvVar1 = extraout_x1_00;
      if (((byte)this_00[0x20] & 1) != 0) {
        operator_delete(*(void **)(this_00 + 0x30));
        pvVar1 = extraout_x1_01;
      }
      Malloced::operator_delete(this_00,pvVar1);
      puVar3 = *(undefined8 **)(this + 0x150);
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  return puVar3;
}

