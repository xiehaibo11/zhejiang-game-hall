
/* void 
   std::__ndk1::__inplace_merge<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::{lambda(v8::internal::wasm::WasmExport
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
   >::value_type*, long) */

void std::__ndk1::
     __inplace_merge<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
               (int *param_1,int *param_2,int *param_3,long *param_4,long param_5,long param_6,
               undefined8 param_7,long param_8)

{
  int *piVar1;
  uint uVar2;
  size_t sVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *__dest;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
joined_r0x015f45bc:
  if (param_6 == 0) {
    return;
  }
  if ((param_6 <= param_8) || (param_5 <= param_8)) {
    __buffered_inplace_merge<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  if (param_5 == 0) {
    return;
  }
  lVar15 = *param_4;
  uVar2 = param_2[1];
  uVar19 = -param_5;
  do {
    if (uVar2 == param_1[1]) {
      iVar5 = memcmp((void *)(*(long *)(lVar15 + 8) +
                             (ulong)(uint)(*param_2 - *(int *)(lVar15 + 0x20))),
                     (void *)(*(long *)(lVar15 + 8) +
                             (ulong)(uint)(*param_1 - *(int *)(lVar15 + 0x20))),(ulong)uVar2);
      if (iVar5 < 0) break;
    }
    else if (uVar2 < (uint)param_1[1]) break;
    bVar4 = 0xfffffffffffffffe < uVar19;
    uVar19 = uVar19 + 1;
    param_1 = param_1 + 4;
    if (bVar4) {
      return;
    }
  } while( true );
  param_5 = -uVar19;
  if (param_5 < param_6) {
    lVar16 = param_6;
    if (param_6 < 0) {
      lVar16 = param_6 + 1;
    }
    lVar16 = lVar16 >> 1;
    __dest = param_1;
    if ((long)param_2 - (long)param_1 != 0) {
      iVar5 = param_2[lVar16 * 4];
      uVar2 = (param_2 + lVar16 * 4)[1];
      uVar18 = (long)param_2 - (long)param_1 >> 4;
      do {
        uVar17 = uVar18 >> 1;
        piVar1 = __dest + uVar17 * 4;
        if (uVar2 == piVar1[1]) {
          iVar6 = memcmp((void *)(*(long *)(lVar15 + 8) +
                                 (ulong)(uint)(iVar5 - *(int *)(lVar15 + 0x20))),
                         (void *)(*(long *)(lVar15 + 8) +
                                 (ulong)(uint)(*piVar1 - *(int *)(lVar15 + 0x20))),(ulong)uVar2);
          if (-1 < iVar6) {
LAB_015f4698:
            __dest = piVar1 + 4;
            uVar17 = uVar18 + ~uVar17;
          }
        }
        else if ((uint)piVar1[1] <= uVar2) goto LAB_015f4698;
        uVar18 = uVar17;
      } while (uVar17 != 0);
    }
    param_5 = (long)__dest - (long)param_1 >> 4;
    lVar14 = lVar16;
  }
  else {
    if (uVar19 == 0xffffffffffffffff) {
      uVar22 = *(undefined8 *)(param_1 + 2);
      uVar20 = *(undefined8 *)param_1;
      uVar21 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar21;
      *(undefined8 *)(param_2 + 2) = uVar22;
      *(undefined8 *)param_2 = uVar20;
      return;
    }
    if (param_5 < 0) {
      param_5 = param_5 + 1;
    }
    param_5 = param_5 >> 1;
    __dest = param_1 + param_5 * 4;
    lVar14 = 0;
    if ((long)param_3 - (long)param_2 != 0) {
      iVar5 = *__dest;
      uVar2 = __dest[1];
      uVar18 = (long)param_3 - (long)param_2 >> 4;
      do {
        uVar17 = uVar18 >> 1;
        if (param_2[lVar14 * 4 + uVar17 * 4 + 1] == uVar2) {
          iVar6 = memcmp((void *)(*(long *)(lVar15 + 8) +
                                 (ulong)(uint)(param_2[(uVar17 + lVar14) * 4] -
                                              *(int *)(lVar15 + 0x20))),
                         (void *)(*(long *)(lVar15 + 8) +
                                 (ulong)(uint)(iVar5 - *(int *)(lVar15 + 0x20))),(ulong)uVar2);
          if (iVar6 < 0) {
LAB_015f4734:
            lVar14 = uVar17 + lVar14 + 1;
            uVar17 = uVar18 + ~uVar17;
          }
        }
        else if ((uint)param_2[lVar14 * 4 + uVar17 * 4 + 1] < uVar2) goto LAB_015f4734;
        uVar18 = uVar17;
      } while (uVar18 != 0);
    }
    lVar16 = (lVar14 << 4) >> 4;
  }
  piVar1 = param_2 + lVar14 * 4;
  piVar12 = piVar1;
  if ((__dest != param_2) && (piVar12 = __dest, lVar14 != 0)) {
    if (__dest + 4 == param_2) {
      uVar21 = *(undefined8 *)(__dest + 2);
      uVar20 = *(undefined8 *)__dest;
      sVar3 = (long)piVar1 - (long)param_2;
      if (sVar3 != 0) {
        memmove(__dest,param_2,sVar3);
      }
      piVar12 = __dest + ((long)sVar3 >> 4) * 4;
      *(undefined8 *)(piVar12 + 2) = uVar21;
      *(undefined8 *)piVar12 = uVar20;
    }
    else if (lVar14 == 1) {
      uVar21 = *(undefined8 *)(piVar1 + -2);
      uVar20 = *(undefined8 *)(piVar1 + -4);
      sVar3 = (long)piVar1 + (-0x10 - (long)__dest);
      piVar12 = piVar1;
      if (sVar3 != 0) {
        memmove((int *)((long)piVar1 - sVar3),__dest,sVar3);
        piVar12 = (int *)((long)piVar1 - sVar3);
      }
      *(undefined8 *)(__dest + 2) = uVar21;
      *(undefined8 *)__dest = uVar20;
    }
    else {
      lVar9 = (long)param_2 - (long)__dest >> 4;
      lVar7 = (long)piVar1 - (long)param_2 >> 4;
      piVar8 = param_2;
      piVar10 = __dest;
      lVar15 = lVar9;
      lVar14 = lVar7;
      if (lVar9 == lVar7) {
        do {
          uVar22 = *(undefined8 *)(piVar10 + 2);
          uVar20 = *(undefined8 *)piVar10;
          uVar21 = *(undefined8 *)piVar8;
          piVar11 = piVar10 + 4;
          *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(piVar8 + 2);
          *(undefined8 *)piVar10 = uVar21;
          *(undefined8 *)(piVar8 + 2) = uVar22;
          *(undefined8 *)piVar8 = uVar20;
          piVar8 = piVar8 + 4;
          piVar10 = piVar11;
          piVar12 = param_2;
        } while (param_2 != piVar11);
      }
      else {
        do {
          lVar13 = lVar14;
          lVar14 = 0;
          if (lVar13 != 0) {
            lVar14 = lVar15 / lVar13;
          }
          lVar14 = lVar15 - lVar14 * lVar13;
          lVar15 = lVar13;
        } while (lVar14 != 0);
        if (lVar13 != 0) {
          piVar12 = __dest + lVar13 * 4;
          do {
            uVar21 = *(undefined8 *)(piVar12 + -2);
            uVar20 = *(undefined8 *)(piVar12 + -4);
            piVar12 = piVar12 + -4;
            piVar10 = piVar12;
            piVar8 = piVar12 + lVar9 * 4;
            do {
              piVar11 = piVar8;
              uVar22 = *(undefined8 *)piVar11;
              lVar15 = (long)piVar1 - (long)piVar11 >> 4;
              piVar8 = piVar11 + lVar9 * 4;
              if (lVar15 <= lVar9) {
                piVar8 = __dest + (lVar9 - lVar15) * 4;
              }
              *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(piVar11 + 2);
              *(undefined8 *)piVar10 = uVar22;
              piVar10 = piVar11;
            } while (piVar8 != piVar12);
            *(undefined8 *)(piVar11 + 2) = uVar21;
            *(undefined8 *)piVar11 = uVar20;
          } while (piVar12 != __dest);
        }
        piVar12 = __dest + lVar7 * 4;
      }
    }
  }
  if (param_5 + lVar16 < (long)((param_6 - (param_5 + lVar16)) - uVar19)) {
    __inplace_merge<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
              (param_1,__dest,piVar12,param_4,param_5,lVar16,param_7,param_8);
    param_6 = param_6 - lVar16;
    param_5 = -(param_5 + uVar19);
    param_2 = piVar1;
    param_1 = piVar12;
  }
  else {
    __inplace_merge<v8::internal::wasm::ModuleDecoderImpl::DecodeExportSection()::_lambda(v8::internal::wasm::WasmExport_const&,v8::internal::wasm::WasmExport_const&)_1_&,std::__ndk1::__wrap_iter<v8::internal::wasm::WasmExport*>>
              (piVar12,piVar1,param_3,param_4,-(param_5 + uVar19),param_6 - lVar16,param_7,param_8);
    param_6 = lVar16;
    param_3 = piVar12;
    param_2 = __dest;
  }
  goto joined_r0x015f45bc;
}

