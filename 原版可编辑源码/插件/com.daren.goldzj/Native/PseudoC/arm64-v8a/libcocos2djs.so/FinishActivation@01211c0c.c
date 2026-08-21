
/* v8::internal::wasm::WasmInterpreter::Thread::FinishActivation(unsigned int) */

void v8::internal::wasm::WasmInterpreter::Thread::FinishActivation(uint param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  
  uVar3 = (ulong)param_1;
  puVar4 = *(ulong **)(uVar3 + 0x30);
  if (puVar4 == (ulong *)0x0) {
    pIVar5 = *(Isolate **)(uVar3 + 8);
    uVar10 = **(ulong **)(uVar3 + 0x10) & 0xffffffff00000000;
    uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(**(ulong **)(uVar3 + 0x10) + 0x8b)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar10;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar10);
    }
    bVar2 = true;
    *(ulong **)(uVar3 + 0x30) = puVar4;
  }
  else {
    bVar2 = false;
  }
  lVar8 = *(long *)(uVar3 + 0x80);
  lVar9 = *(long *)(uVar3 + 0x18);
  lVar7 = *(long *)(lVar8 + -8);
  iVar11 = ((int)*(undefined8 *)(uVar3 + 0x28) - (int)lVar9) * -0xf0f0f0f;
  iVar6 = (int)lVar7;
  if (0 < iVar11 - iVar6) {
    lVar8 = (long)iVar11 - (long)iVar6;
    uVar1 = *(uint *)(*puVar4 + 3);
    uVar10 = *puVar4 & 0xffffffff00000000;
    iVar6 = iVar6 << 2;
    do {
      lVar8 = lVar8 + -1;
      *(undefined4 *)((uVar10 | uVar1) + 7 + (long)iVar6) = *(undefined4 *)(uVar10 + 0xa8);
      iVar6 = iVar6 + 4;
    } while (lVar8 != 0);
    lVar9 = *(long *)(uVar3 + 0x18);
    lVar8 = *(long *)(uVar3 + 0x80);
  }
  *(long *)(uVar3 + 0x28) = lVar9 + lVar7 * 0x11;
  *(long *)(uVar3 + 0x80) = lVar8 + -0x10;
  if (bVar2) {
    *(undefined8 *)(uVar3 + 0x30) = 0;
  }
  return;
}

