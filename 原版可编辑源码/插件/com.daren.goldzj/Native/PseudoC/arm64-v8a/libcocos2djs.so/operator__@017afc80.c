
/* v8::base::MagicNumbersForDivision<unsigned
   int>::TEMPNAMEPLACEHOLDERVALUE(v8::base::MagicNumbersForDivision<unsigned int> const&) const */

bool __thiscall
v8::base::MagicNumbersForDivision<unsigned_int>::operator==
          (MagicNumbersForDivision<unsigned_int> *this,MagicNumbersForDivision *param_1)

{
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    return this[8] == *(MagicNumbersForDivision<unsigned_int> *)(param_1 + 8);
  }
  return false;
}

