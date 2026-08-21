
/* v8::base::MagicNumbersForDivision<unsigned
   long>::TEMPNAMEPLACEHOLDERVALUE(v8::base::MagicNumbersForDivision<unsigned long> const&) const */

bool __thiscall
v8::base::MagicNumbersForDivision<unsigned_long>::operator==
          (MagicNumbersForDivision<unsigned_long> *this,MagicNumbersForDivision *param_1)

{
  if ((*(long *)this == *(long *)param_1) && (*(int *)(this + 8) == *(int *)(param_1 + 8))) {
    return this[0xc] == *(MagicNumbersForDivision<unsigned_long> *)(param_1 + 0xc);
  }
  return false;
}

