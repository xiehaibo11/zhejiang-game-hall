
/* v8::internal::NumberParseIntHelper::ResultMultiplyAdd(unsigned int, unsigned int) */

void __thiscall
v8::internal::NumberParseIntHelper::ResultMultiplyAdd
          (NumberParseIntHelper *this,uint param_1,uint param_2)

{
  *(double *)(this + 0x38) = *(double *)(this + 0x38) * (double)param_1 + (double)param_2;
  return;
}

