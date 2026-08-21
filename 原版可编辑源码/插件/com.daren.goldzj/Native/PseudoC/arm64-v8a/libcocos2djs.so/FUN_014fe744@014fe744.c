
undefined8 FUN_014fe744(Isolate *param_1,ulong *param_2)

{
  ushort uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(ushort *)(uVar4 + 7);
  if (uVar1 != 0x41b) {
    if (*(int *)(*(long *)(param_1 + 0xea8) + 0xb) != 2) {
      return 0;
    }
    if (0x3f < uVar1) {
      if (uVar1 < 0xaa) {
        return 0;
      }
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xf);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(param_1 + 0x95a0);
        if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
          puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar4;
      }
      else {
        puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
        uVar4 = *puVar2;
      }
      uVar4 = v8::internal::Isolate::IsInAnyContext(param_1,uVar4,0x38);
      if ((uVar4 & 1) == 0) {
        uVar3 = v8::internal::Isolate::IsInAnyContext(param_1,*puVar2,0x3f);
        return uVar3;
      }
    }
  }
  return 1;
}

