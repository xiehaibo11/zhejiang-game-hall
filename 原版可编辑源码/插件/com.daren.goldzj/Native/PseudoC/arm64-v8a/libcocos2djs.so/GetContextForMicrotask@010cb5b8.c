
/* v8::internal::JSReceiver::GetContextForMicrotask(v8::internal::Handle<v8::internal::JSReceiver>)
    */

ulong * v8::internal::JSReceiver::GetContextForMicrotask(ulong *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  Isolate *pIVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  uVar3 = *param_1;
  pIVar6 = (Isolate *)(uVar3 & 0xffffffff00000000);
  puVar9 = (undefined8 *)((ulong)pIVar6 | 0x95b8);
  plVar7 = (long *)((ulong)pIVar6 | 0x95a0);
  plVar8 = (long *)((ulong)pIVar6 | 0x95a8);
LAB_010cb60c:
  do {
    uVar4 = uVar3 & 0xffffffff00000000;
    uVar5 = uVar4 | 7;
    if ((*(short *)(uVar5 + *(uint *)(uVar3 - 1)) != 0x438) &&
       (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) != 0xa9)) {
      if (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) != 0x439) {
        return (ulong *)0x0;
      }
      uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(uVar3 + 0xf)) - 1)) + 0x13);
      if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)*plVar7;
        if (puVar2 == (ulong *)*plVar8) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *plVar7 = (long)(puVar2 + 1);
        *puVar2 = uVar4;
        return puVar2;
      }
      puVar2 = (ulong *)CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar9,uVar4);
      return puVar2;
    }
    if (*(short *)(uVar5 + *(uint *)(uVar3 - 1)) == 0x438) {
      uVar3 = uVar4 | *(uint *)(uVar3 + 0xb);
      if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)*plVar7;
        if (puVar2 == (ulong *)*plVar8) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *plVar7 = (long)(puVar2 + 1);
        *puVar2 = uVar3;
        goto LAB_010cb60c;
      }
      puVar2 = (ulong *)CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar9,uVar3);
    }
    else {
      uVar1 = *(uint *)(uVar3 + 7);
      uVar4 = uVar4 | uVar1;
      if ((CanonicalHandleScope *)*puVar9 == (CanonicalHandleScope *)0x0) {
        puVar2 = (ulong *)*plVar7;
        if (puVar2 == (ulong *)*plVar8) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *plVar7 = (long)(puVar2 + 1);
        *puVar2 = uVar4;
        if ((uVar1 & 1) == 0) {
          return (ulong *)0x0;
        }
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar9,uVar4);
        uVar4 = *puVar2;
        if ((uVar4 & 1) == 0) {
          return (ulong *)0x0;
        }
      }
      if (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9) {
        return (ulong *)0x0;
      }
    }
    uVar3 = *puVar2;
  } while( true );
}

