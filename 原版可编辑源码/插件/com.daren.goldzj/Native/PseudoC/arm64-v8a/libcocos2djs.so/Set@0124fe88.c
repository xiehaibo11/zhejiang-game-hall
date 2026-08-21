
/* v8::internal::WasmTableObject::Set(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, unsigned int,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::WasmTableObject::Set(Isolate *param_1,ulong *param_2,int param_3,ulong *param_4)

{
  Isolate *pIVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_58;
  
  pIVar1 = param_1 + 0x95a0;
  uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar9;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  uVar3 = *(uint *)(*param_2 + 0x1b) >> 1 & 0xff;
  if ((uVar3 == 9) || (uVar3 == 6)) {
    uVar9 = *puVar4;
    uVar8 = *param_4;
    lVar6 = uVar9 + (long)(param_3 << 2);
    *(int *)(lVar6 + 7) = (int)uVar8;
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    lVar6 = lVar6 + 7;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,lVar6,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar7 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar9 & 0xfffffffffffc0000) + 8);
joined_r0x0124ff7c:
    if ((bVar2 & 0x18) == 0) {
      Heap_GenerationalBarrierSlow(uVar9,lVar6,uVar8);
      return;
    }
  }
  else {
    uVar9 = *param_4;
    if ((uVar9 & 1) == 0) {
LAB_0124ffb0:
      UpdateDispatchTables(param_1,param_2,param_3,param_4);
    }
    else {
      if ((int)uVar9 == *(int *)(param_1 + 0xb0)) {
        ClearDispatchTables(param_1,param_2,param_3);
        uVar9 = *puVar4;
        uVar8 = *(ulong *)(param_1 + 0xb0);
        lVar6 = uVar9 + (long)(param_3 << 2);
        *(int *)(lVar6 + 7) = (int)uVar8;
        if ((uVar8 & 1) == 0) {
          return;
        }
        uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        lVar6 = lVar6 + 7;
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,lVar6,uVar8);
          uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar7 & 0x18) == 0) {
          return;
        }
        bVar2 = *(byte *)((uVar9 & 0xfffffffffffc0000) + 8);
        goto joined_r0x0124ff7c;
      }
      uVar8 = uVar9 & 0xffffffff00000000;
      uVar7 = uVar8 | 7;
      if ((*(short *)(uVar7 + *(uint *)(uVar9 - 1)) == 0x439) &&
         ((*(uint *)((uVar8 | *(uint *)(uVar9 + 0x17)) + 0x17) & 0x3e) == 0x10)) {
        local_58 = uVar8 | *(uint *)(uVar9 + 0xb);
        uVar9 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_58);
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar9;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
        }
        local_58 = *param_4 & 0xffffffff00000000 | (ulong)*(uint *)(*param_4 + 0xb);
        lVar6 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_58);
        uVar9 = *puVar5 & 0xffffffff00000000;
        uVar3 = *(int *)(lVar6 + 0xf) >> 1;
        UpdateDispatchTables
                  (param_1,param_2,param_3,
                   *(undefined8 *)
                    (*(long *)(*(long *)(**(long **)(*(long *)((uVar9 | *(uint *)((uVar9 | *(uint *)
                                                  (*puVar5 + 0x6f)) + 0xb)) + 3) + 0x18) + 200) +
                              0x88) +
                    (-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5)),puVar5);
      }
      else {
        if ((*(short *)(uVar7 + *(uint *)(uVar9 - 1)) != 0x439) ||
           ((uVar3 = *(uint *)((uVar8 | *(uint *)(uVar9 + 0xb)) + 3), (uVar3 & 1) == 0 ||
            (*(short *)(uVar7 + *(uint *)((uVar8 | uVar3) - 1)) != 0x75)))) goto LAB_0124ffb0;
        UpdateDispatchTables(param_1,param_2,param_3,param_4);
      }
    }
    uVar8 = *puVar4;
    uVar9 = *param_4;
    lVar6 = uVar8 + (long)(param_3 << 2);
    *(int *)(lVar6 + 7) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar7 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      lVar6 = lVar6 + 7;
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,lVar6,uVar9);
        uVar7 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,lVar6,uVar9);
      }
    }
  }
  return;
}

