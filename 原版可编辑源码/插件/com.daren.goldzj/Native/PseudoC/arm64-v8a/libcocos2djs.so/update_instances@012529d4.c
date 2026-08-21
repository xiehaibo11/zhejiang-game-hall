
/* v8::internal::WasmMemoryObject::update_instances(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSArrayBuffer>) */

void __thiscall
v8::internal::WasmMemoryObject::update_instances
          (WasmMemoryObject *this,Isolate *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  
  uVar6 = *(ulong *)this & 0xffffffff00000000;
  uVar2 = *(uint *)(*(ulong *)this + 0x13);
  if (uVar2 != *(uint *)(uVar6 + 0xa0)) {
    pIVar1 = param_1 + 0x95a0;
    uVar6 = uVar6 | uVar2;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
      uVar6 = *puVar3;
    }
    if (1 < *(int *)(uVar6 + 7)) {
      iVar8 = 0;
      lVar9 = 0;
      do {
        uVar2 = *(uint *)(uVar6 + (long)iVar8 + 0xb);
        if ((uVar2 != 3) && (((ulong)uVar2 & 3) == 3)) {
          uVar6 = (ulong)uVar2 & 0xfffffffffffffffd | uVar6 & 0xffffffff00000000;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)pIVar1;
            if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar4 + 1;
            *puVar4 = uVar6;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
          }
          FUN_012528e4(puVar4,param_3);
          uVar6 = *puVar3;
        }
        lVar9 = lVar9 + 1;
        iVar8 = iVar8 + 4;
      } while (lVar9 < *(int *)(uVar6 + 7) >> 1);
    }
  }
  uVar6 = *param_3;
  *(int *)(*(long *)this + 0xb) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar5 = *(ulong *)this;
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    lVar9 = uVar5 + 0xb;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,lVar9,uVar6);
      uVar5 = *(ulong *)this;
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      lVar9 = uVar5 + 0xb;
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,lVar9,uVar6);
      return;
    }
  }
  return;
}

