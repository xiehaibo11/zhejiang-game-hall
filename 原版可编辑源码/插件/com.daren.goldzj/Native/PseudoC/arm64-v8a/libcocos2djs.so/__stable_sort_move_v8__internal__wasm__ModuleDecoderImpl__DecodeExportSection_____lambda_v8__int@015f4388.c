
/* void 
   std::__ndk1::__stable_sort_move<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
   const&, v8::internal::wasm::WasmExport const&)#1}&,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >(std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
   const&, v8::internal::wasm::WasmExport const&)#1}&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >::value_type*) */

void std::__ndk1::
     __stable_sort_move<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
               (int *param_1,int *param_2,long *param_3,ulong param_4,undefined8 *param_5)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_4 == 0) {
    return;
  }
  if (param_4 != 2) {
    if (param_4 == 1) {
      uVar10 = *(undefined8 *)param_1;
      param_5[1] = *(undefined8 *)(param_1 + 2);
      *param_5 = uVar10;
      return;
    }
    if ((long)param_4 < 9) {
      __insertion_sort_move<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
                (param_1,param_2,param_5,param_3);
      return;
    }
    uVar7 = param_4 >> 1;
    piVar6 = param_1 + uVar7 * 4;
    __stable_sort<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
              (param_1,piVar6,param_3,uVar7,param_5,uVar7);
    __stable_sort<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
              (piVar6,param_2,param_3,param_4 - uVar7,param_5 + uVar7 * 2,param_4 - uVar7);
    piVar2 = piVar6;
    puVar3 = param_5;
    piVar9 = param_1;
    piVar8 = piVar6;
    if (uVar7 != 0) {
      do {
        if (piVar2 == param_2) {
          if (piVar9 == piVar6) {
            return;
          }
          lVar5 = 0;
          do {
            uVar10 = *(undefined8 *)((long)piVar9 + lVar5);
            ((undefined8 *)((long)puVar3 + lVar5))[1] = ((undefined8 *)((long)piVar9 + lVar5))[1];
            *(undefined8 *)((long)puVar3 + lVar5) = uVar10;
            lVar5 = lVar5 + 0x10;
          } while ((long)param_1 + (uVar7 * 0x10 - (long)piVar9) != lVar5);
          return;
        }
        uVar1 = piVar2[1];
        if (uVar1 == piVar9[1]) {
          iVar4 = *(int *)(*param_3 + 0x20);
          lVar5 = *(long *)(*param_3 + 8);
          iVar4 = memcmp((void *)(lVar5 + (ulong)(uint)(*piVar2 - iVar4)),
                         (void *)(lVar5 + (ulong)(uint)(*piVar9 - iVar4)),(ulong)uVar1);
          if (-1 < iVar4) goto LAB_015f4530;
LAB_015f44d0:
          piVar8 = piVar2 + 4;
          uVar11 = *(undefined8 *)(piVar2 + 2);
          uVar10 = *(undefined8 *)piVar2;
        }
        else {
          if (uVar1 < (uint)piVar9[1]) goto LAB_015f44d0;
LAB_015f4530:
          uVar11 = *(undefined8 *)(piVar9 + 2);
          uVar10 = *(undefined8 *)piVar9;
          piVar8 = piVar2;
          piVar9 = piVar9 + 4;
        }
        param_5 = puVar3 + 2;
        puVar3[1] = uVar11;
        *puVar3 = uVar10;
        piVar2 = piVar8;
        puVar3 = param_5;
      } while (piVar9 != piVar6);
    }
    for (; piVar8 != param_2; piVar8 = piVar8 + 4) {
      uVar10 = *(undefined8 *)piVar8;
      param_5[1] = *(undefined8 *)(piVar8 + 2);
      *param_5 = uVar10;
      param_5 = param_5 + 2;
    }
    return;
  }
  uVar1 = param_2[-3];
  piVar6 = param_2 + -4;
  if (uVar1 == param_1[1]) {
    iVar4 = *(int *)(*param_3 + 0x20);
    lVar5 = *(long *)(*param_3 + 8);
    iVar4 = memcmp((void *)(lVar5 + (ulong)(uint)(*piVar6 - iVar4)),
                   (void *)(lVar5 + (ulong)(uint)(*param_1 - iVar4)),(ulong)uVar1);
    if (iVar4 < 0) {
LAB_015f4460:
      uVar10 = *(undefined8 *)piVar6;
      param_5[1] = *(undefined8 *)(param_2 + -2);
      *param_5 = uVar10;
      uVar10 = *(undefined8 *)param_1;
      param_5[3] = *(undefined8 *)(param_1 + 2);
      param_5[2] = uVar10;
      return;
    }
  }
  else if (uVar1 < (uint)param_1[1]) goto LAB_015f4460;
  uVar10 = *(undefined8 *)param_1;
  param_5[1] = *(undefined8 *)(param_1 + 2);
  *param_5 = uVar10;
  uVar10 = *(undefined8 *)piVar6;
  param_5[3] = *(undefined8 *)(param_2 + -2);
  param_5[2] = uVar10;
  return;
}

