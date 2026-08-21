
/* v8::internal::WasmTableObject::Get(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, unsigned int) */

ulong * v8::internal::WasmTableObject::Get(Isolate *param_1,ulong *param_2,int param_3)

{
  long lVar1;
  Isolate *pIVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  pIVar2 = param_1 + 0x95a0;
  uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar2;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar5 + 1;
    *puVar5 = uVar10;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    uVar10 = *puVar5;
  }
  lVar1 = (long)(param_3 << 2) + 7;
  uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + lVar1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar2;
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  uVar4 = *(uint *)(*param_2 + 0x1b) >> 1 & 0xff;
  if ((uVar4 != 6) && (uVar4 != 9)) {
    uVar10 = *puVar6;
    if ((uVar10 & 1) != 0) {
      uVar9 = uVar10 & 0xffffffff00000000;
      uVar8 = uVar9 | 7;
      if ((*(short *)(uVar8 + *(uint *)(uVar10 - 1)) == 0x439) &&
         ((*(uint *)((uVar9 | *(uint *)(uVar10 + 0x17)) + 0x17) & 0x3e) == 0x10)) {
        return puVar6;
      }
      if (((*(short *)(uVar8 + *(uint *)(uVar10 - 1)) == 0x439) &&
          (uVar4 = *(uint *)((uVar9 | *(uint *)(uVar10 + 0xb)) + 3), (uVar4 & 1) != 0)) &&
         (*(short *)(uVar8 + *(uint *)((uVar9 | uVar4) - 1)) == 0x75)) {
        return puVar6;
      }
    }
    uVar10 = *puVar6;
    if ((uVar10 & 1) != 0) {
      uVar8 = uVar10 & 0xffffffff00000000;
      if (((*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x439) &&
          (uVar4 = *(uint *)((uVar8 | *(uint *)(uVar10 + 0xb)) + 3), (uVar4 & 1) != 0)) &&
         (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar4) - 1)) == 0x70)) {
        return puVar6;
      }
    }
    uVar10 = *puVar6;
    if (((uVar10 & 1) == 0) || ((int)uVar10 != *(int *)(param_1 + 0xb0))) {
      uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 3);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar2;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
      }
      puVar6 = (ulong *)WasmInstanceObject::GetOrCreateWasmExternalFunction
                                  (param_1,puVar7,*(int *)(*puVar6 + 7) >> 1);
      uVar8 = *puVar5;
      uVar10 = *puVar6;
      puVar3 = (undefined4 *)(uVar8 + lVar1);
      *puVar3 = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,puVar3,uVar10);
          uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,puVar3,uVar10);
        }
      }
    }
  }
  return puVar6;
}

