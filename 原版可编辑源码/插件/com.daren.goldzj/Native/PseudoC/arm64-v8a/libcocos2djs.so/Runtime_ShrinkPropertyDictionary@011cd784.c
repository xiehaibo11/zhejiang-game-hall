
/* v8::internal::Runtime_ShrinkPropertyDictionary(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_ShrinkPropertyDictionary(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  CanonicalHandleScope *this;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_011cd8d8(param_1,param_2,param_3);
    return uVar6;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (uVar8 = uVar7 & 0xffffffff00000000,
     0xa8 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
    if ((*(uint *)(uVar7 + 3) & 1) == 0) {
      uVar8 = *(ulong *)(uVar8 + 0x410);
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
    }
    else {
      uVar8 = uVar8 | *(uint *)(uVar7 + 3);
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
    }
    if (this == (CanonicalHandleScope *)0x0) {
      puVar4 = puVar2;
      if (puVar3 == puVar2) {
        puVar4 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar8;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup(this,uVar8);
    }
    puVar5 = (undefined8 *)
             HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Shrink
                       (param_3,puVar4,0);
    local_48 = *param_2;
    JSReceiver::SetProperties((JSReceiver *)&local_48,*puVar5);
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
      *(ulong **)(param_3 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

