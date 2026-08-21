
bool FUN_0170e154(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (((*(short *)(uVar2 + 7) == 0x423) && (*(byte *)(uVar2 + 10) < 0x30)) &&
     (uVar3 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xf),
     *(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x423)) {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    }
    uVar2 = v8::internal::Isolate::IsAnyInitialArrayPrototype(param_1,puVar1);
    if ((uVar2 & 1) != 0) {
      return *(int *)(*(long *)(param_1 + 0xea8) + 0xb) == 2;
    }
  }
  return false;
}

