
/* WARNING: Removing unreachable block (ram,0x0124ec7c) */
/* WARNING: Removing unreachable block (ram,0x0124ecbc) */
/* WARNING: Removing unreachable block (ram,0x0124ec88) */
/* WARNING: Removing unreachable block (ram,0x0124ec94) */
/* WARNING: Removing unreachable block (ram,0x0124eca0) */
/* WARNING: Removing unreachable block (ram,0x0124eca8) */
/* WARNING: Removing unreachable block (ram,0x0124ecb4) */
/* WARNING: Removing unreachable block (ram,0x0124ecc0) */
/* v8::internal::WasmModuleObject::GetSourcePosition(v8::internal::Handle<v8::internal::WasmModuleObject>,
   unsigned int, unsigned int, bool) */

int v8::internal::WasmModuleObject::GetSourcePosition
              (ulong *param_1,uint param_2,uchar *param_3,uint param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong *puVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  WasmModule *pWVar23;
  Isolate *pIVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 *local_98;
  undefined8 *local_90;
  byte local_78;
  void *local_68;
  
  uVar11 = *param_1;
  pIVar24 = (Isolate *)(uVar11 & 0xffffffff00000000);
  pWVar23 = *(WasmModule **)
             (**(long **)(*(long *)(((ulong)pIVar24 | (ulong)*(uint *)(uVar11 + 0xb)) + 3) + 0x18) +
             200);
  iVar17 = (int)param_3;
  if (pWVar23[0x178] == (WasmModule)0x0) {
    iVar8 = wasm::GetWasmFunctionOffset(pWVar23,param_2);
    return iVar8 + iVar17;
  }
  uVar11 = (ulong)pIVar24 | (ulong)*(uint *)(uVar11 + 0x17);
  if (*(CanonicalHandleScope **)(pIVar24 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar24 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar24 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar24);
    }
    *(ulong **)(pIVar24 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar11;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar24 + 0x95b8),uVar11);
    uVar11 = *puVar9;
  }
  lVar13 = uVar11 + (long)(*(int *)(uVar11 + 3) >> 1);
  if (*(char *)(lVar13 + 6) == '\x01') goto LAB_0124ef54;
  wasm::DecodeAsmJsOffsets((wasm *)(uVar11 + 7),(uchar *)(lVar13 + 6),param_3);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  uVar11 = ((long)local_90 - (long)local_98 >> 3) * -0x5555555555555555;
  iVar8 = *(int *)(*(long *)(**(long **)(*(long *)((*param_1 & 0xffffffff00000000 |
                                                   (ulong)*(uint *)(*param_1 + 0xb)) + 3) + 0x18) +
                            200) + 0x3c);
  if ((int)uVar11 < 1) {
    uVar25 = 0;
  }
  else {
    uVar12 = uVar11 & 0xffffffff;
    if (uVar12 < 3) {
      lVar15 = 0;
      iVar18 = 0;
LAB_0124ed7c:
      lVar13 = uVar12 - lVar15;
      plVar16 = local_98 + lVar15 * 3 + 1;
      do {
        plVar2 = plVar16 + -1;
        lVar15 = *plVar16;
        lVar13 = lVar13 + -1;
        plVar16 = plVar16 + 3;
        iVar18 = iVar18 + (int)((ulong)(lVar15 - *plVar2) >> 2) * -0x55555555;
      } while (lVar13 != 0);
    }
    else {
      lVar15 = uVar12 - (uVar11 & 1);
      iVar19 = 0;
      iVar18 = 0;
      plVar16 = local_98 + 3;
      lVar13 = lVar15;
      do {
        lVar13 = lVar13 + -2;
        iVar19 = iVar19 + (int)((ulong)(plVar16[-2] - plVar16[-3]) >> 2) * -0x55555555;
        iVar18 = iVar18 + (int)((ulong)(plVar16[1] - *plVar16) >> 2) * -0x55555555;
        plVar16 = plVar16 + 6;
      } while (lVar13 != 0);
      iVar18 = iVar18 + iVar19;
      if ((uVar11 & 1) != 0) goto LAB_0124ed7c;
    }
    uVar25 = iVar18 * 0xc;
  }
  puVar9 = (ulong *)Factory::NewByteArray((Factory *)pIVar24,uVar25 | 1,1);
  *(undefined1 *)(*puVar9 + (long)(int)uVar25 + 7) = 1;
  uVar26 = *param_1;
  uVar12 = *puVar9;
  *(int *)(uVar26 + 0x17) = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar14 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar14 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar26,uVar26 + 0x17,uVar12);
      uVar14 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar26 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar26,uVar26 + 0x17,uVar12);
    }
  }
  if (0 < (int)uVar11) {
    uVar12 = 0;
    iVar18 = 0;
    lVar13 = *(long *)(**(long **)(*(long *)((*param_1 & 0xffffffff00000000 |
                                             (ulong)*(uint *)(*param_1 + 0xb)) + 3) + 0x18) + 200);
    do {
      piVar22 = (int *)local_98[uVar12 * 3];
      piVar4 = (int *)(local_98 + uVar12 * 3)[1];
      if (piVar22 != piVar4) {
        iVar5 = *(int *)(*(long *)(lVar13 + 0x88) + (uVar12 + (long)iVar8) * 0x20 + 0x10);
        iVar19 = iVar18 << 2;
        do {
          iVar18 = iVar18 + 3;
          *(int *)(*puVar9 + (long)iVar19 + 7) = *piVar22 + iVar5;
          *(int *)(*puVar9 + (long)(iVar19 + 4) + 7) = piVar22[1];
          piVar1 = piVar22 + 2;
          iVar3 = iVar19 + 8;
          piVar22 = piVar22 + 3;
          iVar19 = iVar19 + 0xc;
          *(int *)(*puVar9 + (long)iVar3 + 7) = *piVar1;
        } while (piVar22 != piVar4);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != (uVar11 & 0xffffffff));
  }
  if (local_98 != (undefined8 *)0x0) {
    if (local_98 != local_90) {
      pvVar10 = (void *)local_90[-3];
      puVar7 = local_90 + -3;
      while( true ) {
        puVar6 = puVar7;
        if (pvVar10 != (void *)0x0) {
          local_90[-2] = pvVar10;
          operator_delete(pvVar10);
        }
        if (local_98 == puVar6) break;
        pvVar10 = (void *)puVar6[-3];
        puVar7 = puVar6 + -3;
        local_90 = puVar6;
      }
    }
    operator_delete(local_98);
  }
LAB_0124ef54:
  uVar25 = 0;
  iVar8 = *(int *)(*puVar9 + 3);
  lVar13 = *puVar9 + 7;
  if (0x2f < iVar8) {
    uVar21 = (iVar8 >> 1) / 0xc;
    uVar20 = uVar21;
    do {
      uVar21 = uVar25 + (uVar21 >> 1);
      if (*(uint *)(lVar13 + (int)(uVar21 * 0xc)) <=
          (uint)(*(int *)(*(long *)(pWVar23 + 0x88) + (ulong)param_2 * 0x20 + 0x10) + iVar17)) {
        uVar25 = uVar21;
        uVar21 = uVar20;
      }
      uVar20 = uVar21;
      uVar21 = uVar20 - uVar25;
    } while (1 < (int)uVar21);
    uVar25 = uVar25 * 3;
  }
  iVar17 = 1;
  if ((param_4 & 1) != 0) {
    iVar17 = 2;
  }
  return *(int *)(lVar13 + (long)(int)(uVar25 + iVar17) * 4);
}

