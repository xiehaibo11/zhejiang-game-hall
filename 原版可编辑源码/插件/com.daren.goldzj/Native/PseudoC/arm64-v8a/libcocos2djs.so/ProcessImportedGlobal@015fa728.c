
/* v8::internal::wasm::InstanceBuilder::ProcessImportedGlobal(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   int, int, v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::wasm::InstanceBuilder::ProcessImportedGlobal
          (InstanceBuilder *this,undefined8 param_2,undefined4 param_3,int param_4,
          undefined8 param_5,undefined8 param_6,ulong *param_7)

{
  WasmGlobal *pWVar1;
  WasmGlobal WVar2;
  bool bVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  ulong local_68;
  
  lVar9 = (long)param_4;
  lVar8 = *(long *)(*(long *)(this + 0x10) + 0x18);
  pWVar1 = (WasmGlobal *)(lVar8 + lVar9 * 0x20);
  if (((*pWVar1 == (WasmGlobal)0x2) && (((byte)this[8] >> 6 & 1) == 0)) &&
     ((uVar6 = *param_7, (uVar6 & 1) == 0 ||
      (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x433)))) {
    pcVar5 = "global import cannot have type i64";
    goto LAB_015fa8dc;
  }
  if (*(char *)(*(long *)(this + 0x10) + 0x178) != '\0') {
    uVar6 = *param_7;
    if ((uVar6 & 1) == 0) {
LAB_015fa7b4:
      bVar3 = true;
    }
    else {
      if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x439) {
        uVar6 = *(ulong *)(*(long *)this + 0x430);
        param_7 = (ulong *)(*(long *)this + 0x430);
        if ((uVar6 & 1) == 0) goto LAB_015fa7b4;
      }
      if ((0x43 < *(ushort *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 7)) ||
         (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x40))
      goto LAB_015fa86c;
      bVar3 = false;
    }
    if (*pWVar1 == (WasmGlobal)0x1) {
      if (!bVar3) {
        param_7 = (ulong *)Object::ConvertToInt32(*(undefined8 *)this,param_7);
      }
    }
    else if ((!bVar3) &&
            (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42)) {
      param_7 = (ulong *)Object::ConvertToNumberOrNumeric(*(undefined8 *)this,param_7,0);
    }
    if (param_7 == (ulong *)0x0) goto LAB_015faaac;
  }
LAB_015fa86c:
  local_68 = *param_7;
  if (((local_68 & 1) != 0) &&
     (*(short *)((local_68 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_68 - 1)) == 0x433)) {
    uVar4 = ProcessImportedWasmGlobalObject(this,param_2,param_3,param_5,param_6,pWVar1,param_7);
    return uVar4;
  }
  if (*(char *)(lVar8 + lVar9 * 0x20 + 1) != '\0') {
    pcVar5 = "imported mutable global must be a WebAssembly.Global object";
LAB_015fa8dc:
    ReportLinkError(this,pcVar5,param_3,param_5,param_6);
    return 0;
  }
  WVar2 = *pWVar1;
  uVar6 = local_68 & 1;
  if ((WVar2 != (WasmGlobal)0x6) && (WVar2 != (WasmGlobal)0x9)) {
    if (WVar2 != (WasmGlobal)0x7) {
      if (uVar6 == 0) {
        if (WVar2 != (WasmGlobal)0x2) {
          dVar10 = (double)((int)local_68 >> 1);
LAB_015faa08:
          WriteGlobalValue(this,pWVar1,dVar10);
          return 1;
        }
      }
      else if ((WVar2 != (WasmGlobal)0x2) &&
              (*(short *)((local_68 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_68 - 1)) ==
               0x42)) {
        dVar10 = *(double *)(local_68 + 3);
        goto LAB_015faa08;
      }
      if ((((uVar6 != 0) && (WVar2 == (WasmGlobal)0x2)) && ((*(uint *)(this + 8) >> 6 & 1) != 0)) &&
         (*(short *)((local_68 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_68 - 1)) == 0x41))
      {
        uVar4 = BigInt::AsInt64((BigInt *)&local_68,(bool *)0x0);
        if (*(long **)(this + 0x40) != (long *)0x0) {
          *(undefined8 *)
           (*(long *)(**(long **)(this + 0x40) + 0x13) + (long)*(int *)(lVar8 + lVar9 * 0x20 + 0x18)
           ) = uVar4;
          return 1;
        }
LAB_015faaac:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      pcVar5 = "global import must be a number or WebAssembly.Global object";
      goto LAB_015fa8dc;
    }
    if ((uVar6 == 0) || ((int)local_68 != *(int *)(*(long *)this + 0xb0))) {
      uVar6 = WasmExportedFunction::IsWasmExportedFunction(local_68);
      if ((uVar6 & 1) == 0) {
        pcVar5 = "imported funcref global must be null or an exported function";
        goto LAB_015fa8dc;
      }
      local_68 = *param_7;
      uVar6 = local_68 & 1;
    }
    else {
      uVar6 = 1;
    }
  }
  uVar7 = **(ulong **)(this + 0x48);
  lVar8 = uVar7 + (long)(*(int *)(lVar8 + lVar9 * 0x20 + 0x18) << 2);
  *(int *)(lVar8 + 7) = (int)local_68;
  if (uVar6 != 0) {
    uVar6 = *(ulong *)((local_68 & 0xfffffffffffc0000) + 8);
    lVar8 = lVar8 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,lVar8,local_68);
      uVar6 = *(ulong *)(local_68 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,lVar8,local_68);
      return 1;
    }
  }
  return 1;
}

