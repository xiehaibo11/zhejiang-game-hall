
/* v8::internal::WasmGlobalObject::New(v8::internal::Isolate*,
   v8::internal::MaybeHandle<v8::internal::JSArrayBuffer>,
   v8::internal::MaybeHandle<v8::internal::FixedArray>, v8::internal::wasm::ValueType, int, bool) */

ulong * v8::internal::WasmGlobalObject::New
                  (Isolate *param_1,ulong *param_2,ulong *param_3,uint param_4,int param_5,
                  uint param_6)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  pIVar2 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar2;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    uVar6 = *puVar3;
  }
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 799);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar2;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  puVar3 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar3,0);
  *(undefined4 *)(*puVar3 + 0x17) = 0;
  *(uint *)(*puVar3 + 0x17) = *(uint *)(*puVar3 + 0x17) & 0xfffffe00 | (param_4 & 0xff) << 1;
  *(int *)(*puVar3 + 0x13) = param_5 << 1;
  uVar4 = 0x200;
  if ((param_6 & 1) == 0) {
    uVar4 = 0;
  }
  *(uint *)(*puVar3 + 0x17) = *(uint *)(*puVar3 + 0x17) & 0xfffffdfe | uVar4;
  iVar5 = 4;
  switch(param_4 & 0xff) {
  case 2:
  case 4:
    iVar5 = 8;
  case 1:
  case 3:
    uVar4 = iVar5 + param_5;
    break;
  case 5:
    uVar4 = param_5 + 0x10;
    break;
  case 6:
  case 7:
  case 9:
    if ((param_3 == (ulong *)0x0) &&
       (param_3 = (ulong *)Factory::NewFixedArray((Factory *)param_1,1,1), param_5 != 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","offset == 0");
    }
    uVar6 = *puVar3;
    uVar9 = *param_3;
    *(int *)(uVar6 + 0xf) = (int)uVar9;
    if ((uVar9 & 1) == 0) {
      return puVar3;
    }
    uVar8 = uVar9 & 0xfffffffffffc0000;
    uVar7 = *(ulong *)(uVar8 + 8);
    lVar1 = uVar6 + 0xf;
    uVar4 = (uint)uVar7;
    goto joined_r0x0125325c;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if ((param_2 == (ulong *)0x0) &&
     (param_2 = (ulong *)Factory::NewJSArrayBufferAndBackingStore
                                   ((Factory *)param_1,(ulong)uVar4,1,0), param_2 == (ulong *)0x0))
  {
    puVar3 = (ulong *)0x0;
  }
  else {
    uVar9 = *param_2;
    if (*(ulong *)(uVar9 + 0xb) < (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","offset + type_size <= untagged_buffer->byte_length()");
    }
    uVar6 = *puVar3;
    *(int *)(uVar6 + 0xb) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar8 = uVar9 & 0xfffffffffffc0000;
      uVar7 = *(ulong *)(uVar8 + 8);
      lVar1 = uVar6 + 0xb;
      uVar4 = (uint)uVar7;
joined_r0x0125325c:
      if ((uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,lVar1,uVar9);
        uVar7 = *(ulong *)(uVar8 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar9);
      }
    }
  }
  return puVar3;
}

