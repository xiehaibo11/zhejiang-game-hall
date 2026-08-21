
/* v8::internal::wasm::WasmInterpreter::Thread::StartActivation() */

ulong __thiscall v8::internal::wasm::WasmInterpreter::Thread::StartActivation(Thread *this)

{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  long lVar8;
  Zone *this_00;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (*(long *)(this + 0x30) == 0) {
    pIVar7 = *(Isolate **)(this + 8);
    uVar10 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
    uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(**(ulong **)(this + 0x10) + 0x8b)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar10;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar10);
    }
    bVar4 = true;
    *(ulong **)(this + 0x30) = puVar6;
  }
  else {
    bVar4 = false;
  }
  piVar2 = *(int **)(this + 0x80);
  lVar11 = (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f;
  iVar3 = (int)((ulong)(*(long *)(this + 0x40) - *(long *)(this + 0x38)) >> 3) * -0x55555555;
  uVar10 = (long)piVar2 - *(long *)(this + 0x78);
  if (piVar2 < *(int **)(this + 0x88)) {
    *piVar2 = iVar3;
    *(long *)(piVar2 + 2) = lVar11;
    *(long *)(this + 0x80) = *(long *)(this + 0x80) + 0x10;
  }
  else {
    lVar12 = (long)uVar10 >> 4;
    uVar1 = lVar12 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = (long)*(int **)(this + 0x88) - *(long *)(this + 0x78);
    uVar9 = lVar8 >> 3;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x3fffffe < (ulong)(lVar8 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x90);
      uVar9 = uVar1 * 0x10;
      lVar8 = *(long *)(this_00 + 0x10);
      if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - lVar8) ||
          uVar9 - (*(long *)(this_00 + 0x18) - lVar8) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar8 + uVar9;
      }
      else {
        lVar8 = Zone::NewExpand(this_00,uVar9);
      }
    }
    piVar2 = (int *)(lVar8 + lVar12 * 0x10);
    *piVar2 = iVar3;
    *(long *)(piVar2 + 2) = lVar11;
    lVar11 = *(long *)(this + 0x78);
    piVar5 = piVar2;
    for (lVar12 = *(long *)(this + 0x80); lVar12 != lVar11; lVar12 = lVar12 + -0x10) {
      uVar13 = *(undefined8 *)(lVar12 + -0x10);
      *(undefined8 *)(piVar5 + -2) = *(undefined8 *)(lVar12 + -8);
      *(undefined8 *)(piVar5 + -4) = uVar13;
      piVar5 = piVar5 + -4;
    }
    *(int **)(this + 0x78) = piVar5;
    *(int **)(this + 0x80) = piVar2 + 4;
    *(ulong *)(this + 0x88) = lVar8 + uVar1 * 0x10;
  }
  *(undefined4 *)(this + 0x58) = 0;
  if (bVar4) {
    *(undefined8 *)(this + 0x30) = 0;
  }
  return uVar10 >> 4;
}

