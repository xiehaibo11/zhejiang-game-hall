
/* void 
   std::__ndk1::__insertion_sort_move<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
   const&, v8::internal::wasm::WasmExport const&)#1}&,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >(std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >::value_type*,
   v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
   const&, v8::internal::wasm::WasmExport const&)#1}&) */

void std::__ndk1::
     __insertion_sort_move<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
               (int *param_1,int *param_2,int *param_3,long *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  
  if (param_1 != param_2) {
    uVar12 = *(undefined8 *)param_1;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_3 = uVar12;
    if (param_1 + 4 != param_2) {
      lVar10 = 0;
      piVar8 = param_1 + 4;
      piVar11 = param_3;
      do {
        piVar6 = piVar8;
        uVar3 = param_1[5];
        piVar1 = piVar11 + 4;
        piVar8 = piVar1;
        if (uVar3 == piVar11[1]) {
          iVar5 = *(int *)(*param_4 + 0x20);
          lVar7 = *(long *)(*param_4 + 8);
          iVar5 = memcmp((void *)(lVar7 + (ulong)(uint)(*piVar6 - iVar5)),
                         (void *)(lVar7 + (ulong)(uint)(*piVar11 - iVar5)),(ulong)uVar3);
          if (iVar5 < 0) {
LAB_015f4b28:
            *(undefined8 *)(piVar11 + 6) = *(undefined8 *)(piVar11 + 2);
            *(undefined8 *)piVar1 = *(undefined8 *)piVar11;
            piVar8 = param_3;
            lVar7 = lVar10;
            if (piVar11 != param_3) {
              do {
                uVar3 = param_1[5];
                uVar4 = *(uint *)((long)param_3 + lVar7 + -0xc);
                if (uVar3 == uVar4) {
                  iVar5 = *(int *)(*param_4 + 0x20);
                  lVar9 = *(long *)(*param_4 + 8);
                  iVar5 = memcmp((void *)(lVar9 + (ulong)(uint)(*piVar6 - iVar5)),
                                 (void *)(lVar9 + (ulong)(uint)(*(int *)((long)param_3 +
                                                                        lVar7 + -0x10) - iVar5)),
                                 (ulong)uVar3);
                  if (-1 < iVar5) {
                    piVar8 = (int *)((long)param_3 + lVar7);
                    break;
                  }
                }
                else {
                  piVar8 = piVar11;
                  if (uVar4 <= uVar3) break;
                }
                puVar2 = (undefined8 *)((long)param_3 + lVar7);
                piVar11 = piVar11 + -4;
                lVar7 = lVar7 + -0x10;
                puVar2[1] = puVar2[-1];
                *puVar2 = puVar2[-2];
                piVar8 = param_3;
              } while (lVar7 != 0);
            }
          }
        }
        else if (uVar3 < (uint)piVar11[1]) goto LAB_015f4b28;
        uVar12 = *(undefined8 *)piVar6;
        lVar10 = lVar10 + 0x10;
        *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar6 + 2);
        *(undefined8 *)piVar8 = uVar12;
        piVar8 = piVar6 + 4;
        param_1 = piVar6;
        piVar11 = piVar1;
      } while (piVar6 + 4 != param_2);
    }
  }
  return;
}

