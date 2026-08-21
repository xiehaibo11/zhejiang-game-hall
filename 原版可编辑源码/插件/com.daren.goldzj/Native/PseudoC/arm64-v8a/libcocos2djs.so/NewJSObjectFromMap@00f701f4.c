
/* v8::internal::Factory::NewJSObjectFromMap(v8::internal::Handle<v8::internal::Map>,
   v8::internal::AllocationType, v8::internal::Handle<v8::internal::AllocationSite>) */

ulong * v8::internal::Factory::NewJSObjectFromMap(Isolate *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  uVar1 = AllocateRawWithAllocationSite();
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_1 + 0x95a0);
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
  }
  InitializeJSObjectFromMap((Factory *)param_1,puVar2,param_1 + 0x168,param_2);
  return puVar2;
}

