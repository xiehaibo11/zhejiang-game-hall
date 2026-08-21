
/* v8::internal::Isolate::GenerateIdentityHash(unsigned int) */

uint __thiscall v8::internal::Isolate::GenerateIdentityHash(Isolate *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  RandomNumberGenerator *this_00;
  long lVar3;
  int iVar4;
  
  iVar4 = 0x1f;
  while( true ) {
    iVar1 = FLAG_random_seed;
    this_00 = *(RandomNumberGenerator **)(this + 0xb640);
    if (this_00 == (RandomNumberGenerator *)0x0) {
      lVar3 = (long)FLAG_random_seed;
      this_00 = operator_new(0x18);
      if (iVar1 == 0) {
        base::RandomNumberGenerator::RandomNumberGenerator(this_00);
      }
      else {
        base::RandomNumberGenerator::SetSeed(this_00,lVar3);
      }
      *(RandomNumberGenerator **)(this + 0xb640) = this_00;
    }
    uVar2 = base::RandomNumberGenerator::Next(this_00,0x20);
    if ((uVar2 & param_1) != 0) break;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 1;
    }
  }
  return uVar2 & param_1;
}

