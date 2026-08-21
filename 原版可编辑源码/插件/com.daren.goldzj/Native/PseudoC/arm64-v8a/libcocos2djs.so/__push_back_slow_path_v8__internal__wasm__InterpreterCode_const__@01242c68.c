
/* void std::__ndk1::vector<v8::internal::wasm::InterpreterCode,
   v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>
   >::__push_back_slow_path<v8::internal::wasm::InterpreterCode
   const&>(v8::internal::wasm::InterpreterCode const&) */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
::__push_back_slow_path<v8::internal::wasm::InterpreterCode_const&>
          (vector<v8::internal::wasm::InterpreterCode,v8::internal::ZoneAllocator<v8::internal::wasm::InterpreterCode>>
           *this,InterpreterCode *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  Zone *pZVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  lVar14 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar14 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar1 < 0x1745d18) {
    lVar11 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar13 = lVar11 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar13) {
      uVar1 = uVar13;
    }
    if (0xba2e8a < (ulong)(lVar11 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0x1745d17;
    }
    if (uVar1 == 0) {
      lVar11 = 0;
    }
    else {
      pZVar6 = *(Zone **)(this + 0x18);
      uVar13 = uVar1 * 0x58;
      lVar11 = *(long *)(pZVar6 + 0x10);
      if (uVar13 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar11) ||
          uVar13 - (*(long *)(pZVar6 + 0x18) - lVar11) == 0) {
        *(ulong *)(pZVar6 + 0x10) = lVar11 + uVar13;
      }
      else {
        lVar11 = v8::internal::Zone::NewExpand(pZVar6,uVar13);
      }
    }
    puVar17 = (undefined8 *)(lVar11 + lVar14 * 8);
    *puVar17 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(param_1 + 8);
    pZVar6 = *(Zone **)(param_1 + 0x28);
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[4] = 0;
    puVar17[5] = pZVar6;
    uVar13 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (uVar13 != 0) {
      if (uVar13 >> 0x1f != 0) goto LAB_01242ed8;
      puVar7 = *(undefined1 **)(pZVar6 + 0x10);
      uVar8 = uVar13 + 7 & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar7) < uVar8) {
        puVar7 = (undefined1 *)v8::internal::Zone::NewExpand(pZVar6,uVar8);
      }
      else {
        *(undefined1 **)(pZVar6 + 0x10) = puVar7 + uVar8;
      }
      lVar9 = lVar11 + lVar14 * 8;
      plVar10 = (long *)(lVar9 + 0x18);
      *plVar10 = (long)puVar7;
      puVar17[2] = puVar7;
      *(undefined1 **)(lVar9 + 0x20) = puVar7 + uVar13;
      puVar4 = *(undefined1 **)(param_1 + 0x18);
      for (puVar12 = *(undefined1 **)(param_1 + 0x10); puVar12 != puVar4; puVar12 = puVar12 + 1) {
        *puVar7 = *puVar12;
        puVar7 = (undefined1 *)(*plVar10 + 1);
        *plVar10 = (long)puVar7;
      }
    }
    uVar19 = *(undefined8 *)(param_1 + 0x38);
    uVar18 = *(undefined8 *)(param_1 + 0x30);
    uVar21 = *(undefined8 *)(param_1 + 0x48);
    uVar20 = *(undefined8 *)(param_1 + 0x40);
    lVar14 = lVar11 + lVar14 * 8;
    *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(lVar14 + 0x38) = uVar19;
    *(undefined8 *)(lVar14 + 0x30) = uVar18;
    *(undefined8 *)(lVar14 + 0x48) = uVar21;
    *(undefined8 *)(lVar14 + 0x40) = uVar20;
    lVar14 = *(long *)this;
    lVar9 = *(long *)(this + 8);
    puVar2 = puVar17 + 0xb;
    lVar15 = lVar14;
    if (lVar9 != lVar14) {
      lVar15 = 0;
      do {
        lVar3 = lVar9 + lVar15;
        lVar16 = lVar15 + -0x58;
        *(undefined8 *)((long)puVar17 + lVar15 + -0x58) = *(undefined8 *)(lVar3 + -0x58);
        uVar5 = *(undefined4 *)(lVar3 + -0x50);
        *(undefined8 *)((long)puVar17 + lVar15 + -0x40) = 0;
        *(undefined8 *)((long)puVar17 + lVar15 + -0x38) = 0;
        *(undefined8 *)((long)puVar17 + lVar15 + -0x48) = 0;
        *(undefined4 *)((long)puVar17 + lVar15 + -0x50) = uVar5;
        *(undefined8 *)((long)puVar17 + lVar15 + -0x30) = *(undefined8 *)(lVar3 + -0x30);
        *(undefined8 *)((long)puVar17 + lVar15 + -0x48) = *(undefined8 *)(lVar3 + -0x48);
        *(undefined8 *)((long)puVar17 + lVar15 + -0x40) = *(undefined8 *)(lVar3 + -0x40);
        *(undefined8 *)((long)puVar17 + lVar15 + -0x38) = *(undefined8 *)(lVar3 + -0x38);
        uVar19 = *(undefined8 *)(lVar3 + -0x10);
        uVar18 = *(undefined8 *)(lVar3 + -0x18);
        uVar21 = *(undefined8 *)(lVar3 + -0x20);
        uVar20 = *(undefined8 *)(lVar3 + -0x28);
        *(undefined8 *)(lVar3 + -0x48) = 0;
        *(undefined8 *)(lVar3 + -0x40) = 0;
        *(undefined8 *)(lVar3 + -0x38) = 0;
        *(undefined8 *)((long)puVar17 + lVar15 + -8) = *(undefined8 *)(lVar3 + -8);
        *(undefined8 *)((long)puVar17 + lVar15 + -0x10) = uVar19;
        *(undefined8 *)((long)puVar17 + lVar15 + -0x18) = uVar18;
        *(undefined8 *)((long)puVar17 + lVar15 + -0x20) = uVar21;
        *(undefined8 *)((long)puVar17 + lVar15 + -0x28) = uVar20;
        lVar15 = lVar16;
      } while (lVar14 - lVar9 != lVar16);
      lVar14 = *(long *)this;
      puVar17 = (undefined8 *)((long)puVar17 + lVar16);
      lVar15 = *(long *)(this + 8);
    }
    *(undefined8 **)this = puVar17;
    *(undefined8 **)(this + 8) = puVar2;
    *(ulong *)(this + 0x10) = lVar11 + uVar1 * 0x58;
    while (lVar11 = lVar15, lVar11 != lVar14) {
      lVar15 = lVar11 + -0x58;
      if (*(long *)(lVar11 + -0x48) != 0) {
        *(long *)(lVar11 + -0x40) = *(long *)(lVar11 + -0x48);
      }
    }
    return;
  }
LAB_01242ed8:
                    /* WARNING: Subroutine does not return */
  abort();
}

