
/* cocosbuilder::CCBAnimationManager::sequenceCompleted() */

void __thiscall cocosbuilder::CCBAnimationManager::sequenceCompleted(CCBAnimationManager *this)

{
  size_t sVar1;
  CCBAnimationManager CVar2;
  int iVar3;
  int iVar4;
  char *__s;
  size_t __n;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  CCBAnimationManager *__s1;
  ulong uVar6;
  
  __s = (char *)CCBSequence::getName(*(CCBSequence **)(this + 0xe0));
  iVar3 = CCBSequence::getChainedSequenceId(*(CCBSequence **)(this + 0xe0));
  *(undefined8 *)(this + 0xe0) = 0;
  __n = strlen(__s);
  CVar2 = this[0x1b8];
  sVar1 = (ulong)((byte)CVar2 >> 1);
  if (((byte)CVar2 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x1c0);
  }
  if (__n == sVar1) {
    if (__n == 0) goto LAB_00cef228;
    if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    __s1 = *(CCBAnimationManager **)(this + 0x1c8);
    if (((byte)CVar2 & 1) == 0) {
      __s1 = this + 0x1b9;
    }
    iVar4 = memcmp(__s1,__s,__n);
    if (iVar4 == 0) goto LAB_00cef228;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x1b8),__s,__n);
LAB_00cef228:
  if (iVar3 != -1) {
    runAnimationsForSequenceIdTweenDuration(this,iVar3,0.0);
  }
  plVar5 = *(long **)(this + 0xd8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,__s);
  }
  if (*(long *)(this + 0x1e0) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x1d0);
    uVar6 = *(ulong *)(this + 0x1d8) & 1;
    if (uVar6 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar6 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(this + 0x1e0) + ((long)*(ulong *)(this + 0x1d8) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00cef290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

