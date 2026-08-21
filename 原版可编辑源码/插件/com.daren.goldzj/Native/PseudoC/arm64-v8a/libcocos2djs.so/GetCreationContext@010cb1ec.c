
/* v8::internal::JSReceiver::GetCreationContext() */

ulong * __thiscall v8::internal::JSReceiver::GetCreationContext(JSReceiver *this)

{
  uint *puVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  
  uVar5 = *(ulong *)this;
  pIVar3 = (Isolate *)(uVar5 & 0xffffffff00000000);
  uVar2 = *(uint *)(((ulong)pIVar3 | (ulong)*(uint *)(uVar5 - 1)) + 0x13);
  uVar6 = (ulong)pIVar3 | (ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    do {
      if (*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar6 + 0x13);
      uVar6 = (ulong)pIVar3 | (ulong)*puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  if ((uVar6 & 1) != 0) {
    pIVar8 = (Isolate *)(uVar6 & 0xffffffff00000000);
    uVar7 = (ulong)pIVar8 | 7;
    if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0x439) goto LAB_010cb294;
    if (*(short *)(uVar7 + *(uint *)(uVar6 - 1)) == 0x4e) {
      return (ulong *)0x0;
    }
  }
  uVar7 = (ulong)pIVar3 | 7;
  pIVar8 = pIVar3;
  if (*(ushort *)(uVar7 + *(uint *)(uVar5 - 1)) - 0x417 < 3) {
    uVar6 = (ulong)pIVar3 | (ulong)*(uint *)(uVar5 + 0xb);
  }
  else {
    uVar6 = uVar5;
    if (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) != 0x439) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","receiver.IsJSFunction()");
    }
  }
LAB_010cb294:
  uVar6 = (ulong)pIVar8 | (ulong)*(uint *)(uVar6 + 0xf);
  if (9 < *(ushort *)(uVar7 + *(uint *)(uVar6 - 1)) - 0x88) {
    return (ulong *)0x0;
  }
  uVar6 = (ulong)pIVar8 | (ulong)*(uint *)(((ulong)pIVar8 | (ulong)*(uint *)(uVar6 - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
    return puVar4;
  }
  puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
  return puVar4;
}

