
/* v8::internal::Isolate::set_date_cache(v8::internal::DateCache*) */

void __thiscall v8::internal::Isolate::set_date_cache(Isolate *this,DateCache *param_1)

{
  DateCache *pDVar1;
  
  pDVar1 = *(DateCache **)(this + 0xb638);
  if ((pDVar1 != param_1) && (pDVar1 != (DateCache *)0x0)) {
    (**(code **)(*(long *)pDVar1 + 8))();
  }
  *(DateCache **)(this + 0xb638) = param_1;
  return;
}

