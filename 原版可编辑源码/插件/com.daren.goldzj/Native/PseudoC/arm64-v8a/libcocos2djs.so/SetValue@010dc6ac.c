
/* v8::internal::JSDate::SetValue(v8::internal::Handle<v8::internal::JSDate>, double) */

undefined8 * v8::internal::JSDate::SetValue(double param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)
           Factory::NewNumber<(v8::internal::AllocationType)0>
                     ((Factory *)((ulong)*(uint *)((long)param_2 + 4) << 0x20),param_1);
  local_28 = *param_2;
  SetValue((JSDate *)&local_28,*puVar1,NAN(param_1));
  return puVar1;
}

