
/* v8::internal::wasm::PrintRawWasmCode(unsigned char const*, unsigned char const*) */

void v8::internal::wasm::PrintRawWasmCode(uchar *param_1,uchar *param_2)

{
  undefined8 local_170;
  undefined4 local_168;
  uchar *local_160;
  uchar *puStack_158;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **local_138;
  undefined **local_130;
  locale alStack_128 [8];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **local_d8 [17];
  undefined8 local_50;
  undefined4 local_48;
  
  local_148 = 0;
  uStack_140 = 0;
  local_170 = 0;
  local_168 = 0;
  local_150 = &PTR__AccountingAllocator_01cbced0;
  local_138 = (undefined **)0x1ca1178;
  local_d8[0] = (undefined **)0x1ca11a0;
  local_160 = param_1;
  puStack_158 = param_2;
  std::__ndk1::ios_base::init((ios_base *)local_d8,(AndroidLogStream *)&local_130);
  local_48 = 0xffffffff;
  local_130 = &PTR__basic_streambuf_01c671a8;
  local_50 = 0;
  local_138 = &PTR__StdoutStream_01ca1128;
  local_d8[0] = &PTR__StdoutStream_01ca1150;
  std::__ndk1::locale::locale(alStack_128);
  local_130 = &PTR__AndroidLogStream_01cbc008;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_e0 = 0;
  PrintRawWasmCode(&local_150,&local_170,0,0,&local_138,0);
  local_138 = &PTR__StdoutStream_01ca1128;
  local_d8[0] = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_130);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_d8);
  AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_150);
  return;
}

