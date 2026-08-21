
ulong FUN_0147f77c(Isolate *param_1,undefined4 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
  }
  switch(param_2) {
  case 0:
    uVar2 = *puVar1;
    puVar3 = (uint *)(uVar2 + 0x34f);
    break;
  case 1:
    uVar2 = *puVar1;
    puVar3 = (uint *)(uVar2 + 0x353);
    break;
  case 2:
    uVar2 = *puVar1;
    puVar3 = (uint *)(uVar2 + 0x357);
    break;
  case 3:
    uVar2 = *puVar1;
    puVar3 = (uint *)(uVar2 + 0x35b);
    break;
  case 4:
    uVar2 = *puVar1;
    puVar3 = (uint *)(uVar2 + 0xeb);
    break;
  case 5:
    uVar2 = *puVar1;
    puVar3 = (uint *)(uVar2 + 0xf7);
    break;
  default:
    return 0;
  }
  return uVar2 & 0xffffffff00000000 | (ulong)*puVar3;
}

