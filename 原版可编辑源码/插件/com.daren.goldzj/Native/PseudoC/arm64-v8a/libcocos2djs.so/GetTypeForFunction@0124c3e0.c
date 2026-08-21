
/* v8::internal::wasm::GetTypeForFunction(v8::internal::Isolate*,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

undefined8 v8::internal::wasm::GetTypeForFunction(Isolate *param_1,Signature *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  undefined1 *puVar15;
  char *local_70;
  undefined8 uStack_68;
  
  puVar1 = (ulong *)Factory::NewFixedArray((Factory *)param_1,*(undefined4 *)(param_2 + 8),0);
  lVar9 = *(long *)param_2;
  lVar13 = *(long *)(param_2 + 8);
  if (lVar13 != 0) {
    iVar14 = 0;
    puVar15 = (undefined1 *)(*(long *)(param_2 + 0x10) + lVar9);
    do {
      puVar2 = (ulong *)FUN_0124c6cc(param_1,*puVar15);
      uVar12 = *puVar1;
      uVar11 = *puVar2;
      *(int *)(uVar12 + (long)iVar14 + 7) = (int)uVar11;
      if ((uVar11 & 1) != 0) {
        uVar10 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        lVar9 = uVar12 + (long)iVar14 + 7;
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar12,lVar9,uVar11);
          uVar10 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar12,lVar9,uVar11);
        }
      }
      puVar15 = puVar15 + 1;
      lVar13 = lVar13 + -1;
      iVar14 = iVar14 + 4;
    } while (lVar13 != 0);
    lVar9 = *(long *)param_2;
  }
  puVar2 = (ulong *)Factory::NewFixedArray((Factory *)param_1,lVar9,0);
  lVar9 = *(long *)param_2;
  if (lVar9 != 0) {
    puVar15 = *(undefined1 **)(param_2 + 0x10);
    iVar14 = 0;
    do {
      puVar3 = (ulong *)FUN_0124c6cc(param_1,*puVar15);
      uVar12 = *puVar2;
      uVar11 = *puVar3;
      *(int *)(uVar12 + (long)iVar14 + 7) = (int)uVar11;
      if ((uVar11 & 1) != 0) {
        uVar10 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        lVar13 = uVar12 + (long)iVar14 + 7;
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar12,lVar13,uVar11);
          uVar10 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar12,lVar13,uVar11);
        }
      }
      puVar15 = puVar15 + 1;
      lVar9 = lVar9 + -1;
      iVar14 = iVar14 + 4;
    } while (lVar9 != 0);
  }
  uVar11 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) -
                                                                     1)) + 0x13)) + 499);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar11;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  uVar4 = Factory::NewJSObject((Factory *)param_1,puVar3,0);
  uVar5 = Factory::NewJSArrayWithElements(param_1,puVar1,3,*(int *)(*puVar1 + 3) >> 1,0);
  uVar6 = Factory::NewJSArrayWithElements(param_1,puVar2,3,*(int *)(*puVar2 + 3) >> 1,0);
  uStack_68 = __strlen_chk("parameters",0xb);
  local_70 = "parameters";
  uVar7 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  uStack_68 = __strlen_chk("results",8);
  local_70 = "results";
  uVar8 = Factory::InternalizeUtf8String((Factory *)param_1,(Vector *)&local_70);
  JSObject::AddProperty(param_1,uVar4,uVar7,uVar5,0);
  JSObject::AddProperty(param_1,uVar4,uVar8,uVar6,0);
  return uVar4;
}

