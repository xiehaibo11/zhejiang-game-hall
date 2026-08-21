
/* v8::internal::ApiNatives::CreateApiFunction(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NativeContext>,
   v8::internal::Handle<v8::internal::FunctionTemplateInfo>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::InstanceType,
   v8::internal::MaybeHandle<v8::internal::Name>) */

ulong * v8::internal::ApiNatives::CreateApiFunction
                  (Isolate *param_1,undefined8 param_2,ulong *param_3,ulong *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  Isolate *pIVar1;
  int iVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  
  uVar3 = FunctionTemplateInfo::GetOrCreateSharedFunctionInfo(param_1,param_3,param_6);
  puVar4 = (ulong *)Factory::NewFunctionFromSharedFunctionInfo((Factory *)param_1,uVar3,param_2,1);
  if ((*(uint *)(*param_3 + 0x2b) >> 4 & 1) != 0) {
    return puVar4;
  }
  pIVar1 = param_1 + 0x95a0;
  if ((*(uint *)(*param_3 + 0x2b) >> 3 & 1) != 0) {
    uVar9 = *puVar4;
    uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar11 = *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) +
                                         0x13)) + 0x2b7);
    uVar7 = uVar7 | uVar11;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      uVar7 = *puVar5;
      uVar11 = (uint)uVar7;
    }
    if (uVar11 == 0) {
      *(undefined4 *)(uVar9 - 1) = 0;
      uVar7 = *param_4;
      iVar12 = (int)uVar7;
      goto joined_r0x0147ea54;
    }
    Heap::VerifyObjectLayoutChange((Heap *)(uVar9 & 0xffffffff00000000 | 0x8850),uVar9,uVar7);
    *(int *)(uVar9 - 1) = (int)uVar7;
    if (((uVar7 & 1) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar9,0,uVar7);
    }
  }
  uVar7 = *param_4;
  iVar12 = (int)uVar7;
joined_r0x0147ea54:
  if (((uVar7 & 1) == 0) || (iVar12 != *(int *)(param_1 + 0xa8))) {
    uVar9 = *param_3 & 0xffffffff00000000;
    uVar11 = *(uint *)(*param_3 + 0x23);
    uVar7 = *(ulong *)(uVar9 + 0xa0);
    if (uVar11 != (uint)uVar7) {
      uVar7 = (ulong)*(uint *)((uVar9 | uVar11) + 7);
    }
    if (((uVar7 & 1) != 0) && ((int)uVar7 == *(int *)(param_1 + 0xa0))) {
      JSObject::AddProperty(param_1,param_4,param_1 + 0x5d0,puVar4,2);
    }
  }
  else {
    param_4 = (ulong *)Factory::NewFunctionPrototype((Factory *)param_1,puVar4);
  }
  uVar9 = *param_3 & 0xffffffff00000000;
  uVar11 = *(uint *)(*param_3 + 0x23);
  uVar10 = *(ulong *)(uVar9 + 0xa0);
  uVar7 = uVar10;
  if (uVar11 != (uint)uVar10) {
    uVar7 = (ulong)*(uint *)((uVar9 | uVar11) + 0x17);
  }
  if (((uVar7 & 1) == 0) || ((int)uVar7 != *(int *)(param_1 + 0xa0))) {
    if (uVar11 != (uint)uVar10) {
      uVar10 = uVar9 | *(uint *)((uVar9 | uVar11) + 0x17);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar10;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
      uVar10 = *puVar5;
    }
    iVar12 = (*(uint *)(uVar10 + 0x1b) & 0x7ffffffc) << 1;
    uVar11 = *(uint *)(uVar10 + 0x1b) >> 1 & 1;
  }
  else {
    uVar11 = 0;
    iVar12 = 0;
  }
  iVar2 = JSObject::GetHeaderSize(param_5,0);
  plVar6 = (long *)Factory::NewMap((Factory *)param_1,param_5,iVar2 + iVar12,3,0);
  JSFunction::SetInitialMap(puVar4,plVar6,param_4);
  uVar7 = *param_3;
  if ((*(byte *)(uVar7 + 0x2b) >> 1 & 1) != 0) {
    uVar9 = *(ulong *)((uVar7 & 0xffffffff00000000) + 0xa0);
    if (*(uint *)(uVar7 + 0x23) != (uint)uVar9) {
      uVar9 = (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x23)) + 0x1b)
      ;
    }
    if (((uVar9 & 1) != 0) && ((int)uVar9 == *(int *)(param_1 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!obj->GetInstanceCallHandler().IsUndefined(isolate)");
    }
    *(byte *)(*plVar6 + 9) = *(byte *)(*plVar6 + 9) | 0x10;
    uVar7 = *param_3;
  }
  if ((*(byte *)(uVar7 + 0x2b) >> 2 & 1) != 0) {
    *(byte *)(*plVar6 + 9) = *(byte *)(*plVar6 + 9) | 0x20;
    *(uint *)(*plVar6 + 0xb) = *(uint *)(*plVar6 + 0xb) | 0x10000000;
    uVar7 = *param_3;
  }
  uVar9 = uVar7 & 0xffffffff00000000;
  puVar8 = (uint *)(uVar7 + 0x23);
  uVar7 = *(ulong *)(uVar9 + 0xa0);
  if (*puVar8 != (uint)uVar7) {
    uVar7 = (ulong)*(uint *)((uVar9 | *puVar8) + 0xf);
  }
  if (((uVar7 & 1) == 0) || ((int)uVar7 != *(int *)(param_1 + 0xa0))) {
    *(byte *)(*plVar6 + 9) = *(byte *)(*plVar6 + 9) | 4;
    *(uint *)(*plVar6 + 0xb) = *(uint *)(*plVar6 + 0xb) | 0x10000000;
    uVar9 = *param_3 & 0xffffffff00000000;
    puVar8 = (uint *)(*param_3 + 0x23);
  }
  uVar7 = *(ulong *)(uVar9 + 0xa0);
  if (*puVar8 != (uint)uVar7) {
    uVar7 = (ulong)*(uint *)((uVar9 | *puVar8) + 0x13);
  }
  if (((uVar7 & 1) == 0) || ((int)uVar7 != *(int *)(param_1 + 0xa0))) {
    *(byte *)(*plVar6 + 9) = *(byte *)(*plVar6 + 9) | 8;
    uVar9 = *param_3 & 0xffffffff00000000;
    puVar8 = (uint *)(*param_3 + 0x23);
  }
  uVar7 = *(ulong *)(uVar9 + 0xa0);
  if (*puVar8 != (uint)uVar7) {
    uVar7 = (ulong)*(uint *)((uVar9 | *puVar8) + 0x1b);
  }
  if (((uVar7 & 1) == 0) || ((int)uVar7 != *(int *)(param_1 + 0xa0))) {
    *(byte *)(*plVar6 + 9) = *(byte *)(*plVar6 + 9) | 2;
    *(byte *)(*plVar6 + 9) =
         ((*(byte *)(*param_3 + 0x2b) & 2) << 5 | *(byte *)(*plVar6 + 9) & 0xbf) ^ 0x40;
  }
  if (uVar11 != 0) {
    *(byte *)(*plVar6 + 10) = *(byte *)(*plVar6 + 10) | 2;
  }
  return puVar4;
}

