
/* void 
   std::__ndk1::__buffered_inplace_merge<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
   const&, v8::internal::wasm::WasmExport const&)#1}&,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >(std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
   const&, v8::internal::wasm::WasmExport const&)#1}&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >::value_type*) */

void std::__ndk1::
     __buffered_inplace_merge<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
               (int *param_1,int *param_2,int *param_3,long *param_4,long param_5,long param_6,
               int *param_7)

{
  uint uVar1;
  size_t __n;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_6 < param_5) {
    if (param_2 != param_3) {
      lVar3 = 0;
      do {
        uVar9 = *(undefined8 *)((long)param_2 + lVar3);
        ((undefined8 *)((long)param_7 + lVar3))[1] = ((undefined8 *)((long)param_2 + lVar3))[1];
        *(undefined8 *)((long)param_7 + lVar3) = uVar9;
        lVar3 = lVar3 + 0x10;
      } while ((long)param_3 - (long)param_2 != lVar3);
      if (lVar3 != 0) {
        piVar5 = (int *)((long)param_7 + lVar3);
        do {
          if (param_2 == param_1) {
            do {
              piVar6 = piVar5 + -2;
              uVar9 = *(undefined8 *)(piVar5 + -4);
              piVar5 = piVar5 + -4;
              *(undefined8 *)(param_3 + -2) = *(undefined8 *)piVar6;
              *(undefined8 *)(param_3 + -4) = uVar9;
              param_3 = param_3 + -4;
            } while (param_7 != piVar5);
            return;
          }
          uVar1 = piVar5[-3];
          piVar6 = param_2 + -4;
          piVar8 = piVar5 + -4;
          if (uVar1 == param_2[-3]) {
            iVar2 = *(int *)(*param_4 + 0x20);
            lVar3 = *(long *)(*param_4 + 8);
            iVar2 = memcmp((void *)(lVar3 + (ulong)(uint)(*piVar8 - iVar2)),
                           (void *)(lVar3 + (ulong)(uint)(*piVar6 - iVar2)),(ulong)uVar1);
            if (-1 < iVar2) goto LAB_015f4cb0;
LAB_015f4c40:
            uVar10 = *(undefined8 *)(param_2 + -2);
            uVar9 = *(undefined8 *)piVar6;
          }
          else {
            if (uVar1 < (uint)param_2[-3]) goto LAB_015f4c40;
LAB_015f4cb0:
            uVar10 = *(undefined8 *)(piVar5 + -2);
            uVar9 = *(undefined8 *)piVar8;
            piVar6 = param_2;
            piVar5 = piVar8;
          }
          *(undefined8 *)(param_3 + -2) = uVar10;
          *(undefined8 *)(param_3 + -4) = uVar9;
          param_3 = param_3 + -4;
          param_2 = piVar6;
        } while (piVar5 != param_7);
      }
    }
  }
  else if (param_1 != param_2) {
    lVar3 = 0;
    do {
      uVar9 = *(undefined8 *)((long)param_1 + lVar3);
      ((undefined8 *)((long)param_7 + lVar3))[1] = ((undefined8 *)((long)param_1 + lVar3))[1];
      *(undefined8 *)((long)param_7 + lVar3) = uVar9;
      lVar3 = lVar3 + 0x10;
    } while ((long)param_2 - (long)param_1 != lVar3);
    if (lVar3 != 0) {
      lVar7 = *param_4;
      piVar5 = param_7;
      do {
        if (param_2 == param_3) {
          __n = (long)param_7 + (lVar3 - (long)piVar5);
          if (__n == 0) {
            return;
          }
          memmove(param_1,piVar5,__n);
          return;
        }
        uVar1 = param_2[1];
        if (uVar1 == piVar5[1]) {
          iVar2 = *(int *)(lVar7 + 0x20);
          lVar4 = *(long *)(lVar7 + 8);
          iVar2 = memcmp((void *)(lVar4 + (ulong)(uint)(*param_2 - iVar2)),
                         (void *)(lVar4 + (ulong)(uint)(*piVar5 - iVar2)),(ulong)uVar1);
          if (-1 < iVar2) goto LAB_015f4d5c;
LAB_015f4cfc:
          piVar6 = param_2 + 4;
          uVar10 = *(undefined8 *)(param_2 + 2);
          uVar9 = *(undefined8 *)param_2;
        }
        else {
          if (uVar1 < (uint)piVar5[1]) goto LAB_015f4cfc;
LAB_015f4d5c:
          uVar10 = *(undefined8 *)(piVar5 + 2);
          uVar9 = *(undefined8 *)piVar5;
          piVar5 = piVar5 + 4;
          piVar6 = param_2;
        }
        *(undefined8 *)(param_1 + 2) = uVar10;
        *(undefined8 *)param_1 = uVar9;
        param_2 = piVar6;
        param_1 = param_1 + 4;
      } while ((long)piVar5 - (long)param_7 != lVar3);
    }
  }
  return;
}

