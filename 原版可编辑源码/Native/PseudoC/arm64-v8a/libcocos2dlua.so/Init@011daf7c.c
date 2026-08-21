
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
  DAT_01793f10 = &PTR__basic_streambuf_01698a08;
  locale::locale((locale *)&DAT_01793f18);
  uRam0000000001793f38 = 0;
  _DAT_01793f30 = 0;
  uRam0000000001793f48 = 0;
  _DAT_01793f40 = 0;
  uRam0000000001793f28 = 0;
  _DAT_01793f20 = 0;
  DAT_01793f10 = &PTR__basic_streambuf_0172e140;
  DAT_01793f50 = &__sF;
  DAT_01793f60 = &DAT_01793f78;
  DAT_01793f6c = 0xffffffff;
  DAT_01793f70 = 0;
  locale::locale(alStack_70,(locale *)&DAT_01793f18);
  (*(code *)DAT_01793f10[2])(&DAT_01793f10,alStack_70);
  locale::~locale(alStack_70);
  cin = &PTR__basic_istream_0172dcf0;
  DAT_01793a00 = 0;
  DAT_01793a08 = &PTR__basic_istream_0172dd18;
  ios_base::init((ios_base *)&DAT_01793a08,&DAT_01793f10);
  DAT_01793a90 = 0;
  DAT_01793f80 = &PTR__basic_streambuf_0172dc68;
  DAT_01793a98 = 0xffffffff;
  locale::locale((locale *)&DAT_01793f88);
  DAT_01793fc0 = &__sF;
  DAT_01793fdc = 0xffffffff;
  uRam0000000001793fa8 = 0;
  _DAT_01793fa0 = 0;
  uRam0000000001793fb8 = 0;
  _DAT_01793fb0 = 0;
  uRam0000000001793f98 = 0;
  _DAT_01793f90 = 0;
  DAT_01793f80 = &PTR__basic_streambuf_0172e1d8;
  DAT_01793fd0 = &DAT_01793fe8;
  DAT_01793fe0 = 0;
  locale::locale(alStack_70,(locale *)&DAT_01793f88);
  (*(code *)DAT_01793f80[2])(&DAT_01793f80,alStack_70);
  locale::~locale(alStack_70);
  wcin = &PTR__basic_istream_0172dd50;
  DAT_01793aa8 = 0;
  DAT_01793ab0 = &PTR__basic_istream_0172dd78;
  ios_base::init((ios_base *)&DAT_01793ab0,&DAT_01793f80);
  DAT_01793b38 = 0;
  DAT_01793b40 = 0xffffffff;
  FUN_011db42c(&DAT_01793ff0,glUniformMatrix2fv,&DAT_01794050);
  cout._8_8_ = 0x172ddd8;
  cout._0_8_ = 0x172ddb0;
  ios_base::init((ios_base *)(cout + 8),&DAT_01793ff0);
  cout._144_8_ = 0;
  cout._152_4_ = 0xffffffff;
  FUN_011db524(&DAT_01794058,glUniformMatrix2fv,&DAT_017940b8);
  wcout._8_8_ = 0x172de38;
  wcout._0_8_ = 0x172de10;
  ios_base::init((ios_base *)(wcout + 8),&DAT_01794058);
  wcout._144_8_ = 0;
  wcout._152_4_ = 0xffffffff;
  FUN_011db42c(&DAT_017940c0,pthread_rwlock_tryrdlock,&DAT_01794120);
  _DAT_01793c90 = 0x172ddd8;
  cerr = 0x172ddb0;
  ios_base::init((ios_base *)&DAT_01793c90,&DAT_017940c0);
  DAT_01793d18 = 0;
  DAT_01793d20 = 0xffffffff;
  clog._8_8_ = 0x172ddd8;
  clog._0_8_ = 0x172ddb0;
  ios_base::init((ios_base *)(clog + 8),*(void **)(*(long *)(cerr + -0x18) + 0x1793cb0));
  clog._144_8_ = 0;
  clog._152_4_ = 0xffffffff;
  FUN_011db524(&DAT_01794128,pthread_rwlock_tryrdlock,&DAT_01794188);
  _DAT_01793d30 = 0x172de38;
  _wcerr = 0x172de10;
  ios_base::init((ios_base *)&DAT_01793d30,&DAT_01794128);
  DAT_01793db8 = 0;
  DAT_01793dc0 = 0xffffffff;
  wclog._8_8_ = 0x172de38;
  wclog._0_8_ = 0x172de10;
  ios_base::init((ios_base *)(wclog + 8),*(void **)(*(long *)(_wcerr + -0x18) + 0x1793d50));
  lVar4 = _wcerr;
  ppuVar2 = wcin;
  wclog._152_4_ = 0xffffffff;
  wclog._144_8_ = 0;
  *(undefined1 **)(cin[-3] + 0x1793a80) = cout;
  lVar3 = cerr;
  *(undefined1 **)(ppuVar2[-3] + 0x1793b28) = wcout;
  lVar5 = *(long *)(lVar3 + -0x18);
  *(uint *)(&DAT_01793c90 + lVar5) = *(uint *)(&DAT_01793c90 + lVar5) | 0x2000;
  lVar5 = *(long *)(lVar4 + -0x18);
  *(uint *)(&DAT_01793d30 + lVar5) = *(uint *)(&DAT_01793d30 + lVar5) | 0x2000;
  *(undefined1 **)(*(long *)(lVar3 + -0x18) + 0x1793d10) = cout;
  *(undefined1 **)(*(long *)(lVar4 + -0x18) + 0x1793db0) = wcout;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

