
/* v8::internal::wasm::WasmInterpreter::Thread::Reset() */

void __thiscall v8::internal::wasm::WasmInterpreter::Thread::Reset(Thread *this)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = *(ulong **)(this + 0x30);
  if (puVar4 == (ulong *)0x0) {
    pIVar5 = *(Isolate **)(this + 8);
    uVar8 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(**(ulong **)(this + 0x10) + 0x8b)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar8;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar8);
    }
    bVar3 = true;
    *(ulong **)(this + 0x30) = puVar4;
  }
  else {
    bVar3 = false;
  }
  uVar7 = *(undefined8 *)(this + 0x18);
  iVar2 = (*(int *)(this + 0x28) - (int)uVar7) * -0xf0f0f0f;
  if (0 < iVar2) {
    iVar6 = 0;
    lVar9 = (long)iVar2;
    uVar1 = *(uint *)(*puVar4 + 3);
    uVar8 = *puVar4 & 0xffffffff00000000;
    do {
      lVar9 = lVar9 + -1;
      *(undefined4 *)((uVar8 | uVar1) + 7 + (long)iVar6) = *(undefined4 *)(uVar8 + 0xa8);
      iVar6 = iVar6 + 4;
    } while (lVar9 != 0);
    uVar7 = *(undefined8 *)(this + 0x18);
  }
  *(undefined8 *)(this + 0x28) = uVar7;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0xc;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
  this[0x6c] = (Thread)0x0;
  if (bVar3) {
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}

