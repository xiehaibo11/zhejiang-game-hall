
/* v8::base::RandomNumberGenerator::RandomNumberGenerator() */

void __thiscall v8::base::RandomNumberGenerator::RandomNumberGenerator(RandomNumberGenerator *this)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  FILE *__stream;
  size_t sVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_70;
  code *pcStack_68;
  undefined *local_60;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_01d460b8 != '\x02') {
    local_70 = &PTR_FUN_01c984d0;
    pcStack_68 = LazyInstanceImpl<v8::base::Mutex,v8::base::StaticallyAllocatedInstanceTrait<v8::base::Mutex>,v8::base::DefaultConstructTrait<v8::base::Mutex>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::base::Mutex>>
                 ::InitInstance;
    local_60 = &DAT_01d460bc;
    local_50 = (long *)&local_70;
    CallOnceImpl(&DAT_01d460b8,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar7 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_01475ffc;
      pcVar7 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar7)();
  }
LAB_01475ffc:
  Mutex::Lock((Mutex *)&DAT_01d460bc);
  if ((DAT_01d460b0 != (code *)0x0) && (uVar3 = (*DAT_01d460b0)(&local_70,8), (uVar3 & 1) != 0)) {
    uVar3 = ((ulong)local_70 ^ (ulong)local_70 >> 0x21) * -0xae502812aa7333;
    uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar3 ^ uVar3 >> 0x21;
    *(undefined ***)this = local_70;
    *(ulong *)(this + 8) = uVar9;
    uVar3 = (uVar9 ^ (uVar3 ^ 0xffffffffffffffff) >> 0x21 ^ 0xffffffffffffffff) * -0xae502812aa7333;
    uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3b314601e57a13ad;
    uVar3 = uVar3 ^ uVar3 >> 0x21;
    *(ulong *)(this + 0x10) = uVar3;
    if (uVar3 == 0 && uVar9 == 0) goto LAB_01476188;
    uVar3 = Mutex::Unlock((Mutex *)&DAT_01d460bc);
    goto LAB_01476164;
  }
  Mutex::Unlock((Mutex *)&DAT_01d460bc);
  __stream = fopen("/dev/urandom","rb");
  if (__stream == (FILE *)0x0) {
LAB_014760ec:
    lVar5 = Time::NowFromSystemTime();
    lVar6 = TimeTicks::HighResolutionNow();
    uVar3 = TimeTicks::Now();
    ppuVar8 = (undefined **)(lVar6 << 0x10 ^ lVar5 << 0x18 ^ uVar3 << 8);
  }
  else {
    sVar4 = fread(&local_70,8,1,__stream);
    uVar2 = fclose(__stream);
    uVar3 = (ulong)uVar2;
    ppuVar8 = local_70;
    if (sVar4 != 1) goto LAB_014760ec;
  }
  uVar9 = ((ulong)ppuVar8 ^ (ulong)ppuVar8 >> 0x21) * -0xae502812aa7333;
  uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
  uVar10 = uVar9 ^ uVar9 >> 0x21;
  *(undefined ***)this = ppuVar8;
  *(ulong *)(this + 8) = uVar10;
  uVar9 = (uVar10 ^ (uVar9 ^ 0xffffffffffffffff) >> 0x21 ^ 0xffffffffffffffff) * -0xae502812aa7333;
  uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
  uVar9 = uVar9 ^ uVar9 >> 0x21;
  *(ulong *)(this + 0x10) = uVar9;
  if (uVar9 == 0 && uVar10 == 0) {
LAB_01476188:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","state0_ != 0 || state1_ != 0");
  }
LAB_01476164:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

