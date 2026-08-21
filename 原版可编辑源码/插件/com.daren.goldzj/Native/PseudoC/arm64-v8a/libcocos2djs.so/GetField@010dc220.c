
/* v8::internal::JSDate::GetField(unsigned long, unsigned long) */

void v8::internal::JSDate::GetField(ulong param_1,ulong param_2)

{
  ulong local_18;
  
  local_18 = param_1;
  DoGetField((JSDate *)&local_18,(int)param_2 >> 1);
  return;
}

