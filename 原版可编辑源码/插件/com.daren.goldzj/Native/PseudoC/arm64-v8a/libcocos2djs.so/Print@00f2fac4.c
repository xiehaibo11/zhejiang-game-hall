
/* v8::internal::Object::Print() const */

void __thiscall v8::internal::Object::Print(Object *this)

{
  long lVar1;
  undefined **local_340;
  undefined **local_338;
  locale alStack_330 [8];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined **local_2e0 [17];
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  DbgStreamBuf aDStack_240 [320];
  undefined8 local_100 [19];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  DbgStdoutStream::DbgStdoutStream((DbgStdoutStream *)&local_248);
  Print(this,(basic_ostream *)&local_248);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_248);
  local_340 = (undefined **)0x1ca1178;
  local_2e0[0] = (undefined **)0x1ca11a0;
  std::__ndk1::ios_base::init((ios_base *)local_2e0,(AndroidLogStream *)&local_338);
  local_250 = 0xffffffff;
  local_338 = &PTR__basic_streambuf_01c671a8;
  local_258 = 0;
  local_340 = &PTR__StdoutStream_01ca1128;
  local_2e0[0] = &PTR__StdoutStream_01ca1150;
  std::__ndk1::locale::locale(alStack_330);
  local_338 = &PTR__AndroidLogStream_01cbc008;
  local_2f8 = 0;
  uStack_2f0 = 0;
  uStack_300 = 0;
  local_308 = 0;
  uStack_310 = 0;
  local_318 = 0;
  uStack_320 = 0;
  local_328 = 0;
  local_2e8 = 0;
  Print(this,(basic_ostream *)&local_340);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_340);
  local_340 = &PTR__StdoutStream_01ca1128;
  local_2e0[0] = &PTR__StdoutStream_01ca1150;
  AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_338);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_2e0);
  local_248 = 0x1ca4bc8;
  local_100[0] = 0x1ca4bf0;
  DbgStreamBuf::~DbgStreamBuf(aDStack_240);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_100);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

