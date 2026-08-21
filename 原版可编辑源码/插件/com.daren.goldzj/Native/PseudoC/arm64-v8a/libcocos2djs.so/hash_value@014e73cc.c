
/* v8::internal::hash_value(v8::internal::NumberToStringConstant const&) */

void v8::internal::hash_value(NumberToStringConstant *param_1)

{
  ulong uVar1;
  
  if (*(double *)(param_1 + 0x10) == 0.0) {
    uVar1 = 0;
  }
  else {
    uVar1 = base::hash_value((ulong)*(double *)(param_1 + 0x10));
  }
  base::hash_combine(0,uVar1);
  return;
}

