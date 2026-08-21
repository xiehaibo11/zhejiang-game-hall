
/* v8::internal::Isolate::RunHostCleanupFinalizationGroupCallback(v8::internal::Handle<v8::internal::JSFinalizationGroup>)
    */

void __thiscall
v8::internal::Isolate::RunHostCleanupFinalizationGroupCallback(Isolate *this,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (*(long *)(this + 0xb670) != 0) {
    uVar2 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(this + 0x95a0);
      if (puVar1 == *(ulong **)(this + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00f567bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0xb670))(puVar1,param_2);
    return;
  }
  return;
}

