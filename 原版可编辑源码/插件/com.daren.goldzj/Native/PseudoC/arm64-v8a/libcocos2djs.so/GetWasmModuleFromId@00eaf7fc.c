
/* v8::ValueDeserializer::Delegate::GetWasmModuleFromId(v8::Isolate*, unsigned int) */

undefined8 v8::ValueDeserializer::Delegate::GetWasmModuleFromId(Isolate *param_1,uint param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  pIVar3 = (Isolate *)(ulong)param_2;
  uVar4 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1))
                                              + 0x13)) + 0x35f);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4);
  }
  puVar2 = (undefined8 *)internal::Factory::NewError((Factory *)pIVar3,puVar1,0x16c,0,0,0);
  internal::Isolate::ScheduleThrow(pIVar3,*puVar2);
  return 0;
}

