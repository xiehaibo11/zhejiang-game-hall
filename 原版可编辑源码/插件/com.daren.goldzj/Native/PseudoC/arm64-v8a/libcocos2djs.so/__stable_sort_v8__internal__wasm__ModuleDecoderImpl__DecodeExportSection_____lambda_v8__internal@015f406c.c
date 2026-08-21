
/* void 
   std::__ndk1::__stable_sort<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
   const&, v8::internal::wasm::WasmExport const&)#1}&,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >(std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>,
   v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
   const&, v8::internal::wasm::WasmExport const&)#1}&,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >::difference_type,
   std::__ndk1::iterator_traits<std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>
   >::value_type*, long) */

void std::__ndk1::
     __stable_sort<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
               (int *param_1,int *param_2,long *param_3,ulong param_4,int *param_5,long param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar3 = param_2[-3];
      piVar14 = param_2 + -4;
      if (uVar3 == param_1[1]) {
        iVar4 = *(int *)(*param_3 + 0x20);
        lVar6 = *(long *)(*param_3 + 8);
        iVar4 = memcmp((void *)(lVar6 + (ulong)(uint)(*piVar14 - iVar4)),
                       (void *)(lVar6 + (ulong)(uint)(*param_1 - iVar4)),(ulong)uVar3);
        if (-1 < iVar4) {
          return;
        }
      }
      else if ((uint)param_1[1] <= uVar3) {
        return;
      }
      uVar17 = *(undefined8 *)(param_1 + 2);
      uVar12 = *(undefined8 *)param_1;
      uVar16 = *(undefined8 *)piVar14;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)param_1 = uVar16;
      *(undefined8 *)(param_2 + -2) = uVar17;
      *(undefined8 *)piVar14 = uVar12;
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 4 != param_2)) {
        lVar6 = 0;
        piVar14 = param_1 + 4;
        piVar10 = param_1;
        do {
          piVar13 = piVar14;
          uVar3 = piVar10[5];
          uVar12 = *(undefined8 *)(piVar10 + 6);
          iVar4 = *piVar13;
          piVar14 = param_1;
          piVar10 = piVar13;
          lVar15 = lVar6;
          if (piVar13 != param_1) {
            do {
              uVar2 = *(uint *)((long)param_1 + lVar15 + 4);
              if (uVar3 == uVar2) {
                iVar5 = *(int *)(*param_3 + 0x20);
                lVar7 = *(long *)(*param_3 + 8);
                iVar5 = memcmp((void *)(lVar7 + (ulong)(uint)(iVar4 - iVar5)),
                               (void *)(lVar7 + (ulong)(uint)(*(int *)((long)param_1 + lVar15) -
                                                             iVar5)),(ulong)uVar3);
                piVar14 = piVar10;
                if (-1 < iVar5) break;
              }
              else if (uVar2 <= uVar3) {
                piVar14 = (int *)((long)param_1 + lVar15 + 0x10);
                break;
              }
              puVar1 = (undefined8 *)((long)param_1 + lVar15);
              lVar15 = lVar15 + -0x10;
              puVar1[3] = puVar1[1];
              puVar1[2] = *puVar1;
              piVar14 = param_1;
              piVar10 = piVar10 + -4;
            } while (lVar15 != -0x10);
          }
          lVar6 = lVar6 + 0x10;
          *piVar14 = iVar4;
          piVar14[1] = uVar3;
          *(undefined8 *)(piVar14 + 2) = uVar12;
          piVar14 = piVar13 + 4;
          piVar10 = piVar13;
        } while (piVar13 + 4 != param_2);
      }
    }
    else {
      uVar11 = param_4 >> 1;
      piVar14 = param_1 + uVar11 * 4;
      if (param_6 < (long)param_4) {
        __stable_sort<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
                  ();
        __stable_sort<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
                  (piVar14,param_2,param_3,param_4 - uVar11,param_5,param_6);
        __inplace_merge<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
                  (param_1,piVar14,param_2,param_3,uVar11,param_4 - uVar11,param_5,param_6);
        return;
      }
      __stable_sort_move<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
                (param_1,piVar14,param_3,uVar11);
      piVar10 = param_5 + uVar11 * 4;
      __stable_sort_move<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
                (piVar14,param_2,param_3,param_4 - uVar11,piVar10);
      piVar14 = piVar10;
      piVar13 = param_5;
      do {
        if (piVar14 == param_5 + param_4 * 4) {
          if (piVar13 == piVar10) {
            return;
          }
          lVar6 = 0;
          do {
            uVar12 = *(undefined8 *)((long)piVar13 + lVar6);
            ((undefined8 *)((long)param_1 + lVar6))[1] = ((undefined8 *)((long)piVar13 + lVar6))[1];
            *(undefined8 *)((long)param_1 + lVar6) = uVar12;
            lVar6 = lVar6 + 0x10;
          } while ((long)param_5 + (uVar11 * 0x10 - (long)piVar13) != lVar6);
          return;
        }
        uVar3 = piVar14[1];
        if (uVar3 == piVar13[1]) {
          iVar4 = *(int *)(*param_3 + 0x20);
          lVar6 = *(long *)(*param_3 + 8);
          iVar4 = memcmp((void *)(lVar6 + (ulong)(uint)(*piVar14 - iVar4)),
                         (void *)(lVar6 + (ulong)(uint)(*piVar13 - iVar4)),(ulong)uVar3);
          if (-1 < iVar4) goto LAB_015f4328;
LAB_015f42c8:
          piVar9 = piVar14 + 4;
          uVar16 = *(undefined8 *)(piVar14 + 2);
          uVar12 = *(undefined8 *)piVar14;
        }
        else {
          if (uVar3 < (uint)piVar13[1]) goto LAB_015f42c8;
LAB_015f4328:
          uVar16 = *(undefined8 *)(piVar13 + 2);
          uVar12 = *(undefined8 *)piVar13;
          piVar9 = piVar14;
          piVar13 = piVar13 + 4;
        }
        piVar8 = param_1 + 4;
        *(undefined8 *)(param_1 + 2) = uVar16;
        *(undefined8 *)param_1 = uVar12;
        piVar14 = piVar9;
        param_1 = piVar8;
      } while (piVar13 != piVar10);
      if (piVar9 != param_5 + param_4 * 4) {
        lVar6 = 0;
        do {
          uVar12 = *(undefined8 *)((long)piVar9 + lVar6);
          puVar1 = (undefined8 *)((long)piVar8 + lVar6);
          puVar1[1] = ((undefined8 *)((long)piVar9 + lVar6))[1];
          *puVar1 = uVar12;
          lVar6 = lVar6 + 0x10;
        } while ((long)param_5 + (param_4 * 0x10 - (long)piVar9) != lVar6);
      }
    }
  }
  return;
}

