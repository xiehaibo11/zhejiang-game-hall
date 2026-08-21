
/* v8::internal::ProfilerListener::AttachDeoptInlinedFrames(v8::internal::Code,
   v8::internal::CodeDeoptEventRecord*) */

void __thiscall
v8::internal::ProfilerListener::AttachDeoptInlinedFrames
          (ProfilerListener *this,ulong param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  void *pvVar11;
  int iVar12;
  ulong uVar13;
  uint *puVar14;
  Isolate *pIVar15;
  uint *local_c0;
  uint *local_b8;
  RelocIterator aRStack_a8 [24];
  char local_90;
  uint local_88;
  char local_70;
  ulong local_68;
  
  pIVar15 = *(Isolate **)(this + 8);
  uVar2 = *(undefined8 *)(pIVar15 + 0x95a0);
  lVar4 = *(long *)(pIVar15 + 0x95a8);
  *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + 1;
  pIVar9 = *(Isolate **)(this + 8);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar10 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar10 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
    *puVar10 = param_2;
  }
  else {
    puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),param_2);
  }
  uVar6 = *(uint *)(param_3 + 0x18);
  local_68 = 0;
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  RelocIterator::RelocIterator(aRStack_a8,*puVar10,0x16000);
  do {
    if (local_70 != '\0') goto LAB_011b4870;
    if (local_90 == '\x10') {
      if (uVar6 == local_88) {
        pIVar9 = *(Isolate **)(this + 8);
        uVar3 = *(undefined8 *)(pIVar9 + 0x95a0);
        lVar5 = *(long *)(pIVar9 + 0x95a8);
        *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
        SourcePosition::InliningStack(&local_c0,&local_68,puVar10);
        puVar8 = local_b8;
        uVar13 = (long)local_b8 - (long)local_c0 >> 1;
        if ((ulong)((long)local_b8 - (long)local_c0 >> 5) >> 0x3c != 0) {
          uVar13 = 0xffffffffffffffff;
        }
        pvVar11 = operator_new__(uVar13);
        if (puVar8 == local_c0) {
          iVar12 = 0;
        }
        else {
          iVar12 = 0;
          puVar14 = local_c0;
          do {
            uVar6 = *puVar14 >> 1 & 0x3fffffff;
            if ((uVar6 != 0) && (*(long **)(puVar14 + 4) != (long *)0x0)) {
              piVar1 = (int *)((long)pvVar11 + (long)iVar12 * 0x10);
              iVar12 = iVar12 + 1;
              iVar7 = *(int *)(**(long **)(puVar14 + 4) + 0x1f);
              *(ulong *)(piVar1 + 2) = (ulong)(uVar6 - 1);
              *piVar1 = iVar7 >> 1;
            }
            puVar14 = puVar14 + 8;
          } while (puVar8 != puVar14);
        }
        *(void **)(param_3 + 0x30) = pvVar11;
        *(int *)(param_3 + 0x38) = iVar12;
        if (local_c0 != (uint *)0x0) {
          local_b8 = local_c0;
          operator_delete(local_c0);
        }
        if (pIVar9 != (Isolate *)0x0) {
          *(undefined8 *)(pIVar9 + 0x95a0) = uVar3;
          *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
          if (*(long *)(pIVar9 + 0x95a8) != lVar5) {
            *(long *)(pIVar9 + 0x95a8) = lVar5;
            HandleScope::DeleteExtensions(pIVar9);
          }
        }
LAB_011b4870:
        if (pIVar15 != (Isolate *)0x0) {
          *(undefined8 *)(pIVar15 + 0x95a0) = uVar2;
          *(int *)(pIVar15 + 0x95b0) = *(int *)(pIVar15 + 0x95b0) + -1;
          if (*(long *)(pIVar15 + 0x95a8) != lVar4) {
            *(long *)(pIVar15 + 0x95a8) = lVar4;
            HandleScope::DeleteExtensions(pIVar15);
          }
        }
        return;
      }
    }
    else if (local_90 == '\r') {
      uVar13 = (ulong)local_88;
      RelocIterator::next(aRStack_a8);
      local_68 = (long)((uVar13 << 0x20) + 0x100000000) >> 0x1f & 0xffff80007fffffffU |
                 (long)(((ulong)local_88 << 0x20) + 0x100000000) >> 1;
    }
    RelocIterator::next(aRStack_a8);
  } while( true );
}

