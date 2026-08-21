
/* _v8_internal_Print_LayoutDescriptor(void*) */

ulong _v8_internal_Print_LayoutDescriptor(void *param_1)

{
  uint uVar1;
  ulong uVar2;
  void *local_140;
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
  
  if ((ulong)param_1 >> 0x20 == 0) {
    uVar2 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
    param_1 = (void *)(uVar2 & 0xffffffff00000000 | (ulong)param_1 & 0xffffffff);
  }
  if ((((ulong)param_1 & 1) != 0) &&
     (*(short *)(((ulong)param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)param_1 + -1))
      != 0x85)) {
    uVar1 = puts("Please provide a layout descriptor");
    return (ulong)uVar1;
  }
  local_138 = (undefined **)0x1ca1178;
  local_d8[0] = (undefined **)0x1ca11a0;
  local_140 = param_1;
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
  v8::internal::LayoutDescriptor::Print((LayoutDescriptor *)&local_140,(basic_ostream *)&local_138);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_138);
  local_138 = &PTR__StdoutStream_01ca1128;
  local_d8[0] = &PTR__StdoutStream_01ca1150;
  v8::internal::AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_130);
  uVar2 = std::__ndk1::ios_base::~ios_base((ios_base *)local_d8);
  return uVar2;
}

