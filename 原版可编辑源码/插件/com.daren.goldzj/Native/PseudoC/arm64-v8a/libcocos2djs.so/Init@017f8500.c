
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::ios_base::Init::Init() */

void __thiscall std::__ndk1::ios_base::Init::Init(Init *this)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  locale alStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  DAT_01d52a00 = &PTR__basic_streambuf_01c671a8;
  locale::locale((locale *)&DAT_01d52a08);
  uRam0000000001d52a28 = 0;
  _DAT_01d52a20 = 0;
  uRam0000000001d52a38 = 0;
  _DAT_01d52a30 = 0;
  uRam0000000001d52a18 = 0;
  _DAT_01d52a10 = 0;
  DAT_01d52a00 = &PTR__basic_streambuf_01cdb780;
  DAT_01d52a40 = &__sF;
  DAT_01d52a50 = &DAT_01d52a68;
  DAT_01d52a5c = 0xffffffff;
  DAT_01d52a60 = 0;
  locale::locale(alStack_70,(locale *)&DAT_01d52a08);
  (*(code *)DAT_01d52a00[2])(&DAT_01d52a00,alStack_70);
  locale::~locale(alStack_70);
  cin = &PTR__basic_istream_01cdb350;
  DAT_01d524f0 = 0;
  DAT_01d524f8 = &PTR__basic_istream_01cdb378;
  ios_base::init((ios_base *)&DAT_01d524f8,&DAT_01d52a00);
  DAT_01d52580 = 0;
  DAT_01d52a70 = &PTR__basic_streambuf_01cdb2c8;
  DAT_01d52588 = 0xffffffff;
  locale::locale((locale *)&DAT_01d52a78);
  DAT_01d52ab0 = &__sF;
  DAT_01d52acc = 0xffffffff;
  uRam0000000001d52a98 = 0;
  _DAT_01d52a90 = 0;
  uRam0000000001d52aa8 = 0;
  _DAT_01d52aa0 = 0;
  uRam0000000001d52a88 = 0;
  _DAT_01d52a80 = 0;
  DAT_01d52a70 = &PTR__basic_streambuf_01cdb818;
  DAT_01d52ac0 = &DAT_01d52ad8;
  DAT_01d52ad0 = 0;
  locale::locale(alStack_70,(locale *)&DAT_01d52a78);
  (*(code *)DAT_01d52a70[2])(&DAT_01d52a70,alStack_70);
  locale::~locale(alStack_70);
  wcin = &PTR__basic_istream_01cdb3b0;
  DAT_01d52598 = 0;
  DAT_01d525a0 = &PTR__basic_istream_01cdb3d8;
  ios_base::init((ios_base *)&DAT_01d525a0,&DAT_01d52a70);
  DAT_01d52628 = 0;
  DAT_01d52630 = 0xffffffff;
  FUN_017f89b0(&DAT_01d52ae0,waitpid,&DAT_01d52b40);
  cout._8_8_ = 0x1cdb438;
  cout._0_8_ = 0x1cdb410;
  ios_base::init((ios_base *)(cout + 8),&DAT_01d52ae0);
  cout._144_8_ = 0;
  cout._152_4_ = 0xffffffff;
  FUN_017f8aa8(&DAT_01d52b48,waitpid,&DAT_01d52ba8);
  wcout._8_8_ = 0x1cdb498;
  wcout._0_8_ = 0x1cdb470;
  ios_base::init((ios_base *)(wcout + 8),&DAT_01d52b48);
  wcout._144_8_ = 0;
  wcout._152_4_ = 0xffffffff;
  FUN_017f89b0(&DAT_01d52bb0,__cxa_thread_atexit_impl,&DAT_01d52c10);
  _DAT_01d52780 = 0x1cdb438;
  _cerr = 0x1cdb410;
  ios_base::init((ios_base *)&DAT_01d52780,&DAT_01d52bb0);
  DAT_01d52808 = 0;
  DAT_01d52810 = 0xffffffff;
  clog._8_8_ = 0x1cdb438;
  clog._0_8_ = 0x1cdb410;
  ios_base::init((ios_base *)(clog + 8),*(void **)(*(long *)(_cerr + -0x18) + 0x1d527a0));
  clog._144_8_ = 0;
  clog._152_4_ = 0xffffffff;
  FUN_017f8aa8(&DAT_01d52c18,__cxa_thread_atexit_impl,&DAT_01d52c78);
  _DAT_01d52820 = 0x1cdb498;
  wcerr = 0x1cdb470;
  ios_base::init((ios_base *)&DAT_01d52820,&DAT_01d52c18);
  DAT_01d528a8 = 0;
  DAT_01d528b0 = 0xffffffff;
  wclog._8_8_ = 0x1cdb498;
  wclog._0_8_ = 0x1cdb470;
  ios_base::init((ios_base *)(wclog + 8),*(void **)(*(long *)(wcerr + -0x18) + 0x1d52840));
  lVar4 = wcerr;
  ppuVar2 = wcin;
  wclog._152_4_ = 0xffffffff;
  wclog._144_8_ = 0;
  *(undefined1 **)(cin[-3] + 0x1d52570) = cout;
  lVar3 = _cerr;
  *(undefined1 **)(ppuVar2[-3] + 0x1d52618) = wcout;
  lVar5 = *(long *)(lVar3 + -0x18);
  *(uint *)(&DAT_01d52780 + lVar5) = *(uint *)(&DAT_01d52780 + lVar5) | 0x2000;
  lVar5 = *(long *)(lVar4 + -0x18);
  *(uint *)(&DAT_01d52820 + lVar5) = *(uint *)(&DAT_01d52820 + lVar5) | 0x2000;
  *(undefined1 **)(*(long *)(lVar3 + -0x18) + 0x1d52800) = cout;
  *(undefined1 **)(*(long *)(lVar4 + -0x18) + 0x1d528a0) = wcout;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

