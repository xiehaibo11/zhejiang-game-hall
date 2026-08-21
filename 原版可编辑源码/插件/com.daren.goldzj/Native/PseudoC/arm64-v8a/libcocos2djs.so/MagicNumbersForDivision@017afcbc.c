
/* v8::base::MagicNumbersForDivision<unsigned long>::MagicNumbersForDivision(unsigned long, unsigned
   int, bool) */

void __thiscall
v8::base::MagicNumbersForDivision<unsigned_long>::MagicNumbersForDivision
          (MagicNumbersForDivision<unsigned_long> *this,ulong param_1,uint param_2,bool param_3)

{
  *(ulong *)this = param_1;
  *(uint *)(this + 8) = param_2;
  this[0xc] = (MagicNumbersForDivision<unsigned_long>)param_3;
  return;
}

