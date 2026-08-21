
/* v8::base::MagicNumbersForDivision<unsigned int>::MagicNumbersForDivision(unsigned int, unsigned
   int, bool) */

void __thiscall
v8::base::MagicNumbersForDivision<unsigned_int>::MagicNumbersForDivision
          (MagicNumbersForDivision<unsigned_int> *this,uint param_1,uint param_2,bool param_3)

{
  *(uint *)this = param_1;
  *(uint *)(this + 4) = param_2;
  this[8] = (MagicNumbersForDivision<unsigned_int>)param_3;
  return;
}

