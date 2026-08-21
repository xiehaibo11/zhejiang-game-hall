
/* v8::internal::wasm::GetCustomSections(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmModuleObject>, v8::internal::Handle<v8::internal::String>,
   v8::internal::wasm::ErrorThrower*) */

ulong * v8::internal::wasm::GetCustomSections
                  (Factory *param_1,ulong *param_2,ulong *param_3,char *param_4)

{
  void *pvVar1;
  long lVar2;
  wasm *this;
  long *plVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong *local_90;
  ulong *local_88;
  ulong *puStack_80;
  void *local_78;
  void *local_70;
  long *local_48;
  
  puVar6 = *(undefined8 **)
            (**(long **)(*(long *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)
                                   ) + 3) + 0x18) + 0xe0);
  this = (wasm *)*puVar6;
  DecodeCustomSections(this,(uchar *)(this + puVar6[1]),(uchar *)param_3);
  local_88 = (ulong *)0x0;
  puStack_80 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
  pvVar1 = local_78;
  do {
    if (pvVar1 == local_70) {
      uVar11 = (long)local_88 - (long)local_90;
      puVar4 = (ulong *)Factory::NewJSArray(param_1,2,0,0,0,0);
      puVar5 = (ulong *)Factory::NewFixedArray(param_1,uVar11 >> 3 & 0xffffffff,0);
      JSObject::EnsureCanContainElements(puVar4,puVar5,*(int *)(*puVar5 + 3) >> 1,1);
      uVar9 = *puVar4;
      uVar8 = *puVar5;
      *(int *)(uVar9 + 7) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar9,uVar9 + 7,uVar8);
          uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar9,uVar9 + 7,uVar8);
        }
      }
      *(uint *)(*puVar4 + 0xb) = *(uint *)(*puVar5 + 3) & 0xfffffffe;
      *(int *)(*puVar4 + 0xb) = (int)(uVar11 >> 2);
      if (0 < (int)(uVar11 >> 3)) {
        iVar10 = 0;
        lVar12 = 0;
        do {
          uVar9 = *puVar5;
          uVar8 = **(ulong **)((long)local_90 + lVar12);
          *(int *)(uVar9 + (long)iVar10 + 7) = (int)uVar8;
          if ((uVar8 & 1) != 0) {
            uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
            lVar2 = uVar9 + (long)iVar10 + 7;
            if (((uint)uVar7 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar9,lVar2,uVar8);
              uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar9,lVar2,uVar8);
            }
          }
          lVar12 = lVar12 + 8;
          iVar10 = iVar10 + 4;
        } while ((uVar11 >> 3 & 0xffffffff) * 8 - lVar12 != 0);
      }
LAB_0124dba4:
      if (local_90 != (ulong *)0x0) {
        local_88 = local_90;
        operator_delete(local_90);
      }
      if (local_78 != (void *)0x0) {
        local_70 = local_78;
        operator_delete(local_78);
      }
      return puVar4;
    }
    puVar4 = (ulong *)WasmModuleObject::ExtractUtf8StringFromModuleBytes
                                (param_1,param_2,*(undefined8 *)((long)pvVar1 + 8));
    local_48 = (long *)*param_3;
    if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar8 = *puVar4;
    if (((int)uVar8 == (int)local_48) ||
       (((0x1f < *(ushort *)
                  (((ulong)local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)local_48 - 1)
                  ) ||
         (0x1f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) &&
        (uVar8 = String::SlowEquals((String *)&local_48), (uVar8 & 1) != 0)))) {
      plVar3 = (long *)Factory::NewJSArrayBufferAndBackingStore
                                 (param_1,*(undefined4 *)((long)pvVar1 + 0x14),0,0);
      if (plVar3 == (long *)0x0) {
        ErrorThrower::RangeError(param_4,"out of memory allocating custom section data");
        puVar4 = (ulong *)0x0;
        goto LAB_0124dba4;
      }
      memcpy(*(void **)(*plVar3 + 0x13),this + *(uint *)((long)pvVar1 + 0x10),
             (ulong)*(uint *)((long)pvVar1 + 0x14));
      local_48 = plVar3;
      if (local_88 < puStack_80) {
        *local_88 = (ulong)plVar3;
        local_88 = local_88 + 1;
      }
      else {
        std::__ndk1::
        vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
        ::__push_back_slow_path<v8::internal::Handle<v8::internal::Object>>
                  ((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                    *)&local_90,(Handle *)&local_48);
      }
    }
    pvVar1 = (void *)((long)pvVar1 + 0x18);
  } while( true );
}

