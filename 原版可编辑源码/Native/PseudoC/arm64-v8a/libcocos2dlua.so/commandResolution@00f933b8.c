
/* cocos2d::Console::commandResolution(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Console::commandResolution(Console *this,int param_1,basic_string *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined4 local_1cc;
  undefined1 local_1c8 [4];
  undefined1 auStack_1c4 [4];
  undefined **local_1c0;
  undefined8 uStack_1b8;
  undefined **local_1b0;
  locale alStack_1a8 [8];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined **local_148 [17];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0 [2];
  undefined4 local_a0;
  undefined ***local_90;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_1c0 = (undefined **)0x169c420;
  local_148[0] = (undefined **)0x169c448;
  uStack_1b8 = 0;
  std::__ndk1::ios_base::init
            ((ios_base *)local_148,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_1b0);
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_1c0 = &PTR__basic_istringstream_0169c3d0;
  local_148[0] = &PTR__basic_istringstream_0169c3f8;
  local_1b0 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::locale(alStack_1a8);
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = (void *)0x0;
  local_150 = 8;
  local_1b0 = &PTR__basic_stringbuf_01698960;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &local_1b0,param_2);
  uVar2 = FUN_00f95f80(&local_1c0,auStack_1c4);
  uVar2 = FUN_00f95f80(uVar2,local_1c8);
  FUN_00f95f80(uVar2,&local_1cc);
  lVar3 = Director::getInstance();
  local_b0[0] = &PTR_FUN_017228e0;
  local_a0 = local_1cc;
  local_90 = local_b0;
  Scheduler::performFunctionInCocosThread(*(Scheduler **)(lVar3 + 0xa0),local_b0);
  if (local_b0 == local_90) {
    pcVar4 = (code *)(*local_90)[4];
  }
  else {
    if (local_90 == (undefined ***)0x0) goto LAB_00f9350c;
    pcVar4 = (code *)(*local_90)[5];
  }
  (*pcVar4)();
LAB_00f9350c:
  local_1c0 = &PTR__basic_istringstream_0169c3d0;
  local_148[0] = &PTR__basic_istringstream_0169c3f8;
  local_1b0 = &PTR__basic_stringbuf_01698960;
  if ((local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  local_1b0 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_1a8);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_148);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

