
void FUN_010b2d14(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *extraout_x1;
  ulong uVar2;
  Isolate *pIVar3;
  
  FUN_010b4b90();
  uVar2 = *extraout_x1;
  pIVar3 = (Isolate *)(uVar2 & 0xffffffff00000000);
  uVar2 = (ulong)*(ushort *)(*(long *)(uVar2 + 0x27) + (ulong)*(uint *)(uVar2 + 0x2f) + param_3 * 2)
          << 1;
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    v8::internal::CanonicalHandleScope::Lookup
              (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar2);
  }
  return;
}

