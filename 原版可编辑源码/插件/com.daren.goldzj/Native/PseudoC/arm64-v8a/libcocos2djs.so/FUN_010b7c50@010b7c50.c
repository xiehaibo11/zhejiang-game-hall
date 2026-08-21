
undefined8 FUN_010b7c50(undefined8 param_1,ulong *param_2,uint param_3)

{
  ulong uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong local_38;
  
  local_38 = *param_2;
  if ((*(uint *)((local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 - 1)) + 0xb) >> 0x14 & 1
      ) == 0) {
    uVar1 = v8::internal::JSObject::WouldConvertToSlowElements((JSObject *)&local_38,param_3);
    if ((uVar1 & 1) == 0) {
      pIVar2 = (Isolate *)(*param_2 & 0xffffffff00000000);
      uVar1 = (ulong)pIVar2 | (ulong)*(uint *)(*param_2 + 7);
      if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar1;
      }
      else {
        puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_010b8c78(param_2,puVar3,0x15,param_3 + (param_3 + 1 >> 1) + 0x11);
    }
  }
  return 0;
}

