
/* cocos2d::Console::Utility::isFloat(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool cocos2d::Console::Utility::isFloat(basic_string *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auStack_184 [4];
  undefined **local_180;
  uint auStack_178 [2];
  undefined **local_170;
  locale alStack_168 [8];
  uint local_160 [12];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_180 = (undefined **)0x169c420;
  local_108[0] = (undefined **)0x169c448;
  auStack_178[0] = 0;
  auStack_178[1] = 0;
  std::__ndk1::ios_base::init
            ((ios_base *)local_108,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170);
  local_80 = 0;
  local_78 = 0xffffffff;
  local_180 = &PTR__basic_istringstream_0169c3d0;
  local_108[0] = &PTR__basic_istringstream_0169c3f8;
  local_170 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::locale(alStack_168);
  local_160[6] = 0;
  local_160[7] = 0;
  local_160[4] = 0;
  local_160[5] = 0;
  local_160[10] = 0;
  local_160[0xb] = 0;
  local_160[8] = 0;
  local_160[9] = 0;
  local_160[2] = 0;
  local_160[3] = 0;
  local_160[0] = 0;
  local_160[1] = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 8;
  local_170 = &PTR__basic_stringbuf_01698960;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &local_170,param_1);
  *(uint *)((long)auStack_178 + (long)local_180[-3]) =
       *(uint *)((long)auStack_178 + (long)local_180[-3]) & 0xffffefff;
  FUN_00cf41c8(&local_180,auStack_184);
  local_108[0] = &PTR__basic_istringstream_0169c3f8;
  local_170 = &PTR__basic_stringbuf_01698960;
  uVar1 = *(uint *)((long)local_160 + (long)local_180[-3]);
  local_180 = &PTR__basic_istringstream_0169c3d0;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (uVar1 & 7) == 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

