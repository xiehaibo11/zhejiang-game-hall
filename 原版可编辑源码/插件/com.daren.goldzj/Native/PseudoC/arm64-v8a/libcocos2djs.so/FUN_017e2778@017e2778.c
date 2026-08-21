
void FUN_017e2778(long param_1)

{
  int *piVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *__dest;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  size_t __n;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  int local_58;
  undefined4 uStack_54;
  
  puVar8 = *(ulong **)(param_1 + 0x368);
  if (puVar8 != (ulong *)0x0) {
    piVar6 = (int *)puVar8[1];
    uVar11 = (*(long *)(param_1 + 0x1d0) - *(long *)(param_1 + 0x1c8) >> 2) * -0x5555555555555555;
    iVar7 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x10);
    iVar10 = (int)uVar11;
    if (piVar6 < (int *)puVar8[2]) {
      *piVar6 = iVar7;
      piVar6[1] = iVar10;
      piVar6[4] = 0;
      piVar6[5] = 0;
      piVar6[6] = 0;
      piVar6[7] = 0;
      piVar6[2] = 0;
      piVar6[3] = 0;
      puVar8[1] = puVar8[1] + 0x20;
    }
    else {
      piVar12 = (int *)*puVar8;
      lVar13 = (long)piVar6 - (long)piVar12 >> 5;
      uVar2 = lVar13 + 1;
      if (uVar2 >> 0x3b != 0) goto LAB_017e2a30;
      lVar4 = (long)puVar8[2] - (long)piVar12;
      uVar9 = lVar4 >> 4;
      if (uVar2 <= uVar9) {
        uVar2 = uVar9;
      }
      if (0x3fffffffffffffe < (ulong)(lVar4 >> 5)) {
        uVar2 = 0x7ffffffffffffff;
      }
      if (uVar2 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar2 >> 0x3b != 0) goto LAB_017e2a30;
        pvVar3 = operator_new(uVar2 << 5);
      }
      piVar1 = (int *)((long)pvVar3 + lVar13 * 0x20);
      pvVar3 = (void *)((long)pvVar3 + uVar2 * 0x20);
      *piVar1 = iVar7;
      piVar1[1] = iVar10;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      if (piVar6 == piVar12) {
        *puVar8 = (ulong)piVar1;
        puVar8[1] = (ulong)(piVar1 + 8);
        puVar8[2] = (ulong)pvVar3;
      }
      else {
        lVar13 = 0;
        do {
          uVar5 = *(undefined8 *)((long)piVar6 + lVar13 + -0x20);
          *(undefined8 *)((long)piVar1 + lVar13 + -0x10) = 0;
          *(undefined8 *)((long)piVar1 + lVar13 + -8) = 0;
          lVar4 = lVar13 + -0x20;
          *(undefined8 *)((long)piVar1 + lVar13 + -0x20) = uVar5;
          *(undefined8 *)((long)piVar1 + lVar13 + -0x18) = 0;
          *(undefined8 *)((long)piVar1 + lVar13 + -0x18) =
               *(undefined8 *)((long)piVar6 + lVar13 + -0x18);
          *(undefined8 *)((long)piVar1 + lVar13 + -0x10) =
               *(undefined8 *)((long)piVar6 + lVar13 + -0x10);
          *(undefined8 *)((long)piVar1 + lVar13 + -8) = *(undefined8 *)((long)piVar6 + lVar13 + -8);
          *(undefined8 *)((long)piVar6 + lVar13 + -0x18) = 0;
          *(undefined8 *)((long)piVar6 + lVar13 + -0x10) = 0;
          *(undefined8 *)((long)piVar6 + lVar13 + -8) = 0;
          lVar13 = lVar4;
        } while ((long)piVar12 - (long)piVar6 != lVar4);
        piVar6 = (int *)*puVar8;
        piVar12 = (int *)puVar8[1];
        *puVar8 = (long)piVar1 + lVar4;
        puVar8[1] = (ulong)(piVar1 + 8);
        puVar8[2] = (ulong)pvVar3;
        while (piVar1 = piVar12, piVar1 != piVar6) {
          pvVar3 = *(void **)(piVar1 + -6);
          piVar12 = piVar1 + -8;
          if (pvVar3 != (void *)0x0) {
            *(void **)(piVar1 + -4) = pvVar3;
            operator_delete(pvVar3);
          }
        }
      }
      if (piVar6 != (int *)0x0) {
        operator_delete(piVar6);
      }
    }
    uVar9 = puVar8[1];
    local_68 = (undefined8 *)0x0;
    local_60 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
    uVar2 = *(long *)(uVar9 - 0x10) - *(long *)(uVar9 - 0x18);
    if (uVar2 == 0) {
      __dest = (undefined8 *)0x0;
    }
    else {
      if ((ulong)((long)uVar2 >> 3) >> 0x3d != 0) {
LAB_017e2a30:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar2);
      local_60 = __dest + ((long)uVar2 >> 3);
      __n = *(long *)(uVar9 - 0x10) - (long)*(void **)(uVar9 - 0x18);
      local_68 = __dest;
      local_70 = __dest;
      if (0 < (long)__n) {
        memcpy(__dest,*(void **)(uVar9 - 0x18),__n);
        local_68 = (undefined8 *)((long)__dest + __n);
      }
    }
    if (0 < iVar10) {
      iVar7 = 0;
      lVar13 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x1c8) + lVar13) == '\x02') {
          uStack_54 = *(undefined4 *)(*(long *)(param_1 + 0x1c8) + lVar13 + 4);
          local_58 = iVar7;
          if (local_68 < local_60) {
            *local_68 = CONCAT44(uStack_54,iVar7);
            local_68 = local_68 + 1;
          }
          else {
            std::__ndk1::
            vector<v8::internal::wasm::DebugSideTable::Entry::Constant,std::__ndk1::allocator<v8::internal::wasm::DebugSideTable::Entry::Constant>>
            ::__push_back_slow_path<v8::internal::wasm::DebugSideTable::Entry::Constant>
                      ((vector<v8::internal::wasm::DebugSideTable::Entry::Constant,std::__ndk1::allocator<v8::internal::wasm::DebugSideTable::Entry::Constant>>
                        *)&local_70,(Constant *)&local_58);
          }
        }
        lVar13 = lVar13 + 0xc;
        iVar7 = iVar7 + 1;
        __dest = local_70;
      } while (((uVar11 & 0xffffffff) + (uVar11 & 0xffffffff) * 2) * 4 - lVar13 != 0);
    }
    if (__dest != (undefined8 *)0x0) {
      local_68 = __dest;
      operator_delete(__dest);
    }
  }
  return;
}

