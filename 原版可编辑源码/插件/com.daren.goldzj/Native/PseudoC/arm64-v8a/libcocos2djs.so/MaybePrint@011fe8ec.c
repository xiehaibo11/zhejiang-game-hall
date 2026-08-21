
/* v8::internal::wasm::WasmCode::MaybePrint(char const*) const */

void __thiscall v8::internal::wasm::WasmCode::MaybePrint(WasmCode *this,char *param_1)

{
  undefined **local_148;
  undefined **local_140;
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
  
  if ((((FLAG_print_wasm_code != '\0') && (*(int *)(this + 0x3c) == 0)) ||
      ((FLAG_print_wasm_stub_code != '\0' && (*(int *)(this + 0x3c) != 0)))) ||
     (FLAG_print_code != '\0')) {
    local_148 = (undefined **)0x1ca1178;
    local_e8[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_e8,(AndroidLogStream *)&local_140);
    local_58 = 0xffffffff;
    local_140 = &PTR__basic_streambuf_01c671a8;
    local_60 = 0;
    local_148 = &PTR__StdoutStream_01ca1128;
    local_e8[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_138);
    local_140 = &PTR__AndroidLogStream_01cbc008;
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
              ((basic_ostream *)&local_148,"--- WebAssembly code ---\n",0x19);
    Disassemble(this,param_1,(basic_ostream *)&local_148,0);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_148,"--- End code ---\n",0x11);
    local_148 = &PTR__StdoutStream_01ca1128;
    local_e8[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_140);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_e8);
  }
  return;
}

