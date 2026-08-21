
/* v8::internal::Runtime_AddDictionaryProperty(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_AddDictionaryProperty(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  CanonicalHandleScope *this;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong local_58;
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    puVar2 = *(ulong **)pIVar1;
    puVar3 = *(ulong **)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar4 = *(uint *)(*param_2 + 3);
    uVar7 = *param_2 & 0xffffffff00000000;
    if ((uVar4 & 1) == 0) {
      uVar7 = *(ulong *)(uVar7 + 0x410);
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
    }
    else {
      uVar7 = uVar7 | uVar4;
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
    }
    if (this == (CanonicalHandleScope *)0x0) {
      puVar5 = puVar2;
      if (puVar3 == puVar2) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup(this,uVar7);
    }
    puVar6 = (undefined8 *)
             BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Add
                       (param_3,puVar5,param_2 + -1,param_2 + -2,0xc0,0);
    local_58 = *param_2;
    JSReceiver::SetProperties((JSReceiver *)&local_58,*puVar6);
    uVar7 = param_2[-2];
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
      *(ulong **)(param_3 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
  uVar7 = FUN_011c9000(param_1,param_2,param_3);
  return uVar7;
}

