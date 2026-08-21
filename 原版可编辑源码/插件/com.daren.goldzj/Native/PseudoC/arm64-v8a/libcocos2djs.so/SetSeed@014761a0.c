
/* v8::base::RandomNumberGenerator::SetSeed(long) */

void __thiscall v8::base::RandomNumberGenerator::SetSeed(RandomNumberGenerator *this,long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (param_1 ^ (ulong)param_1 >> 0x21) * -0xae502812aa7333;
  uVar1 = (uVar1 ^ uVar1 >> 0x21) * -0x3b314601e57a13ad;
  uVar2 = uVar1 ^ uVar1 >> 0x21;
  uVar1 = (uVar2 ^ (uVar1 ^ 0xffffffffffffffff) >> 0x21 ^ 0xffffffffffffffff) * -0xae502812aa7333;
  uVar1 = (uVar1 ^ uVar1 >> 0x21) * -0x3b314601e57a13ad;
  uVar1 = uVar1 ^ uVar1 >> 0x21;
  *(long *)this = param_1;
  *(ulong *)(this + 8) = uVar2;
  *(ulong *)(this + 0x10) = uVar1;
  if (uVar1 != 0 || uVar2 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","state0_ != 0 || state1_ != 0");
}

