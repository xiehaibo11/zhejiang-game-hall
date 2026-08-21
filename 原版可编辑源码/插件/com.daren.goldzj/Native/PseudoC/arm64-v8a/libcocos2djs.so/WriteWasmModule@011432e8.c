
/* v8::internal::ValueSerializer::WriteWasmModule(v8::internal::Handle<v8::internal::WasmModuleObject>)
    */

undefined8 __thiscall
v8::internal::ValueSerializer::WriteWasmModule(ValueSerializer *this,ulong *param_2)

{
  size_t sVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  Isolate *this_00;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  NativeModule *pNVar11;
  size_t local_68;
  void *local_60;
  undefined1 local_44;
  size_t local_28;
  
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)this,param_2);
    this_00 = *(Isolate **)this;
    if (*(int *)(this_00 + 0x2c20) != *(int *)(this_00 + 0xa8)) {
      Isolate::PromoteScheduledException(this_00);
      return 0;
    }
    if ((uVar4 & 0xff) != 0) {
      local_28 = CONCAT71(local_28._1_7_,0x77);
      lVar2 = *(long *)(this + 0x18);
      uVar8 = lVar2 + 1;
      if (*(ulong *)(this + 0x20) < uVar8) {
        local_68 = 0;
        uVar9 = *(ulong *)(this + 0x20) * 2;
        plVar3 = *(long **)(this + 8);
        if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
          uVar9 = uVar8;
        }
        sVar1 = uVar9 + 0x40;
        if (plVar3 == (long *)0x0) {
          pvVar5 = realloc(*(void **)(this + 0x10),sVar1);
          local_68 = sVar1;
        }
        else {
          pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))
                                     (plVar3,*(void **)(this + 0x10),sVar1,&local_68);
        }
        if (pvVar5 == (void *)0x0) {
          this[0x29] = (ValueSerializer)0x1;
          goto LAB_0114336c;
        }
        *(void **)(this + 0x10) = pvVar5;
        *(size_t *)(this + 0x20) = local_68;
      }
      else {
        pvVar5 = *(void **)(this + 0x10);
      }
      *(ulong *)(this + 0x18) = uVar8;
      *(undefined1 *)((long)pvVar5 + lVar2) = (undefined1)local_28;
LAB_0114336c:
      WriteVarint<unsigned_int>(this,(uint)(uVar4 >> 0x20));
      return 0x101;
    }
  }
  local_44 = 0x79;
  local_28 = CONCAT71(local_28._1_7_,0x57);
  lVar2 = *(long *)(this + 0x18);
  uVar4 = lVar2 + 1;
  if (*(ulong *)(this + 0x20) < uVar4) {
    local_68 = 0;
    uVar8 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    sVar1 = uVar8 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar5 = realloc(*(void **)(this + 0x10),sVar1);
      local_68 = sVar1;
    }
    else {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,*(void **)(this + 0x10),sVar1,&local_68)
      ;
    }
    if (pvVar5 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar5;
      *(size_t *)(this + 0x20) = local_68;
      goto LAB_011433a4;
    }
    this[0x29] = (ValueSerializer)0x1;
  }
  else {
    pvVar5 = *(void **)(this + 0x10);
LAB_011433a4:
    *(ulong *)(this + 0x18) = uVar4;
    *(undefined1 *)((long)pvVar5 + lVar2) = (undefined1)local_28;
  }
  lVar2 = *(long *)(this + 0x18);
  uVar4 = lVar2 + 1;
  if (*(ulong *)(this + 0x20) < uVar4) {
    local_68 = 0;
    uVar8 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    sVar1 = uVar8 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar5 = realloc(*(void **)(this + 0x10),sVar1);
      local_68 = sVar1;
    }
    else {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,*(void **)(this + 0x10),sVar1,&local_68)
      ;
    }
    if (pvVar5 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar5;
      *(size_t *)(this + 0x20) = local_68;
      goto LAB_011433c4;
    }
    this[0x29] = (ValueSerializer)0x1;
  }
  else {
    pvVar5 = *(void **)(this + 0x10);
LAB_011433c4:
    *(ulong *)(this + 0x18) = uVar4;
    *(undefined1 *)((long)pvVar5 + lVar2) = local_44;
  }
  pNVar11 = (NativeModule *)
            **(undefined8 **)
              (*(long *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 3) +
              0x18);
  puVar7 = *(undefined8 **)(pNVar11 + 0xe0);
  pvVar5 = (void *)*puVar7;
  sVar1 = puVar7[1];
  WriteVarint<unsigned_int>(this,(uint)sVar1);
  lVar2 = *(long *)(this + 0x18);
  uVar4 = lVar2 + sVar1;
  if (*(ulong *)(this + 0x20) < uVar4) {
    local_68 = 0;
    uVar8 = *(ulong *)(this + 0x20) * 2;
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar6 = realloc(*(void **)(this + 0x10),uVar8 + 0x40);
      local_68 = uVar8 + 0x40;
    }
    else {
      pvVar6 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar6 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar6;
      *(size_t *)(this + 0x20) = local_68;
      goto LAB_01143414;
    }
    this[0x29] = (ValueSerializer)0x1;
  }
  else {
    pvVar6 = *(void **)(this + 0x10);
LAB_01143414:
    *(ulong *)(this + 0x18) = uVar4;
    memcpy((void *)((long)pvVar6 + lVar2),pvVar5,sVar1);
  }
  wasm::WasmSerializer::WasmSerializer((WasmSerializer *)&local_68,pNVar11);
  uVar4 = wasm::WasmSerializer::GetSerializedNativeModuleSize();
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","std::numeric_limits<uint32_t>::max() >= module_size");
  }
  WriteVarint<unsigned_int>(this,(uint)uVar4);
  lVar2 = *(long *)(this + 0x18);
  uVar8 = lVar2 + uVar4;
  if (*(ulong *)(this + 0x20) < uVar8) {
    local_28 = 0;
    uVar9 = *(ulong *)(this + 0x20) * 2;
    plVar3 = *(long **)(this + 8);
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    sVar1 = uVar9 + 0x40;
    if (plVar3 == (long *)0x0) {
      pvVar5 = realloc(*(void **)(this + 0x10),sVar1);
      local_28 = sVar1;
    }
    else {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,*(void **)(this + 0x10),sVar1,&local_28)
      ;
    }
    if (pvVar5 != (void *)0x0) {
      *(void **)(this + 0x10) = pvVar5;
      *(size_t *)(this + 0x20) = local_28;
      goto LAB_01143468;
    }
    this[0x29] = (ValueSerializer)0x1;
LAB_01143488:
    ThrowDataCloneError(this,0x169,*(long *)this + 200);
  }
  else {
    pvVar5 = *(void **)(this + 0x10);
LAB_01143468:
    *(ulong *)(this + 0x18) = uVar8;
    uVar4 = wasm::WasmSerializer::SerializeNativeModule(&local_68,(long)pvVar5 + lVar2,uVar4);
    if ((uVar4 & 1) != 0) {
      if (this[0x29] == (ValueSerializer)0x0) {
        uVar10 = 0x101;
        goto joined_r0x011434a4;
      }
      goto LAB_01143488;
    }
  }
  uVar10 = 0;
joined_r0x011434a4:
  if (local_60 != (void *)0x0) {
    operator_delete(local_60);
  }
  return uVar10;
}

