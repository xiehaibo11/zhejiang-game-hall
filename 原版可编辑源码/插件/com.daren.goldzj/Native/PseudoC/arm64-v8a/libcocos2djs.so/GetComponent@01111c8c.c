
/* v8::internal::AccessorPair::GetComponent(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NativeContext>,
   v8::internal::Handle<v8::internal::AccessorPair>, v8::internal::AccessorComponent) */

Isolate * v8::internal::AccessorPair::GetComponent
                    (Isolate *param_1,undefined8 param_2,ulong *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = 3;
  if (param_4 != 0) {
    lVar1 = 7;
  }
  uVar2 = *(uint *)(*param_3 + lVar1);
  uVar6 = *param_3 & 0xffffffff00000000;
  pIVar5 = param_1 + 0x95a0;
  uVar7 = uVar6 | uVar2;
  if ((uVar2 & 1) != 0) {
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x4e) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar5;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar5 = puVar4 + 1;
        *puVar4 = uVar7;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      }
      pIVar5 = (Isolate *)ApiNatives::InstantiateFunction(param_1,param_2,puVar4,0);
      if (pIVar5 != (Isolate *)0x0) {
        return pIVar5;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if (uVar2 == *(uint *)(param_1 + 0xb0)) {
      return param_1 + 0xa0;
    }
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    pIVar3 = *(Isolate **)pIVar5;
    if (pIVar3 == *(Isolate **)(param_1 + 0x95a8)) {
      pIVar3 = (Isolate *)HandleScope::Extend(param_1);
    }
    *(Isolate **)pIVar5 = pIVar3 + 8;
    *(ulong *)pIVar3 = uVar7;
  }
  else {
    pIVar3 = (Isolate *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  return pIVar3;
}

