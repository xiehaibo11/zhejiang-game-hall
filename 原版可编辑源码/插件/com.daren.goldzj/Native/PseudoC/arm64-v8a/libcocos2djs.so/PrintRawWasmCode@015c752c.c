
/* v8::internal::wasm::PrintRawWasmCode(v8::internal::AccountingAllocator*,
   v8::internal::wasm::FunctionBody const&, v8::internal::wasm::WasmModule const*,
   v8::internal::wasm::PrintLocals) */

uint v8::internal::wasm::PrintRawWasmCode
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
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
  uVar1 = PrintRawWasmCode(param_1,param_2,param_3,param_4,&local_158,0);
  local_158 = &PTR__StdoutStream_01ca1128;
  local_f8[0] = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_150);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_f8);
  return uVar1 & 1;
}

