
/* v8::internal::wasm::InstanceBuilder::InitializeExceptions(v8::internal::Handle<v8::internal::WasmInstanceObject>)
    */

void __thiscall
v8::internal::wasm::InstanceBuilder::InitializeExceptions(InstanceBuilder *this,ulong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  
  pIVar3 = *(Isolate **)this;
  uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x9b);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar8);
    uVar8 = *puVar4;
  }
  if (1 < *(int *)(uVar8 + 3)) {
    iVar10 = 0;
    lVar7 = 0;
    do {
      uVar2 = *(uint *)((long)iVar10 + 7 + uVar8);
      if (((uVar2 & 1) != 0) && (uVar2 == *(uint *)(*(Isolate **)this + 0xa0))) {
        puVar5 = (ulong *)WasmExceptionTag::New(*(Isolate **)this,(int)lVar7);
        uVar9 = *puVar4;
        uVar8 = *puVar5;
        puVar1 = (undefined4 *)(uVar9 + (long)iVar10 + 7);
        *puVar1 = (int)uVar8;
        if ((uVar8 & 1) != 0) {
          uVar6 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar6 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,puVar1,uVar8);
            uVar6 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar8);
          }
        }
      }
      uVar8 = *puVar4;
      lVar7 = lVar7 + 1;
      iVar10 = iVar10 + 4;
    } while (lVar7 < *(int *)(uVar8 + 3) >> 1);
  }
  return;
}

