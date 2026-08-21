
/* v8::ValueDeserializer::Delegate::ReadHostObject(v8::Isolate*) */

undefined8 __thiscall
v8::ValueDeserializer::Delegate::ReadHostObject(Delegate *this,Isolate *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x35f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
  }
  puVar2 = (undefined8 *)internal::Factory::NewError((Factory *)param_1,puVar1,0x16c,0,0,0);
  internal::Isolate::ScheduleThrow((Isolate *)param_1,*puVar2);
  return 0;
}

