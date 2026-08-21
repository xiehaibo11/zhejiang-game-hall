
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry() */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::~sentry(sentry *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(this + 8);
  lVar5 = *(long *)(*plVar4 + -0x18);
  if ((((*(long *)((long)plVar4 + lVar5 + 0x28) != 0) &&
       (*(int *)((long)plVar4 + lVar5 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar4 + lVar5 + 9) >> 5 & 1) != 0)) &&
     ((uVar3 = uncaught_exception(), (uVar3 & 1) == 0 &&
      (iVar2 = (**(code **)(**(long **)((long)*(long **)(this + 8) +
                                       *(long *)(**(long **)(this + 8) + -0x18) + 0x28) + 0x30))(),
      iVar2 == -1)))) {
    plVar4 = *(long **)(this + 8);
    lVar5 = *(long *)(*plVar4 + -0x18);
    uVar1 = *(uint *)((long)plVar4 + lVar5 + 0x20) | 1;
    *(uint *)((long)plVar4 + lVar5 + 0x20) = uVar1;
    if ((*(uint *)((long)plVar4 + lVar5 + 0x24) & uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_011dac54("ios_base::clear");
    }
  }
  return;
}

