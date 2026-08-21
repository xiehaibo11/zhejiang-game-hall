
void FUN_010bb9b8(undefined8 param_1,ulong *param_2,undefined4 param_3)

{
  byte bVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  pIVar2 = (Isolate *)(uVar4 & 0xffffffff00000000);
  bVar1 = *(byte *)(((ulong)pIVar2 | 10) + (ulong)*(uint *)(uVar4 - 1));
  if (bVar1 < 0x20) {
    v8::internal::Isolate::UpdateNoElementsProtectorOnSetElement(pIVar2,param_2);
    uVar4 = *param_2;
    pIVar2 = (Isolate *)(uVar4 & 0xffffffff00000000);
  }
  uVar4 = (ulong)pIVar2 | (ulong)*(uint *)(uVar4 + 7);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_010bcc50(param_2,puVar3,bVar1 >> 3,param_3);
}

