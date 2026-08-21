
/* v8::internal::MathRandom::RefillCache(v8::internal::Isolate*, unsigned long) */

undefined8 v8::internal::MathRandom::RefillCache(Isolate *param_1,ulong param_2)

{
  RandomNumberGenerator *this;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  ulong local_48;
  ulong local_40;
  ulong uStack_38;
  
  uVar5 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x1df);
  uVar4 = *(ulong *)(uVar5 + 7);
  uStack_38 = *(ulong *)(uVar5 + 0xf);
  if (uStack_38 == 0 && uVar4 == 0) {
    uVar3 = (long)FLAG_random_seed;
    local_40 = uVar4;
    if (FLAG_random_seed == 0) {
      this = (RandomNumberGenerator *)Isolate::random_number_generator(param_1);
      base::RandomNumberGenerator::NextBytes(this,&local_48,8);
      uVar3 = local_48;
    }
    local_48 = uVar3;
    uVar4 = base::RandomNumberGenerator::MurmurHash3(local_48);
    local_40 = uVar4;
    uStack_38 = base::RandomNumberGenerator::MurmurHash3(~local_48);
    if (uVar4 == 0 && uStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","state.s0 != 0 || state.s1 != 0");
    }
  }
  lVar2 = 7;
  uVar3 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x1e3);
  while( true ) {
    uVar1 = uStack_38;
    uVar4 = uVar4 ^ uVar4 << 0x17;
    dVar6 = (double)(uVar1 >> 0xc | 0x3ff0000000000000) + -1.0;
    uStack_38 = uVar4 ^ uVar1 ^ uVar1 >> 0x1a ^ uVar4 >> 0x11;
    if (NAN(dVar6)) {
      *(undefined8 *)(lVar2 + uVar3) = 0x7ff8000000000000;
    }
    else {
      *(double *)(lVar2 + uVar3) = dVar6;
    }
    if (lVar2 == 0x1ff) break;
    lVar2 = lVar2 + 8;
    uVar4 = uVar1;
  }
  *(ulong *)(uVar5 + 0xf) = uStack_38;
  *(ulong *)(uVar5 + 7) = uVar1;
  *(undefined4 *)(param_2 + 0x1db) = 0x80;
  return 0x80;
}

