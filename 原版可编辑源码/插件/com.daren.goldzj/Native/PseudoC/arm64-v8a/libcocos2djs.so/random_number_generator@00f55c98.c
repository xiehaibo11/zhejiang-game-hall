
/* v8::internal::Isolate::random_number_generator() */

RandomNumberGenerator * __thiscall v8::internal::Isolate::random_number_generator(Isolate *this)

{
  int iVar1;
  RandomNumberGenerator *this_00;
  long lVar2;
  
  iVar1 = FLAG_random_seed;
  this_00 = *(RandomNumberGenerator **)(this + 0xb640);
  if (this_00 == (RandomNumberGenerator *)0x0) {
    lVar2 = (long)FLAG_random_seed;
    this_00 = operator_new(0x18);
    if (iVar1 == 0) {
      base::RandomNumberGenerator::RandomNumberGenerator(this_00);
    }
    else {
      base::RandomNumberGenerator::SetSeed(this_00,lVar2);
    }
    *(RandomNumberGenerator **)(this + 0xb640) = this_00;
  }
  return this_00;
}

