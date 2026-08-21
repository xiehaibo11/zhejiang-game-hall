
/* cocos2d::Scheduler::resumeTargets(std::__ndk1::set<void*, std::__ndk1::less<void*>,
   std::__ndk1::allocator<void*> > const&) */

void __thiscall cocos2d::Scheduler::resumeTargets(Scheduler *this,set *param_1)

{
  bool bVar1;
  set *psVar2;
  long lVar3;
  set *psVar4;
  
  psVar4 = *(set **)param_1;
  while (psVar4 != param_1 + 8) {
    resumeTarget(this,*(void **)(psVar4 + 0x20));
    psVar2 = *(set **)(psVar4 + 8);
    if (*(set **)(psVar4 + 8) == (set *)0x0) {
      psVar2 = psVar4 + 0x10;
      bVar1 = *(set **)*(set **)psVar2 != psVar4;
      psVar4 = *(set **)psVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)psVar2;
          psVar2 = (set *)(lVar3 + 0x10);
          psVar4 = *(set **)psVar2;
        } while (*(long *)psVar4 != lVar3);
      }
    }
    else {
      do {
        psVar4 = psVar2;
        psVar2 = *(set **)psVar4;
      } while (*(set **)psVar4 != (set *)0x0);
    }
  }
  return;
}

